
undefined4 __cdecl FUN_0041b740(byte *param_1)

{
  size_t sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  sVar1 = strlen((char *)param_1);
  if (sVar1 == 0x20) {
    iVar3 = FUN_00422350(param_1);
    if (iVar3 == 0) {
      FUN_00433690(0,"\n******* ERROR: invalid or unexpected characters in 1BL key!\n");
      uVar2 = 0;
    }
    else {
      iVar3 = 0;
      do {
        iVar5 = iVar3 + 1;
        iVar4 = FUN_00421300(param_1);
        (&DAT_0047a10c)[iVar3] = (char)iVar4;
        iVar3 = iVar5;
        param_1 = param_1 + 2;
      } while (iVar5 != 0x10);
      iVar3 = FUN_00422ae0(&DAT_0047a10c,0x10);
      iVar4 = FUN_0041b420();
      if ((iVar3 != 0x983) || (iVar4 != 0x800)) {
        FUN_00433690(0,"\n******* ERROR: 1BL key 0x%s ");
        FUN_00433690(0,"does not appear to be correct!\n");
        return 0;
      }
      FUN_00433690(1,"1BL Key set to  : 0x");
      FUN_00423370(1,0x47a10c);
      FUN_00433690(1," sum: 0x%x (expects: 0x983)\n");
      FUN_00433690(1,"xex Key set to  : 0x");
      FUN_00423370(1,0x47a12c);
      FUN_00433690(1," sum: 0x%x (expects: 0x800)\n");
      uVar2 = 1;
    }
  }
  else {
    FUN_00433690(0,
                 "\n***** ERROR: unable to set 1BL key to \'%s\', %d is not the correct length, 32 chars required!\n"
                );
    uVar2 = 0;
  }
  return uVar2;
}

