
void __cdecl FUN_00424b20(char *param_1)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = strlen(param_1);
  if (0 < (int)(sVar1 + 1)) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      if (param_1[iVar3] != ':') {
        param_1[iVar2] = param_1[iVar3];
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (sVar1 + 1 != iVar3);
  }
  return;
}

