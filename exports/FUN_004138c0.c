
void FUN_004138c0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  
  iVar1 = DAT_00479f4c;
  uVar3 = *(uint *)(DAT_00479f4c + 0x70);
  uVar2 = (uVar3 >> 0x18) + uVar3 * 0x1000000 + (uVar3 & 0xff00) * 0x100 + (uVar3 >> 8 & 0xff00);
  uVar3 = *(uint *)(DAT_00479f4c + 100);
  if (uVar2 == 0) {
    uVar2 = 0x10000;
  }
  uVar3 = FUN_00401a00((void *)((uVar3 >> 8 & 0xff00) +
                                (uVar3 >> 0x18) + uVar3 * 0x1000000 + (uVar3 & 0xff00) * 0x100 +
                               DAT_00479f4c),uVar2);
  if (uVar3 == 0) {
    uVar3 = *(uint *)(iVar1 + 0x6c);
    uVar2 = *(uint *)(iVar1 + 0x60);
    uVar3 = FUN_004017d0((byte *)((uVar2 >> 8 & 0xff00) +
                                  (uVar2 >> 0x18) +
                                  uVar3 * 0x1000000 + (uVar3 >> 0x18) + uVar2 * 0x1000000 +
                                  (uVar3 & 0xff00) * 0x100 + (uVar3 >> 8 & 0xff00) +
                                  (uVar2 & 0xff00) * 0x100 + DAT_00479f4c));
    if (uVar3 == 0) {
      if (DAT_00479ea8 - 6U < 2) {
        FUN_00433690(1,"Did not find a LDV value to use, setting it to 0 for devkit!\n");
        uVar4 = 0;
      }
      else if (DAT_00479ea8 - 8U < 2) {
        FUN_00433690(1,"Did not find a LDV value to use, setting it to 0 for testkit!\n");
        uVar4 = 0;
      }
      else {
        FUN_00433690(0,
                     "***** WARNING: could not find a non-zero CF LDV to use, setting it to 1 but that may be incorrect!\n"
                    );
        uVar4 = 1;
      }
      if (DAT_00479f15 == '\0') {
        DAT_00479f15 = uVar4;
        return;
      }
      goto LAB_00413a3b;
    }
  }
  if (DAT_00479f15 == '\0') {
    FUN_00433690(1,"setting LDV from image to %d\n");
  }
  FUN_00433690(1,"setting pairing data from image to 0x%06x\n");
  FUN_0041ade0(uVar3 >> 8);
  if (DAT_00479f15 == '\0') {
    if ((byte)uVar3 < 0x21) {
      DAT_00479f15 = (byte)uVar3;
      return;
    }
    DAT_00479f15 = 0x20;
    return;
  }
LAB_00413a3b:
  FUN_00433690(1,"LDV was already set to %d\n");
  return;
}

