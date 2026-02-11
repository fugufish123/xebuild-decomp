
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00409430(char *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  FILE *_File;
  size_t sVar5;
  char *_DstBuf;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *_Str;
  int iVar10;
  size_t sVar11;
  size_t sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int *piVar17;
  uint uVar18;
  char *pcVar19;
  char *local_478;
  byte *local_46c;
  char *local_464;
  char local_44e;
  char local_44d [49];
  byte local_41c [8];
  undefined1 local_414;
  
  FUN_00433690(1,"\n------ parsing ini at \'%s\' ------\n");
  _File = fopen(param_1,"rb");
  if (_File == (FILE *)0x0) {
    FUN_00433690(0,"\n******* ERROR: could not open \'%s\'\n");
    return 0;
  }
  sVar5 = FUN_00422420(_File);
  _DstBuf = (char *)malloc(sVar5 + 1);
  if (_DstBuf == (char *)0x0) {
    FUN_00433690(0,"******* ERROR loading %s, unable to allocate memory\n");
  }
  else {
    fread(_DstBuf,sVar5,1,_File);
    fclose(_File);
    if ((*_DstBuf != -1) && (_DstBuf[1] != -1)) {
      _DstBuf[sVar5] = -1;
      iVar6 = FUN_00408fe0(_DstBuf,sVar5);
      _DstBuf[iVar6] = '\0';
      iVar7 = iVar6 + -9;
      if (iVar7 < 1) {
LAB_0040951f:
        pcVar19 = "\n******* ERROR: could not find label [version] in file list ini\n";
LAB_00409527:
        FUN_00433690(0,pcVar19);
        free(_DstBuf);
        return 0;
      }
      iVar8 = 0;
LAB_00409510:
      iVar10 = 0;
      if (_DstBuf[iVar8] != '[') goto joined_r0x0040951d;
      while (iVar14 = iVar10 + 1, iVar14 < 9) {
        iVar15 = iVar10 + 1;
        iVar10 = iVar14;
        if ((uint)(byte)_DstBuf[iVar8 + iVar14] != (int)"[version]"[iVar15]) {
          iVar10 = 10;
        }
      }
      if (iVar14 != 9) goto joined_r0x0040951d;
      cVar2 = _DstBuf[iVar8 + 9];
      sVar5 = 0;
      puVar16 = (undefined4 *)&DAT_004c9364;
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar16 = 0;
        puVar16 = puVar16 + 1;
      }
      do {
        if ((_DstBuf + (cVar2 == '\0') + 9 + iVar8)[sVar5] == '\0') goto LAB_004095c2;
        sVar5 = sVar5 + 1;
      } while (sVar5 != 0x40);
      sVar5 = 0x3f;
LAB_004095c2:
      strncpy(&DAT_004c9364,_DstBuf + (cVar2 == '\0') + 9 + iVar8,sVar5);
      FUN_00433690(1,"ini version %s\n");
      if (DAT_00479ea8 == 2) {
        DAT_004c4f98 = 0x13;
        _DAT_00479e84 = (undefined4 *)&DAT_0044a020;
        sprintf((char *)local_41c,"%s_jtag_%s.bin",&DAT_004c9364,&DAT_0047a94c);
        iVar8 = 9;
      }
      else {
        if (DAT_00479ea8 - 6 < 2) {
          DAT_004c4f98 = 0xb;
          _DAT_00479e84 = (undefined4 *)&DAT_0044a074;
          pcVar19 = "%s_devk_%s.bin";
        }
        else if (DAT_00479ea8 - 8 < 2) {
          DAT_004c4f98 = 0xc;
          _DAT_00479e84 = (undefined4 *)&DAT_0044a05c;
          pcVar19 = "%s_testk_%s.bin";
        }
        else {
          DAT_004c4f98 = 0xe;
          if (DAT_00479ea8 - 4 < 2) {
            _DAT_00479e84 = (undefined4 *)&DAT_0044a044;
            pcVar19 = "%s_devgl_%s.bin";
          }
          else {
            _DAT_00479e84 = &DAT_0044a08c;
            if (DAT_00479ea8 == 1) {
              pcVar19 = "%s_retail_%s.bin";
            }
            else if (DAT_00479eb4 == 0) {
              if (DAT_00479eb0 == 0) {
                pcVar19 = "%s_gg_%s.bin";
              }
              else {
                pcVar19 = "%s_g2_%s.bin";
              }
            }
            else {
              pcVar19 = "%s_g2m_%s.bin";
            }
          }
        }
        iVar8 = 6;
        sprintf((char *)local_41c,pcVar19,&DAT_004c9364,&DAT_0047a94c);
      }
      local_46c = local_41c;
      DAT_004c4f9c = DAT_004c4f98 + -2;
      strcpy((char *)&DAT_0047a94c,(char *)local_46c);
      if (DAT_0047ad4c != '\0') {
        FUN_00408ec0();
      }
      iVar10 = 0;
      iVar14 = 0;
      pcVar19 = &DAT_004bbd50;
      if (0 < DAT_004c4f98) {
        do {
          uVar18 = DAT_00479ea8;
          if (DAT_00479ea8 == 2) {
            *(undefined4 *)(pcVar19 + 0x404) = *(undefined4 *)(iVar10 + 0x44a204);
            *(undefined4 *)(pcVar19 + 0x408) = *(undefined4 *)(iVar10 + 0x44a200);
          }
          else if (DAT_00479ea8 - 6 < 2) {
            *(undefined4 *)(pcVar19 + 0x404) = *(undefined4 *)(iVar10 + 0x44a1a4);
            *(undefined4 *)(pcVar19 + 0x408) = *(undefined4 *)(iVar10 + 0x44a1a0);
          }
          else if (DAT_00479ea8 - 4 < 2) {
            *(undefined4 *)(pcVar19 + 0x404) = *(undefined4 *)(iVar10 + 0x44a0c4);
            *(undefined4 *)(pcVar19 + 0x408) = *(undefined4 *)(iVar10 + 0x44a0c0);
          }
          else if (DAT_00479ea8 - 8 < 2) {
            *(undefined4 *)(pcVar19 + 0x404) = *(undefined4 *)(iVar10 + 0x44a144);
            *(undefined4 *)(pcVar19 + 0x408) = *(undefined4 *)(iVar10 + 0x44a140);
          }
          else {
            *(undefined4 *)(pcVar19 + 0x404) = *(undefined4 *)((int)&DAT_0044a2a4 + iVar10);
            *(undefined4 *)(pcVar19 + 0x408) = *(undefined4 *)((int)&DAT_0044a2a0 + iVar10);
          }
          switch(*(undefined4 *)(pcVar19 + 0x404)) {
          case 0:
          case 0x1a:
            strcpy(pcVar19,&DAT_0044a320);
            break;
          case 1:
            strcpy(pcVar19,s_payload_bin_0044a460);
            break;
          case 2:
            strcpy(pcVar19,s_smc_bin_0044a340);
            break;
          case 3:
            strcpy(pcVar19,s_kv_bin_0044a360);
            break;
          case 4:
            strcpy(pcVar19,s_kv_alt_bin_0044a380);
            break;
          case 0x16:
            strcpy(pcVar19,s_freeboot_bin_0044a420);
            break;
          case 0x17:
            strcpy(pcVar19,s_patches__0044a3e0);
            if (DAT_00479ea8 == 2) {
LAB_004099a7:
              strcat(pcVar19,*(char **)(&DAT_00450400 + (DAT_00479ea4 & 7) * 4));
            }
            else {
              if (DAT_00479eb0 != 0) {
                if (DAT_00479eb4 == 0) {
                  sVar5 = strlen(pcVar19);
                  pcVar9 = pcVar19 + sVar5;
                  pcVar9[0] = 'g';
                  pcVar9[1] = '2';
                  pcVar9[2] = '\0';
                }
                else {
                  sVar5 = strlen(pcVar19);
                  builtin_strncpy(pcVar19 + sVar5,"g2m",4);
                }
                goto LAB_004099a7;
              }
              if (DAT_00479ea8 - 4 < 2) {
                sVar5 = strlen(pcVar19);
                builtin_strncpy(pcVar19 + sVar5,"g2m",4);
                strcpy(pcVar19 + sVar5 + 3,*(char **)(&DAT_00450400 + (DAT_00479ea4 & 7) * 4));
              }
              else {
                uVar18 = DAT_00479ea4 & 7;
                if (uVar18 == 5) {
                  sVar5 = strlen(pcVar19);
                  builtin_strncpy(pcVar19 + sVar5,"trinity",8);
                }
                else if (uVar18 == 6) {
                  sVar5 = strlen(pcVar19);
                  builtin_strncpy(pcVar19 + sVar5,"corona",7);
                }
                else if (uVar18 == 7) {
                  sVar5 = strlen(pcVar19);
                  builtin_strncpy(pcVar19 + sVar5,"winchester",0xb);
                }
                else {
                  sVar5 = strlen(pcVar19);
                  builtin_strncpy(pcVar19 + sVar5,"fat",4);
                }
              }
            }
            strcat(pcVar19,&DAT_0047a14c);
            if (DAT_004c4f54 != '\0') {
              strcat(pcVar19,&DAT_004c4f54);
            }
            sVar5 = strlen(pcVar19);
            builtin_strncpy(pcVar19 + sVar5,".bin",5);
            break;
          case 0x18:
            strcpy(pcVar19,s_fuses_bin_0044a440);
            break;
          case 0x19:
            if (uVar18 == 2) {
              strcpy(pcVar19,s_xell_2f_bin_0044a3c0);
            }
            else {
              strcpy(pcVar19,s_xell_gggggg_bin_0044a3a0);
            }
            break;
          case 0x1b:
            strcpy(pcVar19,s_smc_config_bin_0044a400);
          }
          iVar14 = iVar14 + 1;
          pcVar19 = pcVar19 + 0x42c;
          iVar10 = iVar10 + 8;
        } while (iVar14 < DAT_004c4f98);
      }
      if (DAT_004c4f54 == '\0') {
        sprintf(&local_44e,"[%sbl]",*(undefined4 *)(&DAT_00450400 + (DAT_00479ea4 & 7) * 4));
      }
      else {
        sprintf(&local_44e,"[%sbl%s]",*(undefined4 *)(&DAT_00450400 + (DAT_00479ea4 & 7) * 4),
                &DAT_004c4f54);
      }
      local_464 = &local_44e;
      sVar5 = strlen(local_464);
      if ((int)(iVar6 - sVar5) < 1) {
LAB_0040a0fc:
        pcVar19 = "\n******* ERROR: could not find label %s in file list ini\n";
        goto LAB_0040973e;
      }
      iVar10 = 0;
      while ((uint)(byte)_DstBuf[iVar10] != (int)local_44e) {
LAB_00409810:
        iVar10 = iVar10 + 1;
        if (iVar10 == iVar6 - sVar5) goto LAB_0040a0fc;
      }
      sVar11 = 0;
      sVar12 = sVar11;
      if (0 < (int)sVar5) {
        while (sVar11 = sVar12 + 1, (int)sVar11 < (int)sVar5) {
          pcVar19 = local_44d + sVar12;
          sVar12 = sVar11;
          if ((uint)(byte)_DstBuf[iVar10 + sVar11] != (int)*pcVar19) {
            sVar12 = sVar5 + 1;
          }
        }
      }
      if (sVar5 != sVar11) goto LAB_00409810;
      iVar10 = sVar5 + iVar10 + (uint)(_DstBuf[sVar5 + iVar10] == '\0');
      FUN_00433690(1,"\nini: label %s found\n");
      if (iVar6 - iVar10 < 1) {
        iVar14 = -1;
      }
      else {
        iVar14 = 0;
        cVar2 = _DstBuf[iVar10];
        while (cVar2 != '[') {
          iVar14 = iVar14 + 1;
          if (iVar6 - iVar10 == iVar14) {
            iVar14 = -1;
            break;
          }
          cVar2 = (_DstBuf + iVar10)[iVar14];
        }
      }
      iVar14 = iVar14 + iVar10;
      iVar15 = 0;
      do {
        pcVar19 = _DstBuf + iVar10;
        sVar5 = iVar6 - iVar10;
        if ((int)sVar5 < 1) {
LAB_00409911:
          pcVar19 = "\n******* ERROR: ini problem, error in %s section!\n";
          goto LAB_0040973e;
        }
        cVar2 = *pcVar19;
        sVar12 = 0;
        if (cVar2 == ',') {
LAB_004098fa:
          sVar11 = 0;
          do {
            sVar11 = sVar11 + 1;
            if (sVar5 == sVar11) goto LAB_00409911;
          } while (pcVar19[sVar11] != '\0');
          uVar4 = 1;
          if ((int)sVar12 <= (int)sVar11) {
            if ((int)sVar12 < 0) goto LAB_00409911;
            uVar4 = 0;
            sVar11 = sVar12;
          }
        }
        else {
          do {
            sVar12 = sVar12 + 1;
            if (sVar5 == sVar12) {
              if (cVar2 == '\0') goto LAB_00409911;
              sVar12 = 0xffffffff;
              goto LAB_004098fa;
            }
          } while (pcVar19[sVar12] != ',');
          if (cVar2 != '\0') goto LAB_004098fa;
          uVar4 = 1;
          sVar11 = 0;
        }
        piVar17 = _DAT_00479e84 + iVar15;
        strncpy(&DAT_004bbd50 + *piVar17 * 0x42c,pcVar19,sVar11);
        (&DAT_004bbd50)[*piVar17 * 0x42c + sVar11] = 0;
        iVar1 = sVar11 + iVar10;
        iVar10 = iVar1 + 1;
        if ((bool)uVar4) {
          *(undefined4 *)(&DAT_004bc150 + *piVar17 * 0x42c) = 0;
        }
        else {
          if (iVar6 - iVar10 < 1) {
LAB_00409b42:
            FUN_00433690(0,"\n******* ERROR: crc data for file \'%s\' in ini is incorrect size!\n");
            free(_DstBuf);
            return 0;
          }
          if (_DstBuf[iVar10] == '\0') {
            iVar10 = 0;
            *(undefined4 *)(&DAT_004bc150 + *piVar17 * 0x42c) = 0;
          }
          else {
            iVar13 = 0;
            do {
              iVar13 = iVar13 + 1;
              if (iVar6 - iVar10 == iVar13) goto LAB_00409b42;
            } while (_DstBuf[iVar13 + iVar1 + 1] != '\0');
            if (iVar13 != 8) goto LAB_00409b42;
            strncpy((char *)local_46c,_DstBuf + iVar10,8);
            local_414 = 0;
            iVar10 = *piVar17;
            uVar18 = FUN_00421380((char *)local_46c,0);
            *(uint *)(&DAT_004bc150 + iVar10 * 0x42c) = uVar18;
            iVar10 = 8;
          }
          iVar10 = iVar1 + 2 + iVar10;
        }
        iVar15 = iVar15 + 1;
        FUN_00433690(1,"found (%d) \'%s\' crc: 0x%08x\n");
        if (iVar14 < iVar10) {
          pcVar19 = "\n******* ERROR: ini problem, can\'t find enough data for %s section!\n";
          goto LAB_0040973e;
        }
      } while (iVar8 != iVar15);
      if ((DAT_00479ea8 != 2) && (DAT_00479ea8 < 6)) {
        iVar8 = _strnicmp(&DAT_004bce00,"none",4);
        if (iVar8 == 0) {
          DAT_00479eb8 = 0;
        }
        else {
          FUN_00433690(1,"ini dictates dual CB for this model\n");
          DAT_00479eb8 = 1;
        }
      }
      iVar8 = iVar6 + -10;
      if (0 < iVar8) {
        iVar10 = 0;
        while (_DstBuf[iVar10] != '[') {
LAB_00409e50:
          iVar10 = iVar10 + 1;
          if (iVar10 == iVar8) goto LAB_0040a8aa;
        }
        iVar14 = 1;
        do {
          if ((uint)(byte)_DstBuf[iVar10 + iVar14] != (int)"[rawpatch]"[iVar14]) {
            iVar14 = 0xb;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < 10);
        if (iVar14 != 10) goto LAB_00409e50;
        iVar10 = (_DstBuf[iVar10 + 10] == '\0') + 10 + iVar10;
        if (0 < iVar6 - iVar10) {
          if (_DstBuf[iVar10] != '[') {
            iVar14 = 0;
            do {
              iVar14 = iVar14 + 1;
              if (iVar6 - iVar10 == iVar14) goto LAB_00409ed0;
            } while ((_DstBuf + iVar10)[iVar14] != '[');
            goto LAB_00409ed5;
          }
          FUN_00433690(1,"\nini: label [rawpatch] found\n");
          local_478 = (char *)iVar10;
          if (DAT_004c8fe0 < 0x10) goto LAB_00409f06;
          goto LAB_0040a084;
        }
LAB_00409ed0:
        iVar14 = -1;
LAB_00409ed5:
        local_478 = (char *)(iVar14 + iVar10);
        FUN_00433690(1,"\nini: label [rawpatch] found\n");
        if (0xf < DAT_004c8fe0) {
          if (iVar10 < (int)local_478) goto LAB_0040a9b2;
          goto LAB_0040a084;
        }
LAB_00409f06:
        pcVar19 = &DAT_004c4fa0 + DAT_004c8fe0 * 0x404;
        iVar14 = DAT_004c8fe0;
        do {
          pcVar9 = _DstBuf + iVar10;
          sVar5 = iVar6 - iVar10;
          if ((int)sVar5 < 1) {
LAB_00409f5d:
            pcVar19 = "\n******* ERROR: an entry in [rawpatch] is missing offset info!\n";
            goto LAB_00409527;
          }
          cVar2 = *pcVar9;
          sVar12 = 0;
          if (cVar2 == '\0') {
LAB_00409f4c:
            sVar11 = 0;
            do {
              sVar11 = sVar11 + 1;
              if (sVar5 == sVar11) goto LAB_00409f5d;
            } while (pcVar9[sVar11] != ',');
            if ((int)sVar12 <= (int)sVar11) goto LAB_00409f5d;
            if (0x3ff < (int)sVar11) {
              pcVar19 = "\n******* ERROR: file name in [rawpatch] is too long!\n";
              goto LAB_00409527;
            }
          }
          else {
            do {
              sVar12 = sVar12 + 1;
              if (sVar5 == sVar12) {
                if (cVar2 == ',') goto LAB_00409f5d;
                sVar12 = 0xffffffff;
                goto LAB_00409f4c;
              }
            } while (pcVar9[sVar12] != '\0');
            if (cVar2 != ',') goto LAB_00409f4c;
            sVar11 = 0;
          }
          strncpy(pcVar19,pcVar9,sVar11);
          (&DAT_004c4fa0)[iVar14 * 0x404 + sVar11] = 0;
          iVar10 = sVar11 + iVar10;
          sVar5 = iVar6 - (iVar10 + 1);
          if (0 < (int)sVar5) {
            if (_DstBuf[iVar10 + 1] != '\0') {
              sVar12 = 0;
              do {
                sVar12 = sVar12 + 1;
                if (sVar5 == sVar12) goto LAB_0040a002;
              } while (_DstBuf[sVar12 + iVar10 + 1] != '\0');
              if ((int)sVar12 < 0xb) goto LAB_0040a00c;
            }
            pcVar19 = 
            "\n******* ERROR: offset data for file \'%s\' is either too large or too small!\n";
            goto LAB_0040973e;
          }
LAB_0040a002:
          sVar12 = 0xffffffff;
LAB_0040a00c:
          strncpy((char *)local_46c,_DstBuf + iVar10 + 1,sVar12);
          local_41c[sVar12] = 0;
          iVar10 = iVar10 + 2 + sVar12;
          uVar18 = FUN_00421860(local_46c,0xffffffff);
          *(uint *)(pcVar19 + 0x400) = uVar18;
          if (uVar18 == 0xffffffff) {
            pcVar19 = "***** ERROR: [rawpatch] \'%s\' length is unintelligible!\n";
            uVar18 = 1;
            goto LAB_00409745;
          }
          DAT_004c8fe0 = DAT_004c8fe0 + 1;
          FUN_00433690(1,"found (%d) \'%s\' offset: 0x%08x\n");
          if ((int)local_478 <= iVar10) goto LAB_0040a084;
          iVar14 = iVar14 + 1;
          pcVar19 = pcVar19 + 0x404;
          if (iVar14 == 0x10) {
LAB_0040a9b2:
            FUN_00433690(0,"\n******* ERROR: %d of %d [rawpatch] slots are already full!\n");
            free(_DstBuf);
            return 0;
          }
        } while( true );
      }
LAB_0040a8aa:
      FUN_00433690(1,"\n[rawpatch] label not found in ini\n");
LAB_0040a084:
      iVar10 = 0;
      do {
        iVar14 = 0;
        if (_DstBuf[iVar10] == '[') {
          while (iVar15 = iVar14 + 1, iVar15 < 9) {
            iVar1 = iVar14 + 1;
            iVar14 = iVar15;
            if ((uint)(byte)_DstBuf[iVar10 + iVar15] != (int)"[flashfs]"[iVar1]) {
              iVar14 = 10;
            }
          }
          if (iVar15 != 9) goto LAB_0040a0b9;
          DAT_004bbd4c = 0;
          pcVar19 = (char *)&DAT_0047b94c;
          cVar2 = _DstBuf[iVar10 + 9];
          FUN_00433690(1,"\nini: label [flashfs] found\n");
          local_478 = (char *)0x0;
          iVar7 = (cVar2 == '\0') + 9 + iVar10;
          goto LAB_0040a235;
        }
LAB_0040a0b9:
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar7);
      goto LAB_0040a941;
    }
    pcVar19 = 
    "\n\n***** ERROR: File descriptor ini %s\nappears to be a multi byte file, not an ascii only file!\n"
    ;
LAB_0040973e:
    uVar18 = 0;
LAB_00409745:
    FUN_00433690(uVar18,pcVar19);
    free(_DstBuf);
  }
  return 0;
joined_r0x0040951d:
  iVar8 = iVar8 + 1;
  if (iVar8 == iVar7) goto LAB_0040951f;
  goto LAB_00409510;
  while( true ) {
    local_478 = (char *)((int)local_478 + 1);
    pcVar19 = pcVar19 + 0x400;
    iVar7 = iVar10;
    if (local_478 == (char *)0x100) break;
LAB_0040a235:
    sVar5 = iVar6 - iVar7;
    pcVar9 = _DstBuf + iVar7;
    if ((int)sVar5 < 1) {
LAB_0040a89b:
      bVar3 = true;
      sVar11 = 0xffffffff;
LAB_0040a2a2:
      strncpy(pcVar19,pcVar9,sVar11);
      *(undefined1 *)((int)&DAT_0047b94c + (int)local_478 * 0x400 + sVar11) = 0;
      if (0x15 < (int)sVar11) {
        pcVar9 = strrchr(pcVar19,0x2f);
        if ((pcVar9 != (char *)0x0) ||
           (pcVar9 = strrchr(pcVar19,0x5c), _Str = pcVar19, pcVar9 != (char *)0x0)) {
          _Str = pcVar9 + 1;
        }
        sVar5 = strlen(_Str);
        if (0x15 < sVar5) {
          FUN_00433690(0,
                       "\n******* ERROR: file in [flashfs] has greater than %d chars in it\'s name!\n"
                      );
          pcVar19 = "\n        Line: %s\n";
          goto LAB_0040973e;
        }
      }
      iVar7 = sVar11 + iVar7;
      iVar14 = sVar11 - 1;
      iVar10 = iVar7 + 1;
      if ((byte)((&DAT_0047b94b)[(int)local_478 * 0x400 + sVar11] - 0x31) < 2) {
LAB_0040a5cc:
        *(undefined1 *)((int)&DAT_0047b94c + (int)local_478 * 0x400 + iVar14) = 0;
      }
      if (!bVar3) goto LAB_0040a31a;
      (&DAT_004bb94c)[(int)local_478] = 0;
    }
    else {
      cVar2 = *pcVar9;
      sVar12 = 0;
      if (cVar2 == '\0') {
LAB_0040a273:
        sVar11 = 0;
        do {
          sVar11 = sVar11 + 1;
          if (sVar5 == sVar11) goto LAB_0040a291;
        } while (pcVar9[sVar11] != ',');
        if ((int)sVar11 < (int)sVar12) {
          bVar3 = false;
        }
        else {
LAB_0040a291:
          bVar3 = true;
          sVar11 = sVar12;
        }
        if (0x3ff < (int)sVar11) {
          pcVar19 = "\n******* ERROR: file in [flashfs] has greater than %d chars in it\'s path!\n";
          goto LAB_0040973e;
        }
        goto LAB_0040a2a2;
      }
      do {
        sVar12 = sVar12 + 1;
        if (sVar5 == sVar12) {
          if (cVar2 == ',') goto LAB_0040a89b;
          sVar12 = 0xffffffff;
          goto LAB_0040a273;
        }
      } while (pcVar9[sVar12] != '\0');
      if (cVar2 != ',') goto LAB_0040a273;
      iVar10 = iVar7 + 1;
      *(undefined1 *)(&DAT_0047b94c + (int)local_478 * 0x100) = 0;
      if ((byte)((&DAT_0047b94b)[(int)local_478 * 0x400] - 0x31) < 2) {
        iVar14 = -1;
        bVar3 = false;
        goto LAB_0040a5cc;
      }
LAB_0040a31a:
      if (iVar6 - iVar10 < 1) {
LAB_0040a352:
        pcVar19 = "\n******* ERROR: crc data for file \'%s\' in ini is incorrect size!\n";
        goto LAB_0040973e;
      }
      if (_DstBuf[iVar10] == '\0') {
        iVar7 = 0;
        (&DAT_004bb94c)[(int)local_478] = 0;
      }
      else {
        iVar14 = 0;
        do {
          iVar14 = iVar14 + 1;
          if (iVar6 - iVar10 == iVar14) goto LAB_0040a352;
        } while (_DstBuf[iVar14 + iVar7 + 1] != '\0');
        if (iVar14 != 8) goto LAB_0040a352;
        strncpy((char *)local_46c,_DstBuf + iVar10,8);
        local_414 = 0;
        uVar18 = FUN_00421380((char *)local_46c,0);
        (&DAT_004bb94c)[(int)local_478] = uVar18;
        iVar7 = 8;
      }
      iVar10 = iVar10 + 1 + iVar7;
    }
    DAT_004bbd4c = DAT_004bbd4c + 1;
    FUN_00433690(1,"found (%d) \'%s\' crc: 0x%08x\n");
    if (iVar6 <= iVar10) break;
  }
  iVar7 = 0;
  if (0 < iVar8) {
    do {
      iVar10 = 0;
      if (_DstBuf[iVar7] == '[') {
        while (iVar14 = iVar10 + 1, iVar14 < 10) {
          iVar15 = iVar10 + 1;
          iVar10 = iVar14;
          if ((uint)(byte)_DstBuf[iVar14 + iVar7] != (int)"[security]"[iVar15]) {
            iVar10 = 0xb;
          }
        }
        if (iVar14 == 10) {
          DAT_004c9160 = 0;
          iVar7 = (_DstBuf[iVar7 + 10] == '\0') + 10 + iVar7;
          FUN_00433690(1,"\nini: label [security] found\n");
          if (0 < iVar6 - iVar7) {
            iVar8 = 0;
            cVar2 = _DstBuf[iVar7];
            goto joined_r0x0040a449;
          }
          iVar8 = -1;
          goto LAB_0040a462;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar8);
  }
LAB_0040a941:
  pcVar19 = "\n******* ERROR: could not find label [flashfs] in file list ini\n";
  goto LAB_00409527;
joined_r0x0040a449:
  if (cVar2 == '[') goto LAB_0040a462;
  iVar8 = iVar8 + 1;
  if (iVar6 - iVar7 == iVar8) {
    iVar8 = -1;
    goto LAB_0040a462;
  }
  cVar2 = (_DstBuf + iVar7)[iVar8];
  goto joined_r0x0040a449;
LAB_0040a462:
  iVar8 = iVar8 + iVar7;
  local_478 = &DAT_004c8fe4;
  iVar10 = 0;
  do {
    pcVar19 = _DstBuf + iVar7;
    sVar5 = iVar6 - iVar7;
    if ((int)sVar5 < 1) {
LAB_0040a76e:
      sVar12 = 0xffffffff;
LAB_0040a773:
      strncpy(local_478,pcVar19,sVar12);
      (&DAT_004c8fe4)[iVar10 * 0x16 + sVar12] = 0;
      iVar14 = sVar12 + iVar7 + 1;
      if (iVar6 - iVar14 < 1) {
LAB_0040a7ce:
        pcVar19 = "\n******* ERROR: crc data for file \'%s\' in ini is incorrect size!\n";
        goto LAB_0040973e;
      }
      if (_DstBuf[iVar14] == '\0') {
        (&DAT_004c9138)[iVar10] = 0;
        iVar7 = 0;
      }
      else {
        iVar15 = 0;
        do {
          iVar15 = iVar15 + 1;
          if (iVar6 - iVar14 == iVar15) goto LAB_0040a7ce;
        } while (_DstBuf[iVar15 + sVar12 + iVar7 + 1] != '\0');
        if (iVar15 != 8) goto LAB_0040a7ce;
        strncpy((char *)local_46c,_DstBuf + iVar14,8);
        local_414 = 0;
        uVar18 = FUN_00421380((char *)local_46c,0);
        (&DAT_004c9138)[iVar10] = uVar18;
        iVar7 = 8;
      }
      iVar7 = iVar7 + 1 + iVar14;
    }
    else {
      cVar2 = *pcVar19;
      sVar12 = 0;
      if (cVar2 == ',') {
LAB_0040a4b1:
        sVar11 = 0;
        do {
          sVar11 = sVar11 + 1;
          if (sVar5 == sVar11) {
            if ((int)sVar12 < 0) goto LAB_0040a76e;
            sVar11 = 0xffffffff;
            goto LAB_0040a4d8;
          }
        } while (pcVar19[sVar11] != '\0');
        if ((int)sVar11 < (int)sVar12) {
          if ((int)sVar11 < 0x16) goto LAB_0040a4d8;
        }
        else if ((int)sVar12 < 0x16) goto LAB_0040a773;
        pcVar19 = "\n******* ERROR: file in [security] has greater than %d chars in it\'s name!\n";
        goto LAB_0040973e;
      }
      do {
        sVar12 = sVar12 + 1;
        if (sVar5 == sVar12) {
          if (cVar2 == '\0') goto LAB_0040a76e;
          sVar12 = 0xffffffff;
          goto LAB_0040a4b1;
        }
      } while (pcVar19[sVar12] != ',');
      if (cVar2 != '\0') goto LAB_0040a4b1;
      sVar11 = 0;
LAB_0040a4d8:
      iVar7 = iVar7 + 1 + sVar11;
      strncpy(local_478,pcVar19,sVar11);
      (&DAT_004c8fe4)[iVar10 * 0x16 + sVar11] = 0;
      (&DAT_004c9138)[iVar10] = 0;
    }
    DAT_004c9160 = DAT_004c9160 + 1;
    FUN_00433690(1,"found (%d) \'%s\' crc: 0x%08x\n");
    if (iVar8 <= iVar7) break;
    iVar10 = iVar10 + 1;
    local_478 = local_478 + 0x16;
  } while (iVar10 != 10);
  free(_DstBuf);
  FUN_00433690(1,"------ ini parsing completed ------\n\n");
  return 1;
}

