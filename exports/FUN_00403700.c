
void FUN_00403700(void)

{
  undefined *puVar1;
  uint *_Memory;
  uint local_414;
  size_t local_410;
  char local_40c [1024];
  
  puVar1 = FUN_0041fd60("addons");
  if (puVar1 != (undefined *)0x0) {
    FUN_00433690(1,"OK, received 0x%x bytes\n");
    if ((local_414 & 3) == 0) {
      if (local_414 != 0) {
        sprintf(local_40c,".\\%d\\bin\\addon.idx",(uint)*(ushort *)(DAT_0046f15c + 5));
        _Memory = (uint *)FUN_00422670(local_40c,&local_410);
        if (_Memory == (uint *)0x0) {
          FUN_00433690(0,"\n\n***** WARNING: unable to open %s to parse addons.bin from console!\n")
          ;
        }
        else {
          FUN_004034f0((int)puVar1,local_414,_Memory);
          free(_Memory);
        }
      }
    }
    else {
      FUN_00433690(0,
                   "\n\n***** WARNING: addons.bin from console is not a multiple of 4 bytes! Skipping!\n"
                  );
    }
    FUN_0041ea70(puVar1);
    return;
  }
  FUN_00433690(0,"\n\n***** WARNING: Unable to retrieve addons.bin from console!\n");
  return;
}

