
undefined4 __cdecl FUN_004291f0(int *param_1)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar5;
  undefined4 uVar6;
  
  FUN_00433690(1,"Checking for smc config data patches\n");
  if (DAT_00479f18 - 0x28U < 0x51) {
    *(char *)((int)param_1 + 0x29) = (char)DAT_00479f18;
    bVar2 = true;
  }
  else {
    bVar2 = false;
    if (DAT_00479f18 - 1U < 0xfffffffe) {
      FUN_00433690(0,"Ini value %d for %s is out of range (%d-%d), not using\n");
    }
  }
  if (DAT_00479f1c - 0x28U < 0x51) {
    *(char *)((int)param_1 + 0x2a) = (char)DAT_00479f1c;
    bVar2 = true;
  }
  else if (DAT_00479f1c - 1U < 0xfffffffe) {
    FUN_00433690(0,"Ini value %d for %s is out of range (%d-%d), not using\n");
  }
  if (DAT_00479f20 - 0x28U < 0x51) {
    *(char *)((int)param_1 + 0x2b) = (char)DAT_00479f20;
    bVar2 = true;
  }
  else if (DAT_00479f20 - 1U < 0xfffffffe) {
    FUN_00433690(0,"Ini value %d for %s is out of range (%d-%d), not using\n");
  }
  if (DAT_00479f24 - 0x28U < 0x51) {
    *(char *)(param_1 + 0xb) = (char)DAT_00479f24;
    bVar2 = true;
  }
  else if (DAT_00479f24 - 1U < 0xfffffffe) {
    FUN_00433690(0,"Ini value %d for %s is out of range (%d-%d), not using\n");
  }
  if (DAT_00479f28 - 0x28U < 0x51) {
    *(char *)((int)param_1 + 0x2d) = (char)DAT_00479f28;
    bVar2 = true;
  }
  else if (DAT_00479f28 - 1U < 0xfffffffe) {
    FUN_00433690(0,"Ini value %d for %s is out of range (%d-%d), not using\n");
  }
  if (DAT_00479f2c - 0x28U < 0x51) {
    *(char *)((int)param_1 + 0x2e) = (char)DAT_00479f2c;
    bVar2 = true;
  }
  else if (DAT_00479f2c - 1U < 0xfffffffe) {
    FUN_00433690(0,"Ini value %d for %s is out of range (%d-%d), not using\n");
  }
  if (DAT_00479f30 != -1) {
    if (DAT_00479f30 - 0x28U < 0x3d) {
      bVar2 = true;
      *(byte *)((int)param_1 + 0x11) = (byte)DAT_00479f30 | 0x80;
    }
    else if ((DAT_00479f30 - 1U < 0xfffffffe) &&
            (FUN_00433690(0,"Ini value %d for %s is out of range (%d-%d), not using\n"),
            DAT_00479f30 != 0)) {
      FUN_00433690(0,"***** WARNING: cpu fan speed %d override ignored, not between 40 and 100\n");
    }
    else if (*(char *)((int)param_1 + 0x11) != '\x7f') {
      *(undefined1 *)((int)param_1 + 0x11) = 0x7f;
      bVar2 = true;
    }
  }
  if (DAT_00479f34 != -1) {
    if (DAT_00479f34 - 0x28U < 0x3d) {
      bVar2 = true;
      *(byte *)((int)param_1 + 0x12) = (byte)DAT_00479f34 | 0x80;
    }
    else if ((DAT_00479f34 - 1U < 0xfffffffe) &&
            (FUN_00433690(0,"Ini value %d for %s is out of range (%d-%d), not using\n"),
            DAT_00479f34 != 0)) {
      FUN_00433690(0,
                   "***** WARNING: gpu fan speed override setting ignored, not between 40 and 100\n"
                  );
    }
    else {
      *(undefined1 *)((int)param_1 + 0x12) = 0x7f;
    }
  }
  if (DAT_00479f38 != 0xffffffff) {
    bVar2 = true;
    param_1[0x8a] =
         (DAT_00479f38 >> 8 & 0xff00) +
         (DAT_00479f38 & 0xff00) * 0x100 + (DAT_00479f38 >> 0x18) + DAT_00479f38 * 0x1000000;
  }
  if ((DAT_00479f3c == -1) || (uVar3 = (ushort)DAT_00479f3c, uVar3 == 0)) {
    if (DAT_00479f40 != 0xffffffff) goto LAB_00429379;
LAB_0042958e:
    iVar4 = param_1[0x8d];
  }
  else {
    bVar2 = true;
    *(ushort *)(param_1 + 0x8b) = uVar3 << 8 | uVar3 >> 8;
    if (DAT_00479f40 == 0xffffffff) goto LAB_0042958e;
LAB_00429379:
    bVar2 = true;
    iVar4 = (DAT_00479f40 >> 8 & 0xff00) +
            (DAT_00479f40 & 0xff00) * 0x100 + (DAT_00479f40 >> 0x18) + DAT_00479f40 * 0x1000000;
    param_1[0x8d] = iVar4;
  }
  if (iVar4 == 0) {
    FUN_00433690(0,
                 "****** Warning! SMC config has dvd region as 0, xbox will not play DVD videos like this... forcing it to 1 (NTSC/USA)\n"
                );
    FUN_00433690(0,
                 "       Please set it in boxdata ini file if you require a different region, and run the builder again\n\n"
                );
    param_1[0x8d] = 0x1000000;
    bVar2 = FUN_00424b60();
    if (CONCAT31(extraout_var_00,bVar2) != 0) {
      bVar2 = true;
      goto LAB_00429434;
    }
  }
  else {
    bVar1 = FUN_00424b60();
    if (CONCAT31(extraout_var,bVar1) != 0) {
LAB_00429434:
      bVar1 = DAT_00479f44 != (char)param_1[0x88];
      *(char *)(param_1 + 0x88) = DAT_00479f44;
      if (bVar1) {
        bVar2 = true;
      }
      bVar1 = DAT_00479f45 != *(char *)((int)param_1 + 0x221);
      *(char *)((int)param_1 + 0x221) = DAT_00479f45;
      if (bVar1) {
        bVar2 = true;
      }
      bVar1 = DAT_00479f46 != *(char *)((int)param_1 + 0x222);
      *(char *)((int)param_1 + 0x222) = DAT_00479f46;
      if (bVar1) {
        bVar2 = true;
      }
      bVar1 = DAT_00479f47 != *(char *)((int)param_1 + 0x223);
      *(char *)((int)param_1 + 0x223) = DAT_00479f47;
      if (bVar1) {
        bVar2 = true;
      }
      bVar1 = DAT_00479f48 != (char)param_1[0x89];
      *(char *)(param_1 + 0x89) = DAT_00479f48;
      if (bVar1) {
        bVar2 = true;
      }
      bVar1 = *(char *)((int)param_1 + 0x225) != DAT_00479f49;
      *(char *)((int)param_1 + 0x225) = DAT_00479f49;
      if (bVar1) {
        bVar2 = true;
      }
    }
    if (!bVar2) {
      FUN_00433690(1,"smc config was not patched\n");
      uVar6 = 0;
      goto LAB_004293d4;
    }
  }
  uVar6 = 1;
  uVar5 = FUN_00422aa0((int)param_1);
  *param_1 = (uVar5 >> 8 & 0xff00) + (uVar5 & 0xff00) * 0x100 + (uVar5 >> 0x18) + uVar5 * 0x1000000;
  FUN_00433690(1,"smc config patched!\n");
LAB_004293d4:
  FUN_00433690(1,"---------------------\n");
  return uVar6;
}

