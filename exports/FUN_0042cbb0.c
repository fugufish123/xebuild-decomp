
void __cdecl FUN_0042cbb0(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 uVar5;
  char local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  char local_3d [45];
  
  uVar3 = DAT_00479f00;
  builtin_strncpy(local_3d,"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX",0x21);
  local_50[0] = -0x80;
  local_50[1] = '\0';
  local_50[2] = '\0';
  local_50[3] = '\0';
  local_50[4] = '\x01';
  local_50[5] = '\0';
  local_50[6] = '0';
  local_50[7] = 'x';
  FUN_00433690(1,"patching freeboot.bin with with kernel version string \'%s\'\n");
  FUN_00433690(1,"Boot options set:\n");
  if ((uVar3 & 9) == 0) {
    uVar3 = uVar3 & 0xf;
  }
  else {
    uVar3 = uVar3 & 6;
    FUN_00433690(1,"    - Set debug UART speed to cygnos/demon compatible\n");
  }
  if ((uVar3 & 4) == 0) {
    if ((uVar3 & 2) == 0) {
      FUN_00433690(1,"    - When powered on, if tray is not fully closed Xell starts\n");
      goto LAB_0042cc82;
    }
    FUN_00433690(1,"    - Tray has to be fully ejected for Xell to start (old nodvd method)\n");
    if (DAT_00479f10 != DAT_00479f08) goto LAB_0042cc93;
  }
  else {
    iVar1 = FUN_0042c900(DAT_00479f08);
    if (iVar1 != 0) {
      FUN_00433690(1,"    - UKNOWN POWER REASON, using eject button\n");
      DAT_00479f08 = 0x12;
    }
    if (DAT_00479f0c == DAT_00479f08) {
      DAT_00479f0c = 0;
    }
    iVar1 = FUN_0042c900(DAT_00479f0c);
    if (iVar1 != 0) {
      FUN_00433690(1,"    - alternate xell button disabled\n");
      DAT_00479f0c = 0;
    }
LAB_0042cc82:
    if (DAT_00479f10 != DAT_00479f08) {
LAB_0042cc93:
      if ((DAT_00479f10 != DAT_00479f0c) && (iVar1 = FUN_0042c900(DAT_00479f10), iVar1 == 0))
      goto LAB_0042ccc0;
    }
  }
  DAT_00479f10 = 0;
LAB_0042ccc0:
  pcVar2 = FUN_00421000(param_1,param_2,local_3d,0x20);
  uVar5 = pcVar2 == (char *)0x0;
  if ((bool)uVar5) {
    FUN_00433690(0,"**** ERROR PATCHING FREEBOOT.BIN for kernel version string!\n");
  }
  else {
    FUN_00433690(2,"org version %s\n");
    strncpy(pcVar2,&DAT_004c9364,0x20);
    FUN_00433690(2,"fin version %s\n");
  }
  iVar1 = 4;
  pcVar2 = &DAT_004c9364;
  pcVar4 = "9199";
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    uVar5 = *pcVar2 == *pcVar4;
    pcVar2 = pcVar2 + 1;
    pcVar4 = pcVar4 + 1;
  } while ((bool)uVar5);
  if ((bool)uVar5) {
    local_48 = 0x80;
    local_44 = 0xf8ff1f00;
    FUN_00433690(1,"9199 ini string detected, patching to old hold address\n");
    pcVar2 = FUN_00421000(param_1,param_2,local_50,8);
    if (pcVar2 != (char *)0x0) {
      *(undefined4 *)(pcVar2 + 4) = local_44;
      *(undefined4 *)pcVar2 = local_48;
      return;
    }
  }
  return;
}

