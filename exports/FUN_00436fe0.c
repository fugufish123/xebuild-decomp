
void * __cdecl FUN_00436fe0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  iVar2 = param_1 * 2;
  pvVar3 = (void *)FUN_004421a0(iVar2);
  if (pvVar3 != (void *)0x0) {
    FUN_004410e0(pvVar3,iVar2);
    if (0 < iVar2) {
      iVar4 = 0;
      do {
        uVar1 = *(uint *)(param_2 + iVar4 * 4);
        *(uint *)((int)pvVar3 + iVar4 * 4 + 4) =
             uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        uVar1 = *(uint *)(param_2 + 4 + iVar4 * 4);
        *(uint *)((int)pvVar3 + iVar4 * 4) =
             uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        iVar4 = iVar4 + 2;
      } while (iVar4 < iVar2);
    }
  }
  return pvVar3;
}

