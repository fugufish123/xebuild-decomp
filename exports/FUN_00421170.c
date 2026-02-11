
undefined4 __cdecl FUN_00421170(int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (-1 < param_2 - param_4) {
    iVar2 = 0;
    do {
      if (*(char *)(param_1 + iVar2) == *param_3) {
        iVar1 = 0;
        if (0 < param_4) {
          while (iVar1 = iVar1 + 1, iVar1 < param_4) {
            if (*(char *)(param_1 + iVar1 + iVar2) != param_3[iVar1]) {
              iVar1 = param_4 + 1;
            }
          }
        }
        if (param_4 == iVar1) {
          return 1;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= param_2 - param_4);
  }
  return 0;
}

