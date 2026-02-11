
undefined4 __cdecl
FUN_004380f0(undefined4 param_1,undefined1 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  uint *puStack_24;
  
  puVar2 = (undefined4 *)FUN_004421a0(param_5 * 4);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_5 * 8) = 0xf1f1f1f1;
    pvVar3 = FUN_00436fe0(param_5,param_3);
    pvVar4 = FUN_00436fe0(param_5,param_4);
    puStack_24 = (uint *)FUN_00436fe0(param_5,param_5);
    bVar7 = pvVar3 != (void *)0x0;
    uVar6 = 0;
    goto LAB_00438186;
  }
  FUN_004410e0(puVar2,param_5 * 4);
  *puVar2 = 0;
  puVar2[param_5 * 2] = 0xf1f1f1f1;
  pvVar3 = FUN_00436fe0(param_5,param_3);
  pvVar4 = FUN_00436fe0(param_5,param_4);
  puStack_24 = (uint *)FUN_00436fe0(param_5,param_5);
  bVar7 = pvVar3 != (void *)0x0;
  if (((pvVar3 == (void *)0x0) || (pvVar4 == (void *)0x0)) || (puStack_24 == (uint *)0x0)) {
LAB_0043817c:
    uVar6 = 0;
  }
  else {
    iVar1 = param_5 * 2;
    iVar5 = FUN_00440fc0((int)puVar2,pvVar3,(int)pvVar4,puStack_24,iVar1);
    if (iVar5 != 0) goto LAB_0043817c;
    if (((param_5 != 0) && (param_2 != (undefined1 *)0x0)) && (0 < iVar1)) {
      iVar5 = 0;
      do {
        uVar6 = puVar2[iVar5 + 1];
        param_2[3] = (char)uVar6;
        *param_2 = (char)((uint)uVar6 >> 0x18);
        param_2[1] = (char)((uint)uVar6 >> 0x10);
        param_2[2] = (char)((uint)uVar6 >> 8);
        uVar6 = puVar2[iVar5];
        iVar5 = iVar5 + 2;
        param_2[7] = (char)uVar6;
        param_2[4] = (char)((uint)uVar6 >> 0x18);
        param_2[5] = (char)((uint)uVar6 >> 0x10);
        param_2[6] = (char)((uint)uVar6 >> 8);
        param_2 = param_2 + 8;
      } while (iVar5 < iVar1);
    }
    uVar6 = 1;
  }
  FUN_004421f0(puVar2);
LAB_00438186:
  if (bVar7) {
    FUN_004421f0(pvVar3);
  }
  if (pvVar4 != (void *)0x0) {
    FUN_004421f0(pvVar4);
  }
  if (puStack_24 != (uint *)0x0) {
    FUN_004421f0(puStack_24);
  }
  return uVar6;
}

