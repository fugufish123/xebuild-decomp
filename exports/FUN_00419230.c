
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00419230(byte *param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  FILE *pFVar4;
  uint *puVar5;
  byte *pbVar6;
  size_t sVar7;
  undefined3 extraout_var;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint *puVar13;
  byte *pbVar14;
  undefined4 uVar15;
  byte *_Str;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  int local_c70;
  byte local_c6c [32];
  undefined1 uStack_c4c;
  byte local_c44 [32];
  undefined1 local_c24;
  char local_c1c [1024];
  uint local_81c [256];
  uint local_41c;
  undefined4 local_418;
  undefined2 local_414;
  
  DAT_004c8fe0 = 0;
  local_81c[0] = 0x61642f2e;
  local_81c[1] = 0x2f6174;
  pcVar8 = local_c1c;
  for (iVar9 = 0x100; iVar9 != 0; iVar9 = iVar9 + -1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + 4;
  }
  puVar5 = local_81c + 2;
  for (iVar9 = 0xfe; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pbVar14 = local_c6c;
  for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
    pbVar14[0] = 0;
    pbVar14[1] = 0;
    pbVar14[2] = 0;
    pbVar14[3] = 0;
    pbVar14 = pbVar14 + 4;
  }
  pbVar14 = local_c44;
  for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
    pbVar14[0] = 0;
    pbVar14[1] = 0;
    pbVar14[2] = 0;
    pbVar14[3] = 0;
    pbVar14 = pbVar14 + 4;
  }
  if ((int)param_1 < 1) {
    if (DAT_00479ea8 != 0) {
      local_c70 = 0;
      bVar16 = false;
      goto LAB_00419cd2;
    }
    local_c70 = 0;
    bVar18 = false;
    bVar16 = false;
    goto LAB_00419ca7;
  }
  local_c70 = 0;
  bVar18 = false;
  bVar16 = false;
  pbVar14 = (byte *)0x0;
LAB_004192de:
  puVar5 = (uint *)((int)pbVar14 * 4);
  _Str = (byte *)(param_2 + (int)puVar5);
  iVar9 = _strnicmp(*(char **)_Str,"help",2);
  if (((iVar9 == 0) || (iVar9 = _strnicmp(*(char **)_Str,"-?",2), iVar9 == 0)) ||
     (iVar9 = _strnicmp(*(char **)_Str,"/?",2), iVar9 == 0)) goto LAB_0041a0b1;
  iVar9 = _strnicmp(*(char **)_Str,"-noenter",8);
  pbVar6 = pbVar14;
  if (iVar9 == 0) {
    FUN_00433690(1,"<enter> key on completion suppressed\n");
    DAT_0044a524 = 0;
    goto joined_r0x004193bb;
  }
  iVar9 = _strnicmp(*(char **)_Str,"-norandom",9);
  if (iVar9 == 0) {
    FUN_00433690(1,"disabling random nonces\n");
    DAT_00479ec0 = 0;
    goto joined_r0x004193bb;
  }
  iVar9 = _strnicmp(*(char **)_Str,"-t",2);
  if (iVar9 == 0) {
    pbVar6 = pbVar14 + 1;
    puVar5 = (uint *)(param_2 + 4 + (int)puVar5);
    pcVar8 = (char *)*puVar5;
    if (((param_1 == pbVar6) || (pcVar8 == (char *)0x0)) || (*pcVar8 == '-')) {
      FUN_00433690(0,"\n\n***** ERROR: option flag -t on command line but no argument provided!\n");
LAB_0041a0b1:
      FUN_00418a10();
LAB_0041a0b6:
      puVar5 = local_81c;
      do {
        puVar13 = puVar5;
        uVar2 = *puVar13 + 0xfefefeff & ~*puVar13;
        uVar3 = uVar2 & 0x80808080;
        puVar5 = puVar13 + 1;
      } while (uVar3 == 0);
      bVar16 = (uVar2 & 0x8080) == 0;
      if (bVar16) {
        uVar3 = uVar3 >> 0x10;
      }
      if (bVar16) {
        puVar5 = (uint *)((int)puVar13 + 6);
      }
      puVar11 = (undefined4 *)((int)puVar5 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)));
      *puVar11 = 0x7665645f;
      puVar11[1] = 0x3174696b;
      *(undefined2 *)(puVar11 + 2) = 0x36;
LAB_0041946e:
      strcat((char *)local_81c,&DAT_0047a14c);
      puVar5 = local_81c;
      do {
        puVar13 = puVar5;
        uVar2 = *puVar13 + 0xfefefeff & ~*puVar13;
        uVar3 = uVar2 & 0x80808080;
        puVar5 = puVar13 + 1;
      } while (uVar3 == 0);
      bVar16 = (uVar2 & 0x8080) == 0;
      if (bVar16) {
        uVar3 = uVar3 >> 0x10;
      }
      if (bVar16) {
        puVar5 = (uint *)((int)puVar13 + 6);
      }
      puVar11 = (undefined4 *)((int)puVar5 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)));
      *puVar11 = 0x696e692e;
      *(undefined1 *)(puVar11 + 1) = 0;
      FUN_004259a0();
      FUN_00427340();
      uVar15 = 3;
      iVar9 = FUN_00409430((char *)local_81c);
      if (iVar9 != 0) {
        if (local_c1c[0] == '\0') {
          FUN_00433690(1,"auto image name used: %s\n\n");
        }
        else {
          strcpy((char *)&DAT_0047a94c,local_c1c);
          FUN_00433690(1,"output name overridden to: %s\n\n");
        }
        FUN_00433610((char *)&DAT_0047a94c);
        if ((((DAT_00479ea8 - 6U & 0xfffffffd) == 0) && ((DAT_00479ea4 & 0x40000000) != 0)) &&
           ((DAT_00479ea4 & 0x20000000) == 0)) {
          FUN_00433690(1,
                       "building jasper devkit/testkit image requires bigffs, forcing option enable\n"
                      );
          DAT_00479ea4 = DAT_00479ea4 | 0x20000000;
        }
        FUN_00418fd0("1BL RSA pub key","1BL_pub.bin",&DAT_0047a13c,0x110,0x79c7,0);
        FUN_00418fd0("PIRS RSA pub key","PIRS_pub.bin",&DAT_0047a144,0x110,0x80d0,0);
        FUN_00418fd0("MASTER RSA pub key","MAST_pub.bin",&DAT_0047a140,0x110,0x843c,0);
        FUN_00418fd0("SC/SD RSA priv key","SB_priv.bin",&DAT_0047a148,0x390,0x1ca16,1);
        FUN_00417680((char *)0x0);
        uVar3 = FUN_0040f330();
        if (uVar3 == 0) {
          iVar9 = FUN_00412260((char *)&DAT_0047a94c);
          if (iVar9 == 0) {
            FUN_00433690(0,s__________________________________0044a4e0);
            FUN_00433690(0,"%s image built, info:\n");
            uVar15 = 0;
          }
          else {
            uVar15 = 2;
            FUN_00433690(0,"\n\n***** ERROR: %i writing to file %s\n\n");
          }
        }
        else {
          uVar15 = 3;
          FUN_00433690(0,"\n\n***** FATAL BUILD ERROR: %i unable to complete NAND image\n\n");
        }
      }
      FUN_004137f0();
      return uVar15;
    }
    iVar9 = _strnicmp(pcVar8,"retail",6);
    if (iVar9 == 0) {
      FUN_00433690(0,"building retail image\n");
      DAT_00479ea8 = 1;
      goto joined_r0x004193bb;
    }
    iVar9 = _strnicmp((char *)*puVar5,"jtag",4);
    if (iVar9 == 0) {
      FUN_00433690(0,"building jtag image\n");
      DAT_00479ea8 = 2;
      goto joined_r0x004193bb;
    }
LAB_00419640:
    iVar9 = _strnicmp((char *)*puVar5,"glitch2m",8);
    pbVar6 = pbVar14 + 1;
    if (iVar9 == 0) {
      FUN_00433690(0,"building glitch2 mfg image\n");
      DAT_00479eb4 = 1;
      DAT_00479eb0 = 1;
      DAT_00479ea8 = 3;
      goto joined_r0x004193bb;
    }
    iVar9 = _strnicmp((char *)*puVar5,"glitch2",7);
    if (iVar9 == 0) {
      FUN_00433690(0,"building glitch2 image\n");
      DAT_00479eb0 = 1;
      DAT_00479ea8 = 3;
      goto joined_r0x004193bb;
    }
  }
  else {
    iVar9 = _strnicmp(*(char **)_Str,"-c",2);
    if (iVar9 == 0) {
      puVar5 = (uint *)(param_2 + 4 + (int)puVar5);
      pbVar6 = pbVar14 + 1;
      pcVar8 = (char *)*puVar5;
      if (((pcVar8 != (char *)0x0) && (param_1 != pbVar6)) && (*pcVar8 != '-')) {
        iVar9 = FUN_00424170(pcVar8);
        if (iVar9 != 0) goto joined_r0x004193bb;
        FUN_00433690(0,"ERROR: invalid command line, console type %s unknown!\n");
        FUN_00418a10();
        goto LAB_00419640;
      }
      FUN_00433690(0,
                   "\n\n***** ERROR: console type flag -c on command line but no argument provided!\n"
                  );
      FUN_00418a10();
LAB_0041a42e:
      iVar9 = _strnicmp(*(char **)_Str,"-r",2);
      if (iVar9 == 0) {
        puVar5 = (uint *)(param_2 + 4 + (int)puVar5);
        pbVar6 = pbVar6 + 1;
        pcVar8 = (char *)*puVar5;
        if (((pcVar8 != (char *)0x0) && (param_1 != pbVar6)) && (*pcVar8 != '-')) {
          if (DAT_004c4f54 != '\0') goto LAB_0041a4ae;
          goto LAB_0041a474;
        }
        FUN_00433690(0,"\n\n***** ERROR: option flag -r on command line but no argument provided!\n"
                    );
        FUN_00418a10();
      }
      iVar9 = _strnicmp(*(char **)_Str,"-p",2);
      if (iVar9 != 0) goto LAB_0041a648;
      puVar5 = (uint *)(param_2 + 4 + (int)puVar5);
      pbVar6 = pbVar6 + 1;
      if ((char *)*puVar5 == (char *)0x0) goto LAB_0041a62b;
      if (param_1 == pbVar6) goto LAB_0041a62b;
      if (*(char *)*puVar5 == '-') goto LAB_0041a62b;
      FUN_00433690(1,"CPU key overridden from command line, not looking for cpukey.txt\n");
      _Str = (byte *)*puVar5;
      sVar7 = strlen((char *)_Str);
      if (sVar7 != 0x20) goto LAB_0041a612;
      iVar9 = FUN_0041afe0(_Str);
      if (iVar9 != 0) {
        bVar16 = true;
        strcpy((char *)local_c6c,(char *)*puVar5);
        goto joined_r0x004193bb;
      }
      goto LAB_0041a0b1;
    }
    iVar9 = _strnicmp(*(char **)_Str,"-o",2);
    if (iVar9 != 0) {
      iVar9 = _strnicmp(*(char **)_Str,"-8",2);
      if (iVar9 == 0) {
        puVar5 = (uint *)(param_2 + 4 + (int)puVar5);
        pbVar6 = pbVar14 + 1;
        pcVar8 = (char *)*puVar5;
        if (((pcVar8 == (char *)0x0) || (param_1 == pbVar6)) || (*pcVar8 == '-')) {
          FUN_00433690(0,
                       "\n\n***** ERROR: option flag -8 on command line but no argument provided!\n"
                      );
          FUN_00418a10();
          goto LAB_0041a5a4;
        }
        iVar9 = FUN_004271a0(pcVar8);
        if (iVar9 == 0) {
          FUN_00433690(0,"\n\n***** ERROR: option flag -8 on command line with invalid arguments!\n"
                      );
          iVar9 = FUN_00418a10();
          goto LAB_004199e5;
        }
        goto joined_r0x004193bb;
      }
      iVar9 = _strnicmp(*(char **)_Str,"-s",2);
      if (iVar9 == 0) {
        pbVar6 = pbVar14 + 1;
        DAT_004c97a8 = 1;
        pcVar8 = *(char **)(param_2 + 4 + (int)puVar5);
        if (((param_1 == pbVar6) || (pcVar8 == (char *)0x0)) || (*pcVar8 == '-')) {
          FUN_00433690(1,"outputting SHA-1 hash of final image to auto file\n");
        }
        else {
          strcpy(&DAT_004c93a8,pcVar8);
          FUN_00433690(1,"outputting SHA-1 hash of final image to custom file %s\n");
        }
        goto joined_r0x004193bb;
      }
      iVar9 = _strnicmp(*(char **)_Str,"-a",2);
      if (iVar9 == 0) {
        pcVar8 = *(char **)(param_2 + 4 + (int)puVar5);
        pbVar6 = pbVar14 + 1;
        if (pcVar8 == (char *)0x0) goto LAB_0041a5f5;
        if (param_1 == pbVar6) goto LAB_0041a5f5;
        if (*pcVar8 == '-') goto LAB_0041a5f5;
        if (DAT_004c4f94 < 0x10) {
          strcpy(&DAT_004c0c94 + DAT_004c4f94 * 0x42c,pcVar8);
          puVar5 = (uint *)(&DAT_004c0c94 + DAT_004c4f94 * 0x42c);
          do {
            puVar13 = puVar5;
            uVar2 = *puVar13 + 0xfefefeff & ~*puVar13;
            uVar3 = uVar2 & 0x80808080;
            puVar5 = puVar13 + 1;
          } while (uVar3 == 0);
          bVar17 = (uVar2 & 0x8080) == 0;
          if (bVar17) {
            uVar3 = uVar3 >> 0x10;
          }
          if (bVar17) {
            puVar5 = (uint *)((int)puVar13 + 6);
          }
          puVar11 = (undefined4 *)((int)puVar5 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)));
          *puVar11 = 0x6e69622e;
          *(undefined1 *)(puVar11 + 1) = 0;
          DAT_004c4f94 = DAT_004c4f94 + 1;
        }
        else {
          FUN_00433690(0,"***** WARNING: exceeded total number of optional patches with -a %s!\n");
        }
        goto joined_r0x004193bb;
      }
      goto LAB_0041a42e;
    }
    puVar5 = (uint *)(param_2 + 4 + (int)puVar5);
    pbVar6 = pbVar14 + 1;
    pcVar8 = (char *)*puVar5;
    if (((pcVar8 == (char *)0x0) || (param_1 == pbVar6)) || (*pcVar8 == '-')) {
      FUN_00433690(0,"\n\n***** ERROR: option flag -o on command line but no argument provided!\n");
      FUN_00418a10();
LAB_0041a4ae:
      FUN_00433690(0,
                   "***** WARNING: option flag -r %s on command line replacing previous setting of -r %s!\n"
                  );
      pcVar8 = (char *)*puVar5;
LAB_0041a474:
      sprintf(&DAT_004c4f54,"_%s",pcVar8);
      goto joined_r0x004193bb;
    }
    iVar9 = FUN_004258e0(pcVar8);
    if (iVar9 != 0) goto joined_r0x004193bb;
    FUN_00433690(0,"\n\n***** ERROR: option flag -o on command line with invalid arguments!\n");
    FUN_00418a10();
  }
  pbVar6 = pbVar14 + 1;
  iVar9 = _strnicmp((char *)*puVar5,"glitch",6);
  if (iVar9 == 0) {
    FUN_00433690(0,"building glitch image\n");
    DAT_00479ea8 = 3;
  }
  else {
    iVar9 = _strnicmp((char *)*puVar5,"devkit16",8);
    if (iVar9 == 0) {
      FUN_00433690(0,"building devkit16 image\n");
      DAT_00479ea8 = 7;
    }
    else {
      iVar9 = _strnicmp((char *)*puVar5,"devkit",6);
      if (iVar9 == 0) {
        FUN_00433690(0,"building devkit image\n");
        DAT_00479ea8 = 6;
      }
      else {
        iVar9 = _strnicmp((char *)*puVar5,"testkit16",9);
        if (iVar9 == 0) {
          FUN_00433690(0,"building testkit16 image\n");
          DAT_00479ea8 = 9;
        }
        else {
          iVar9 = _strnicmp((char *)*puVar5,"testkit",7);
          if (iVar9 == 0) {
            FUN_00433690(0,"building testkit image\n");
            DAT_00479ea8 = 8;
          }
          else {
            iVar9 = _strnicmp((char *)*puVar5,"devgl16",7);
            if (iVar9 == 0) {
              FUN_00433690(0,"building devgl16 image\n");
              DAT_00479ea8 = 5;
            }
            else {
              iVar9 = _strnicmp((char *)*puVar5,"devgl",5);
              if (iVar9 != 0) goto LAB_0041a5bd;
              FUN_00433690(0,"building devgl image\n");
              DAT_00479ea8 = 4;
            }
          }
        }
      }
    }
  }
joined_r0x004193bb:
  do {
    pbVar14 = pbVar6 + 1;
    if ((int)pbVar14 < (int)param_1) goto LAB_004192de;
    if (DAT_00479ea8 == 0) {
LAB_00419ca7:
      FUN_00433690(0,"*****WARNING: image type not provided, defaulting to build a retail image\n");
      DAT_00479ea8 = 1;
    }
    if (!bVar18) {
LAB_00419cd2:
      bVar18 = true;
      FUN_00433690(0,"*****WARNING: you did not specify per build directory! Using %s\n");
      strcpy(&DAT_0047ad4c,&DAT_0047b14c);
    }
    FUN_0040aef0();
    if (DAT_004c97ac != 0) goto LAB_00419c80;
    while (((DAT_00479ea4 & 7) == 0 && (bVar17 = FUN_00423830(), CONCAT31(extraout_var,bVar17) == 0)
           )) {
      pcVar8 = FUN_0040aa10("type");
      iVar9 = FUN_00424170(pcVar8);
      if (iVar9 != 0) break;
      FUN_00433690(0,"ERROR: you need to specify console type!\n");
      FUN_00418a10();
LAB_00419c80:
      FUN_00433690(1,"User options.ini loaded, 0x%x bytes in memory\n");
    }
    if (bVar16) {
LAB_0041940a:
      iVar9 = local_c70;
      if (local_c70 == 0) {
LAB_004199e5:
        puVar5 = &local_41c;
        _Str = (byte *)&local_418;
        for (iVar10 = 0xff; iVar10 != 0; iVar10 = iVar10 + -1) {
          *(int *)_Str = iVar9;
          _Str = _Str + 4;
        }
        local_41c = 0x6b6c6231;
        local_418 = 0x742e7965;
        local_414 = 0x7478;
        pFVar4 = fopen((char *)puVar5,"rb");
        if (pFVar4 != (FILE *)0x0) {
          FUN_00433690(1,"loading %s from %s\n");
          puVar5 = (uint *)fread(local_c44,0x20,1,pFVar4);
          fclose(pFVar4);
          if (puVar5 == (uint *)0x1) {
            local_c24 = 0;
            iVar9 = FUN_0041b740(local_c44);
            if (iVar9 != 0) goto LAB_00419417;
          }
        }
        pbVar6 = (byte *)FUN_0040aa10("1blkey");
        if (pbVar6 != (byte *)0x0) {
          FUN_00433690(1,"setting 1blkey from ini: 0x%s\n");
          iVar9 = FUN_0041b740(pbVar6);
          if (iVar9 == 0) {
LAB_0041a5a4:
            FUN_00433690(0,"ERROR: you need to specify 1BL key!\n");
            FUN_00418a10();
LAB_0041a5bd:
            FUN_00433690(0,
                         "\n\n***** ERROR: option flag -t on command line followed by unknown argument \'%s\'!\n"
                        );
            FUN_00418a10();
            goto LAB_0041a5dc;
          }
          sVar7 = strlen((char *)pbVar6);
          memcpy(local_c44,pbVar6,sVar7);
        }
      }
LAB_00419417:
      if (DAT_00479ea8 == 1) {
        puVar5 = local_81c;
        do {
          puVar13 = puVar5;
          uVar2 = *puVar13 + 0xfefefeff & ~*puVar13;
          uVar3 = uVar2 & 0x80808080;
          puVar5 = puVar13 + 1;
        } while (uVar3 == 0);
        bVar16 = (uVar2 & 0x8080) == 0;
        if (bVar16) {
          uVar3 = uVar3 >> 0x10;
        }
        if (bVar16) {
          puVar5 = (uint *)((int)puVar13 + 6);
        }
        puVar11 = (undefined4 *)((int)puVar5 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)));
        *puVar11 = 0x7465725f;
        puVar11[1] = 0x6c6961;
      }
      else if (DAT_00479ea8 == 2) {
        puVar5 = local_81c;
        do {
          puVar13 = puVar5;
          uVar2 = *puVar13 + 0xfefefeff & ~*puVar13;
          uVar3 = uVar2 & 0x80808080;
          puVar5 = puVar13 + 1;
        } while (uVar3 == 0);
        bVar16 = (uVar2 & 0x8080) == 0;
        if (bVar16) {
          uVar3 = uVar3 >> 0x10;
        }
        if (bVar16) {
          puVar5 = (uint *)((int)puVar13 + 6);
        }
        puVar11 = (undefined4 *)((int)puVar5 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)));
        *puVar11 = 0x61746a5f;
        *(undefined2 *)(puVar11 + 1) = 0x67;
      }
      else if (DAT_00479ea8 == 3) {
        puVar5 = local_81c;
        if (DAT_00479eb4 == 0) {
          if (DAT_00479eb0 == 0) {
            do {
              puVar13 = puVar5;
              uVar2 = *puVar13 + 0xfefefeff & ~*puVar13;
              uVar3 = uVar2 & 0x80808080;
              puVar5 = puVar13 + 1;
            } while (uVar3 == 0);
            bVar16 = (uVar2 & 0x8080) == 0;
            if (bVar16) {
              uVar3 = uVar3 >> 0x10;
            }
            if (bVar16) {
              puVar5 = (uint *)((int)puVar13 + 6);
            }
            puVar11 = (undefined4 *)((int)puVar5 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)));
            *puVar11 = 0x696c675f;
            puVar11[1] = 0x686374;
          }
          else {
            do {
              puVar13 = puVar5;
              uVar2 = *puVar13 + 0xfefefeff & ~*puVar13;
              uVar3 = uVar2 & 0x80808080;
              puVar5 = puVar13 + 1;
            } while (uVar3 == 0);
            bVar16 = (uVar2 & 0x8080) == 0;
            if (bVar16) {
              uVar3 = uVar3 >> 0x10;
            }
            if (bVar16) {
              puVar5 = (uint *)((int)puVar13 + 6);
            }
            puVar11 = (undefined4 *)((int)puVar5 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)));
            *puVar11 = 0x696c675f;
            puVar11[1] = 0x32686374;
            *(undefined1 *)(puVar11 + 2) = 0;
          }
        }
        else {
          do {
            puVar13 = puVar5;
            uVar2 = *puVar13 + 0xfefefeff & ~*puVar13;
            uVar3 = uVar2 & 0x80808080;
            puVar5 = puVar13 + 1;
          } while (uVar3 == 0);
          bVar16 = (uVar2 & 0x8080) == 0;
          if (bVar16) {
            uVar3 = uVar3 >> 0x10;
          }
          if (bVar16) {
            puVar5 = (uint *)((int)puVar13 + 6);
          }
          puVar11 = (undefined4 *)((int)puVar5 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)));
          *puVar11 = 0x696c675f;
          puVar11[1] = 0x32686374;
          *(undefined2 *)(puVar11 + 2) = 0x6d;
        }
      }
      else {
        if (DAT_00479ea8 == 6) {
          puVar5 = local_81c;
          do {
            puVar13 = puVar5;
            uVar2 = *puVar13 + 0xfefefeff & ~*puVar13;
            uVar3 = uVar2 & 0x80808080;
            puVar5 = puVar13 + 1;
          } while (uVar3 == 0);
          bVar16 = (uVar2 & 0x8080) == 0;
          if (bVar16) {
            uVar3 = uVar3 >> 0x10;
          }
          if (bVar16) {
            puVar5 = (uint *)((int)puVar13 + 6);
          }
          puVar11 = (undefined4 *)((int)puVar5 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)));
          *puVar11 = 0x7665645f;
          puVar11[1] = 0x74696b;
          goto LAB_0041946e;
        }
        if (DAT_00479ea8 == 7) goto LAB_0041a0b6;
        if (DAT_00479ea8 == 8) {
          puVar5 = local_81c;
          do {
            puVar13 = puVar5;
            uVar2 = *puVar13 + 0xfefefeff & ~*puVar13;
            uVar3 = uVar2 & 0x80808080;
            puVar5 = puVar13 + 1;
          } while (uVar3 == 0);
          bVar16 = (uVar2 & 0x8080) == 0;
          if (bVar16) {
            uVar3 = uVar3 >> 0x10;
          }
          if (bVar16) {
            puVar5 = (uint *)((int)puVar13 + 6);
          }
          puVar11 = (undefined4 *)((int)puVar5 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)));
          *puVar11 = 0x7365745f;
          puVar11[1] = 0x74696b74;
          *(undefined1 *)(puVar11 + 2) = 0;
        }
        else if (DAT_00479ea8 == 9) {
          puVar5 = local_81c;
          do {
            puVar13 = puVar5;
            uVar2 = *puVar13 + 0xfefefeff & ~*puVar13;
            uVar3 = uVar2 & 0x80808080;
            puVar5 = puVar13 + 1;
          } while (uVar3 == 0);
          bVar16 = (uVar2 & 0x8080) == 0;
          if (bVar16) {
            uVar3 = uVar3 >> 0x10;
          }
          if (bVar16) {
            puVar5 = (uint *)((int)puVar13 + 6);
          }
          puVar11 = (undefined4 *)((int)puVar5 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)));
          *puVar11 = 0x7365745f;
          puVar11[1] = 0x74696b74;
          *(undefined2 *)(puVar11 + 2) = 0x3631;
          *(undefined1 *)((int)puVar11 + 10) = 0;
        }
        else {
          puVar5 = local_81c;
          if (DAT_00479ea8 - 4U < 2) {
            do {
              puVar13 = puVar5;
              uVar2 = *puVar13 + 0xfefefeff & ~*puVar13;
              uVar3 = uVar2 & 0x80808080;
              puVar5 = puVar13 + 1;
            } while (uVar3 == 0);
            bVar16 = (uVar2 & 0x8080) == 0;
            if (bVar16) {
              uVar3 = uVar3 >> 0x10;
            }
            if (bVar16) {
              puVar5 = (uint *)((int)puVar13 + 6);
            }
            puVar11 = (undefined4 *)((int)puVar5 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)));
            *puVar11 = 0x7665645f;
            *(undefined2 *)(puVar11 + 1) = 0x6c67;
            *(undefined1 *)((int)puVar11 + 6) = 0;
          }
        }
      }
      goto LAB_0041946e;
    }
    puVar5 = &local_41c;
    _Str = (byte *)&local_418;
    for (iVar9 = 0xff; iVar9 != 0; iVar9 = iVar9 + -1) {
      _Str[0] = 0;
      _Str[1] = 0;
      _Str[2] = 0;
      _Str[3] = 0;
      _Str = _Str + 4;
    }
    local_41c = (uint)DAT_00455500;
    strcpy((char *)puVar5,&DAT_0047ad4c);
    puVar13 = puVar5;
    do {
      puVar12 = puVar13;
      uVar2 = *puVar12 + 0xfefefeff & ~*puVar12;
      uVar3 = uVar2 & 0x80808080;
      puVar13 = puVar12 + 1;
    } while (uVar3 == 0);
    bVar17 = (uVar2 & 0x8080) == 0;
    if (bVar17) {
      uVar3 = uVar3 >> 0x10;
    }
    if (bVar17) {
      puVar13 = (uint *)((int)puVar12 + 6);
    }
    builtin_strncpy((char *)((int)puVar13 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3))),
                    "cpukey.txt",0xb);
    pFVar4 = fopen((char *)puVar5,"rb");
    if (pFVar4 != (FILE *)0x0) {
      FUN_00433690(1,"loading %s from %s\n");
      puVar5 = (uint *)fread(local_c6c,0x20,1,pFVar4);
      fclose(pFVar4);
      if (puVar5 != (uint *)0x1) goto LAB_00419bd8;
      uStack_c4c = 0;
      iVar9 = FUN_0041afe0(local_c6c);
      if (iVar9 == 0) goto LAB_00419bd8;
LAB_00419c32:
      bVar16 = true;
      goto LAB_0041940a;
    }
LAB_00419bd8:
    pbVar6 = (byte *)FUN_0040aa10("cpukey");
    if (pbVar6 == (byte *)0x0) goto LAB_0041940a;
    FUN_00433690(1,"setting cpukey from ini: 0x%s\n");
    iVar9 = FUN_0041afe0(pbVar6);
    if (iVar9 != 0) {
      sVar7 = strlen((char *)pbVar6);
      memcpy(local_c6c,pbVar6,sVar7);
      goto LAB_00419c32;
    }
LAB_0041a5dc:
    FUN_00433690(0,"ERROR: you need to specify CPU key!\n");
    FUN_00418a10();
LAB_0041a5f5:
    FUN_00433690(0,"\n\n***** ERROR: option flag -a on command line but no argument provided!\n");
    FUN_00418a10();
LAB_0041a612:
    FUN_00433690(0,"ERROR: invalid command line, CPU key incorrect size!\n");
    FUN_00418a10();
LAB_0041a62b:
    FUN_00433690(0,"\n\n***** ERROR: CPU key flag -p on command line but no argument provided!\n");
    FUN_00418a10();
LAB_0041a648:
    iVar9 = _strnicmp(*(char **)_Str,"-b",2);
    if (iVar9 == 0) {
      puVar5 = (uint *)(param_2 + 4 + (int)puVar5);
      pbVar6 = pbVar6 + 1;
      if ((((char *)*puVar5 != (char *)0x0) && (param_1 != pbVar6)) && (*(char *)*puVar5 != '-')) {
        FUN_00433690(1,"1BL key overridden from command line, not looking for 1blkey.txt\n");
        _Str = (byte *)*puVar5;
        sVar7 = strlen((char *)_Str);
        if (sVar7 == 0x20) {
          iVar9 = FUN_0041b740(_Str);
          if (iVar9 == 0) goto LAB_0041a0b1;
          local_c70 = 2;
          strcpy((char *)local_c44,(char *)*puVar5);
          goto joined_r0x004193bb;
        }
        FUN_00433690(0,"ERROR: invalid command line, 1BL key incorrect size!\n");
        FUN_00418a10();
      }
      FUN_00433690(0,"\n\n***** ERROR: 1BL key flag -b on command line but no argument provided!\n")
      ;
      FUN_00418a10();
LAB_0041a743:
      iVar9 = _strnicmp(*(char **)_Str,"-d",2);
      if (iVar9 == 0) {
        pcVar8 = *(char **)(param_2 + 4 + (int)puVar5);
        if (((pcVar8 != (char *)0x0) && (param_1 != pbVar6 + 1)) && (*pcVar8 != '-')) {
          strcpy(&DAT_0047ad4c,pcVar8);
          puVar5 = (uint *)&DAT_0047ad4c;
          do {
            puVar13 = puVar5;
            uVar2 = *puVar13 + 0xfefefeff & ~*puVar13;
            uVar3 = uVar2 & 0x80808080;
            puVar5 = puVar13 + 1;
          } while (uVar3 == 0);
          bVar18 = (uVar2 & 0x8080) == 0;
          if (bVar18) {
            uVar3 = uVar3 >> 0x10;
          }
          if (bVar18) {
            puVar5 = (uint *)((int)puVar13 + 6);
          }
          *(undefined2 *)((int)puVar5 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3))) = 0x2f;
          FUN_00433690(1,"per build directory overridden from command line to \'%s\'\n");
          bVar18 = true;
          pbVar6 = pbVar6 + 1;
          goto joined_r0x004193bb;
        }
        FUN_00433690(0,
                     "\n\n***** ERROR: per build directory flag -d on command line but no argument provided!\n"
                    );
        FUN_00418a10();
LAB_0041a8e4:
        pbVar6 = pbVar6 + 1;
        FUN_00433690(0,
                     "\n\n***** ERROR: data directory flag -f on command line but no argument provided!\n"
                    );
        FUN_00418a10();
      }
      else {
        iVar9 = _strnicmp(*(char **)_Str,"-f",2);
        if (iVar9 == 0) {
          puVar5 = (uint *)(param_2 + 4 + (int)puVar5);
          pcVar8 = (char *)*puVar5;
          if (((pcVar8 == (char *)0x0) || (param_1 == pbVar6 + 1)) || (*pcVar8 == '-'))
          goto LAB_0041a8e4;
          sprintf((char *)local_81c,"%s/",pcVar8);
          FUN_00433690(1,"data directory overridden from command line to \'%s\'\n");
          sprintf(&DAT_0047b14c,"%s/",*puVar5);
          sprintf(&DAT_0047a54c,"%s/bin/",*puVar5);
          pbVar6 = pbVar6 + 1;
          goto joined_r0x004193bb;
        }
      }
      iVar9 = _strnicmp(*(char **)_Str,"-i",2);
      if (iVar9 == 0) {
        pcVar8 = (char *)(param_2 + 4 + (int)puVar5);
        pbVar6 = pbVar6 + 1;
        pcVar1 = *(char **)pcVar8;
        if (((pcVar1 != (char *)0x0) && (param_1 != pbVar6)) && (*pcVar1 != '-')) {
          _DAT_0047a14c = 0x5f;
          strcpy(&DAT_0047a14d,*(char **)pcVar8);
          FUN_00433690(1,"suffix \'%s\' added from command line to ini and patches filenames\n");
          goto joined_r0x004193bb;
        }
        FUN_00433690(0,
                     "\n\n***** ERROR: data directory flag -i on command line but no argument provided!\n"
                    );
        FUN_00418a10();
      }
      else if (local_c1c[0] == '\0') {
        FUN_00433690(1,"file name overridden from command line to \'%s\'\n");
        strcpy(local_c1c,*(char **)_Str);
        goto joined_r0x004193bb;
      }
      FUN_00433690(0,"WARNING: command line has excess parameters without switches!\n");
      goto joined_r0x004193bb;
    }
    iVar9 = _strnicmp(*(char **)_Str,"-v",2);
    if (iVar9 != 0) goto LAB_0041a743;
    FUN_004335a0(*(undefined1 *)(*(int *)_Str + 2));
  } while( true );
}

