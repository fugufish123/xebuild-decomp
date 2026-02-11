# xebuild-decomp
![CI](https://github.com/fugufish123/xebuild-decomp/actions/workflows/decomp_status.yml/badge.svg)
![Progress](https://img.shields.io/badge/Progress-0%25-red)
Reverse engineering and C reimplementation of xebuild. No original code included.

Progress: **0/517 (0.0%)**

---

## Project goals
- Fully recreate xebuild in readable, maintainable C.
- Document internal structures, algorithms and quirks.
- Provide a modular codebase that is easier to extend and analyze.
- Preserve compatibility with original xebuild behavior.

---

## Repository structure

- **src/** – C reimplementations of functions  
- **exports/** – pseudo-code, assembly call-flow graphs and JSON metadata extracted from the binary  
- **diffs/** – auto-generated diff reports for each function  
- **tools/** – scripts for progress tracking and automation  

---

## How to contribute
1. Clone the repository.
2. Check `TODO.md` to see which functions are missing or poorly implemented.
3. Pick a function you want to work on.
4. Create a file in `src/` named exactly like the function (e.g. `FUN_401000.c`).
5. Reimplement the logic in clean C based on reverse engineering.
6. Run the diff generator to compare your implementation with the binary.
7. Submit a pull request.

---

## Requirements
- A working C compiler (gcc/clang)
- Python 3.10+ for tooling
- Ghidra/IDA (optional but recommended)

---

## License
This project contains **no original xebuild source code**.
All reimplementations are clean-room and based solely on binary analysis.
