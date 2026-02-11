
undefined4 __cdecl FUN_00412260(char *param_1)

{
  FILE *_File;
  size_t sVar1;
  byte local_80 [20];
  uint local_6c [24];
  
  FUN_00433690(1,"\n------ writing image to disk ------\n");
  _File = fopen(param_1,"wb");
  if (_File == (FILE *)0x0) {
    return 0xfffffffe;
  }
  FUN_00433690(1,"writing file \'%s\' to disk...");
  if ((DAT_00479ea4._3_1_ & 0x10) != 0) {
    sVar1 = fwrite(DAT_00479ed8,0x3000000,1,_File);
    if (sVar1 != 1) {
      FUN_00433690(1,"failed!\n");
LAB_004123a6:
      FUN_00433690(0,"\n***** ERROR: was not able to write %d bytes to the file %s!\n");
      fclose(_File);
      return 1;
    }
    if (DAT_004c97a8 != 0) {
      FUN_00433690(1,"done!\ncreating SHA-1 hash from system area data...");
      FUN_00434a30(DAT_00479ed8,0x3000000,(void *)0x0,0,(void *)0x0,0,local_6c,0x14);
      FUN_00433690(1,"done!\nwriting SHA-1 to file...");
      FUN_00423490(&DAT_004c93a8,param_1,(byte *)local_6c);
    }
    goto LAB_004122f7;
  }
  sVar1 = fwrite(DAT_00479ee0,DAT_00479ee4 * 0x4200,1,_File);
  if (sVar1 != 1) {
    FUN_00433690(1,"failed!\n");
    goto LAB_004123a6;
  }
  if (DAT_004c97a8 == 0) {
    if ((DAT_00479f6c != 0) && ((DAT_00479f00._3_1_ & 0x10) != 0)) {
LAB_00412560:
      FUN_00433690(1,"done!\nchecking and copying > 64M NAND data from dump file if present...\n");
      DAT_00479f6c = FUN_00416840(_File,(uint *)0x0);
      goto LAB_00412509;
    }
  }
  else {
    FUN_00433690(1,"done!\ncreating SHA-1 hash from system area data...");
    thunk_FUN_00442b00(local_6c);
    FUN_00434960(local_6c,DAT_00479ee0,DAT_00479ee4 * 0x4200);
    if ((DAT_00479f6c != 0) && ((DAT_00479f00._3_1_ & 0x10) != 0)) {
      if (DAT_004c97a8 == 0) goto LAB_00412560;
      FUN_00433690(1,
                   "done!\nchecking and copying > 64M NAND data from dump file if present and updating SHA-1...\n"
                  );
      DAT_00479f6c = FUN_00416840(_File,local_6c);
    }
LAB_00412509:
    if (DAT_004c97a8 != 0) {
      FUN_004349c0(local_6c,(undefined4 *)local_80,0x14);
      FUN_00433690(1,"done!\nwriting SHA-1 to file...");
      FUN_00423490(&DAT_004c93a8,param_1,local_80);
    }
  }
  free(DAT_00479ee0);
  DAT_00479ee0 = (void *)0x0;
LAB_004122f7:
  FUN_00433690(1,"done!\n");
  fclose(_File);
  return 0;
}

