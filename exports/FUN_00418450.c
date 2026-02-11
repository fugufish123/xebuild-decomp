
undefined4 FUN_00418450(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int local_54;
  byte *local_50;
  int local_4c;
  char local_48 [7];
  char local_41 [49];
  
  FUN_004183d0("[flashfs]\n");
  bVar1 = FUN_0040c940((undefined4 *)local_48,&local_54);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_00433690(0,"***** ERROR SU seems loaded, but is unparsed!\n");
    return 0;
  }
  local_54 = 0;
LAB_00418490:
  do {
    iVar2 = FUN_0040c860((undefined4 *)local_48,&local_54);
    while( true ) {
      if (iVar2 == 0) {
        return 1;
      }
      iVar2 = FUN_0040c7b0(local_48,&local_50,&local_4c);
      if (iVar2 == 0) goto LAB_00418490;
      iVar2 = _strnicmp(local_48,"$flash_",7);
      if (iVar2 != 0) {
        FUN_00433800(local_50,local_4c);
        goto LAB_0041858d;
      }
      FUN_00433800(local_50,local_4c);
      iVar2 = _strnicmp(local_41,"xenonclatin.xttp",0x10);
      if (iVar2 == 0) {
        FUN_004183d0("xenonclatin.xtt,d5d17ff5; added by xebuild\n");
      }
      else {
        iVar2 = _strnicmp(local_41,"xenonjklatin.xttp",0x11);
        if (iVar2 == 0) {
          FUN_004183d0("xenonjklatin.xtt,dde4a14c; added by xebuild\n");
        }
        else {
          iVar2 = _strnicmp(local_41,"ximedic.xexp",0x10);
          if (iVar2 == 0) {
            FUN_004183d0("ximedic.xex,1d992bfb; added by xebuild\n");
          }
        }
      }
      iVar2 = _strnicmp(local_41,"systemupdate",0xc);
      if (iVar2 != 0) break;
      FUN_004183d0(";%s,%08x; commented by xebuild\n");
      iVar2 = FUN_0040c860((undefined4 *)local_48,&local_54);
    }
    iVar2 = _strnicmp(local_41,"oddupd",6);
    if (iVar2 == 0) {
LAB_0041858d:
      FUN_004183d0(";%s,%08x; commented by xebuild\n");
    }
    else {
      FUN_004183d0("%s,%08x\n");
    }
  } while( true );
}

