
void __cdecl FUN_0040c020(int param_1,int param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char local_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  
  pcVar1 = (char *)(param_1 + 4);
  if ((param_3 & 0x8000000) != 0) {
    if (10 < param_2) {
      iVar3 = 4;
      pcVar2 = pcVar1;
      do {
        if ((((*pcVar2 == '\x05') && (pcVar2[2] == -0x1b)) && (pcVar2[4] == -0x4c)) &&
           (pcVar2[5] == '\x05')) {
          FUN_00433690(1,"patching SMC reset limit at offset: 0x%x\n");
          *pcVar2 = '\0';
          *(undefined1 *)(param_1 + 1 + iVar3) = 0;
          FUN_00433690(1,"SMC reset limit patched successfully!\n");
          goto joined_r0x0040c0fa;
        }
        iVar3 = iVar3 + 1;
        pcVar2 = pcVar2 + 1;
      } while (param_2 + -6 != iVar3);
    }
    FUN_00433690(0,"\n******* WARNING: could not patch SMC reset limit!\n\n");
  }
joined_r0x0040c0fa:
  if ((param_3 & 0x400000) != 0) {
    local_2c[0] = -0x5e;
    local_2c[1] = -0x70;
    local_2c[2] = -0x4d;
    local_2c[3] = '\"';
    local_24 = 0x22c3;
    iVar3 = FUN_00421200(pcVar1,param_2 + -4,local_2c,4,&local_24,4);
    if (iVar3 == 0) {
      FUN_00433690(0,"\n******* WARNING: could not patch SMC to disable EJECT button.\n\n");
    }
    else {
      FUN_00433690(1,"SMC EJECT button disabled successfully!\n");
    }
  }
  if ((param_3 & 0x800000) != 0) {
    local_2c[0] = -0x1c;
    local_2c[1] = -0x5e;
    local_2c[2] = -0x31;
    local_2c[3] = -0x6e;
    local_2c[4] = -0x20;
    local_2c[5] = -0x5e;
    local_2c[6] = -0x32;
    local_2c[7] = '\"';
    local_24 = 0x22d3e4;
    local_20 = 0;
    iVar3 = FUN_00421200(pcVar1,param_2 + -4,local_2c,8,&local_24,8);
    if (iVar3 != 0) {
      FUN_00433690(1,"SMC ROL center blink disabled successfully!\n");
      return;
    }
    FUN_00433690(0,"\n******* WARNING: could not patch SMC to disable ROL center blinking\n\n");
    return;
  }
  return;
}

