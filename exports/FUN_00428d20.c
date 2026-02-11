
void __cdecl FUN_00428d20(int param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  
  FUN_00433690(1,&DAT_00458f80);
  FUN_00433690(1,&DAT_00458fb4);
  FUN_00433690(1,"Cpu Fan     : ");
  if (*(char *)(param_1 + 0x11) < '\0') {
    FUN_00433690(1,"%d%%%% (overridden)\n");
  }
  else {
    FUN_00433690(1,"(auto)\n");
  }
  FUN_00433690(1,"Gpu Fan     : ");
  if (*(char *)(param_1 + 0x12) < '\0') {
    FUN_00433690(1,"%d%%%% (overridden)\n");
  }
  else {
    FUN_00433690(1,"(auto)\n");
  }
  FUN_00433690(1,"MAC Address : ");
  FUN_004233b0(1,param_1 + 0x220);
  uVar1 = *(uint *)(param_1 + 0x228);
  uVar1 = (uVar1 >> 0x18) + uVar1 * 0x1000000 + (uVar1 & 0xff00) * 0x100 + (uVar1 >> 8 & 0xff00);
  if (uVar1 == 0x200) {
    FUN_00433690(1,"\nAVRegion    : 0x%08x (NTSC-J)\n");
  }
  else if (uVar1 < 0x201) {
    if (uVar1 == 0x100) {
      FUN_00433690(1,"\nAVRegion    : 0x%08x (NTSC-M)\n");
    }
    else {
LAB_004290c1:
      FUN_00433690(1,"\nAVRegion    : 0x%08x (Unknown)\n");
    }
  }
  else if (uVar1 == 0x300) {
    FUN_00433690(1,"\nAVRegion    : 0x%08x (PAL50)\n");
  }
  else {
    if (uVar1 != 0x400) goto LAB_004290c1;
    FUN_00433690(1,"\nAVRegion    : 0x%08x (PAL60)\n");
  }
  uVar2 = *(ushort *)(param_1 + 0x22c) << 8 | *(ushort *)(param_1 + 0x22c) >> 8;
  FUN_00433690(1,"GameRegion  : 0x%04x ");
  if (uVar2 == 0x1fe) {
LAB_00428feb:
    FUN_00433690(1,"(NTSC/JAP)\n");
  }
  else {
    if (uVar2 < 0x1ff) {
      if (uVar2 == 0x101) {
        FUN_00433690(1,"(NTSC/HK)\n");
        goto LAB_00428fff;
      }
      if (uVar2 == 0x1fc) {
        FUN_00433690(1,"(NTSC/KOR)\n");
        goto LAB_00428fff;
      }
      if (uVar2 == 0xff) {
        FUN_00433690(1,"(NTSC/US)\n");
        goto LAB_00428fff;
      }
    }
    else {
      if (uVar2 == 0x201) {
        FUN_00433690(1,"(PAL/AUS)\n");
        goto LAB_00428fff;
      }
      if (uVar2 < 0x202) {
        if (uVar2 == 0x1ff) goto LAB_00428feb;
      }
      else {
        if (uVar2 == 0x2fe) {
          FUN_00433690(1,"(PAL/EU)\n");
          goto LAB_00428fff;
        }
        if (uVar2 == 0x7fff) {
          FUN_00433690(1,"(DEVKIT)\n");
          goto LAB_00428fff;
        }
      }
    }
    FUN_00433690(1,"(Unknown)\n");
  }
LAB_00428fff:
  iVar3 = 0;
  FUN_00433690(1,"DVDRegion   : %d\n");
  FUN_00433690(1,"resetKey    : ");
  do {
    iVar3 = iVar3 + 1;
    FUN_00433690(1,"%c");
  } while (iVar3 != 4);
  FUN_00433690(1,"\n");
  return;
}

