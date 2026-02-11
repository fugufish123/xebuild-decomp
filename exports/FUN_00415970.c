
void FUN_00415970(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  uVar3 = DAT_00479f54;
  if (DAT_00479f68 == 0) {
    if (DAT_00479f60 != 0) {
      uVar4 = 0x3be0000;
      uVar3 = 0x4000000;
      goto LAB_004159aa;
    }
    if (DAT_00479f54 == 0x1000000) {
      uVar4 = 0xf7c000;
      goto LAB_004159aa;
    }
    if (DAT_00479f54 == 0x4000000) {
      uVar4 = 0x3dfc000;
      goto LAB_004159aa;
    }
    uVar4 = 0;
    FUN_00433690(1,"seeking smc config in dump...");
    if (uVar3 == 0) goto LAB_00415a5d;
  }
  else {
    uVar3 = 0x3000000;
    uVar4 = 0x2ffc000;
LAB_004159aa:
    FUN_00433690(1,"seeking smc config in dump...");
  }
  do {
    while (bVar1 = FUN_0040c210((byte *)(DAT_00479f4c + uVar4)), CONCAT31(extraout_var,bVar1) == 0)
    {
LAB_004159c0:
      uVar4 = uVar4 + 0x200;
      if (uVar3 <= uVar4) goto LAB_00415a5d;
    }
    DAT_0047a0fc = (undefined4 *)malloc(0x400);
    if (DAT_0047a0fc == (undefined4 *)0x0) {
      FUN_00433690(1,
                   "found at offset 0x%x! Unable to allocate 0x400 bytes of memory for smc config, skipping\n"
                  );
      uVar4 = uVar3;
      goto LAB_004159c0;
    }
    FUN_00433690(1,"found at offset 0x%x! Using if no smc config is provided.\n");
    puVar6 = DAT_0047a0fc;
    puVar5 = (undefined4 *)(uVar4 + DAT_00479f4c);
    puVar7 = DAT_0047a0fc + 1;
    *DAT_0047a0fc = *puVar5;
    puVar6[0xff] = puVar5[0xff];
    iVar2 = (int)puVar6 - (int)((uint)puVar7 & 0xfffffffc);
    puVar6 = (undefined4 *)((int)puVar5 - iVar2);
    puVar7 = (undefined4 *)((uint)puVar7 & 0xfffffffc);
    for (uVar4 = iVar2 + 0x400U >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    DAT_0047a100 = 0x400;
    uVar4 = uVar3 + 0x200;
  } while (uVar4 < uVar3);
LAB_00415a5d:
  if (DAT_0047a0fc == (undefined4 *)0x0) {
    FUN_00433690(1,"not found!\n");
    return;
  }
  return;
}

