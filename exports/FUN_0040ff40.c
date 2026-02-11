
undefined4 __cdecl FUN_0040ff40(char *param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = param_1 + (-(uint)(param_2 == 0) & 0xfffe3200) + 0x21000;
  do {
    if (*param_1 != -1) {
      return 0;
    }
    param_1 = param_1 + 1;
  } while (param_1 != pcVar1);
  return 1;
}

