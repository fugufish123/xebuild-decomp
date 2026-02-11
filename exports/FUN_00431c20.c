
undefined4 FUN_00431c20(void)

{
  int iVar1;
  uint uVar2;
  undefined **ppuVar3;
  char local_110 [260];
  
  uVar2 = 0;
  if (DAT_004795a0 != 0) {
    do {
      sprintf(local_110,"%s:\\%08X",&DAT_0045bdb4,(&DAT_004795c0)[uVar2]);
      iVar1 = FUN_00420710(local_110);
      if (iVar1 == 0) goto LAB_00431c92;
      uVar2 = uVar2 + 1;
      FUN_00433690(1,"created dir: %s\n");
    } while (uVar2 < DAT_004795a0);
  }
  ppuVar3 = &PTR_s__s__Content_0045c644;
  while( true ) {
    sprintf(local_110,*ppuVar3,&DAT_0045bdb4);
    iVar1 = FUN_00420710(local_110);
    if (iVar1 == 0) break;
    ppuVar3 = ppuVar3 + 1;
    FUN_00433690(1,"created dir: %s\n");
    if (ppuVar3 == (undefined **)"verbose set to level 1") {
      return 1;
    }
  }
LAB_00431c92:
  FUN_00433690(1,"ERROR: could not create dir %s on console!\n");
  return 0;
}

