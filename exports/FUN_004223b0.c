
undefined4 __cdecl FUN_004223b0(char *param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  if (*param_1 == '\0') {
    pcVar1 = param_1 + param_2;
    do {
      param_1 = param_1 + 1;
      if (param_1 == pcVar1) {
        return 1;
      }
    } while (*param_1 == '\0');
  }
  return 0;
}

