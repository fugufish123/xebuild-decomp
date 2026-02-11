
undefined4 FUN_004030b0(void)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int local_20;
  
  FUN_00433690(1,"\n------ getting bad blocks ------\n");
  puVar4 = FUN_00420420();
  if (puVar4 == (undefined *)0x0) {
    FUN_00433690(0,"\n\n***** ERROR: unable to retrieve bad block list from device!\n");
    uVar5 = 0;
  }
  else {
    if (local_20 == 0) {
      FUN_00433690(1,"no bad blocks found on device\n");
    }
    else {
      uVar1 = *(uint *)(DAT_0046f15c + 0x14);
      uVar2 = *(uint *)(DAT_0046f15c + 0x18);
      FUN_00433690(1,"processing %d bad blocks on device\n");
      for (iVar6 = local_20 + -2; -1 < iVar6; iVar6 = iVar6 + -2) {
        uVar3 = FUN_00420ab0(puVar4 + iVar6);
        FUN_00433690(1,"marking bad block at 0x%x\n");
        (&DAT_00479ff8)[DAT_00479f74] = 0xffffffff;
        (&DAT_00479f78)[DAT_00479f74] = (uint)uVar3;
        DAT_00479f74 = DAT_00479f74 + 1;
      }
      FUN_00415ef0(uVar1 / uVar2);
    }
    FUN_0041ea70(puVar4);
    uVar5 = 1;
  }
  return uVar5;
}

