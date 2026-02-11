
undefined4 __cdecl FUN_0041afe0(byte *param_1)

{
  bool bVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  int iVar6;
  
  sVar2 = strlen((char *)param_1);
  if (sVar2 == 0x20) {
    iVar3 = FUN_00422350(param_1);
    if (iVar3 == 0) {
      FUN_00433690(0,"\n******* ERROR: invalid or unexpected characters in CPU key!\n");
      uVar5 = 0;
    }
    else {
      iVar3 = 0;
      do {
        iVar6 = iVar3 + 1;
        iVar4 = FUN_00421300(param_1);
        (&DAT_0047a11c)[iVar3] = (char)iVar4;
        iVar3 = iVar6;
        param_1 = param_1 + 2;
      } while (iVar6 != 0x10);
      iVar3 = 0;
      FUN_00433690(1,"CPU Key set to: 0x");
      do {
        iVar3 = iVar3 + 1;
        FUN_00433690(1,"%02X");
      } while (iVar3 != 0x10);
      uVar5 = 1;
      iVar3 = FUN_004223b0(&DAT_0047a11c,0x10);
      if (iVar3 == 0) {
        bVar1 = FUN_0041ae40(1,(undefined4 *)&DAT_0047a11c);
        if (CONCAT31(extraout_var,bVar1) == 0) {
          FUN_00433690(0,"\n***** WARNING: CPU key check failed, CPU key may not be valid!\n\n");
        }
        else {
          FUN_00433690(0,"\n");
        }
      }
    }
  }
  else {
    uVar5 = 0;
    FUN_00433690(0,
                 "\n***** ERROR: unable to set CPU key to \'%s\', %d is not the correct length, 32 chars required!\n"
                );
  }
  return uVar5;
}

