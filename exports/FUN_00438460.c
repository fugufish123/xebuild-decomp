
undefined4 __cdecl
FUN_00438460(undefined4 param_1,int param_2,int param_3,undefined1 *param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  puVar2 = (undefined4 *)FUN_004421a0(param_5 * 4);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_5 * 8) = 0xf1f1f1f1;
    puVar3 = (uint *)FUN_00436fe0(param_5,param_2);
    puVar4 = (uint *)FUN_00436fe0(param_5,param_3);
    bVar7 = puVar3 != (uint *)0x0;
    uVar6 = 0;
    goto LAB_00438505;
  }
  FUN_004410e0(puVar2,param_5 * 4);
  *puVar2 = 0;
  puVar2[param_5 * 2] = 0xf1f1f1f1;
  puVar3 = (uint *)FUN_00436fe0(param_5,param_2);
  puVar4 = (uint *)FUN_00436fe0(param_5,param_3);
  bVar7 = puVar3 != (uint *)0x0;
  if ((puVar3 == (uint *)0x0) || (puVar4 == (uint *)0x0)) {
LAB_004384fb:
    uVar6 = 0;
  }
  else {
    iVar1 = param_5 * 2;
    iVar5 = FUN_00441710((int)puVar2,puVar3,param_5 * 2,puVar4,iVar1);
    if (iVar5 != 0) goto LAB_004384fb;
    if (((param_5 != 0) && (param_4 != (undefined1 *)0x0)) && (0 < iVar1)) {
      iVar5 = 0;
      do {
        uVar6 = puVar2[iVar5 + 1];
        param_4[3] = (char)uVar6;
        *param_4 = (char)((uint)uVar6 >> 0x18);
        param_4[1] = (char)((uint)uVar6 >> 0x10);
        param_4[2] = (char)((uint)uVar6 >> 8);
        uVar6 = puVar2[iVar5];
        iVar5 = iVar5 + 2;
        param_4[7] = (char)uVar6;
        param_4[4] = (char)((uint)uVar6 >> 0x18);
        param_4[5] = (char)((uint)uVar6 >> 0x10);
        param_4[6] = (char)((uint)uVar6 >> 8);
        param_4 = param_4 + 8;
      } while (iVar5 < iVar1);
    }
    uVar6 = 1;
  }
  FUN_004421f0(puVar2);
LAB_00438505:
  if (bVar7) {
    FUN_004421f0(puVar3);
  }
  if (puVar4 != (uint *)0x0) {
    FUN_004421f0(puVar4);
  }
  return uVar6;
}

