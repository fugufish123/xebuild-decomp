
undefined4 __cdecl FUN_00410070(char *param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  if (*param_1 == -1) {
    pcVar1 = param_1 + param_2;
    do {
      param_1 = param_1 + 1;
      if (param_1 == pcVar1) {
        return 1;
      }
    } while (*param_1 == -1);
  }
  return 0;
}

