
undefined4 __cdecl FUN_00404430(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((DAT_00479ea4._3_1_ & 0x10) == 0) && (iVar1 = FUN_004030b0(), iVar1 == 0)) {
    FUN_00433690(0,"\n***** ERROR: getting bad blocks failed!\n");
    return 0;
  }
  iVar1 = FUN_0041faf0(&DAT_0044d4c5,"\\SystemRoot");
  if (iVar1 == 0) {
    FUN_00433690(0,"\n***** ERROR: mounting remote SystemRoot failed!\n");
    return 0;
  }
  FUN_00433690(1,"\n------ getting bootloaders ------\n");
  if (DAT_00479ea8 == 3) {
    FUN_00433690(1,"reading bootloader data...");
    DAT_0047a080 = FUN_0041ff90();
    if ((DAT_0047a080 == (undefined *)0x0) || (DAT_0047a084 == 0)) {
      FUN_00433690(1,"failed!\n");
      FUN_00433690(0,"\n***** ERROR: getting raw boot loaders failed!\n");
      return 0;
    }
    FUN_00433690(1,"success! Bootloader size with xell is 0x%08x\n");
    if (param_1 != (char *)0x0) {
      FUN_00420d80(param_1,"fbldrs.bin",DAT_0047a080,DAT_0047a084);
    }
    DAT_0047a088 = 1;
  }
  else {
    FUN_00433690(1,"Skipping getting bootloaders on non-glitch machine!\n");
  }
  iVar1 = FUN_00403e10(param_1);
  if (iVar1 == 0) {
    FUN_00433690(0,"\n***** ERROR: retrieving security files failed!\n");
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00403820(param_1);
    uVar2 = 1;
    if (iVar1 == 0) {
      FUN_00433690(0,"\n***** ERROR: getting mobile files failed!\n");
      uVar2 = 0;
    }
  }
  return uVar2;
}

