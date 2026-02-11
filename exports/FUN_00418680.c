
undefined4 FUN_00418680(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  byte *local_1c;
  byte *local_18;
  uint local_14;
  uint local_10 [2];
  
  local_1c = (byte *)0x0;
  local_18 = (byte *)0x0;
  iVar1 = FUN_0040c650((int *)&local_1c,(int *)&local_14);
  if (iVar1 == 0) {
    uVar3 = 0;
    FUN_00433690(0,"***** ERROR: could not get CF data from SU!\n");
  }
  else {
    iVar1 = FUN_0040c700((int *)&local_18,(int *)local_10);
    if (iVar1 == 0) {
      uVar3 = 0;
      FUN_00433690(0,"***** ERROR: could not get CG data from SU!\n");
    }
    else {
      FUN_00420ab0(local_1c + 0x14);
      local_14 = FUN_00420ad0((uint *)(local_1c + 0xc));
      local_10[0] = FUN_00420ad0((uint *)(local_18 + 0xc));
      local_1c[0x20] = 0;
      local_1c[0x21] = 0;
      local_1c[0x22] = 0;
      local_1c[0x23] = 0;
      local_1c[0x22c] = 0;
      local_1c[0x22d] = 0;
      local_1c[0x22e] = 0;
      local_1c[0x22f] = 0;
      puVar4 = (undefined4 *)((uint)(local_1c + 0x24) & 0xfffffffc);
      for (uVar2 = (uint)(local_1c + (0x230 - (int)((uint)(local_1c + 0x24) & 0xfffffffc))) >> 2;
          uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      local_18[0x10] = 0;
      local_18[0x11] = 0;
      local_18[0x12] = 0;
      local_18[0x13] = 0;
      local_18[0x14] = 0;
      local_18[0x15] = 0;
      local_18[0x16] = 0;
      local_18[0x17] = 0;
      local_18[0x18] = 0;
      local_18[0x19] = 0;
      local_18[0x1a] = 0;
      local_18[0x1b] = 0;
      local_18[0x1c] = 0;
      local_18[0x1d] = 0;
      local_18[0x1e] = 0;
      local_18[0x1f] = 0;
      FUN_00433690(0,"Attempting to output info to file %s\n\n");
      FUN_004183d0("[version]\n%d\n\n[bl]\n");
      FUN_00433800(local_1c,local_14);
      FUN_004183d0("cf_%d.bin,%08x\n");
      FUN_00433800(local_18,local_10[0]);
      uVar3 = 1;
      FUN_004183d0("cg_%d.bin,%08x\n\n");
    }
  }
  if (local_1c != (byte *)0x0) {
    free(local_1c);
  }
  if (local_18 != (byte *)0x0) {
    free(local_18);
  }
  return uVar3;
}

