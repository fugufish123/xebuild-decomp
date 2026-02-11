
void __cdecl FUN_004429d0(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  
  iVar3 = 0;
  puVar1 = param_1 + 2;
  do {
    puVar1[iVar3] = iVar3;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x100);
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = 0;
  uVar4 = 0;
  puVar8 = puVar1;
  do {
    uVar2 = *puVar8;
    iVar6 = iVar3 + 1;
    iVar10 = iVar3 + 2;
    if (iVar6 == param_2) {
      iVar10 = 1;
    }
    uVar4 = (uint)(byte)((char)uVar4 + (char)uVar2 + *(char *)(param_3 + iVar3));
    *puVar8 = puVar1[uVar4];
    puVar1[uVar4] = uVar2;
    iVar7 = iVar10 + 1;
    iVar3 = puVar8[1];
    if (param_2 == iVar10) {
      iVar7 = 1;
    }
    if (iVar6 == param_2) {
      iVar6 = 0;
    }
    uVar4 = uVar4 + (uint)*(byte *)(param_3 + iVar6) + iVar3 & 0xff;
    puVar8[1] = puVar1[uVar4];
    puVar1[uVar4] = iVar3;
    iVar3 = iVar7 + 1;
    iVar6 = puVar8[2];
    if (param_2 == iVar7) {
      iVar3 = 1;
    }
    iVar5 = 0;
    if (param_2 != iVar10) {
      iVar5 = iVar10;
    }
    uVar4 = uVar4 + (uint)*(byte *)(param_3 + iVar5) + iVar6 & 0xff;
    puVar8[2] = puVar1[uVar4];
    puVar1[uVar4] = iVar6;
    if (param_2 == iVar7) {
      iVar7 = 0;
    }
    iVar6 = puVar8[3];
    uVar4 = uVar4 + (uint)*(byte *)(param_3 + iVar7) + iVar6 & 0xff;
    if (param_2 == iVar3) {
      iVar3 = 0;
    }
    puVar9 = puVar8 + 4;
    puVar8[3] = puVar1[uVar4];
    puVar1[uVar4] = iVar6;
    puVar8 = puVar9;
  } while (param_1 + 0x102 != puVar9);
  return;
}

