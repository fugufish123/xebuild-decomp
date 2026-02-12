import os
import re
import json
import subprocess
from collections import Counter
from llvmlite import binding

class ProjectDiffAnalyzer:
    def __init__(self):
        self.type_map = {
            r'\b__cdecl\b': '',
            r'\b__stdcall\b': '',
            r'\b__fastcall\b': '',
            r'\bundefined[1248]\b': 'int',
            r'\buint\b': 'unsigned int',
            r'\blonglong\b': 'long long',
            r'\bpointer\b': 'void*',
        }

        if not os.path.exists("diffs"):
            os.makedirs("diffs")

    def preprocess_source(self, code, target_func):
        """Cleans decompiler artifacts and injects missing headers so Clang can compile."""

        # Usuń komentarze
        code = re.sub(r'/\*.*?\*/', '', code, flags=re.DOTALL)
        code = re.sub(r'//.*', '', code)

        # Zamiana typów i konwencji wywołań
        for pattern, replacement in self.type_map.items():
            code = re.sub(pattern, replacement, code)

        # Usuń artefakty Ghidry typu stack0x0000000c
        code = re.sub(r'&?stack0x[0-9a-fA-F]+', 'NULL', code)

        # Zamień Windowsowe _vsnprintf na przenośne vsnprintf
        code = re.sub(r'\b_vsnprintf\b', 'vsnprintf', code)

        # Znajdź FUN_ i DAT_
        funs = set(re.findall(r'\b(FUN_[0-9a-fA-F]+)\b', code))
        dats = set(re.findall(r'\b(DAT_[0-9a-fA-F]+)\b', code))

        if target_func in funs:
            funs.remove(target_func)

        # Nagłówki wymagane do kompilacji
        headers = [
            "#include <stdint.h>",
            "#include <string.h>",
            "#include <stddef.h>",
            "#include <stdbool.h>",
            "#include <stdio.h>",      # FILE, printf, fopen, fprintf, fclose
            "#include <stdarg.h>",
            r'const char s__________________________________0044a4e0[] = "---------------------------------------------\n";'
            'FILE _iob_exref[3];'
            "",
            "// Fallback declaration for vsnprintf (in case Clang complains)",
            "int vsnprintf(char *str, size_t size, const char *format, va_list ap);",
            "",
            "#ifndef _BYTE_DEFINED",
            "#define _BYTE_DEFINED",
            "typedef unsigned char byte;",
            "#endif",
            "typedef unsigned int uint;",
            "",
            "#pragma clang diagnostic ignored \"-Wint-to-pointer-cast\"",
            "#pragma clang diagnostic ignored \"-Wdeprecated-non-prototype\"",
            "#pragma clang diagnostic ignored \"-Wimplicit-function-declaration\"",
            "#pragma clang diagnostic ignored \"-Wformat-security\""
        ]

        # Deklaracje extern dla DAT_
        for d in dats:
            if not re.search(r'(?:extern\s+)?[\w\d_]+\s+\*?\b' + d + r'\b', code):
                headers.append(f"extern intptr_t {d};")

        # Deklaracje extern dla FUN_
        for f in funs:
            if not re.search(r'[\w\d_]+\s+\*?\b' + f + r'\s*\(', code):
                headers.append(f"extern void {f}();")

        return "\n".join(headers) + "\n\n" + code


    def compile_to_ir(self, code):
        cmd = ["clang", "-S", "-emit-llvm", "-O1", "-x", "c", "-", "-o", "-"]
        proc = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE,
                                stderr=subprocess.PIPE, text=True)
        stdout, stderr = proc.communicate(code)
        return stdout, stderr, proc.returncode

    def analyze_ir(self, ir_text, func_name):
        if not ir_text:
            return None

        try:
            module = binding.parse_assembly(ir_text)
            for fn in module.functions:
                if fn.name == func_name and not fn.is_declaration:
                    blocks = list(fn.blocks)
                    instrs = [i for b in blocks for i in b.instructions]
                    opcodes = [i.opcode for i in instrs]
                    bigrams = [f"{opcodes[i]}_{opcodes[i+1]}" for i in range(len(opcodes)-1)]

                    return {
                        "opcodes": opcodes,
                        "bigrams": Counter(bigrams),
                        "instr_count": len(instrs),
                        "block_count": len(blocks),
                        "loads": opcodes.count('load'),
                        "stores": opcodes.count('store')
                    }
        except Exception:
            pass

        return None

    def validate_code_quality(self, s_raw, g_raw, fp_s, fp_g):
        penalties = []
        multiplier = 1.0

        if "".join(s_raw.split()) == "".join(g_raw.split()):
            return 0.0, ["Direct decompiler clone"]

        if re.search(r'\bgoto\b', s_raw):
            penalties.append("Unstructured control flow (goto)")
            multiplier *= 0.4

        ghidra_naming = [r'iVar\d+', r'uVar\d+', r'sVar\d+', r'local_[0-9a-f]+', r'param_\d+']
        found_artifacts = [p for p in ghidra_naming if re.search(p, s_raw)]

        if found_artifacts:
            penalties.append(f"Decompiler artifacts detected ({len(found_artifacts)})")
            multiplier *= 0.6

        return multiplier, penalties

    def generate_report(self, addr, f_name, g_raw, s_raw, fp_g, fp_s,
                        penalties, score, src_path, exp_path, g_err, s_err):

        path = f"diffs/FUN_{addr}.md"
        grade = "F" if score == 0 else ("A" if score > 0.9 else "B" if score > 0.7 else "C" if score > 0.4 else "D")

        with open(path, "w", encoding="utf-8") as f:
            f.write(f"# Diff Report: {f_name} (@{addr})\n\n")
            f.write(f"**Grade:** {grade}\n")
            f.write(f"**Final Score:** {score:.2%}\n\n")

            f.write("### Files\n")
            f.write(f"- **Source:** [{os.path.basename(src_path)}](../{src_path})\n")
            f.write(f"- **Export:** [{os.path.basename(exp_path)}](../{exp_path})\n\n")

            if g_err or s_err:
                f.write("### Compiler Errors\n")
                if g_err:
                    f.write("**Export compilation error:**\n```\n" + g_err + "\n```\n")
                if s_err:
                    f.write("**Source compilation error:**\n```\n" + s_err + "\n```\n")
                f.write("\n")

            if penalties:
                f.write("### Quality Issues\n")
                for p in penalties:
                    f.write(f"- {p}\n")
                f.write("\n")

            if fp_g and fp_s:
                f.write("### IR Comparison\n")
                f.write("| Metric | Decompiler | Source | Delta |\n| :--- | :--- | :--- | :--- |\n")
                f.write(f"| Blocks | {fp_g['block_count']} | {fp_s['block_count']} | {fp_s['block_count'] - fp_g['block_count']} |\n")
                f.write(f"| Instructions | {fp_g['instr_count']} | {fp_s['instr_count']} | {fp_s['instr_count'] - fp_g['instr_count']} |\n")
                f.write(f"| Load Ops | {fp_g['loads']} | {fp_s['loads']} | {fp_s['loads'] - fp_g['loads']} |\n\n")

                bg_g = fp_g["bigrams"]
                bg_s = fp_s["bigrams"]
                missing_bg = bg_g - bg_s
                extra_bg = bg_s - bg_g

                if missing_bg or extra_bg:
                    f.write("### Sequence Differences (Bigrams)\n")
                    if missing_bg:
                        f.write(f"- **Missing pairs (original):** `{', '.join(list(missing_bg.elements())[:15])}`\n")
                    if extra_bg:
                        f.write(f"- **Redundant pairs (src):** `{', '.join(list(extra_bg.elements())[:15])}`\n")
                    f.write("\n")

            f.write("## Code Snippets\n### Source\n```c\n" + s_raw + "\n```\n")
            f.write("### Decompiler\n```c\n" + g_raw + "\n```\n")

    def run_analysis(self, exports_dir="exports", src_dir="src"):
        print(f"{'Address':<10} | {'Function':<20} | {'Grade':<5} | {'Score':<10} | {'Status'}")
        print("-" * 95)

        for file in sorted(os.listdir(exports_dir)):
            if file.endswith(".json") and not file.endswith(".cfg.json"):
                base = file.replace(".json", "")
                json_path = os.path.join(exports_dir, file)
                exp_c = os.path.join(exports_dir, f"{base}.c")
                src_c = os.path.join(src_dir, f"{base}.c")

                if not os.path.exists(src_c) or not os.path.exists(exp_c):
                    continue

                with open(json_path, 'r') as f:
                    meta = json.load(f)

                addr, name = meta.get('address', 'unk'), meta.get('name', base)

                with open(exp_c, 'r') as f:
                    g_src = f.read()
                with open(src_c, 'r') as f:
                    s_src = f.read()

                ir_g, err_g, ret_g = self.compile_to_ir(self.preprocess_source(g_src, name))
                ir_s, err_s, ret_s = self.compile_to_ir(self.preprocess_source(s_src, name))

                # NEW: Proper error handling
                if ret_g != 0 or ret_s != 0:
                    print(f"{addr:<10} | {name:<20} | ERR   |    ---     | COMPILER ERROR")
                    self.generate_report(addr, name, g_src, s_src, None, None,
                                         ["Compilation failed"], 0.0,
                                         src_c, exp_c, err_g, err_s)
                    continue

                fp_g = self.analyze_ir(ir_g, name)
                fp_s = self.analyze_ir(ir_s, name)

                final_sim = 0.0
                if fp_g and fp_s:
                    c_g, c_s = Counter(fp_g["opcodes"]), Counter(fp_s["opcodes"])
                    m = sum(min(c_g[op], c_s[op]) for op in set(c_g) | set(c_s))
                    base_sim = m / max(sum(c_g.values()), sum(c_s.values()))

                    bg_g, bg_s = fp_g["bigrams"], fp_s["bigrams"]
                    bm = sum(min(bg_g[b], bg_s[b]) for b in set(bg_g) | set(bg_s))
                    struct_sim = bm / max(sum(bg_g.values()), sum(bg_s.values())) if bg_g else 1.0

                    final_sim = (base_sim * 0.4) + (struct_sim * 0.6)

                multiplier, penalties = self.validate_code_quality(s_src, g_src, fp_s, fp_g)
                score = final_sim * multiplier

                grade = "F" if multiplier == 0 else ("A" if score > 0.9 else "B" if score > 0.7 else "C" if score > 0.4 else "D")
                status = "CLEAN" if not penalties else "WARN"

                print(f"{addr:<10} | {name:<20} | {grade:^5} | {score:>10.2%} | {status}")

                self.generate_report(addr, name, g_src, s_src, fp_g, fp_s,
                                     penalties, score, src_c, exp_c, err_g, err_s)

if __name__ == "__main__":
    ProjectDiffAnalyzer().run_analysis()
