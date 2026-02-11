
void FUN_00413d30(void)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(DAT_00479f4c + 0x6c);
  uVar2 = *(uint *)(DAT_00479f4c + 0x60);
  iVar5 = (uVar1 & 0xff00) * 0x100 + (uVar1 >> 0x18) + uVar1 * 0x1000000 + (uVar1 >> 8 & 0xff00);
  iVar4 = (uVar2 >> 0x18) + uVar2 * 0x1000000 + (uVar2 & 0xff00) * 0x100 + (uVar2 >> 8 & 0xff00);
  if (iVar5 == 0) {
    iVar5 = 0x4000;
    FUN_00433690(1,"KeyVault cannot be at 0x0, trying 0x4000\n");
  }
  if ((iVar4 - 0x4000U & 0xffffbfff) != 0) {
    iVar4 = 0x4000;
    FUN_00433690(1,"KeyVault cannot be 0x%x bytes, using 0x4000\n");
  }
  if ((uint)(iVar5 + iVar4) < (uint)(DAT_00479f5c * 0x210)) {
    DAT_0047a0ec = malloc(0x4000);
    if (DAT_0047a0ec == (void *)0x0) {
      FUN_00433690(1,"Wasn\'t able to alloc 0x4000 bytes memory for KeyVault bin, not using...\n");
    }
    else {
      FUN_00433690(1,"decrypting KeyVault at address 0x%x of size 0x%x\n");
      DAT_0047a0f0 = 0x4000;
      memcpy(DAT_0047a0ec,(void *)(DAT_00479f4c + iVar5),0x4000);
      bVar3 = FUN_00401630(DAT_0047a0ec);
      if (CONCAT31(extraout_var,bVar3) == 0) {
        FUN_00433690(1,"keyvault decrypt failed, discarding\n");
        free(DAT_0047a0ec);
        DAT_0047a0ec = (void *)0x0;
        DAT_0047a0f0 = 0;
        return;
      }
      FUN_00433690(1,"keyvault decrypted OK, will use if no kv.bin is provided\n");
      FUN_0041ad90((undefined4 *)((int)DAT_0047a0ec + 0x10));
      if (iVar4 == 0x8000) {
        DAT_0047a0f4 = malloc(0x4000);
        if (DAT_0047a0f4 != (void *)0x0) {
          FUN_00433690(1,"decrypting alt KeyVault at address 0x%x of size 0x%x\n");
          DAT_0047a0f8 = 0x4000;
          memcpy(DAT_0047a0f4,(void *)(iVar5 + 0x4000 + DAT_00479f4c),0x4000);
          bVar3 = FUN_00401630(DAT_0047a0f4);
          if (CONCAT31(extraout_var_00,bVar3) != 0) {
            FUN_00433690(1,"alt KeyVault decrypted OK, will use if no kv_alt.bin is provided\n");
            FUN_0041adb0((undefined4 *)((int)DAT_0047a0f4 + 0x10));
            return;
          }
          FUN_00433690(1,"alt KeyVault decrypt failed, discarding\n");
          free(DAT_0047a0f4);
          DAT_0047a0f4 = (void *)0x0;
          DAT_0047a0f8 = 0;
          return;
        }
        FUN_00433690(1,
                     "Wasn\'t able to alloc 0x4000 bytes memory for alt KeyVault bin, not using...\n"
                    );
      }
    }
  }
  else {
    FUN_00433690(1,
                 "KeyVault at address 0x%x of size 0x4000 is not sane, skipping KeyVault in NAND image\n"
                );
  }
  return;
}

