
char * __cdecl FUN_00421000(char *param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  if (-1 < param_2 - param_4) {
    iVar2 = 0;
    pcVar3 = param_1;
    do {
      if (*pcVar3 == *param_3) {
        iVar1 = 0;
        if (0 < param_4) {
          while (iVar1 = iVar1 + 1, iVar1 < param_4) {
            if (param_1[iVar2 + iVar1] != param_3[iVar1]) {
              iVar1 = param_4 + 1;
            }
          }
        }
        if (param_4 == iVar1) {
          return pcVar3;
        }
      }
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (iVar2 <= param_2 - param_4);
  }
  return (char *)0x0;
}

