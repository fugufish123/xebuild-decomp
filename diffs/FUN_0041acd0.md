# Diff Report: FUN_0041acd0 (@0041acd0)

**Grade:** A
**Final Score:** 100.00%

### Files
- **Source:** [FUN_0041acd0.c](../src/FUN_0041acd0.c)
- **Export:** [FUN_0041acd0.c](../exports/FUN_0041acd0.c)

### IR Comparison
| Metric | Decompiler | Source | Delta |
| :--- | :--- | :--- | :--- |
| Blocks | 1 | 1 | 0 |
| Instructions | 12 | 12 | 0 |
| Load Ops | 4 | 4 | 0 |

## Code Snippets
### Source
```c

void __cdecl FUN_0041acd0(uint32_t *values) // set_global_quad3()

{
  DAT_0044a684 = *values;
  DAT_0044a688 = values[1];
  DAT_0044a68c = values[2];
  DAT_0044a690 = values[3];
  return;
}


```
### Decompiler
```c

void __cdecl FUN_0041acd0(undefined4 *param_1)

{
  DAT_0044a684 = *param_1;
  DAT_0044a688 = param_1[1];
  DAT_0044a68c = param_1[2];
  DAT_0044a690 = param_1[3];
  return;
}


```
