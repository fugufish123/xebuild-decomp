
int __cdecl FUN_00415b00(uint *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_0040ff40((char *)param_1,DAT_00479f60);
  if (iVar2 != 0) {
    return -2;
  }
  if (DAT_00479f60 == 0) {
    if (*(char *)((int)param_1 + 0x205) != -1) {
      return -1;
    }
    if (*(char *)((int)param_1 + 0x2305) != -1) {
      return -1;
    }
    iVar3 = (*(byte *)((int)param_1 + 0x202) & 0xf) * 0x100 + (uint)*(byte *)((int)param_1 + 0x201);
    iVar4 = (*(byte *)((int)param_1 + 0x201) & 0xf) * 0x100 + (uint)(byte)param_1[0x80];
    if (DAT_00479f64 == 0) {
      iVar2 = iVar4;
      if ((param_2 != 0) && (param_2 == iVar3)) {
        iVar2 = -6;
        goto LAB_00415c90;
      }
    }
    else {
      iVar2 = iVar3;
      if ((param_2 != 0) && (param_2 == iVar4)) {
        iVar2 = -6;
        goto LAB_00415c90;
      }
    }
    if (iVar2 < param_3 + -1) {
      if (((iVar2 != 0) && (param_2 < param_3 + -0x22)) && (param_2 != iVar2)) {
        iVar2 = -3;
      }
      goto LAB_00415c90;
    }
  }
  else {
    if ((char)param_1[0x80] != -1) {
      return -1;
    }
    if ((char)param_1[0x4280] != -1) {
      return -1;
    }
    iVar2 = (*(byte *)((int)param_1 + 0x202) & 0xf) * 0x100 + (uint)*(byte *)((int)param_1 + 0x201);
    if (iVar2 < param_3 + -1) {
      if (DAT_00479f70 == 0) {
        bVar1 = (byte)param_1[0x83] & 0x3f;
        if ((bVar1 < 0x2a) && (bVar1 != 0)) {
          FUN_00433690(0,"\n\n****************  WARNING  *************************\n");
          FUN_00433690(0,"  nanddump.bin has NAND memory unit data, make\n");
          FUN_00433690(0,"  sure you back up any important data off the\n");
          FUN_00433690(0,"  internal MU before flashing a new image!\n");
          if ((DAT_00479f00 & 0x10000000) != 0) {
            FUN_00433690(0,"\n  xeBuild will attempt to keep this data, but\n");
            FUN_00433690(0,"  many things could cause it to be invalid/corrupt.\n");
          }
          FUN_00433690(0,"****************************************************\n\n");
          DAT_00479f70 = 1;
          DAT_00479f6c = 1;
        }
      }
      else if (iVar2 == 0) {
        iVar2 = 0;
      }
      else if ((param_2 < param_3 + -0x22) && (iVar2 != param_2)) {
        iVar2 = -3;
      }
      goto LAB_00415c90;
    }
  }
  iVar2 = -3;
LAB_00415c90:
  if ((int)DAT_00479f00 < 0) {
    return iVar2;
  }
  iVar3 = FUN_0040fcc0(param_1,DAT_00479f60);
  if (iVar3 == 0) {
    iVar2 = -4;
  }
  return iVar2;
}

