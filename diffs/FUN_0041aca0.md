# Diff Report: FUN_0041aca0 (@0041aca0)

**Grade:** A
**Final Score:** 100.00%

### Files
- **Source:** [FUN_0041aca0.c](../src/FUN_0041aca0.c)
- **Export:** [FUN_0041aca0.c](../exports/FUN_0041aca0.c)

### IR Comparison
| Metric | Decompiler | Source | Delta |
| :--- | :--- | :--- | :--- |
| Blocks | 1 | 1 | 0 |
| Instructions | 12 | 12 | 0 |
| Load Ops | 4 | 4 | 0 |

## Code Snippets
### Source
```c

void __cdecl FUN_0041aca0(undefined4 *values) // set_global_quad2()

{
  DAT_0044a694 = *values;
  DAT_0044a698 = values[1];
  DAT_0044a69c = values[2];
  DAT_0044a6a0 = values[3];
  return;
}


```
### Decompiler
```c

void __cdecl FUN_0041aca0(undefined4 *param_1)

{
  DAT_0044a694 = *param_1;
  DAT_0044a698 = param_1[1];
  DAT_0044a69c = param_1[2];
  DAT_0044a6a0 = param_1[3];
  return;
}


```
