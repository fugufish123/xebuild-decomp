# xebuild-decomp

![CI](https://github.com/fugufish123/xebuild-decomp/actions/workflows/decomp_status.yml/badge.svg)
![Progress](https://img.shields.io/badge/Progress-0%25-red)

Progress: **2/520 (0.4%)**

Reverse‑engineering and clean C reimplementation of **xebuild**.  
No original source code is included.

**Progress:** 0/518 functions (0.0%)

---

## Project Goals

- Recreate Xebuild's behavior in clear and maintainable C
- Fix many bugs in original Xebuild
- Provide fully compatible and readable codebase
- Provide Linux port for Xebuild

---

## Repository Layout

- **src/** – C implementations of individual functions  
- **exports/** – pseudocode, call‑flow graphs, and metadata extracted from the binary  
- **diffs/** – automatically generated comparison reports  
- **tools/** – scripts for automation and progress tracking  

---

## How to contribute

1. Clone this repository
2. Find a unimplemented function in `TODO.md`
3. Create a file in `src/` named the same as the function (e.g., `FUN_401000.c`)
4. Reimplement the logic based on ghidra artifacts
5. Run the diff generator to compare your implementation with the binary
6. Create a pull request

---

## Requirements

- C compiler
- Python 3.10+ for tooling
- Ghidra or IDA (optional)

---

## License

This project contains **no original xebuild source code**.  
All implementations are clean‑room work derived solely from binary analysis.
