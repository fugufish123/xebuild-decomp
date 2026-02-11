
int __cdecl FUN_0041ca20(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int iVar11;
  uint uVar12;
  undefined4 unaff_EDI;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  int in_stack_00000038;
  int iVar15;
  undefined4 uStack_14;
  
  if (param_4 == 0) {
    iVar15 = *(int *)(param_1 + 0x40c);
    *(undefined4 *)(iVar15 + 0x20) = 0;
    *(undefined4 *)(iVar15 + 0x22c) = 0;
    puVar13 = (undefined4 *)(iVar15 + 0x24U & 0xfffffffc);
    uVar6 = (iVar15 - (int)puVar13) + 0x230U >> 2;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    if (DAT_00479ea8 == 2) {
      *(undefined1 *)(*(int *)(param_1 + 0x40c) + 0x21b) = 1;
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0x40c) + 0x21b) = 0;
    }
    iVar15 = *(int *)(param_1 + 0x40c);
    *(undefined2 *)(iVar15 + 0x21c) = DAT_00479570;
    *(undefined1 *)(iVar15 + 0x21e) = DAT_00479572;
    *(undefined1 *)(*(int *)(param_1 + 0x40c) + 0x21f) = DAT_00479f15;
    iVar15 = *(int *)(param_1 + 0x40c);
    iVar11 = *(int *)(param_1 + 0x410);
    uVar6 = param_2 + iVar11;
    if (param_5 < uVar6) goto LAB_0041cc25;
    iVar11 = 0;
    *(undefined2 *)(iVar15 + 0x30) = 0;
    FUN_00434110((uint *)&DAT_0047a10c,0x10,&stack0xffffffd4,0x10,(void *)0x0,0,(void *)0x0,0,
                 (undefined4 *)&stack0xffffffc4,0x10);
  }
  else {
    iVar15 = *(int *)(param_1 + 0x40c);
    iVar11 = *(int *)(param_1 + 0x410);
    uVar6 = param_2 + iVar11;
    if (uVar6 <= param_5) {
      iVar11 = 0;
      *(undefined2 *)(iVar15 + 0x30) = 0;
      FUN_00434110((uint *)&DAT_0047a10c,0x10,&stack0xffffffd4,0x10,(void *)0x0,0,(void *)0x0,0,
                   (undefined4 *)&stack0xffffffc4,0x10);
      goto LAB_0041caf4;
    }
LAB_0041cc25:
    uVar6 = uVar6 - param_5;
    *(uint *)(param_1 + 0x428) = param_5 - iVar11;
    *(uint *)(param_1 + 0x424) = uVar6;
    if (uVar6 < 0x4001) {
      if (uVar6 != 0) {
        iVar11 = 0;
        iVar10 = 1;
        goto LAB_0041cc99;
      }
      uVar5 = 0;
      iVar11 = 0;
    }
    else {
      uVar7 = uVar6 - 0x4001 >> 0xe;
      uVar14 = param_3 & 0xffff;
      uVar8 = param_3 << 8;
      uVar6 = uVar14 + 1;
      uVar12 = uVar14;
      while( true ) {
        uVar9 = uVar6;
        sVar4 = (short)uVar8;
        uVar8 = (uint)(ushort)(sVar4 + 0x100);
        *(ushort *)(iVar15 + uVar14 * -2 + 0x32 + uVar12 * 2) =
             ((ushort)(uVar12 >> 8) & 0xff) + sVar4;
        if (uVar9 == uVar14 + 1 + uVar7) break;
        uVar6 = uVar9 + 1;
        uVar12 = uVar9;
      }
      iVar10 = uVar7 + 2;
      iVar11 = uVar7 + 1;
LAB_0041cc99:
      iVar11 = iVar11 + 1;
      *(ushort *)(iVar15 + 0x30 + iVar10 * 2) =
           ((short)param_3 + -1 + (short)iVar10) * 0x100 +
           ((ushort)(iVar10 + -1 + (param_3 & 0xffff) >> 8) & 0xff);
      uVar5 = (ushort)iVar11 << 8 | (ushort)iVar11 >> 8;
    }
    *(ushort *)(iVar15 + 0x30) = uVar5;
    FUN_00434110((uint *)&DAT_0047a10c,0x10,&stack0xffffffd4,0x10,(void *)0x0,0,(void *)0x0,0,
                 (undefined4 *)&stack0xffffffc4,0x10);
    if (in_stack_00000038 != 0) goto LAB_0041caf4;
  }
  iVar15 = *(int *)(param_1 + 0x40c);
  *(undefined4 *)(iVar15 + 0x20) = uStack_14;
  *(undefined4 *)(iVar15 + 0x24) = unaff_EBX;
  *(undefined4 *)(iVar15 + 0x28) = unaff_ESI;
  *(undefined4 *)(iVar15 + 0x2c) = unaff_EDI;
  FUN_00434110((uint *)&DAT_0047a11c,0x10,*(void **)(param_1 + 0x40c),0x220,(void *)0x0,0,
               (void *)0x0,0,(undefined4 *)((int)*(void **)(param_1 + 0x40c) + 0x220),0x10);
LAB_0041caf4:
  iVar15 = *(int *)(param_1 + 0x40c);
  uVar1 = *(undefined4 *)(iVar15 + 0x33c);
  uVar2 = *(undefined4 *)(iVar15 + 0x334);
  uVar3 = *(undefined4 *)(iVar15 + 0x330);
  *(undefined4 *)(param_1 + 0x41c) = *(undefined4 *)(iVar15 + 0x338);
  *(undefined4 *)(param_1 + 0x418) = uVar2;
  *(undefined4 *)(param_1 + 0x414) = uVar3;
  *(undefined4 *)(param_1 + 0x420) = uVar1;
  *(undefined4 *)(iVar15 + 0x20) = in_stack_00000024;
  *(undefined4 *)(iVar15 + 0x24) = in_stack_00000028;
  *(undefined4 *)(iVar15 + 0x28) = in_stack_0000002c;
  *(undefined4 *)(iVar15 + 0x2c) = in_stack_00000030;
  FUN_004345b0((int)&stack0xffffffc4,0x10,(byte *)(*(int *)(param_1 + 0x40c) + 0x30),
               *(int *)(param_1 + 0x410) - 0x30);
  return iVar11;
}

