
undefined4 __cdecl FUN_00411800(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  
  uVar4 = *(uint *)(DAT_0047a080 + 0x6c);
  uVar3 = *(uint *)(DAT_0047a080 + 0x60);
  uVar3 = (uVar3 >> 8 & 0xff00) +
          (uVar3 >> 0x18) + uVar4 * 0x1000000 + 0xf + (uVar4 >> 0x18) + uVar3 * 0x1000000 +
          (uVar4 & 0xff00) * 0x100 + (uVar4 >> 8 & 0xff00) + (uVar3 & 0xff00) * 0x100 & 0xfffffff0;
  puVar6 = (ushort *)(DAT_0047a080 + uVar3);
  uVar4 = *(uint *)(puVar6 + 6);
  uVar1 = *puVar6;
  uVar2 = uVar1 << 8;
  FUN_00433690(1,"%c%c v%d at 0x%x size 0x%x (CB)\n");
  if ((ushort)(uVar2 & 0x43ff | uVar1 >> 8) != 0x4342) {
    return 0xffffffff;
  }
  uVar4 = uVar3 + 0xf +
          (uVar4 >> 0x18) + uVar4 * 0x1000000 + (uVar4 & 0xff00) * 0x100 + (uVar4 >> 8 & 0xff00) &
          0xfffffff0;
  if ((puVar6[3] & 8) == 0) {
    if ((uVar2 & 0x1000) == 0) goto LAB_004118ff;
    uVar1 = *(ushort *)(DAT_0047a080 + uVar4);
    uVar3 = *(uint *)((ushort *)(DAT_0047a080 + uVar4) + 6);
    iVar5 = (uVar3 & 0xff00) * 0x100 + (uVar3 >> 0x18) + uVar3 * 0x1000000 + (uVar3 >> 8 & 0xff00);
    FUN_00433690(1,"%c%c v%d at 0x%x size 0x%x (devkit CC)\n");
    if ((ushort)((uVar1 & 0x43) << 8 | uVar1 >> 8) != 0x4343) {
      return 0xffffffff;
    }
  }
  else {
    uVar1 = *(ushort *)(DAT_0047a080 + uVar4);
    uVar3 = *(uint *)((ushort *)(DAT_0047a080 + uVar4) + 6);
    iVar5 = (uVar3 & 0xff00) * 0x100 + (uVar3 >> 0x18) + uVar3 * 0x1000000 + (uVar3 >> 8 & 0xff00);
    FUN_00433690(1,"%c%c v%d at 0x%x size 0x%x (dual CB)\n");
    if ((ushort)((uVar1 & 0x43) << 8 | uVar1 >> 8) != 0x4342) {
      return 0xffffffff;
    }
  }
  uVar4 = uVar4 + 0xf + iVar5 & 0xfffffff0;
LAB_004118ff:
  uVar1 = *(ushort *)(DAT_0047a080 + uVar4);
  uVar3 = *(uint *)((ushort *)(DAT_0047a080 + uVar4) + 6);
  FUN_00433690(1,"%c%c v%d at 0x%x size 0x%x (CD)\n");
  if ((ushort)((uVar1 & 0x43) << 8 | uVar1 >> 8) == 0x4344) {
    uVar4 = uVar4 + 0xf +
            (uVar3 & 0xff00) * 0x100 + (uVar3 >> 0x18) + uVar3 * 0x1000000 + (uVar3 >> 8 & 0xff00) &
            0xfffffff0;
    puVar6 = (ushort *)(DAT_0047a080 + uVar4);
    uVar1 = *puVar6;
    FUN_00433690(1,"%c%c v%d at 0x%x size 0x%x (CE)\n");
    if ((ushort)((uVar1 & 0x43) << 8 | uVar1 >> 8) == 0x4345) {
      uVar3 = *(uint *)(puVar6 + 6);
      DAT_0047a084 = (uVar3 >> 8 & 0xff00) +
                     (uVar3 >> 0x18) + uVar4 + 0xf + uVar3 * 0x1000000 + (uVar3 & 0xff00) * 0x100 &
                     0xfffffff0;
      FUN_00433690(1,"final truncated bootloader size 0x%x\n");
      if (param_1 != 0) {
        if (DAT_00479ef0 != 0) {
          FUN_0040e950(0xf1f1,DAT_0047a084);
          return 0;
        }
        FUN_0040e950(0x1ffb,DAT_0047a084);
      }
      return 0;
    }
  }
  return 0xffffffff;
}

