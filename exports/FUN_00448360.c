
int __cdecl FUN_00448360(int param_1)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  DWORD DVar4;
  
  piVar1 = _errno();
  *piVar1 = 0;
  if (param_1 == 0) {
    piVar1 = _errno();
    *piVar1 = 0xe;
    return 0;
  }
  if (*(int *)(param_1 + 0x228) < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x228) == 0) {
    iVar2 = findfirst(param_1 + 0x22c,param_1);
    *(int *)(param_1 + 0x224) = iVar2;
    if (iVar2 == -1) goto LAB_00448438;
    *(undefined4 *)(param_1 + 0x228) = 1;
  }
  else {
    iVar2 = findnext(*(undefined4 *)(param_1 + 0x224));
    if (iVar2 != 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x12) {
        piVar1 = _errno();
        *piVar1 = 0;
      }
      _findclose(*(intptr_t *)(param_1 + 0x224));
      *(undefined4 *)(param_1 + 0x224) = 0xffffffff;
LAB_00448438:
      *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x228) + 1;
    *(int *)(param_1 + 0x228) = iVar2;
    if (iVar2 < 1) {
      return 0;
    }
  }
  sVar3 = strlen((char *)(param_1 + 0x14));
  *(short *)(param_1 + 0x11e) = (short)sVar3;
  strcpy((char *)(param_1 + 0x120),(char *)(param_1 + 0x14));
  return param_1 + 0x118;
}

