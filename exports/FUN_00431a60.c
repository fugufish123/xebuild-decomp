
undefined4 __cdecl FUN_00431a60(uint param_1,char *param_2,char *param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  uint uVar4;
  int in_stack_fffffff4;
  
  DAT_00479580 = (uint *)FUN_0041fe10();
  FUN_00433690(param_1,"\n------ parsing console info response ------\n");
  FUN_004317c0(param_1,param_4);
  if ((param_4 == (undefined4 *)0x0) || (1 < (byte)*DAT_00479580)) {
    if ((*DAT_00479580 & 0xffffff00) < 0x300) {
      FUN_00433690(0,"\n*****ERROR: updsvr on console needs to be updated!\n");
      return 0;
    }
    FUN_00430460(param_3);
    uVar4 = DAT_00479580[6];
    iVar2 = FUN_004308d0(param_1,DAT_00479580[3],DAT_00479580[5]);
    if (((iVar2 == 0) ||
        (bVar1 = FUN_00430fe0(param_1,param_2,param_4,uVar4,in_stack_fffffff4),
        CONCAT31(extraout_var,bVar1) == 0)) || (iVar2 = FUN_00430e00(param_1), iVar2 == 0)) {
      uVar3 = 0;
    }
    else {
      DAT_00479f15 = (undefined1)DAT_00479580[7];
      FUN_00433690(param_1,"CF LDV          : %d\n");
      FUN_00433690(param_1,"Pairing Value   : 0x%06x ");
      if (param_4 == (undefined4 *)0x0) {
        FUN_00433690(param_1,"\n");
      }
      else {
        FUN_0041ade0(DAT_00479580[7] >> 8);
      }
      FUN_004318e0();
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
    FUN_00433690(0,
                 "\n*****ERROR: console hv patches are not recent enough to support update mode!\n")
    ;
    FUN_00433690(0,"\n            update console patches and reboot before trying again.\n");
  }
  if (DAT_0047957c != (FILE *)0x0) {
    fflush(DAT_0047957c);
    fclose(DAT_0047957c);
  }
  return uVar3;
}

