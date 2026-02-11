
undefined4 __cdecl FUN_00432e50(char *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  FUN_0041ed50();
  FUN_00433690(0,"loading avatar data...\n");
  uVar3 = param_2 & 0xfffffff0;
  if (DAT_004795a0 == 0) {
    iVar2 = 1;
LAB_00432ea4:
    (&DAT_004795c0)[DAT_004795a0] = uVar3;
    DAT_004795a0 = iVar2;
  }
  else {
    iVar2 = 0;
    uVar1 = DAT_004795c0;
    while (uVar3 != uVar1) {
      iVar2 = iVar2 + 1;
      if (iVar2 == DAT_004795a0) {
        iVar2 = DAT_004795a0 + 1;
        goto LAB_00432ea4;
      }
      uVar1 = (&DAT_004795c0)[iVar2];
    }
  }
  iVar2 = FUN_00432b10(param_1,uVar3);
  if (iVar2 == 0) {
    FUN_00433690(0,"***** WARNING: avatar data skipped, unable to load data!\n");
    return 1;
  }
  FUN_00433690(0,"success!\nFormatting HDD partition...\n");
  iVar2 = FUN_004205d0();
  if (iVar2 == 0) {
    uVar6 = 1;
    FUN_00433690(0,"ERROR: unable to format sysex partition!\n");
  }
  else {
    iVar2 = FUN_0041faf0(&DAT_0045bdb4,&DAT_0045c1b4);
    if (iVar2 == 0) {
      uVar6 = 1;
      FUN_00433690(0,"ERROR: unable to mount sysex partition!\n");
    }
    else {
      iVar2 = FUN_00431c20();
      if (iVar2 != 0) {
        FUN_00433690(0,"success!\nSending avatar files to HDD partition...\n");
        FUN_00433690(1,"sending %d items to xbox\n");
        if (0 < DAT_004ce068) {
          iVar2 = 0;
          do {
            iVar5 = iVar2 + 1;
            FUN_00433690(1,"sending %03d: 0x%08x (%d) bytes, %s\n");
            iVar2 = FUN_00420470(&DAT_004ce074 + iVar2 * 0x408,(&DAT_004ce06c)[iVar2 * 0x102],
                                 (&DAT_004ce070)[iVar2 * 0x102]);
            if (iVar2 == 0) {
              FUN_00433690(0,"aborting sending avatar data, failed to send %s\n");
              uVar6 = 0;
              goto LAB_00432f02;
            }
            iVar2 = iVar5;
          } while (iVar5 < DAT_004ce068);
        }
        FUN_00433690(1,"sending manifest to %s\n");
        iVar2 = FUN_00420470(&DAT_004cdc64,(int)DAT_004cdc60,DAT_004ce064);
        if (iVar2 == 0) {
          uVar6 = 0;
          FUN_00433690(0,"aborting sending avatar data, failed to send %s\n");
          goto LAB_00432f02;
        }
        FUN_00433690(0,"success! Avatar data is successfully sent to the console!\n");
        FUN_0041ed70();
      }
      uVar6 = 1;
    }
  }
LAB_00432f02:
  FUN_0041fc30(&DAT_0045bdb4);
  if (DAT_004cdc60 != (void *)0x0) {
    free(DAT_004cdc60);
  }
  if (DAT_004ce068 < 1) {
    return uVar6;
  }
  puVar4 = &DAT_004ce06c;
  iVar5 = 0;
  iVar2 = DAT_004ce068;
  do {
    if ((void *)*puVar4 != (void *)0x0) {
      free((void *)*puVar4);
      iVar2 = DAT_004ce068;
    }
    iVar5 = iVar5 + 1;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar4 + 0x102;
  } while (iVar5 < iVar2);
  return uVar6;
}

