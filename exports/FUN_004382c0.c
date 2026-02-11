
undefined4 __cdecl FUN_004382c0(undefined4 param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  uint *in_stack_ffffffd8;
  undefined4 in_stack_ffffffe0;
  int iVar7;
  
  puVar1 = (undefined4 *)FUN_004421a0(param_4 * 8);
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(param_4 << 4) = 0xf1f1f1f1;
    pvVar2 = FUN_00436fe0(param_4,param_3);
    pvVar3 = FUN_00436fe0(param_4,param_4);
    cVar6 = pvVar2 != (void *)0x0;
    uVar5 = 0;
    goto LAB_00438355;
  }
  FUN_004410e0(puVar1,param_4 * 8);
  *puVar1 = 0;
  puVar1[param_4 * 4] = 0xf1f1f1f1;
  pvVar2 = FUN_00436fe0(param_4,param_3);
  pvVar3 = FUN_00436fe0(param_4,param_4);
  iVar7 = CONCAT13(pvVar2 != (void *)0x0,(int3)in_stack_ffffffe0);
  if ((pvVar2 == (void *)0x0) || (pvVar3 == (void *)0x0)) {
LAB_0043834b:
    cVar6 = (char)((uint)iVar7 >> 0x18);
    uVar5 = 0;
  }
  else {
    iVar4 = FUN_00440e20(puVar1,pvVar2,pvVar3,param_4 * 2,in_stack_ffffffd8,pvVar3,iVar7);
    cVar6 = (char)((uint)iVar7 >> 0x18);
    if (iVar4 != 0) goto LAB_0043834b;
    if (((param_4 * 2 != 0) && (param_2 != (undefined1 *)0x0)) && (iVar7 = param_4 * 4, 0 < iVar7))
    {
      iVar4 = 0;
      do {
        uVar5 = puVar1[iVar4 + 1];
        param_2[3] = (char)uVar5;
        *param_2 = (char)((uint)uVar5 >> 0x18);
        param_2[1] = (char)((uint)uVar5 >> 0x10);
        param_2[2] = (char)((uint)uVar5 >> 8);
        uVar5 = puVar1[iVar4];
        iVar4 = iVar4 + 2;
        param_2[7] = (char)uVar5;
        param_2[4] = (char)((uint)uVar5 >> 0x18);
        param_2[5] = (char)((uint)uVar5 >> 0x10);
        param_2[6] = (char)((uint)uVar5 >> 8);
        param_2 = param_2 + 8;
      } while (iVar7 - iVar4 != 0 && iVar4 <= iVar7);
    }
    uVar5 = 1;
  }
  FUN_004421f0(puVar1);
LAB_00438355:
  if (cVar6 != '\0') {
    FUN_004421f0(pvVar2);
  }
  if (pvVar3 != (void *)0x0) {
    FUN_004421f0(pvVar3);
  }
  return uVar5;
}

