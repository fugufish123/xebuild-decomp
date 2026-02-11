
void FUN_00448760(byte *param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  size_t sVar2;
  short *_Memory;
  wchar_t *_Memory_00;
  int iVar3;
  
  sVar2 = strlen((char *)param_1);
  _Memory = (short *)malloc(sVar2 * 2 + 2);
  sVar2 = strlen((char *)param_2);
  _Memory_00 = (wchar_t *)malloc(sVar2 * 2 + 2);
  iVar3 = 0;
  bVar1 = *param_1;
  if (bVar1 != 0) {
    do {
      _Memory[iVar3] = (ushort)bVar1;
      iVar3 = iVar3 + 1;
      bVar1 = param_1[iVar3];
    } while (bVar1 != 0);
    iVar3 = iVar3 * 2;
  }
  bVar1 = *param_2;
  *(undefined2 *)((int)_Memory + iVar3) = 0;
  iVar3 = 0;
  if (bVar1 != 0) {
    do {
      _Memory_00[iVar3] = (ushort)bVar1;
      iVar3 = iVar3 + 1;
      bVar1 = param_2[iVar3];
    } while (bVar1 != 0);
    iVar3 = iVar3 * 2;
  }
  *(undefined2 *)((int)_Memory_00 + iVar3) = 0;
  FUN_00448600(_Memory,_Memory_00,param_3);
  free(_Memory);
  free(_Memory_00);
  return;
}

