
uint __cdecl FUN_004492c0(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
  uint *puVar5;
  
  FUN_00446c90();
  FUN_0040de60();
  FUN_00433570(0);
  FUN_0040d0a0();
  FUN_00433740();
  FUN_00433690(0,s__________________________________0044a4e0);
  puVar5 = (uint *)0x1;
  FUN_00433690(0,"     %s v%d.%02d.%s\n");
  FUN_00433690(0,s__________________________________0044a4e0);
  if (param_1 < 2) {
    FUN_00433690(0,"ERROR: invalid command line, you need to specify parameters!\n");
    FUN_00418a10();
  }
  else {
    FUN_0040df90((char *)*param_2);
    iVar2 = _strnicmp((char *)param_2[1],"ini",3);
    if (iVar2 == 0) {
      DAT_00479ea0 = 4;
      FUN_00433690(0,"---- { Ini Mode } ----\n");
      uVar3 = FUN_00418830(param_1 + -2,param_2 + 2);
      goto LAB_004493b5;
    }
    iVar2 = _strnicmp((char *)param_2[1],"client",6);
    if (iVar2 == 0) {
      FUN_00433690(0,"---- { Client Mode } ----\n");
      DAT_00479ea0 = 3;
      uVar3 = FUN_00408260((byte *)(param_1 + -2),(int)(param_2 + 2));
      goto LAB_004493b5;
    }
    iVar2 = _strnicmp((char *)param_2[1],"update",6);
    if (iVar2 == 0) {
      DAT_00479ea0 = 2;
      FUN_00433690(0,"---- { Update Mode } ----\n");
      uVar3 = FUN_00404770();
    }
    else {
      uVar4 = 7;
      iVar2 = _strnicmp((char *)param_2[1],"extract",7);
      if (iVar2 == 0) {
        DAT_00479ea0 = 5;
        FUN_00433690(0,"---- { Extract Mode } ----\n");
        uVar1 = FUN_0040e200(param_1 + -2,param_2 + 2,uVar4,puVar5);
        uVar3 = CONCAT31(extraout_var,uVar1);
        goto LAB_004493b5;
      }
      DAT_00479ea0 = 1;
      FUN_00433690(0,"---- { Image Build Mode } ----\n");
      iVar2 = _strnicmp((char *)param_2[1],"build",5);
      if (iVar2 == 0) {
        uVar3 = FUN_00419230((byte *)(param_1 + -2),(int)(param_2 + 2));
      }
      else {
        uVar3 = FUN_00419230((byte *)(param_1 + -1),(int)(param_2 + 1));
      }
    }
    if (uVar3 != 0) goto LAB_004493b5;
  }
  FUN_0040d500();
  uVar3 = 0;
LAB_004493b5:
  FUN_0040cfa0();
  FUN_0040fb10();
  if (DAT_004c93a4 != (void *)0x0) {
    free(DAT_004c93a4);
  }
  if (DAT_0047a13c != (void *)0x0) {
    free(DAT_0047a13c);
  }
  if (DAT_0047a144 != (void *)0x0) {
    free(DAT_0047a144);
  }
  if (DAT_0047a140 != (void *)0x0) {
    free(DAT_0047a140);
  }
  if (DAT_0047a148 != (void *)0x0) {
    free(DAT_0047a148);
  }
  FUN_00433690(0,s__________________________________0044a4e0);
  FUN_00433690(0,"    %s Finished. Have a nice day.\n");
  FUN_00433690(0,s__________________________________0044a4e0);
  FUN_004337a0();
  if (DAT_0044a524 != 0) {
    FUN_00433690(0,"\npress <enter> to quit...\n");
    fgetc((FILE *)_iob_exref);
  }
  return uVar3;
}

