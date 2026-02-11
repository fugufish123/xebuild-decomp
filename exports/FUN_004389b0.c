
bool __cdecl FUN_004389b0(undefined4 param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  puVar2 = (undefined4 *)FUN_004421a0(param_4 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004410e0(puVar2,param_4 * 4);
    *puVar2 = 0;
  }
  puVar2[param_4 * 2] = 0xf1f1f1f1;
  pvVar3 = FUN_00436fe0(param_4,param_3);
  pvVar4 = FUN_00436fe0(param_4,param_4);
  if ((pvVar3 == (void *)0x0) || (pvVar4 == (void *)0x0)) {
    bVar9 = false;
LAB_00438a1d:
    if (puVar2 == (undefined4 *)0x0) goto LAB_00438a29;
  }
  else {
    uVar5 = FUN_004420b0((int)puVar2,(int)pvVar3,(int)pvVar4);
    bVar9 = uVar5 != 0;
    if ((param_2 == (undefined1 *)0x0) || (puVar2 == (undefined4 *)0x0)) goto LAB_00438a1d;
    if ((param_4 != 0) && (0 < param_4 * 2)) {
      puVar6 = param_2;
      puVar8 = puVar2;
      do {
        uVar1 = puVar8[1];
        puVar7 = puVar6 + 8;
        puVar6[3] = (char)uVar1;
        *puVar6 = (char)((uint)uVar1 >> 0x18);
        puVar6[1] = (char)((uint)uVar1 >> 0x10);
        puVar6[2] = (char)((uint)uVar1 >> 8);
        uVar1 = *puVar8;
        puVar6[7] = (char)uVar1;
        puVar6[4] = (char)((uint)uVar1 >> 0x18);
        puVar6[5] = (char)((uint)uVar1 >> 0x10);
        puVar6[6] = (char)((uint)uVar1 >> 8);
        puVar6 = puVar7;
        puVar8 = puVar8 + 2;
      } while (param_2 + param_4 * 8 != puVar7);
    }
  }
  FUN_004421f0(puVar2);
LAB_00438a29:
  if (pvVar3 != (void *)0x0) {
    FUN_004421f0(pvVar3);
  }
  if (pvVar4 != (void *)0x0) {
    FUN_004421f0(pvVar4);
  }
  return bVar9;
}

