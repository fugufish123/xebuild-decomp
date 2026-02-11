
/* WARNING: Type propagation algorithm not settling */

void FUN_004259a0(void)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  byte *pbVar4;
  size_t sVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  uint uVar7;
  undefined3 extraout_var_15;
  int iVar8;
  int iVar9;
  char *pcVar10;
  
  uVar1 = DAT_00479f00;
  uVar7 = DAT_00479f00;
  if (((DAT_00479f00 & 0x20000000) == 0) && ((DAT_00479f04 & 0x20000000) == 0)) {
    bVar2 = FUN_00423750("nomobile");
    if (CONCAT31(extraout_var_05,bVar2) == 0) {
      pcVar10 = FUN_0040abf0("nomobile");
      if (pcVar10 == (char *)0x0) {
        iVar6 = FUN_0040aad0("nomobile",0);
        uVar1 = DAT_00479f00;
        uVar7 = DAT_00479f00;
        if (iVar6 != 0) {
          FUN_00433690(1,"Using %s option (ini file)\n");
          goto LAB_0042638d;
        }
      }
      else {
        FUN_00433690(0,
                     "***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                    );
        uVar1 = DAT_00479f00;
        uVar7 = DAT_00479f00;
      }
    }
    else {
      FUN_00433690(1,"Using %s option (perbox file)\n");
LAB_0042638d:
      uVar1 = DAT_00479f00 | 0x20000000;
      uVar7 = DAT_00479f00;
    }
  }
  DAT_00479f00 = uVar1;
  if (((uVar7 & 0x40000000) == 0) && ((DAT_00479f04 & 0x40000000) == 0)) {
    bVar2 = FUN_00423750("noremap");
    if (CONCAT31(extraout_var_06,bVar2) == 0) {
      pcVar10 = FUN_0040abf0("noremap");
      if (pcVar10 == (char *)0x0) {
        iVar6 = FUN_0040aad0("noremap",0);
        if (iVar6 != 0) {
          FUN_00433690(1,"Using %s option (ini file)\n");
          goto LAB_004263ed;
        }
      }
      else {
        FUN_00433690(0,
                     "***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                    );
      }
    }
    else {
      FUN_00433690(1,"Using %s option (perbox file)\n");
LAB_004263ed:
      DAT_00479f00 = DAT_00479f00 | 0x40000000;
    }
  }
  if ((-1 < (int)DAT_00479f00) && (-1 < (int)DAT_00479f04)) {
    bVar2 = FUN_00423750("noecdremap");
    if (CONCAT31(extraout_var_01,bVar2) == 0) {
      pcVar10 = FUN_0040abf0("noecdremap");
      if (pcVar10 == (char *)0x0) {
        iVar6 = FUN_0040aad0("noecdremap",0);
        if (iVar6 != 0) {
          FUN_00433690(1,"Using %s option (ini file)\n");
          goto LAB_0042668e;
        }
      }
      else {
        FUN_00433690(0,
                     "***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                    );
      }
    }
    else {
      FUN_00433690(1,"Using %s option (perbox file)\n");
LAB_0042668e:
      DAT_00479f00 = DAT_00479f00 | 0x80000000;
    }
  }
  if (((DAT_00479f00 & 0x10000000) == 0) && ((DAT_00479f04 & 0x10000000) == 0)) {
    bVar2 = FUN_00423750("nandmu");
    if (CONCAT31(extraout_var_10,bVar2) == 0) {
      pcVar10 = FUN_0040abf0("nandmu");
      if (pcVar10 == (char *)0x0) {
        iVar6 = FUN_0040aad0("nandmu",0);
        if (iVar6 != 0) {
          FUN_00433690(1,"Using %s option (ini file)\n");
          goto LAB_0042653e;
        }
      }
      else {
        FUN_00433690(0,
                     "***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                    );
      }
    }
    else {
      FUN_00433690(1,"Using %s option (perbox file)\n");
LAB_0042653e:
      DAT_00479f00 = DAT_00479f00 | 0x10000000;
    }
  }
  uVar1 = DAT_00479f00;
  uVar7 = DAT_00479f00;
  if (((DAT_00479f00 & 0x4000000) == 0) && ((DAT_00479f04 & 0x4000000) == 0)) {
    bVar2 = FUN_00423750("nosecurity");
    if (CONCAT31(extraout_var_08,bVar2) == 0) {
      pcVar10 = FUN_0040abf0("nosecurity");
      if (pcVar10 == (char *)0x0) {
        iVar6 = FUN_0040aad0("nosecurity",0);
        uVar1 = DAT_00479f00;
        uVar7 = DAT_00479f00;
        if (iVar6 != 0) {
          FUN_00433690(1,"Using %s option (ini file)\n");
          goto LAB_0042648d;
        }
      }
      else {
        FUN_00433690(0,
                     "***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                    );
        uVar1 = DAT_00479f00;
        uVar7 = DAT_00479f00;
      }
    }
    else {
      FUN_00433690(1,"Using %s option (perbox file)\n");
LAB_0042648d:
      uVar1 = DAT_00479f00 | 0x4000000;
      uVar7 = DAT_00479f00;
    }
  }
  DAT_00479f00 = uVar1;
  if (((uVar7 & 0x1000000) == 0) && ((DAT_00479f04 & 0x1000000) == 0)) {
    bVar2 = FUN_00423750("nosusecurity");
    if (CONCAT31(extraout_var_09,bVar2) == 0) {
      pcVar10 = FUN_0040abf0("nosusecurity");
      if (pcVar10 == (char *)0x0) {
        iVar6 = FUN_0040aad0("nosusecurity",0);
        if (iVar6 != 0) {
          FUN_00433690(1,"Using %s option (ini file)\n");
          goto LAB_004264ed;
        }
      }
      else {
        FUN_00433690(0,
                     "***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                    );
      }
    }
    else {
      FUN_00433690(1,"Using %s option (perbox file)\n");
LAB_004264ed:
      DAT_00479f00 = DAT_00479f00 | 0x1000000;
    }
  }
  if (((DAT_00479f00 & 0x200000) == 0) && ((DAT_00479f04 & 0x200000) == 0)) {
    bVar2 = FUN_00423750("smcnocheck");
    if (CONCAT31(extraout_var_07,bVar2) == 0) {
      pcVar10 = FUN_0040abf0("smcnocheck");
      if (pcVar10 == (char *)0x0) {
        iVar6 = FUN_0040aad0("smcnocheck",0);
        if (iVar6 != 0) {
          FUN_00433690(1,"Using %s option (ini file)\n");
          goto LAB_0042643e;
        }
      }
      else {
        FUN_00433690(0,
                     "***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                    );
      }
    }
    else {
      FUN_00433690(1,"Using %s option (perbox file)\n");
LAB_0042643e:
      DAT_00479f00 = DAT_00479f00 | 0x200000;
    }
  }
  if (DAT_00479f15 == 0) {
    pbVar4 = FUN_0040ade0("cfldv");
    if (pbVar4 == (byte *)0x0) {
      uVar7 = FUN_0040acf0("cfldv",0);
      DAT_00479f15 = (byte)uVar7;
      if (0x20 < DAT_00479f15) {
        FUN_00433690(0,
                     "***** WARNING: cfldv value %d in options.ini is too large, setting to max value of 32\n"
                    );
        DAT_00479f15 = 0x20;
      }
    }
    else {
      FUN_00433690(0,"***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                  );
      DAT_00479f15 = 0;
    }
  }
  if (DAT_00479f30 == 0xffffffff) {
    pbVar4 = FUN_0040ade0("cpufan");
    if (pbVar4 == (byte *)0x0) {
      DAT_00479f30 = FUN_0040acf0("cpufan",0xffffffff);
    }
    else {
      FUN_00433690(0,"***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                  );
      DAT_00479f30 = 0xffffffff;
    }
  }
  if (DAT_00479f34 == 0xffffffff) {
    pbVar4 = FUN_0040ade0("gpufan");
    if (pbVar4 == (byte *)0x0) {
      DAT_00479f34 = FUN_0040acf0("gpufan",0xffffffff);
    }
    else {
      FUN_00433690(0,"***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                  );
      DAT_00479f34 = 0xffffffff;
    }
  }
  if (DAT_00479f18 == 0xffffffff) {
    pbVar4 = FUN_0040ade0("cputemp");
    if (pbVar4 == (byte *)0x0) {
      DAT_00479f18 = FUN_0040acf0("cputemp",0xffffffff);
    }
    else {
      FUN_00433690(0,"***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                  );
      DAT_00479f18 = 0xffffffff;
    }
  }
  if (DAT_00479f1c == 0xffffffff) {
    pbVar4 = FUN_0040ade0("gputemp");
    if (pbVar4 == (byte *)0x0) {
      DAT_00479f1c = FUN_0040acf0("gputemp",0xffffffff);
    }
    else {
      FUN_00433690(0,"***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                  );
      DAT_00479f1c = 0xffffffff;
    }
  }
  if (DAT_00479f20 == 0xffffffff) {
    pbVar4 = FUN_0040ade0("edramtemp");
    if (pbVar4 == (byte *)0x0) {
      DAT_00479f20 = FUN_0040acf0("edramtemp",0xffffffff);
    }
    else {
      FUN_00433690(0,"***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                  );
      DAT_00479f20 = 0xffffffff;
    }
  }
  if (DAT_00479f24 == 0xffffffff) {
    pbVar4 = FUN_0040ade0("overcputemp");
    if (pbVar4 == (byte *)0x0) {
      DAT_00479f24 = FUN_0040acf0("overcputemp",0xffffffff);
    }
    else {
      FUN_00433690(0,"***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                  );
      DAT_00479f24 = 0xffffffff;
    }
  }
  if (DAT_00479f28 == 0xffffffff) {
    pbVar4 = FUN_0040ade0("overgputemp");
    if (pbVar4 == (byte *)0x0) {
      DAT_00479f28 = FUN_0040acf0("overgputemp",0xffffffff);
    }
    else {
      FUN_00433690(0,"***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                  );
      DAT_00479f28 = 0xffffffff;
    }
  }
  if (DAT_00479f2c == 0xffffffff) {
    pbVar4 = FUN_0040ade0("overedramtemp");
    if (pbVar4 == (byte *)0x0) {
      DAT_00479f2c = FUN_0040acf0("overedramtemp",0xffffffff);
    }
    else {
      FUN_00433690(0,"***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                  );
      DAT_00479f2c = 0xffffffff;
    }
  }
  if (DAT_00479f38 == 0xffffffff) {
    pbVar4 = FUN_0040ade0("avregion");
    if (pbVar4 == (byte *)0x0) {
      DAT_00479f38 = FUN_0040acf0("avregion",0xffffffff);
    }
    else {
      FUN_00433690(0,"***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                  );
      DAT_00479f38 = 0xffffffff;
    }
  }
  if (DAT_00479f3c == 0xffffffff) {
    pbVar4 = FUN_0040ade0("gameregion");
    if (pbVar4 == (byte *)0x0) {
      DAT_00479f3c = FUN_0040acf0("gameregion",0xffffffff);
    }
    else {
      FUN_00433690(0,"***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                  );
      DAT_00479f3c = 0xffffffff;
    }
  }
  if (DAT_00479f40 == 0xffffffff) {
    pbVar4 = FUN_0040ade0("dvdregion");
    if (pbVar4 == (byte *)0x0) {
      DAT_00479f40 = FUN_0040acf0("dvdregion",0xffffffff);
    }
    else {
      FUN_00433690(0,"***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                  );
      DAT_00479f40 = 0xffffffff;
    }
  }
  if ((((DAT_00479f44 == -1) && (DAT_00479f45 == -1)) && (DAT_00479f46 == -1)) &&
     (((DAT_00479f47 == -1 && (DAT_00479f48 == -1)) &&
      ((DAT_00479f49 == -1 && (pbVar4 = (byte *)FUN_0040aa10("macid"), pbVar4 != (byte *)0x0)))))) {
    sVar5 = strlen((char *)pbVar4);
    if (0 < (int)(sVar5 + 1)) {
      iVar8 = 0;
      iVar6 = 0;
      do {
        if (pbVar4[iVar6] != 0x3a) {
          pbVar4[iVar8] = pbVar4[iVar6];
          iVar8 = iVar8 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (sVar5 + 1 != iVar6);
      sVar5 = strlen((char *)pbVar4);
    }
    if (sVar5 == 0xc) {
      iVar6 = FUN_00422350(pbVar4);
      if (iVar6 != 0) {
        iVar6 = 0;
        do {
          iVar9 = iVar6 + 1;
          iVar8 = FUN_00421300(pbVar4);
          (&DAT_00479f44)[iVar6] = (char)iVar8;
          pbVar4 = pbVar4 + 2;
          iVar6 = iVar9;
        } while (iVar9 != 6);
        goto LAB_00425b73;
      }
      pcVar10 = "***** WARNING: invalid characters in macid \'";
    }
    else {
      pcVar10 = "***** WARNING: invalid length macid \'";
    }
    FUN_00433690(0,pcVar10);
    FUN_00423420(0,(char *)pbVar4);
    FUN_00433690(0,"\' provided in ini file! Discarding!\n");
  }
LAB_00425b73:
  if (3 < DAT_00479ea8 - 2U) goto LAB_00425c42;
  if (((DAT_00479f00 & 1) == 0) && ((DAT_00479f04 & 1) == 0)) {
    bVar2 = FUN_00423750("cygnos");
    if (CONCAT31(extraout_var_02,bVar2) == 0) {
      pcVar10 = FUN_0040abf0("cygnos");
      if (pcVar10 == (char *)0x0) {
        iVar6 = FUN_0040aad0("cygnos",0);
        if (iVar6 != 0) {
          FUN_00433690(1,"Using %s option (ini file)\n");
          goto LAB_00426252;
        }
      }
      else {
        FUN_00433690(0,
                     "***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                    );
      }
    }
    else {
      FUN_00433690(1,"Using %s option (perbox file)\n");
LAB_00426252:
      DAT_00479f00 = DAT_00479f00 | 1;
    }
  }
  if (((DAT_00479f00 & 8) == 0) && ((DAT_00479f04 & 8) == 0)) {
    bVar2 = FUN_00423750("demon");
    if (CONCAT31(extraout_var_03,bVar2) == 0) {
      pcVar10 = FUN_0040abf0("demon");
      if (pcVar10 == (char *)0x0) {
        iVar6 = FUN_0040aad0("demon",0);
        if (iVar6 != 0) {
          FUN_00433690(1,"Using %s option (ini file)\n");
          goto LAB_004262a1;
        }
      }
      else {
        FUN_00433690(0,
                     "***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                    );
      }
    }
    else {
      FUN_00433690(1,"Using %s option (perbox file)\n");
LAB_004262a1:
      DAT_00479f00 = DAT_00479f00 | 8;
    }
  }
  if (((DAT_00479f00 & 0x8000000) == 0) && ((DAT_00479f04 & 0x8000000) == 0)) {
    bVar2 = FUN_00423750("patchsmc");
    if (CONCAT31(extraout_var_04,bVar2) == 0) {
      pcVar10 = FUN_0040abf0("patchsmc");
      if (pcVar10 == (char *)0x0) {
        iVar6 = FUN_0040aad0("patchsmc",0);
        if (iVar6 != 0) {
          FUN_00433690(1,"Using %s option (ini file)\n");
          goto LAB_004262f0;
        }
      }
      else {
        FUN_00433690(0,
                     "***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                    );
      }
    }
    else {
      FUN_00433690(1,"Using %s option (perbox file)\n");
LAB_004262f0:
      DAT_00479f00 = DAT_00479f00 | 0x8000000;
    }
  }
  iVar6 = DAT_00479f08;
  if (DAT_00479f08 == 0) {
    if ((DAT_00479f00 & 4) != 0) {
      pcVar10 = FUN_0040aa10("xellbutton");
      if (pcVar10 == (char *)0x0) {
        DAT_00479f08 = 0;
LAB_00425d1a:
        FUN_00433690(1,"default console DVD eject button is being used to start xell\n");
        DAT_00479f08 = 0x12;
        iVar6 = DAT_00479f08;
      }
      else {
        iVar8 = _strnicmp(pcVar10,"power",5);
        iVar6 = 0x11;
        if (iVar8 != 0) {
          iVar8 = _strnicmp(pcVar10,"remopower",9);
          iVar6 = 0x20;
          if (iVar8 != 0) {
            iVar8 = _strnicmp(pcVar10,"remox",5);
            iVar6 = 0x22;
            if (iVar8 != 0) {
              iVar8 = _strnicmp(pcVar10,"winbutton",9);
              iVar6 = 0x24;
              if (iVar8 != 0) {
                bVar3 = FUN_00449640();
                DAT_00479f08 = CONCAT31(extraout_var_00,bVar3);
                iVar6 = DAT_00479f08;
                if (DAT_00479f08 == 0) goto LAB_00425d1a;
              }
            }
          }
        }
      }
      goto LAB_00425d40;
    }
  }
  else {
LAB_00425d40:
    DAT_00479f08 = iVar6;
    if ((DAT_00479f0c == 0) && ((DAT_00479f00 & 4) != 0)) {
      pcVar10 = FUN_0040aa10("xellbutton2");
      iVar6 = 0;
      if (pcVar10 != (char *)0x0) {
        iVar8 = _strnicmp(pcVar10,"power",5);
        iVar6 = 0x11;
        if (iVar8 != 0) {
          iVar8 = _strnicmp(pcVar10,"remopower",9);
          iVar6 = 0x20;
          if (iVar8 != 0) {
            iVar8 = _strnicmp(pcVar10,"remox",5);
            iVar6 = 0x22;
            if (iVar8 != 0) {
              iVar8 = _strnicmp(pcVar10,"winbutton",9);
              iVar6 = 0x24;
              if (iVar8 != 0) {
                bVar3 = FUN_00449640();
                iVar6 = CONCAT31(extraout_var_14,bVar3);
              }
            }
          }
        }
      }
      DAT_00479f0c = iVar6;
      if (DAT_00479f08 == 0) {
        FUN_00433690(1,"alternate xell button is disabled\n");
      }
    }
  }
  if (((DAT_00479f00 & 0x400000) == 0) && ((DAT_00479f04 & 0x400000) == 0)) {
    bVar2 = FUN_00423750("smcnoeject");
    if (CONCAT31(extraout_var_12,bVar2) == 0) {
      pcVar10 = FUN_0040abf0("smcnoeject");
      if (pcVar10 == (char *)0x0) {
        iVar6 = FUN_0040aad0("smcnoeject",0);
        if (iVar6 != 0) {
          FUN_00433690(1,"Using %s option (ini file)\n");
          goto LAB_004265e0;
        }
      }
      else {
        FUN_00433690(0,
                     "***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                    );
      }
    }
    else {
      FUN_00433690(1,"Using %s option (perbox file)\n");
LAB_004265e0:
      DAT_00479f00 = DAT_00479f00 | 0x400000;
    }
  }
  if (((DAT_00479f00 & 0x800000) == 0) && ((DAT_00479f04 & 0x800000) == 0)) {
    bVar2 = FUN_00423750("smcnoblink");
    if (CONCAT31(extraout_var_11,bVar2) == 0) {
      pcVar10 = FUN_0040abf0("smcnoblink");
      if (pcVar10 == (char *)0x0) {
        iVar6 = FUN_0040aad0("smcnoblink",0);
        if (iVar6 != 0) {
          FUN_00433690(1,"Using %s option (ini file)\n");
          goto LAB_0042658f;
        }
      }
      else {
        FUN_00433690(0,
                     "***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                    );
      }
    }
    else {
      FUN_00433690(1,"Using %s option (perbox file)\n");
LAB_0042658f:
      DAT_00479f00 = DAT_00479f00 | 0x800000;
    }
  }
  if (DAT_00479ea8 != 2) goto LAB_00425c42;
  if (((DAT_00479f00 & 2) == 0) && ((DAT_00479f04 & 2) == 0)) {
    bVar2 = FUN_00423750("nodvd");
    if (CONCAT31(extraout_var_13,bVar2) == 0) {
      pcVar10 = FUN_0040abf0("nodvd");
      if (pcVar10 == (char *)0x0) {
        iVar6 = FUN_0040aad0("nodvd",0);
        if (iVar6 != 0) {
          FUN_00433690(1,"Using %s option (ini file)\n");
          goto LAB_0042665d;
        }
      }
      else {
        FUN_00433690(0,
                     "***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                    );
      }
    }
    else {
      FUN_00433690(1,"Using %s option (perbox file)\n");
LAB_0042665d:
      DAT_00479f00 = DAT_00479f00 & 0xfffffffb | 2;
    }
  }
  bVar2 = FUN_00423750("olddvd");
  if (CONCAT31(extraout_var,bVar2) == 0) {
    pcVar10 = FUN_0040abf0("olddvd");
    if (pcVar10 == (char *)0x0) {
      iVar6 = FUN_0040aad0("olddvd",0);
      if (iVar6 != 0) {
        FUN_00433690(1,"Using %s option (ini file)\n");
        goto LAB_00426610;
      }
    }
    else {
      FUN_00433690(0,"***** WARNING: options.ini setting \'%s\' invalid value \'%s\', discarding!\n"
                  );
    }
  }
  else {
    FUN_00433690(1,"Using %s option (perbox file)\n");
LAB_00426610:
    DAT_00479f00 = DAT_00479f00 & 0xfffffffb;
  }
  if (DAT_00479f10 == 0) {
    pcVar10 = FUN_0040aa10("dualboot");
    iVar6 = 0;
    if (pcVar10 != (char *)0x0) {
      iVar8 = _strnicmp(pcVar10,"power",5);
      iVar6 = 0x11;
      if (iVar8 != 0) {
        iVar8 = _strnicmp(pcVar10,"remopower",9);
        iVar6 = 0x20;
        if (iVar8 != 0) {
          iVar8 = _strnicmp(pcVar10,"remox",5);
          iVar6 = 0x22;
          if (iVar8 != 0) {
            iVar8 = _strnicmp(pcVar10,"winbutton",9);
            iVar6 = 0x24;
            if (iVar8 != 0) {
              bVar3 = FUN_00449640();
              iVar6 = CONCAT31(extraout_var_15,bVar3);
            }
          }
        }
      }
    }
    DAT_00479f10 = iVar6;
    if (DAT_00479f08 == iVar6) {
      FUN_00433690(1,"dualboot setting ignored!\n");
      DAT_00479f10 = 0;
    }
  }
LAB_00425c42:
  if ((((DAT_00479f00 & 0x2000000) == 0) &&
      (pbVar4 = (byte *)FUN_0040aa10("dvdkey"), pbVar4 != (byte *)0x0)) &&
     (iVar6 = FUN_004135a0(pbVar4), iVar6 != 0)) {
    DAT_00479f00 = DAT_00479f00 | 0x2000000;
  }
  if ((DAT_004c4f54 == '\0') && (pcVar10 = FUN_0040aa10("rev"), pcVar10 != (char *)0x0)) {
    sprintf(&DAT_004c4f54,"_%s",pcVar10);
    return;
  }
  return;
}

