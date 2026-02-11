
int __cdecl FUN_00408260(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  char *_Source;
  byte *unaff_EBP;
  int unaff_EDI;
  undefined4 auStack_8a4 [9];
  char acStack_880 [1024];
  char acStack_480 [1036];
  int iStack_74;
  byte *local_44;
  char *local_40;
  byte *local_30;
  byte *local_2c;
  byte *local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 local_1e [7];
  
  uStack_24._2_2_ = 0x7564;
  uStack_20 = 0x6d6d;
  local_1e[0] = 0x79;
  local_30 = (byte *)0x0;
  local_2c = (byte *)0x0;
  local_28 = (byte *)0x0;
  FUN_00433610("client");
  local_28 = (byte *)0x0;
  if ((int)param_1 < 1) goto LAB_00408a30;
  pbVar3 = (byte *)0x0;
  local_44 = (byte *)0x0;
  unaff_EBP = (byte *)0x0;
  local_40 = (char *)0x0;
  unaff_EDI = 0;
LAB_00408301:
  iVar4 = _strnicmp(*(char **)(param_2 + (int)pbVar3 * 4),"help",2);
  if (((iVar4 == 0) ||
      (iVar4 = _strnicmp(*(char **)(param_2 + (int)local_28 * 4),"-?",2), iVar4 == 0)) ||
     (iVar4 = _strnicmp(*(char **)(param_2 + (int)local_28 * 4),"/?",2), iVar4 == 0)) {
    FUN_00406330(0);
switchD_00408783_caseD_c:
    if (unaff_EBP == (byte *)((int)&uStack_24 + 2)) {
      FUN_00406740((char *)0x0);
    }
    else {
      FUN_00406740((char *)unaff_EBP);
    }
switchD_00408783_caseD_6:
    if (unaff_EDI != 0) {
LAB_0040881c:
      FUN_00420840(unaff_EDI);
    }
    FUN_0041fa40();
    return 0;
  }
  iVar4 = _strnicmp(*(char **)(param_2 + (int)local_28 * 4),"-noenter",8);
  if (iVar4 == 0) {
    FUN_00433690(0,"<enter> key on completion suppressed\n");
    DAT_0044a524 = 0;
    pbVar3 = local_28 + 1;
    goto LAB_004082f5;
  }
  iVar4 = _strnicmp(*(char **)(param_2 + (int)local_28 * 4),"-reboot",7);
  if (iVar4 == 0) {
    if (unaff_EDI == 1) {
      FUN_00433690(0,"shutdown superseded by reboot, ignoring -s in favor of -reboot\n");
    }
    unaff_EDI = 2;
    FUN_00433690(0,"setting reboot on completion\n");
    pbVar3 = local_28 + 1;
    local_28 = pbVar3;
    goto joined_r0x004083ef;
  }
  iVar4 = _strnicmp(*(char **)(param_2 + (int)local_28 * 4),"-bp",3);
  if (iVar4 == 0) {
    pbVar1 = local_28 + 1;
    pbVar3 = *(byte **)(param_2 + (int)pbVar1 * 4);
    if (((pbVar3 == (byte *)0x0) || (param_1 == pbVar1)) || (*pbVar3 == 0x2d)) goto LAB_00408b9b;
    pbVar3 = local_28 + 2;
    pbVar2 = *(byte **)(param_2 + 4 + (int)pbVar1 * 4);
    if (((param_1 == pbVar3) || (pbVar2 == (byte *)0x0)) || (*pbVar2 == 0x2d)) {
LAB_00408b88:
      FUN_00406330(4);
LAB_00408b9b:
      FUN_00406330(3);
      goto LAB_00408bae;
    }
    local_30 = pbVar2;
    if (local_44 == (byte *)0x0) {
      unaff_EBP = *(byte **)(param_2 + (int)pbVar1 * 4);
      local_28 = pbVar3;
      FUN_00433690(0,"setting binary patch file to %s, offset %s\n");
      local_44 = (byte *)0xb;
      pbVar3 = local_28 + 1;
      goto LAB_004082f5;
    }
LAB_00408c70:
    FUN_00406330(5);
    unaff_EBP = pbVar3;
  }
  else {
    iVar4 = _strnicmp(*(char **)(param_2 + (int)local_28 * 4),"-rb",3);
    if (iVar4 == 0) {
      unaff_EBP = (byte *)FUN_00408160(param_1,param_2,&local_28,local_44,(char *)0x1,&local_30,
                                       (byte *)&local_2c);
      FUN_00433690(0,"reading %s blocks to %s, starting block %s\n");
      local_44 = (byte *)0x8;
      pbVar3 = local_28 + 1;
      goto LAB_004082f5;
    }
    iVar4 = _strnicmp(*(char **)(param_2 + (int)local_28 * 4),"-wb",3);
    if (iVar4 == 0) {
      pbVar1 = local_28 + 1;
      pbVar3 = *(byte **)(param_2 + (int)pbVar1 * 4);
      if (((param_1 == pbVar1) || (pbVar3 == (byte *)0x0)) || (*pbVar3 == 0x2d)) goto LAB_00408b9b;
      pbVar2 = *(byte **)(param_2 + 4 + (int)pbVar1 * 4);
      pbVar3 = local_28 + 2;
      if (((pbVar2 == (byte *)0x0) || (param_1 == pbVar3)) || (*pbVar2 == 0x2d)) goto LAB_00408b88;
      local_30 = pbVar2;
      if (local_44 == (byte *)0x0) {
        unaff_EBP = *(byte **)(param_2 + (int)pbVar1 * 4);
        local_28 = pbVar3;
        FUN_00433690(0,"writing blocks from %s, starting at block %s\n");
        local_44 = (byte *)0x9;
        pbVar3 = local_28 + 1;
        goto LAB_004082f5;
      }
      goto LAB_00408c70;
    }
    iVar4 = _strnicmp(*(char **)(param_2 + (int)local_28 * 4),"-eb",3);
    if (iVar4 != 0) {
      iVar4 = _strnicmp(*(char **)(param_2 + (int)local_28 * 4),"-s",2);
      if (iVar4 == 0) {
        if (unaff_EDI != 2) {
          unaff_EDI = 1;
          FUN_00433690(0,"setting shutdown on completion\n");
          pbVar3 = local_28 + 1;
          goto LAB_004082f5;
        }
        FUN_00433690(0,"reboot has already been set on command line, ignoring -s\n");
        pbVar3 = local_28 + 1;
        goto LAB_004082f5;
      }
      iVar4 = _strnicmp(*(char **)(param_2 + (int)local_28 * 4),"-keys",5);
      if (iVar4 == 0) {
        local_44 = (byte *)0x3;
        unaff_EBP = (byte *)((int)&uStack_24 + 2);
        pbVar3 = local_28 + 1;
        goto LAB_004082f5;
      }
      iVar4 = _strnicmp(*(char **)(param_2 + (int)local_28 * 4),"-ip",3);
      pbVar3 = unaff_EBP;
      if (iVar4 != 0) goto LAB_00408a44;
      pbVar3 = local_28 + 1;
      local_40 = *(char **)(param_2 + (int)pbVar3 * 4);
      if (((local_40 != (char *)0x0) && (param_1 != pbVar3)) && (*local_40 != '-')) {
        local_28 = pbVar3;
        FUN_00433690(0,"setting forced IP to %s\n");
        pbVar3 = local_28 + 1;
        goto LAB_004082f5;
      }
      goto LAB_00408c96;
    }
    pbVar3 = local_28 + 1;
    unaff_EBP = *(byte **)(param_2 + (int)pbVar3 * 4);
    if (((unaff_EBP == (byte *)0x0) || (param_1 == pbVar3)) || (*unaff_EBP == 0x2d))
    goto LAB_00408c96;
    if (local_44 == (byte *)0x0) {
      local_28 = pbVar3;
      FUN_00433690(0,"erase block set to %s\n");
      local_44 = (byte *)0xa;
      pbVar3 = local_28 + 1;
      goto LAB_004082f5;
    }
  }
  iStack_74 = 0x408c96;
  FUN_00406330(5);
LAB_00408c96:
  FUN_00406330(3);
LAB_00408ca9:
  FUN_00406330(3);
LAB_00408cbc:
  FUN_00406330(5);
LAB_00408ccf:
  iVar4 = _strnicmp(*(char **)(param_2 + CONCAT22(uStack_24._2_2_,(undefined2)uStack_24) * 4),"-c",2
                   );
  if (iVar4 == 0) {
    pbVar3 = (byte *)(CONCAT22(uStack_24._2_2_,(undefined2)uStack_24) + 1);
    unaff_EBP = *(byte **)(param_2 + (int)pbVar3 * 4);
    if (((unaff_EBP == (byte *)0x0) || (param_1 == pbVar3)) || (*unaff_EBP == 0x2d))
    goto LAB_00408ca9;
    if (local_40 != (char *)0x0) goto LAB_00408cbc;
    uStack_24 = pbVar3;
    FUN_00433690(0,"setting xbox compatibility files base path to %s\n");
    local_40 = (char *)0x5;
    pbVar3 = uStack_24 + 1;
  }
  else {
    iVar4 = _strnicmp(*(char **)(param_2 + CONCAT22(uStack_24._2_2_,(undefined2)uStack_24) * 4),"-i"
                      ,2);
    if (iVar4 == 0) {
      pbVar3 = (byte *)(CONCAT22(uStack_24._2_2_,(undefined2)uStack_24) + 1);
      unaff_EBP = *(byte **)(param_2 + (int)pbVar3 * 4);
      if (unaff_EBP != (byte *)0x0) {
        if (param_1 == pbVar3) {
          local_40 = (char *)0xc;
LAB_00408e34:
          uStack_24._0_2_ = SUB42(pbVar3,0);
          uStack_24._2_2_ = (undefined2)((uint)pbVar3 >> 0x10);
          unaff_EBP = (byte *)local_1e;
          goto LAB_004083f5;
        }
        if (*unaff_EBP != 0x2d) {
          uStack_24 = pbVar3;
          FUN_00433690(0,"info dump path set to %s\n");
          local_40 = (char *)0xc;
          pbVar3 = uStack_24 + 1;
          goto LAB_004082f5;
        }
      }
      local_40 = (char *)0xc;
      unaff_EBP = (byte *)local_1e;
    }
    else {
      iVar4 = _strnicmp(*(char **)(param_2 + CONCAT22(uStack_24._2_2_,(undefined2)uStack_24) * 4),
                        "-p",2);
      if (iVar4 == 0) {
        pbVar3 = (byte *)(CONCAT22(uStack_24._2_2_,(undefined2)uStack_24) + 1);
        unaff_EBP = *(byte **)(param_2 + (int)pbVar3 * 4);
        if (unaff_EBP != (byte *)0x0) {
          if (param_1 == pbVar3) {
            local_40 = (char *)0x7;
            goto LAB_00408e34;
          }
          if (*unaff_EBP != 0x2d) {
            uStack_24 = pbVar3;
            FUN_00433690(0,"patch file set to %s\n");
            local_40 = (char *)0x7;
            pbVar3 = uStack_24 + 1;
            goto LAB_004082f5;
          }
        }
        local_40 = (char *)0x7;
        unaff_EBP = (byte *)local_1e;
      }
      else {
        iVar4 = _strnicmp(*(char **)(param_2 + CONCAT22(uStack_24._2_2_,(undefined2)uStack_24) * 4),
                          "-v",2);
        if (iVar4 != 0) {
          FUN_00406330(1);
          iStack_74 = param_2;
          strcpy(acStack_880,&DAT_0047ad4c);
          pvVar6 = FUN_004481c0(acStack_880);
          if (pvVar6 == (void *)0x0) {
            return 0;
          }
          goto LAB_00408f00;
        }
        FUN_004335a0(*(undefined1 *)
                      (*(int *)(param_2 + CONCAT22(uStack_24._2_2_,(undefined2)uStack_24) * 4) + 2))
        ;
        pbVar3 = (byte *)(CONCAT22(uStack_24._2_2_,(undefined2)uStack_24) + 1);
      }
    }
  }
LAB_004082f5:
  do {
    uStack_24._0_2_ = SUB42(pbVar3,0);
    uStack_24._2_2_ = (undefined2)((uint)pbVar3 >> 0x10);
joined_r0x004083ef:
    if ((int)pbVar3 < (int)param_1) goto LAB_00408301;
LAB_004083f5:
    if ((local_44 != (byte *)0x0) && (unaff_EBP != (byte *)0x0)) {
      iVar4 = FUN_0041f700((int)local_40);
      if (iVar4 == 0) {
LAB_00408421:
        FUN_00433690(0,"\n\n***** ERROR: unable to connect to xbox server\n");
        return 0;
      }
      DAT_0046f160 = FUN_0041fe10();
      switch(local_44) {
      default:
        FUN_00433690(0,"\n\n***** ERROR: invalid mode specified, please inform author\n");
        break;
      case (byte *)0x1:
        FUN_0041fe20((char *)unaff_EBP);
        break;
      case (byte *)0x2:
        FUN_00406980((char *)unaff_EBP);
        break;
      case (byte *)0x3:
        FUN_00406c60();
        break;
      case (byte *)0x4:
        if ((*(byte *)(DAT_0046f160 + 0x10) & 0x20) == 0) {
          FUN_00433690(0,"\n\n***** ERROR: cannot send avatar data when a HDD does not exist!\n");
        }
        else {
          FUN_00432e50((char *)unaff_EBP,*(uint *)(DAT_0046f160 + 4));
        }
        break;
      case (byte *)0x5:
        if ((*(byte *)(DAT_0046f160 + 0x10) & 0x20) == 0) {
          FUN_00433690(0,
                       "\n\n***** ERROR: cannot send xbox compatibility data when a HDD does not exist!\n"
                      );
        }
        else {
          FUN_00433440((char *)unaff_EBP);
        }
        break;
      case (byte *)0x6:
        break;
      case (byte *)0x7:
        if (unaff_EBP == (byte *)((int)&uStack_24 + 2)) {
          FUN_00407320((char *)0x0);
        }
        else {
          FUN_00407320((char *)unaff_EBP);
        }
        break;
      case (byte *)0x8:
        FUN_004076b0((char *)unaff_EBP,local_30,local_2c);
        break;
      case (byte *)0x9:
        FUN_00407850((char *)unaff_EBP,local_30);
        break;
      case (byte *)0xa:
        uVar5 = FUN_00421de0(unaff_EBP,0xffffffff);
        if (uVar5 == 0xffffffff) {
          FUN_00433690(0,
                       "\n\n***** ERROR: Invalid arguments specified, please provide hex only for offset!\n"
                      );
        }
        else if (uVar5 < *(uint *)(DAT_0046f160 + 0x14) / *(uint *)(DAT_0046f160 + 0x18)) {
          FUN_00433690(0,"erasing block 0x%x...");
          iVar4 = FUN_00420320((ushort)uVar5,1);
          if (iVar4 == 0) {
            FUN_00433690(0,"\n\n***** ERROR: Failed to erase block 0x%x!\n");
          }
          else {
            FUN_00433690(0,"Success!\n");
          }
        }
        else {
          FUN_00433690(0,"\n\n***** ERROR: Block 0x%x is outside system area!\n");
        }
        break;
      case (byte *)0xb:
        FUN_00407bf0((char *)unaff_EBP,local_30);
        break;
      case (byte *)0xc:
        goto switchD_00408783_caseD_c;
      }
      goto switchD_00408783_caseD_6;
    }
    if (unaff_EDI != 0) {
      iVar4 = FUN_0041f700((int)local_40);
      if (iVar4 == 0) goto LAB_00408421;
      DAT_0046f160 = FUN_0041fe10();
      goto LAB_0040881c;
    }
LAB_00408a30:
    FUN_00406330(2);
    pbVar3 = unaff_EBP;
LAB_00408a44:
    iVar4 = _strnicmp(*(char **)(param_2 + CONCAT22(uStack_24._2_2_,(undefined2)uStack_24) * 4),"-r"
                      ,2);
    if (iVar4 != 0) {
      iVar4 = _strnicmp(*(char **)(param_2 + CONCAT22(uStack_24._2_2_,(undefined2)uStack_24) * 4),
                        "-w",2);
      if (iVar4 == 0) {
        pbVar3 = (byte *)(CONCAT22(uStack_24._2_2_,(undefined2)uStack_24) + 1);
        unaff_EBP = *(byte **)(param_2 + (int)pbVar3 * 4);
        if (((param_1 == pbVar3) || (unaff_EBP == (byte *)0x0)) || (*unaff_EBP == 0x2d))
        goto LAB_00408ca9;
        if (local_40 != (char *)0x0) goto LAB_00408cbc;
        uStack_24 = pbVar3;
        FUN_00433690(0,"setting write filename to %s\n");
        local_40 = (char *)0x2;
        pbVar3 = uStack_24 + 1;
        goto LAB_004082f5;
      }
LAB_00408bae:
      iVar4 = _strnicmp(*(char **)(param_2 + CONCAT22(uStack_24._2_2_,(undefined2)uStack_24) * 4),
                        "-e",2);
      unaff_EBP = pbVar3;
      if (iVar4 == 0) {
        pbVar3 = (byte *)(CONCAT22(uStack_24._2_2_,(undefined2)uStack_24) + 1);
        unaff_EBP = *(byte **)(param_2 + (int)pbVar3 * 4);
        if (((unaff_EBP == (byte *)0x0) || (param_1 == pbVar3)) || (*unaff_EBP == 0x2d))
        goto LAB_00408ca9;
        if (local_40 != (char *)0x0) goto LAB_00408cbc;
        uStack_24 = pbVar3;
        FUN_00433690(0,"setting avatar/kinect files base path to %s\n");
        local_40 = (char *)0x4;
        pbVar3 = uStack_24 + 1;
        goto LAB_004082f5;
      }
      goto LAB_00408ccf;
    }
    pbVar3 = (byte *)(CONCAT22(uStack_24._2_2_,(undefined2)uStack_24) + 1);
    unaff_EBP = *(byte **)(param_2 + (int)pbVar3 * 4);
    if (((param_1 == pbVar3) || (unaff_EBP == (byte *)0x0)) || (*unaff_EBP == 0x2d))
    goto LAB_00408ca9;
    if (local_40 != (char *)0x0) goto LAB_00408cbc;
    uStack_24 = pbVar3;
    FUN_00433690(0,"setting read filename to %s\n");
    local_40 = (char *)0x1;
    pbVar3 = uStack_24 + 1;
  } while( true );
LAB_00408f00:
  iVar4 = FUN_00448360((int)pvVar6);
  while( true ) {
    if (iVar4 == 0) {
      iVar4 = FUN_00448470(pvVar6);
      return iVar4;
    }
    _Source = (char *)(iVar4 + 8);
    strcpy(acStack_480,acStack_880);
    strcat(acStack_480,_Source);
    iVar4 = FUN_00448820(acStack_480,auStack_8a4);
    if (iVar4 < 0) goto LAB_00408f00;
    iVar4 = _stricmp(_Source,s_smc_bin_0044a340);
    if (iVar4 != 0) break;
    strcpy(s_smc_bin_0044a340,_Source);
    iVar4 = FUN_00448360((int)pvVar6);
  }
  iVar4 = _stricmp(_Source,s_kv_bin_0044a360);
  if (iVar4 == 0) {
    strcpy(s_kv_bin_0044a360,_Source);
  }
  else {
    iVar4 = _stricmp(_Source,s_patches__0044a3e0);
    if (iVar4 == 0) {
      strcpy(s_patches__0044a3e0,_Source);
    }
  }
  goto LAB_00408f00;
}

