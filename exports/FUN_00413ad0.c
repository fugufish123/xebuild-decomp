
void FUN_00413ad0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  size_t _Size;
  
  uVar3 = *(uint *)(DAT_00479f4c + 0x7c);
  uVar1 = *(uint *)(DAT_00479f4c + 0x78);
  uVar3 = (uVar3 & 0xff00) * 0x100 + (uVar3 >> 0x18) + uVar3 * 0x1000000 + (uVar3 >> 8 & 0xff00);
  _Size = (uVar1 >> 8 & 0xff00) + (uVar1 >> 0x18) + uVar1 * 0x1000000 + (uVar1 & 0xff00) * 0x100;
  if ((uVar3 == 0) || ((uVar3 - 0x800 & 0xfffff7ff) != 0)) {
    FUN_00433690(1,"smc.bin should not be at 0x%x, trying 0x1000\n");
    if ((_Size & 0xfffff7ff) != 0x3000) {
      uVar3 = 0x1000;
      goto LAB_00413b79;
    }
    uVar3 = 0x1000;
  }
  else if ((_Size & 0xfffff7ff) != 0x3000) {
    if (uVar3 == 0x800) {
      FUN_00433690(1,"smc.bin should not be 0x%x bytes, using 0x3800\n");
      if (0x800 < (uint)(DAT_00479f5c * 0x210)) {
        _Size = 0x3800;
        goto LAB_00413c20;
      }
      goto LAB_00413ba8;
    }
LAB_00413b79:
    _Size = 0x3000;
    FUN_00433690(1,"smc.bin should not be 0x%x bytes, using 0x3000\n");
  }
  if (uVar3 < (uint)(DAT_00479f5c * 0x210)) {
LAB_00413c20:
    DAT_0047a0e4 = (byte *)malloc(_Size);
    if (DAT_0047a0e4 == (byte *)0x0) {
      FUN_00433690(1,"Wasn\'t able to alloc 0x%x bytes memory for SMC bin, not using...\n");
      return;
    }
    DAT_0047a0e8 = _Size;
    memcpy(DAT_0047a0e4,(void *)(uVar3 + DAT_00479f4c),_Size);
    FUN_00433690(1,"decrypting SMC at address 0x%x of size 0x%x\n");
    iVar2 = FUN_00401730(DAT_0047a0e4,DAT_0047a0e8);
    if (iVar2 != 0) {
      FUN_00433690(1,"SMC decrypted OK, will use if no external smc.bin is provided\n");
      FUN_0041add0((undefined4 *)DAT_0047a0e4);
      return;
    }
    FUN_00433690(1,"SMC did not decrypt, discarding it\n");
    free(DAT_0047a0e4);
    DAT_0047a0e4 = (byte *)0x0;
    DAT_0047a0e8 = 0;
    return;
  }
LAB_00413ba8:
  FUN_00433690(1,"SMC at 0x%x of size 0x%x is not sane, skipping smc.bin in NAND image\n");
  return;
}

