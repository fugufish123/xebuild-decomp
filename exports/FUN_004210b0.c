
int __cdecl FUN_004210b0(int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int local_14;
  
  pcVar2 = (char *)0x0;
  local_14 = 0;
  if (param_2 < 1) {
    return 0;
  }
LAB_004210da:
  if (param_2 - (int)pcVar2 < param_4) {
    return local_14;
  }
  iVar3 = 0;
  pcVar4 = pcVar2 + param_1;
  do {
    if (*pcVar4 == *param_3) {
      iVar1 = 0;
      if (0 < param_4) {
        while (iVar1 = iVar1 + 1, iVar1 < param_4) {
          if ((pcVar2 + param_1)[iVar3 + iVar1] != param_3[iVar1]) {
            iVar1 = param_4 + 1;
          }
        }
      }
      if (param_4 == iVar1) break;
    }
    iVar3 = iVar3 + 1;
    pcVar4 = pcVar4 + 1;
    if ((param_2 - (int)pcVar2) - param_4 < iVar3) {
      return local_14;
    }
  } while( true );
  local_14 = local_14 + 1;
  pcVar2 = pcVar4 + (param_4 - param_1);
  if (param_2 <= (int)pcVar2) {
    return local_14;
  }
  goto LAB_004210da;
}

