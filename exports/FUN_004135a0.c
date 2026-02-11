
undefined4 __cdecl FUN_004135a0(byte *param_1)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  sVar1 = strlen((char *)param_1);
  if (sVar1 == 0x20) {
    iVar2 = FUN_00422350(param_1);
    if (iVar2 != 0) {
      iVar2 = 0;
      do {
        iVar4 = iVar2 + 1;
        iVar3 = FUN_00421300(param_1);
        (&DAT_004709f4)[iVar2] = (char)iVar3;
        iVar2 = iVar4;
        param_1 = param_1 + 2;
      } while (iVar4 != 0x10);
      iVar2 = 0;
      FUN_00433690(1,"DVD Key set to: 0x");
      do {
        iVar2 = iVar2 + 1;
        FUN_00433690(1,"%02X");
      } while (iVar2 != 0x10);
      FUN_00433690(1,"\n");
      DAT_004709e8 = 1;
      return 1;
    }
    FUN_00433690(0,"\n******* ERROR: invalid or unexpected characters in DVD key!\n");
  }
  else {
    FUN_00433690(0,
                 "\n***** ERROR: unable to set dvd key to \'%s\', %d is not the correct length, 32 chars required!\n"
                );
  }
  return 0;
}

