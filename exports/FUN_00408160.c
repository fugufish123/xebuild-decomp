
int __cdecl
FUN_00408160(byte *param_1,int param_2,undefined4 *param_3,byte *param_4,char *param_5,
            undefined4 *param_6,byte *param_7)

{
  int *piVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined4 auStack_8d4 [9];
  char acStack_8b0 [1024];
  char acStack_4b0 [1036];
  undefined4 uStack_a4;
  byte *pbStack_74;
  char *pcStack_70;
  byte *pbStack_60;
  byte *pbStack_5c;
  byte *pbStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined2 auStack_4e [7];
  char *pcStack_40;
  byte *pbStack_2c;
  int iStack_28;
  int local_20;
  
  pbVar8 = (byte *)*param_3;
  pbVar3 = pbVar8 + 1;
  local_20 = (int)pbVar3 * 4;
  piVar1 = (int *)(param_2 + local_20);
  pcVar7 = (char *)*piVar1;
  if (((pbVar3 == param_1) || (pcVar7 == (char *)0x0)) || (*pcVar7 == '-')) goto LAB_0040823e;
  if (param_6 == (undefined4 *)0x0) {
LAB_004081c7:
    pbVar8 = param_7;
    if (param_7 != (byte *)0x0) {
      pbVar3 = pbVar3 + 1;
      pcVar7 = *(char **)(param_2 + 4 + local_20);
      if (((pcVar7 == (char *)0x0) || (param_1 == pbVar3)) || (*pcVar7 == '-')) goto LAB_0040822a;
      *(char **)param_7 = pcVar7;
    }
    if ((param_4 == (byte *)0x0) || (param_5 == (char *)0x0)) {
      *param_3 = pbVar3;
      return *piVar1;
    }
    pcStack_40 = (char *)0x40822a;
    FUN_00406330(5);
    pcVar7 = param_5;
    param_1 = param_4;
  }
  else {
    pbVar3 = pbVar8 + 2;
    pcVar7 = *(char **)(param_2 + 4 + local_20);
    if (((pcVar7 != (char *)0x0) && (param_1 != pbVar3)) && (*pcVar7 != '-')) {
      *param_6 = pcVar7;
      local_20 = local_20 + 4;
      goto LAB_004081c7;
    }
  }
LAB_0040822a:
  FUN_00406330(4);
LAB_0040823e:
  FUN_00406330(3);
  uStack_54._2_2_ = 0x7564;
  uStack_50 = 0x6d6d;
  auStack_4e[0] = 0x79;
  pbStack_60 = (byte *)0x0;
  pbStack_5c = (byte *)0x0;
  pbStack_58 = (byte *)0x0;
  pcStack_40 = pcVar7;
  FUN_00433610("client");
  pbStack_58 = (byte *)0x0;
  if ((int)pbStack_2c < 1) goto LAB_00408a30;
  pbVar3 = (byte *)0x0;
  pbStack_74 = (byte *)0x0;
  pbVar8 = (byte *)0x0;
  pcStack_70 = (char *)0x0;
  param_1 = (byte *)0x0;
LAB_00408301:
  iVar4 = _strnicmp(*(char **)(iStack_28 + (int)pbVar3 * 4),"help",2);
  if (((iVar4 == 0) ||
      (iVar4 = _strnicmp(*(char **)(iStack_28 + (int)pbStack_58 * 4),"-?",2), iVar4 == 0)) ||
     (iVar4 = _strnicmp(*(char **)(iStack_28 + (int)pbStack_58 * 4),"/?",2), iVar4 == 0)) {
    FUN_00406330(0);
switchD_00408783_caseD_c:
    if (pbVar8 == (byte *)((int)&uStack_54 + 2)) {
      FUN_00406740((char *)0x0);
    }
    else {
      FUN_00406740((char *)pbVar8);
    }
switchD_00408783_caseD_6:
    if (param_1 != (byte *)0x0) {
LAB_0040881c:
      FUN_00420840((int)param_1);
    }
    FUN_0041fa40();
    return 0;
  }
  iVar4 = _strnicmp(*(char **)(iStack_28 + (int)pbStack_58 * 4),"-noenter",8);
  if (iVar4 == 0) {
    FUN_00433690(0,"<enter> key on completion suppressed\n");
    DAT_0044a524 = 0;
    pbVar3 = pbStack_58 + 1;
    goto LAB_004082f5;
  }
  iVar4 = _strnicmp(*(char **)(iStack_28 + (int)pbStack_58 * 4),"-reboot",7);
  if (iVar4 == 0) {
    if (param_1 == (byte *)0x1) {
      FUN_00433690(0,"shutdown superseded by reboot, ignoring -s in favor of -reboot\n");
    }
    param_1 = (byte *)0x2;
    FUN_00433690(0,"setting reboot on completion\n");
    pbVar3 = pbStack_58 + 1;
    pbStack_58 = pbVar3;
    goto joined_r0x004083ef;
  }
  iVar4 = _strnicmp(*(char **)(iStack_28 + (int)pbStack_58 * 4),"-bp",3);
  if (iVar4 == 0) {
    pbVar8 = pbStack_58 + 1;
    pbVar3 = *(byte **)(iStack_28 + (int)pbVar8 * 4);
    if (((pbVar3 == (byte *)0x0) || (pbStack_2c == pbVar8)) || (*pbVar3 == 0x2d)) goto LAB_00408b9b;
    pbVar3 = pbStack_58 + 2;
    pbVar2 = *(byte **)(iStack_28 + 4 + (int)pbVar8 * 4);
    if (((pbStack_2c == pbVar3) || (pbVar2 == (byte *)0x0)) || (*pbVar2 == 0x2d)) {
LAB_00408b88:
      FUN_00406330(4);
LAB_00408b9b:
      FUN_00406330(3);
      goto LAB_00408bae;
    }
    pbStack_60 = pbVar2;
    if (pbStack_74 == (byte *)0x0) {
      pbVar8 = *(byte **)(iStack_28 + (int)pbVar8 * 4);
      pbStack_58 = pbVar3;
      FUN_00433690(0,"setting binary patch file to %s, offset %s\n");
      pbStack_74 = (byte *)0xb;
      pbVar3 = pbStack_58 + 1;
      goto LAB_004082f5;
    }
LAB_00408c70:
    FUN_00406330(5);
    pbVar8 = pbVar3;
  }
  else {
    iVar4 = _strnicmp(*(char **)(iStack_28 + (int)pbStack_58 * 4),"-rb",3);
    if (iVar4 == 0) {
      pbVar8 = (byte *)FUN_00408160(pbStack_2c,iStack_28,&pbStack_58,pbStack_74,(char *)0x1,
                                    &pbStack_60,(byte *)&pbStack_5c);
      FUN_00433690(0,"reading %s blocks to %s, starting block %s\n");
      pbStack_74 = (byte *)0x8;
      pbVar3 = pbStack_58 + 1;
      goto LAB_004082f5;
    }
    iVar4 = _strnicmp(*(char **)(iStack_28 + (int)pbStack_58 * 4),"-wb",3);
    if (iVar4 == 0) {
      pbVar8 = pbStack_58 + 1;
      pbVar3 = *(byte **)(iStack_28 + (int)pbVar8 * 4);
      if (((pbStack_2c == pbVar8) || (pbVar3 == (byte *)0x0)) || (*pbVar3 == 0x2d))
      goto LAB_00408b9b;
      pbVar2 = *(byte **)(iStack_28 + 4 + (int)pbVar8 * 4);
      pbVar3 = pbStack_58 + 2;
      if (((pbVar2 == (byte *)0x0) || (pbStack_2c == pbVar3)) || (*pbVar2 == 0x2d))
      goto LAB_00408b88;
      pbStack_60 = pbVar2;
      if (pbStack_74 == (byte *)0x0) {
        pbVar8 = *(byte **)(iStack_28 + (int)pbVar8 * 4);
        pbStack_58 = pbVar3;
        FUN_00433690(0,"writing blocks from %s, starting at block %s\n");
        pbStack_74 = (byte *)0x9;
        pbVar3 = pbStack_58 + 1;
        goto LAB_004082f5;
      }
      goto LAB_00408c70;
    }
    iVar4 = _strnicmp(*(char **)(iStack_28 + (int)pbStack_58 * 4),"-eb",3);
    if (iVar4 != 0) {
      iVar4 = _strnicmp(*(char **)(iStack_28 + (int)pbStack_58 * 4),"-s",2);
      if (iVar4 == 0) {
        if (param_1 != (byte *)0x2) {
          param_1 = (byte *)0x1;
          FUN_00433690(0,"setting shutdown on completion\n");
          pbVar3 = pbStack_58 + 1;
          goto LAB_004082f5;
        }
        FUN_00433690(0,"reboot has already been set on command line, ignoring -s\n");
        pbVar3 = pbStack_58 + 1;
        goto LAB_004082f5;
      }
      iVar4 = _strnicmp(*(char **)(iStack_28 + (int)pbStack_58 * 4),"-keys",5);
      if (iVar4 == 0) {
        pbStack_74 = (byte *)0x3;
        pbVar8 = (byte *)((int)&uStack_54 + 2);
        pbVar3 = pbStack_58 + 1;
        goto LAB_004082f5;
      }
      iVar4 = _strnicmp(*(char **)(iStack_28 + (int)pbStack_58 * 4),"-ip",3);
      pbVar3 = pbVar8;
      if (iVar4 != 0) goto LAB_00408a44;
      pbVar3 = pbStack_58 + 1;
      pcStack_70 = *(char **)(iStack_28 + (int)pbVar3 * 4);
      if (((pcStack_70 != (char *)0x0) && (pbStack_2c != pbVar3)) && (*pcStack_70 != '-')) {
        pbStack_58 = pbVar3;
        FUN_00433690(0,"setting forced IP to %s\n");
        pbVar3 = pbStack_58 + 1;
        goto LAB_004082f5;
      }
      goto LAB_00408c96;
    }
    pbVar3 = pbStack_58 + 1;
    pbVar8 = *(byte **)(iStack_28 + (int)pbVar3 * 4);
    if (((pbVar8 == (byte *)0x0) || (pbStack_2c == pbVar3)) || (*pbVar8 == 0x2d)) goto LAB_00408c96;
    if (pbStack_74 == (byte *)0x0) {
      pbStack_58 = pbVar3;
      FUN_00433690(0,"erase block set to %s\n");
      pbStack_74 = (byte *)0xa;
      pbVar3 = pbStack_58 + 1;
      goto LAB_004082f5;
    }
  }
  uStack_a4 = 0x408c96;
  FUN_00406330(5);
LAB_00408c96:
  FUN_00406330(3);
LAB_00408ca9:
  FUN_00406330(3);
LAB_00408cbc:
  FUN_00406330(5);
LAB_00408ccf:
  iVar4 = _strnicmp(*(char **)(iStack_28 + CONCAT22(uStack_54._2_2_,(undefined2)uStack_54) * 4),"-c"
                    ,2);
  if (iVar4 == 0) {
    pbVar3 = (byte *)(CONCAT22(uStack_54._2_2_,(undefined2)uStack_54) + 1);
    pbVar8 = *(byte **)(iStack_28 + (int)pbVar3 * 4);
    if (((pbVar8 == (byte *)0x0) || (pbStack_2c == pbVar3)) || (*pbVar8 == 0x2d)) goto LAB_00408ca9;
    if (pcStack_70 != (char *)0x0) goto LAB_00408cbc;
    uStack_54 = pbVar3;
    FUN_00433690(0,"setting xbox compatibility files base path to %s\n");
    pcStack_70 = (char *)0x5;
    pbVar3 = uStack_54 + 1;
  }
  else {
    iVar4 = _strnicmp(*(char **)(iStack_28 + CONCAT22(uStack_54._2_2_,(undefined2)uStack_54) * 4),
                      "-i",2);
    if (iVar4 == 0) {
      pbVar3 = (byte *)(CONCAT22(uStack_54._2_2_,(undefined2)uStack_54) + 1);
      pbVar8 = *(byte **)(iStack_28 + (int)pbVar3 * 4);
      if (pbVar8 != (byte *)0x0) {
        if (pbStack_2c == pbVar3) {
          pcStack_70 = (char *)0xc;
LAB_00408e34:
          uStack_54._0_2_ = SUB42(pbVar3,0);
          uStack_54._2_2_ = (undefined2)((uint)pbVar3 >> 0x10);
          pbVar8 = (byte *)auStack_4e;
          goto LAB_004083f5;
        }
        if (*pbVar8 != 0x2d) {
          uStack_54 = pbVar3;
          FUN_00433690(0,"info dump path set to %s\n");
          pcStack_70 = (char *)0xc;
          pbVar3 = uStack_54 + 1;
          goto LAB_004082f5;
        }
      }
      pcStack_70 = (char *)0xc;
      pbVar8 = (byte *)auStack_4e;
    }
    else {
      iVar4 = _strnicmp(*(char **)(iStack_28 + CONCAT22(uStack_54._2_2_,(undefined2)uStack_54) * 4),
                        "-p",2);
      if (iVar4 == 0) {
        pbVar3 = (byte *)(CONCAT22(uStack_54._2_2_,(undefined2)uStack_54) + 1);
        pbVar8 = *(byte **)(iStack_28 + (int)pbVar3 * 4);
        if (pbVar8 != (byte *)0x0) {
          if (pbStack_2c == pbVar3) {
            pcStack_70 = (char *)0x7;
            goto LAB_00408e34;
          }
          if (*pbVar8 != 0x2d) {
            uStack_54 = pbVar3;
            FUN_00433690(0,"patch file set to %s\n");
            pcStack_70 = (char *)0x7;
            pbVar3 = uStack_54 + 1;
            goto LAB_004082f5;
          }
        }
        pcStack_70 = (char *)0x7;
        pbVar8 = (byte *)auStack_4e;
      }
      else {
        iVar4 = _strnicmp(*(char **)(iStack_28 + CONCAT22(uStack_54._2_2_,(undefined2)uStack_54) * 4
                                    ),"-v",2);
        if (iVar4 != 0) {
          FUN_00406330(1);
          strcpy(acStack_8b0,&DAT_0047ad4c);
          pvVar6 = FUN_004481c0(acStack_8b0);
          if (pvVar6 == (void *)0x0) {
            return 0;
          }
          goto LAB_00408f00;
        }
        FUN_004335a0(*(undefined1 *)
                      (*(int *)(iStack_28 + CONCAT22(uStack_54._2_2_,(undefined2)uStack_54) * 4) + 2
                      ));
        pbVar3 = (byte *)(CONCAT22(uStack_54._2_2_,(undefined2)uStack_54) + 1);
      }
    }
  }
LAB_004082f5:
  do {
    uStack_54._0_2_ = SUB42(pbVar3,0);
    uStack_54._2_2_ = (undefined2)((uint)pbVar3 >> 0x10);
joined_r0x004083ef:
    if ((int)pbVar3 < (int)pbStack_2c) goto LAB_00408301;
LAB_004083f5:
    if ((pbStack_74 != (byte *)0x0) && (pbVar8 != (byte *)0x0)) {
      iVar4 = FUN_0041f700((int)pcStack_70);
      if (iVar4 == 0) {
LAB_00408421:
        FUN_00433690(0,"\n\n***** ERROR: unable to connect to xbox server\n");
        return 0;
      }
      DAT_0046f160 = FUN_0041fe10();
      switch(pbStack_74) {
      default:
        FUN_00433690(0,"\n\n***** ERROR: invalid mode specified, please inform author\n");
        break;
      case (byte *)0x1:
        FUN_0041fe20((char *)pbVar8);
        break;
      case (byte *)0x2:
        FUN_00406980((char *)pbVar8);
        break;
      case (byte *)0x3:
        FUN_00406c60();
        break;
      case (byte *)0x4:
        if ((*(byte *)(DAT_0046f160 + 0x10) & 0x20) == 0) {
          FUN_00433690(0,"\n\n***** ERROR: cannot send avatar data when a HDD does not exist!\n");
        }
        else {
          FUN_00432e50((char *)pbVar8,*(uint *)(DAT_0046f160 + 4));
        }
        break;
      case (byte *)0x5:
        if ((*(byte *)(DAT_0046f160 + 0x10) & 0x20) == 0) {
          FUN_00433690(0,
                       "\n\n***** ERROR: cannot send xbox compatibility data when a HDD does not exist!\n"
                      );
        }
        else {
          FUN_00433440((char *)pbVar8);
        }
        break;
      case (byte *)0x6:
        break;
      case (byte *)0x7:
        if (pbVar8 == (byte *)((int)&uStack_54 + 2)) {
          FUN_00407320((char *)0x0);
        }
        else {
          FUN_00407320((char *)pbVar8);
        }
        break;
      case (byte *)0x8:
        FUN_004076b0((char *)pbVar8,pbStack_60,pbStack_5c);
        break;
      case (byte *)0x9:
        FUN_00407850((char *)pbVar8,pbStack_60);
        break;
      case (byte *)0xa:
        uVar5 = FUN_00421de0(pbVar8,0xffffffff);
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
        FUN_00407bf0((char *)pbVar8,pbStack_60);
        break;
      case (byte *)0xc:
        goto switchD_00408783_caseD_c;
      }
      goto switchD_00408783_caseD_6;
    }
    if (param_1 != (byte *)0x0) {
      iVar4 = FUN_0041f700((int)pcStack_70);
      if (iVar4 == 0) goto LAB_00408421;
      DAT_0046f160 = FUN_0041fe10();
      goto LAB_0040881c;
    }
LAB_00408a30:
    FUN_00406330(2);
    pbVar3 = pbVar8;
LAB_00408a44:
    iVar4 = _strnicmp(*(char **)(iStack_28 + CONCAT22(uStack_54._2_2_,(undefined2)uStack_54) * 4),
                      "-r",2);
    if (iVar4 == 0) {
      pbVar3 = (byte *)(CONCAT22(uStack_54._2_2_,(undefined2)uStack_54) + 1);
      pbVar8 = *(byte **)(iStack_28 + (int)pbVar3 * 4);
      if (((pbStack_2c == pbVar3) || (pbVar8 == (byte *)0x0)) || (*pbVar8 == 0x2d))
      goto LAB_00408ca9;
      if (pcStack_70 != (char *)0x0) goto LAB_00408cbc;
      uStack_54 = pbVar3;
      FUN_00433690(0,"setting read filename to %s\n");
      pcStack_70 = (char *)0x1;
      pbVar3 = uStack_54 + 1;
      goto LAB_004082f5;
    }
    iVar4 = _strnicmp(*(char **)(iStack_28 + CONCAT22(uStack_54._2_2_,(undefined2)uStack_54) * 4),
                      "-w",2);
    if (iVar4 != 0) {
LAB_00408bae:
      iVar4 = _strnicmp(*(char **)(iStack_28 + CONCAT22(uStack_54._2_2_,(undefined2)uStack_54) * 4),
                        "-e",2);
      pbVar8 = pbVar3;
      if (iVar4 == 0) {
        pbVar3 = (byte *)(CONCAT22(uStack_54._2_2_,(undefined2)uStack_54) + 1);
        pbVar8 = *(byte **)(iStack_28 + (int)pbVar3 * 4);
        if (((pbVar8 == (byte *)0x0) || (pbStack_2c == pbVar3)) || (*pbVar8 == 0x2d))
        goto LAB_00408ca9;
        if (pcStack_70 != (char *)0x0) goto LAB_00408cbc;
        uStack_54 = pbVar3;
        FUN_00433690(0,"setting avatar/kinect files base path to %s\n");
        pcStack_70 = (char *)0x4;
        pbVar3 = uStack_54 + 1;
        goto LAB_004082f5;
      }
      goto LAB_00408ccf;
    }
    pbVar3 = (byte *)(CONCAT22(uStack_54._2_2_,(undefined2)uStack_54) + 1);
    pbVar8 = *(byte **)(iStack_28 + (int)pbVar3 * 4);
    if (((pbStack_2c == pbVar3) || (pbVar8 == (byte *)0x0)) || (*pbVar8 == 0x2d)) goto LAB_00408ca9;
    if (pcStack_70 != (char *)0x0) goto LAB_00408cbc;
    uStack_54 = pbVar3;
    FUN_00433690(0,"setting write filename to %s\n");
    pcStack_70 = (char *)0x2;
    pbVar3 = uStack_54 + 1;
  } while( true );
LAB_00408f00:
  iVar4 = FUN_00448360((int)pvVar6);
  while( true ) {
    if (iVar4 == 0) {
      iVar4 = FUN_00448470(pvVar6);
      return iVar4;
    }
    pcVar7 = (char *)(iVar4 + 8);
    strcpy(acStack_4b0,acStack_8b0);
    strcat(acStack_4b0,pcVar7);
    iVar4 = FUN_00448820(acStack_4b0,auStack_8d4);
    if (iVar4 < 0) goto LAB_00408f00;
    iVar4 = _stricmp(pcVar7,s_smc_bin_0044a340);
    if (iVar4 != 0) break;
    strcpy(s_smc_bin_0044a340,pcVar7);
    iVar4 = FUN_00448360((int)pvVar6);
  }
  iVar4 = _stricmp(pcVar7,s_kv_bin_0044a360);
  if (iVar4 == 0) {
    strcpy(s_kv_bin_0044a360,pcVar7);
  }
  else {
    iVar4 = _stricmp(pcVar7,s_patches__0044a3e0);
    if (iVar4 == 0) {
      strcpy(s_patches__0044a3e0,pcVar7);
    }
  }
  goto LAB_00408f00;
}

