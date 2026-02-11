
void FUN_0040d500(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  
  FUN_00433690(0,s__________________________________0044a4e0);
  if (DAT_00479eac != 0) {
    FUN_00433690(0,"Kernel    : %d.%d.%d.%d\n");
  }
  FUN_00433690(0,"Console   : ");
  uVar2 = DAT_00479ea4 & 0x40000007;
  if (uVar2 == 5) {
    FUN_00433690(0,"Trinity\n");
  }
  else if (uVar2 < 6) {
    if (uVar2 == 2) {
      FUN_00433690(0,"Zephyr\n");
    }
    else if (uVar2 < 3) {
      if (uVar2 == 1) {
        FUN_00433690(0,"Xenon\n");
      }
      else {
LAB_0040dd29:
        FUN_00433690(0,"whoops, console type was not caught!\n");
      }
    }
    else if (uVar2 == 3) {
      FUN_00433690(0,"Falcon\n");
    }
    else {
      if (uVar2 != 4) goto LAB_0040dd29;
      FUN_00433690(0,"Jasper\n");
    }
  }
  else if (uVar2 == 7) {
    FUN_00433690(0,"Winchester\n");
  }
  else if (uVar2 < 7) {
    FUN_00433690(0,"Corona\n");
  }
  else if (uVar2 == 0x40000004) {
    FUN_00433690(0,"Jasper (big block)\n");
  }
  else {
    if (uVar2 != 0x40000005) goto LAB_0040dd29;
    FUN_00433690(0,"Trinity (big block)\n");
  }
  FUN_00433690(0,"NAND size : ");
  if ((DAT_00479ea4 & 0x10000000) == 0) {
    if ((DAT_00479ea4 & 0x40000000) == 0) {
      if ((DAT_00479ea8 - 6U & 0xfffffffd) == 0) {
        FUN_00433690(0,"64MiB (small block)");
      }
      else {
        FUN_00433690(0,"16MiB");
      }
    }
    else {
      if (DAT_00479f6c == 0) {
        FUN_00433690(0,"64MiB (system only)");
      }
      else {
        FUN_00433690(0,"64MiB + NAND MU area");
      }
      if ((DAT_00479ea4 & 0x20000000) != 0) {
        FUN_00433690(0," (extended size FFS)");
      }
    }
  }
  else {
    FUN_00433690(0,"48MiB MMC (system only)");
  }
  FUN_00433690(0,"\n");
  FUN_00433690(0,"Build     : ");
  switch(DAT_00479ea8) {
  case 1:
    FUN_00433690(0,"Retail\n");
    break;
  case 2:
    FUN_00433690(0,"JTAG\n");
    break;
  case 3:
    if (DAT_00479eb4 == 0) {
      if (DAT_00479eb0 == 0) {
        FUN_00433690(0,"Glitch\n");
      }
      else {
        FUN_00433690(0,"Glitch (v2)\n");
      }
    }
    else {
      FUN_00433690(0,"Glitch (v2 mfg)\n");
    }
    break;
  case 4:
    FUN_00433690(0,"Devgl\n");
    break;
  case 5:
    FUN_00433690(0,"Devgl16\n");
    break;
  case 6:
    FUN_00433690(0,"Devkit\n");
    break;
  case 7:
    FUN_00433690(0,"Devkit16\n");
    break;
  case 8:
    FUN_00433690(0,"Testkit\n");
    goto joined_r0x0040d940;
  case 9:
    FUN_00433690(0,"Testkit16\n");
  }
joined_r0x0040d940:
  if (DAT_00479ea8 - 3U < 3) {
    FUN_00433690(0,"Xell      : power on console with ");
    FUN_0040d370(0,DAT_00479f08);
    if (DAT_00479f0c != 0) {
      FUN_00433690(0,"XellAlt   : power on console with ");
      FUN_0040d370(0,DAT_00479f0c);
    }
  }
  else if (DAT_00479ea8 == 2) {
    if (((byte)DAT_00479f00 & 4) == 0) {
      FUN_00433690(0,"Xell      : starts if tray is ");
      if (((byte)DAT_00479f00 & 2) == 0) {
        FUN_00433690(0,"fully out at boot time\n");
      }
      else {
        FUN_00433690(0,"not closed at boot time\n");
      }
    }
    else {
      FUN_00433690(0,"Xell      : power on console with ");
      FUN_0040d370(0,DAT_00479f08);
      if (DAT_00479f0c != 0) {
        FUN_00433690(0,"XellAlt   : power on console with ");
        FUN_0040d370(0,DAT_00479f0c);
      }
    }
    if (DAT_00479f10 != 0) {
      FUN_00433690(0,"Dualboot  : power on console with ");
      FUN_0040d370(0,DAT_00479f10);
    }
  }
  if ((DAT_00479ea8 - 2U < 2) && (((byte)DAT_00479f00 & 9) != 0)) {
    FUN_00433690(0,"UART      : cygnos/demon speed set\n");
  }
  puVar3 = (undefined4 *)FUN_004133f0();
  if (puVar3 != (undefined4 *)0x0) {
    uStack_3c = *puVar3;
    uStack_38 = puVar3[1];
    uStack_34 = puVar3[2];
    uStack_30 = 0;
    FUN_00433690(0,"Serial    : %s\n");
  }
  iVar4 = FUN_00413410((char *)&uStack_3c);
  if (iVar4 != 0) {
    FUN_00433690(0,"ConsoleId : %s\n");
  }
  iVar4 = FUN_004134f0();
  if (iVar4 != 0) {
    iVar1 = iVar4 + 8;
    FUN_00433690(0,"MoboSerial: ");
    do {
      iVar4 = iVar4 + 1;
      FUN_00433690(0,"%02X");
    } while (iVar1 != iVar4);
    FUN_00433690(0,"\n");
  }
  iVar4 = FUN_00413510((char *)&uStack_3c);
  if (iVar4 != 0) {
    FUN_00433690(0,"Mfg Date  : %s\n");
  }
  FUN_00433690(0,"CPU Key   : ");
  FUN_00423370(0,0x47a11c);
  FUN_00433690(0,"\n1BL Key   : ");
  FUN_00423370(0,0x47a10c);
  FUN_00433690(0,"\n");
  iVar4 = FUN_004133d0();
  if (iVar4 != 0) {
    iVar1 = iVar4 + 0x10;
    FUN_00433690(0,"DVD Key   : ");
    do {
      iVar4 = iVar4 + 1;
      FUN_00433690(0,"%02X");
    } while (iVar1 != iVar4);
    if ((DAT_00479f00._3_1_ & 2) != 0) {
      if (DAT_00479ea8 == 1) {
        FUN_00433690(0," (retail - not patched!)");
      }
      else {
        FUN_00433690(0," (patched)");
      }
    }
    FUN_00433690(0,"\n");
  }
  FUN_00433690(0,"CF LDV    : %d\n");
  iVar4 = FUN_004130b0();
  if (iVar4 != 0) {
    FUN_00433690(0,"KV type   : ");
    iVar4 = FUN_00413090();
    if (iVar4 == 2) {
      FUN_00433690(0,"type2 (hashed - Invalid! Keyvault is modified or from a different CPU key)\n")
      ;
    }
    else if (iVar4 == 3) {
      FUN_00433690(0,"type2 (hashed - Good! Signature is valid.)\n");
    }
    else if (iVar4 == 1) {
      FUN_00433690(0,"type2 (hashed - unchecked, master key not available)\n");
    }
    else {
      FUN_00433690(0,"type1 (no hash)\n");
    }
  }
  if ((DAT_004c97a8 != 0) && (DAT_004c93a8 != '\0')) {
    FUN_00433690(0,"SHA-1 file: %s\n");
  }
  return;
}

