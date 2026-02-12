import json
import os
import re
from pathlib import Path


class TodoGenerator:
    def __init__(self, exports_dir="exports", diffs_dir="diffs"):
        self.exports_dir = Path(exports_dir)
        self.diffs_dir = Path(diffs_dir)

    def get_all_export_functions(self):
        functions = {}
        if not self.exports_dir.exists():
            return functions
        for file in self.exports_dir.iterdir():
            if file.suffix == ".json" and not file.name.endswith(".cfg.json"):
                name = file.stem
                try:
                    with file.open("r", encoding="utf-8") as f:
                        data = json.load(f)
                        addr = data.get("address", "00000000")
                        addr = addr.lower().replace("0x", "")
                        functions[name] = addr
                except Exception:
                    functions[name] = "00000000"
        return functions

    def extract_diff_info(self, path):
        with path.open("r", encoding="utf-8") as f:
            content = f.read()

        header = re.search(
            r"#\s*(?:Diff Report)[: ]+\s*(FUN_[A-Za-z0-9_]+).*?\(@?([0-9A-Fa-fx]+)\)",
            content
        )
        similarity = re.search(r"(\d+(?:\.\d+)?)%", content)

        if header:
            name = header.group(1)
            address = header.group(2)
        else:
            name = path.stem
            address = path.stem

        name = name.strip()
        address = address.lower().replace("0x", "")

        sim = float(similarity.group(1)) / 100 if similarity else 0.0

        if sim > 0.95:
            grade = "A"
        elif sim > 0.75:
            grade = "B"
        elif sim > 0.45:
            grade = "C"
        else:
            grade = "D"

        return {
            "address": address,
            "name": name,
            "grade": grade,
            "sim": sim,
            "exists": True,
            "file": path.name
        }

    def load_existing_diffs(self):
        items = []
        processed = set()
        if not self.diffs_dir.exists():
            return items, processed
        for file in self.diffs_dir.iterdir():
            if file.suffix == ".md":
                info = self.extract_diff_info(file)
                items.append(info)
                processed.add(info["name"])
        return items, processed

    def append_missing_functions(self, items, exports, processed):
        for name, addr in exports.items():
            if name not in processed:
                items.append({
                    "address": addr,
                    "name": name,
                    "grade": "D",
                    "sim": 0.0,
                    "exists": False,
                    "file": None
                })

    def sort_items(self, items):
        grade_order = {"A": 3, "B": 2, "C": 1, "D": 0}
        items.sort(key=lambda x: (grade_order[x["grade"]], x["sim"]), reverse=True)

    def write_todo(self, items):
        total = len(items)
        completed = sum(1 for i in items if i["grade"] == "A")
        progress = (completed / total * 100) if total else 0

        with open("TODO.md", "w", encoding="utf-8") as f:
            f.write("# Decomp TODO List\n\n")
            f.write(f"**Completed (Grade A):** `{completed}/{total} ({progress:.1f}%)`\n\n")
            f.write("| Status | Grade | Similarity | Address | Function | Report |\n")
            f.write("| :---: | :---: | :---: | :---: | :--- | :--- |\n")

            for item in items:
                if not item["exists"]:
                    status = "missing"
                    link = "*No source file*"
                else:
                    status_map = {"A": "complete", "B": "medium", "C": "poor", "D": "failing"}
                    status = status_map[item["grade"]]
                    link = f"[View diff](diffs/{item['file']})"

                f.write(
                    f"| {status} | **{item['grade']}** | "
                    f"`{item['sim']:>6.2%}` | `0x{item['address']}` | "
                    f"{item['name']} | {link} |\n"
                )

    def update_readme(self, items):
        total = len(items)
        completed = sum(1 for i in items if i["grade"] == "A")
        progress = (completed / total * 100) if total else 0
        progress_int = int(progress)

        if progress_int < 25:
            color = "red"
        elif progress_int < 50:
            color = "yellow"
        elif progress_int < 75:
            color = "blue"
        else:
            color = "brightgreen"

        badge_url = f"https://img.shields.io/badge/Progress-{progress_int}%25-{color}"
        badge_line = f"![Progress]({badge_url})"

        readme_path = Path("README.md")
        if not readme_path.exists():
            return

        with readme_path.open("r", encoding="utf-8") as f:
            content = f.read()

        badge_regex = r"!\[Progress\]\([^)]+\)"

        if re.search(badge_regex, content):
            content = re.sub(badge_regex, badge_line, content, count=1)
        else:
            content = badge_line + "\n" + content

        progress_regex = r"^Progress:.*"
        new_progress_line = f"Progress: **{completed}/{total} ({progress:.1f}%)**"

        if re.search(progress_regex, content, flags=re.MULTILINE):
            content = re.sub(progress_regex, new_progress_line, content, flags=re.MULTILINE)
        else:
            content += "\n" + new_progress_line + "\n"

        with readme_path.open("w", encoding="utf-8") as f:
            f.write(content)

    def generate(self):
        exports = self.get_all_export_functions()
        items, processed = self.load_existing_diffs()
        for name in processed:
            if name in exports:
                del exports[name]
        self.append_missing_functions(items, exports, processed)
        self.sort_items(items)
        self.write_todo(items)
        self.update_readme(items)
        missing = len(exports)
        print(f"TODO.md updated. Found {len(items)} functions ({missing} without reports).")


if __name__ == "__main__":
    TodoGenerator().generate()
