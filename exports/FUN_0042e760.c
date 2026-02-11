
/* WARNING: Type propagation algorithm not settling */

uint FUN_0042e760(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined3 extraout_var;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar8;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  char *pcVar13;
  int *piVar14;
  undefined1 *puVar15;
  byte bVar16;
  uint *puVar17;
  char *pcVar18;
  char *pcVar19;
  bool bVar20;
  undefined1 uVar21;
  undefined *puStack_480;
  int iStack_47c;
  undefined4 uStack_478;
  ushort uStack_468;
  ushort uStack_466;
  undefined4 uStack_464;
  ushort auStack_460 [4];
  uint local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  char acStack_444 [4];
  uint uStack_440;
  char cStack_43a;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  void *local_3c;
  size_t local_38;
  void *pvStack_34;
  void *pvStack_30;
  size_t sStack_2c;
  
  bVar20 = true;
  local_458 = 0;
  local_454 = 0;
  local_450 = 0;
  local_44c = 0;
  if ((DAT_00479ea8 != 2) && (bVar20 = DAT_00479eb4 != 0, DAT_00479ea8 - 4 < 2)) {
    bVar20 = true;
  }
  if (DAT_0047a088 == 0) {
    FUN_00433690(1,"Writing initial header to flash image\n");
    FUN_00411680();
  }
  else {
    FUN_00433690(1,"\n------ Copying bootloader image to flash image ------ \n");
    uVar2 = FUN_00411800(1);
    if (uVar2 != 0) {
      FUN_00433690(0,
                   "******* ERROR: bootloaders retrieved from console are inconsistent, cannot proceed!\n\n"
                  );
      return uVar2;
    }
  }
  FUN_0040ca30(&DAT_0047b14c);
  FUN_00433690(1,"\n------ Loading bootloaders and required security files ------\n");
  if (DAT_0047a088 == 0) {
    uVar2 = FUN_0042a370();
  }
  else {
    uVar2 = FUN_0042adc0();
  }
  if (uVar2 != 0) {
    FUN_00433690(0,"******* ERROR: critical bootloader files are missing, cannot proceed!\n\n");
    return uVar2;
  }
  if ((DAT_0047a088 == 0) && (iVar3 = FUN_00429e70(), iVar3 == 0)) {
    return 1;
  }
  FUN_00433690(1,"done!\n");
  uVar4 = FUN_00412dd0();
  uVar5 = FUN_0042e160();
  if (uVar4 == 0) {
    uVar4 = uVar5 >> 0xe;
  }
  if (DAT_00479ea8 == 3) {
    FUN_00433690(1,"\n------ Patching BLs and modifying patches ------\n");
    if (DAT_0047a088 == 0) {
      puVar12 = &local_448;
      for (iVar3 = 0x10b; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      iVar3 = FUN_00427500(0,(int)&local_448);
      if (iVar3 == 0) {
        FUN_0042bb10(local_3c,local_38);
        free(pvStack_34);
      }
      else if ((DAT_0047a078 == (void *)0x0) || (DAT_0047a07c == 0)) {
        FUN_0042bb10((void *)0x0,0);
      }
      else {
        FUN_0042bb10(DAT_0047a078,DAT_0047a07c);
        free(DAT_0047a078);
      }
    }
    else {
      FUN_0042bf70();
    }
  }
  else if (DAT_00479ea8 - 4 < 2) {
    FUN_00433690(1,"\n------ Patching BLs and modifying patches ------\n");
    iVar3 = FUN_0042b660();
    if (iVar3 == 0) {
      return 1;
    }
  }
  if (((DAT_0047a088 == 0) && (DAT_00479ea8 != 1)) && (DAT_00479ea8 < 6)) {
    FUN_00433690(1,"\n------ Patching boot reasons and options into flash header ------\n");
    FUN_0042b2b0();
  }
  FUN_00433690(1,"\n------ Encrypting and finalizing bootloaders ------\n");
  FUN_0041aa00(DAT_00479ec0);
  if (bVar20) {
    if (DAT_004c4f98 < 1) {
LAB_0042e907:
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      piVar9 = &DAT_004bc580;
      if (DAT_004bc154 == 0x18) goto LAB_0042e907;
      do {
        iVar3 = iVar3 + 1;
        if (iVar3 == DAT_004c4f98) goto LAB_0042e907;
        iVar6 = *piVar9;
        piVar9 = piVar9 + 0x10b;
      } while (iVar6 != 0x18);
    }
    FUN_0041b320((&DAT_004bc15c)[iVar3 * 0x10b]);
    if (DAT_00479ea8 != 2) {
      iVar6 = FUN_00410460();
      iVar7 = FUN_00410490();
      (&DAT_004bc158)[iVar3 * 0x10b] = iVar6 + iVar7;
    }
  }
  if (DAT_0047a088 == 0) {
    iVar3 = FUN_0042cfa0(&local_450,uVar4);
  }
  else {
    iVar3 = FUN_0042dfb0(&local_450,(ushort)uVar4);
  }
  if (iVar3 != 0) {
    return 0xfffffffc;
  }
  if (bVar20) {
    if (0 < DAT_004c4f98) {
      iVar6 = 0;
      piVar9 = &DAT_004bc580;
      iVar3 = DAT_004bc154;
      while ((iVar3 != 0x18 && (iVar6 = iVar6 + 1, DAT_004c4f98 != iVar6))) {
        iVar3 = *piVar9;
        piVar9 = piVar9 + 0x10b;
      }
    }
    FUN_004232e0(1,"\nVirtual Fuses set to:");
  }
  FUN_00433690(1,"done!\n\n------ Adding bootloaders to flash image ------\n");
  if (DAT_0047a088 == 0) {
    FUN_0042c090();
    iVar3 = FUN_00412dd0();
    if (iVar3 == 0) goto LAB_0042fa02;
LAB_0042ea00:
    iVar3 = FUN_00412dd0();
  }
  else {
    FUN_0042c620();
    iVar3 = FUN_00412dd0();
    if (iVar3 != 0) goto LAB_0042ea00;
LAB_0042fa02:
    FUN_00433690(1,"Fixing up FS table...");
    FUN_004112b0(uVar2);
    FUN_004104e0(uVar2);
    FUN_00433690(1,"done!\n");
    iVar3 = FUN_00412dd0();
  }
  if (iVar3 != 0) {
    iVar3 = FUN_00412dd0();
    FUN_004104e0(iVar3 << 0xe);
  }
  if (DAT_00479ea8 == 2) {
    FUN_004104d0();
    if (DAT_004c4f98 < 1) {
      if (DAT_004bc174 != 0) {
        iVar3 = 0;
        iVar6 = 0;
LAB_00430228:
        FUN_00433690(1,"Writing CG patch slot overflow data to sysupdate.xexp1\n");
        FUN_00433690(1,"\tat raw offset 0x%x len 0x%08x (end: 0x%08x)...");
        if (DAT_00479ec4 == 0) {
          FUN_00433690(2,"**** using default time!!! ****\n");
          local_454 = 0x1cddadf;
          local_458 = 0x717a1200;
        }
        else {
          FUN_0040bae0((short *)&uStack_440);
          FUN_0040b700((ushort *)&uStack_440,(longlong *)&local_458);
        }
        FUN_0040b910(&local_458,(short *)&uStack_466,(short *)auStack_460);
        uStack_464 = (uint)auStack_460[0] << 0x18 |
                     CONCAT22(auStack_460[0] >> 8,CONCAT11((char)uStack_466,(char)(uStack_466 >> 8))
                             );
        FUN_00410bb0("sysupdate.xexp1",
                     (void *)((&DAT_004bc178)[iVar3 * 0x10b] + (&DAT_004bc15c)[iVar6 * 0x10b]),
                     &uStack_464,(&DAT_004bc174)[iVar3 * 0x10b]);
        FUN_00433690(1,"done!\n");
        if (0 < DAT_004c4f98) goto LAB_0042ffa0;
      }
      if (DAT_004bc174 == 0) goto LAB_0042ea70;
      iVar3 = 0;
      iVar6 = 0;
    }
    else {
      iVar3 = 0;
      piVar9 = &DAT_004bc580;
      if (DAT_004bc154 == 0x14) {
        if (DAT_004bc174 != 0) {
          iVar3 = 0;
LAB_004301fd:
          iVar6 = 0;
          piVar9 = &DAT_004bc580;
          do {
            iVar6 = iVar6 + 1;
            if (DAT_004c4f98 == iVar6) goto LAB_00430226;
            iVar7 = *piVar9;
            piVar9 = piVar9 + 0x10b;
          } while (iVar7 != 0x15);
          goto LAB_00430228;
        }
LAB_0042ffa9:
        iVar3 = 0;
        piVar9 = &DAT_004bc580;
        do {
          iVar3 = iVar3 + 1;
          if (DAT_004c4f98 == iVar3) {
            iVar3 = 0;
            break;
          }
          iVar6 = *piVar9;
          piVar9 = piVar9 + 0x10b;
        } while (iVar6 != 9);
        if ((&DAT_004bc174)[iVar3 * 0x10b] == 0) goto LAB_0042ea70;
        iVar3 = 0;
        piVar9 = &DAT_004bc580;
        do {
          iVar3 = iVar3 + 1;
          if (DAT_004c4f98 == iVar3) {
            iVar3 = 0;
            break;
          }
          iVar6 = *piVar9;
          piVar9 = piVar9 + 0x10b;
        } while (iVar6 != 9);
        if (DAT_004bc154 == 10) {
LAB_00430036:
          iVar6 = 0;
          goto LAB_00430038;
        }
      }
      else {
        do {
          iVar3 = iVar3 + 1;
          if (DAT_004c4f98 == iVar3) {
            iVar3 = 0;
            break;
          }
          iVar6 = *piVar9;
          piVar9 = piVar9 + 0x10b;
        } while (iVar6 != 0x14);
        if ((&DAT_004bc174)[iVar3 * 0x10b] != 0) {
          iVar3 = 0;
          piVar9 = &DAT_004bc580;
          do {
            iVar3 = iVar3 + 1;
            if (DAT_004c4f98 == iVar3) {
              iVar3 = 0;
              break;
            }
            iVar6 = *piVar9;
            piVar9 = piVar9 + 0x10b;
          } while (iVar6 != 0x14);
          if (DAT_004bc154 == 0x15) {
LAB_00430226:
            iVar6 = 0;
            goto LAB_00430228;
          }
          goto LAB_004301fd;
        }
LAB_0042ffa0:
        if (DAT_004bc154 != 9) goto LAB_0042ffa9;
        if (DAT_004bc174 == 0) goto LAB_0042ea70;
        iVar3 = 0;
      }
      iVar6 = 0;
      piVar9 = &DAT_004bc580;
      do {
        iVar6 = iVar6 + 1;
        if (DAT_004c4f98 == iVar6) goto LAB_00430036;
        iVar7 = *piVar9;
        piVar9 = piVar9 + 0x10b;
      } while (iVar7 != 10);
    }
LAB_00430038:
    FUN_00433690(1,"Writing target CG patch slot overflow data to sysupdate.xexp2\n");
    FUN_00433690(1,"\tat raw offset 0x%x len 0x%08x (end: 0x%08x)...");
    if (DAT_00479ec4 == 0) {
      FUN_00433690(2,"**** using default time!!! ****\n");
      local_454 = 0x1cddadf;
      local_458 = 0x717a1200;
    }
    else {
      FUN_0040bae0((short *)&uStack_440);
      FUN_0040b700((ushort *)&uStack_440,(longlong *)&local_458);
    }
    FUN_0040b910(&local_458,(short *)&uStack_466,(short *)auStack_460);
    uStack_464 = (uint)auStack_460[0] << 0x18 |
                 CONCAT22(auStack_460[0] >> 8,CONCAT11((char)uStack_466,(char)(uStack_466 >> 8)));
    FUN_00410bb0("sysupdate.xexp2",
                 (void *)((&DAT_004bc178)[iVar3 * 0x10b] + (&DAT_004bc15c)[iVar6 * 0x10b]),
                 &uStack_464,(&DAT_004bc174)[iVar3 * 0x10b]);
    FUN_00433690(1,"done!\n");
    goto LAB_0042ea70;
  }
  if (DAT_004c4f98 < 1) {
LAB_0042ea56:
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    piVar9 = &DAT_004bc580;
    if (DAT_004bc154 == 9) goto LAB_0042ea56;
    do {
      iVar3 = iVar3 + 1;
      if (iVar3 == DAT_004c4f98) goto LAB_0042ea56;
      iVar6 = *piVar9;
      piVar9 = piVar9 + 0x10b;
    } while (iVar6 != 9);
  }
  if ((&DAT_004bc174)[iVar3 * 0x10b] == 0) goto LAB_0042ea70;
  FUN_004104d0();
  if (DAT_004c4f98 < 1) {
    iVar3 = 0;
    iVar6 = 0;
  }
  else {
    iVar3 = 0;
    piVar9 = &DAT_004bc580;
    if (DAT_004bc154 == 9) {
      iVar3 = 0;
    }
    else {
      do {
        iVar3 = iVar3 + 1;
        if (iVar3 == DAT_004c4f98) {
          iVar3 = 0;
          break;
        }
        iVar6 = *piVar9;
        piVar9 = piVar9 + 0x10b;
      } while (iVar6 != 9);
      if (DAT_004bc154 == 10) {
LAB_0042fce6:
        iVar6 = 0;
        goto LAB_0042fce8;
      }
    }
    iVar6 = 0;
    piVar9 = &DAT_004bc580;
    do {
      iVar6 = iVar6 + 1;
      if (iVar6 == DAT_004c4f98) goto LAB_0042fce6;
      iVar7 = *piVar9;
      piVar9 = piVar9 + 0x10b;
    } while (iVar7 != 10);
  }
LAB_0042fce8:
  FUN_00433690(1,"Writing zeropair CG patch slot overflow data to sysupdate.xexp1\n");
  FUN_00433690(1,"\tat raw offset 0x%x len 0x%08x (end: 0x%08x)...");
  if (DAT_00479ec4 == 0) {
    FUN_00433690(2,"**** using default time!!! ****\n");
    local_454 = 0x1cddadf;
    local_458 = 0x717a1200;
  }
  else {
    FUN_0040bae0((short *)&uStack_440);
    FUN_0040b700((ushort *)&uStack_440,(longlong *)&local_458);
  }
  FUN_0040b910(&local_458,(short *)&uStack_466,(short *)auStack_460);
  uStack_464 = (uint)auStack_460[0] << 0x18 |
               CONCAT22(auStack_460[0] >> 8,CONCAT11((char)uStack_466,(char)(uStack_466 >> 8)));
  FUN_00410bb0("sysupdate.xexp1",
               (void *)((&DAT_004bc178)[iVar3 * 0x10b] + (&DAT_004bc15c)[iVar6 * 0x10b]),&uStack_464
               ,(&DAT_004bc174)[iVar3 * 0x10b]);
  FUN_00433690(1,"done!\n");
LAB_0042ea70:
  uVar2 = 0;
  puVar17 = &DAT_0047b94c;
  FUN_00433690(1,"\n------ adding %d firmware files ------\n");
  if (DAT_004bbd4c != 0) {
    do {
      strcpy((char *)&uStack_440,(char *)puVar17);
      puVar11 = &uStack_440;
      do {
        puVar10 = puVar11;
        uVar5 = *puVar10 + 0xfefefeff & ~*puVar10;
        uVar4 = uVar5 & 0x80808080;
        puVar11 = puVar10 + 1;
      } while (uVar4 == 0);
      bVar20 = (uVar5 & 0x8080) == 0;
      if (bVar20) {
        uVar4 = uVar4 >> 0x10;
      }
      if (bVar20) {
        puVar11 = (uint *)((int)puVar10 + 6);
      }
      cVar1 = *(char *)((int)puVar11 +
                       (int)(acStack_444 +
                            (-(int)&uStack_440 - (uint)CARRY1((byte)uVar4,(byte)uVar4))));
      iVar3 = _strnicmp("sysupdate.xexp",(char *)&uStack_440,0xe);
      if (iVar3 == 0) {
        FUN_00433690(1,
                     "\n******* WARNING: firmware file %s ignored, \'sysupdate.xexp\' is a reserved name!\n\n"
                    );
      }
      else {
        uVar4 = (&DAT_004bb94c)[uVar2];
        if (uVar4 == 0) {
          iVar6 = 0;
          iVar3 = 0;
          uVar4 = 0;
LAB_0042eb81:
          uVar4 = FUN_00428040((char *)&uStack_440,(int)(&DAT_004bbd50 + DAT_004c4f9c * 0x42c),0,
                               uVar4,(undefined1 *)&uStack_464,iVar3,1,iVar6);
          if (uVar4 != 0) {
            if ((&DAT_004bb94c)[uVar2] != 0) {
              FUN_00433690(0,"***** could not read file \'%s\' *****\n");
              FUN_00433690(0,"\n******* ERROR: critical firmware file missing, cannot proceed!\n\n")
              ;
              return uVar4;
            }
            FUN_00433690(1,"***** could not read file \'%s\', skipping *****\n");
            goto LAB_0042eac9;
          }
        }
        else {
          if (cVar1 != 'p') {
            iVar3 = 1;
LAB_0042eb7d:
            iVar6 = 1;
            goto LAB_0042eb81;
          }
          puVar11 = puVar17;
          if (DAT_00479ea8 == 2) {
            do {
              puVar10 = puVar11;
              uVar5 = *puVar10 + 0xfefefeff & ~*puVar10;
              uVar4 = uVar5 & 0x80808080;
              puVar11 = puVar10 + 1;
            } while (uVar4 == 0);
            bVar20 = (uVar5 & 0x8080) == 0;
            if (bVar20) {
              uVar4 = uVar4 >> 0x10;
            }
            if (bVar20) {
              puVar11 = (uint *)((int)puVar10 + 6);
            }
            *(undefined2 *)((int)puVar11 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4))) = 0x32;
          }
          else {
            do {
              puVar10 = puVar11;
              uVar5 = *puVar10 + 0xfefefeff & ~*puVar10;
              uVar4 = uVar5 & 0x80808080;
              puVar11 = puVar10 + 1;
            } while (uVar4 == 0);
            bVar20 = (uVar5 & 0x8080) == 0;
            if (bVar20) {
              uVar4 = uVar4 >> 0x10;
            }
            if (bVar20) {
              puVar11 = (uint *)((int)puVar10 + 6);
            }
            *(undefined2 *)((int)puVar11 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4))) = 0x31;
          }
          iVar3 = FUN_00428040((char *)&uStack_440,(int)(&DAT_004bbd50 + DAT_004c4f9c * 0x42c),0,
                               (&DAT_004bb94c)[uVar2],(undefined1 *)&uStack_464,1,1,1);
          puVar11 = &uStack_440;
          if (iVar3 != 0) {
            do {
              puVar10 = puVar11;
              uVar5 = *puVar10 + 0xfefefeff & ~*puVar10;
              uVar4 = uVar5 & 0x80808080;
              puVar11 = puVar10 + 1;
            } while (uVar4 == 0);
            bVar20 = (uVar5 & 0x8080) == 0;
            if (bVar20) {
              uVar4 = uVar4 >> 0x10;
            }
            if (bVar20) {
              puVar11 = (uint *)((int)puVar10 + 6);
            }
            *(undefined2 *)((int)puVar11 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4))) = 0x31;
            iVar3 = FUN_00428040((char *)&uStack_440,(int)(&DAT_004bbd50 + DAT_004c4f9c * 0x42c),0,
                                 (&DAT_004bb94c)[uVar2],(undefined1 *)&uStack_464,0,1,1);
            puVar11 = &uStack_440;
            if (iVar3 != 0) {
              do {
                puVar10 = puVar11;
                uVar5 = *puVar10 + 0xfefefeff & ~*puVar10;
                uVar4 = uVar5 & 0x80808080;
                puVar11 = puVar10 + 1;
              } while (uVar4 == 0);
              bVar20 = (uVar5 & 0x8080) == 0;
              if (bVar20) {
                uVar4 = uVar4 >> 0x10;
              }
              if (bVar20) {
                puVar11 = (uint *)((int)puVar10 + 6);
              }
              *(char *)((int)puVar11 +
                       (int)(acStack_444 +
                            (-(int)&uStack_440 - (uint)CARRY1((byte)uVar4,(byte)uVar4)))) = '2';
              iVar3 = 0;
              uVar4 = (&DAT_004bb94c)[uVar2];
              goto LAB_0042eb7d;
            }
          }
        }
        pcVar13 = strrchr((char *)puVar17,0x2f);
        if ((pcVar13 != (char *)0x0) ||
           (pcVar13 = strrchr((char *)puVar17,0x5c), puVar11 = puVar17, pcVar13 != (char *)0x0)) {
          puVar11 = (uint *)(pcVar13 + 1);
        }
        FUN_004104d0();
        uVar4 = (&DAT_004bc160)[DAT_004c4f9c * 0x10b];
        FUN_00433690(1,"\tadding as %s at raw offset 0x%x len 0x%08x (end 0x%08x)\n");
        FUN_00410bb0((char *)puVar11,(void *)(&DAT_004bc15c)[DAT_004c4f9c * 0x10b],&uStack_464,uVar4
                    );
      }
LAB_0042eac9:
      uVar2 = uVar2 + 1;
      puVar17 = puVar17 + 0x100;
    } while (uVar2 < DAT_004bbd4c);
  }
  FUN_00433690(1,"\n------ adding %d security files ------\n");
  if (DAT_004c9160 != 0) {
    pcVar13 = &DAT_004c8fe4;
    puVar12 = (undefined4 *)(&DAT_004bbd50 + DAT_004c4f9c * 0x42c);
    for (iVar3 = 0x10b; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    puVar17 = &uStack_464;
    FUN_00420b20(0,(undefined1 *)puVar17);
    uVar2 = 0;
    do {
      FUN_00433690(1,"<- Processing %s ->\n");
      iVar3 = FUN_00427ab0(pcVar13,(int)(&DAT_004bbd50 + DAT_004c4f9c * 0x42c),puVar17);
      if (iVar3 == 0) {
LAB_0042f080:
        uVar4 = FUN_00420ad0(puVar17);
        uVar21 = uVar4 == 0;
        if ((bool)uVar21) {
          if (DAT_00479ec4 == 0) {
            FUN_00433690(2,"**** using default time!!! ****\n");
            local_454 = 0x1cddadf;
            local_458 = 0x717a1200;
          }
          else {
            FUN_0040bae0((short *)&uStack_440);
            FUN_0040b700((ushort *)&uStack_440,(longlong *)&local_458);
          }
          FUN_0040b910(&local_458,(short *)&uStack_468,(short *)&uStack_466);
          FUN_0040ba30((uint)uStack_468,(uint)uStack_466,(longlong *)auStack_460);
          iVar3 = 0xc;
          uStack_464 = CONCAT22(uStack_466 >> 8,CONCAT11((char)uStack_468,(char)(uStack_468 >> 8)))
                       | (uint)uStack_466 << 0x18;
          uVar21 = uStack_464 == 0;
          pcVar18 = pcVar13;
          pcVar19 = "secdata.bin";
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            uVar21 = *pcVar18 == *pcVar19;
            pcVar18 = pcVar18 + 1;
            pcVar19 = pcVar19 + 1;
          } while ((bool)uVar21);
          if ((bool)uVar21) goto LAB_0042f200;
LAB_0042f13b:
          iVar3 = 0xd;
          pcVar18 = pcVar13;
          pcVar19 = "extended.bin";
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            uVar21 = *pcVar18 == *pcVar19;
            pcVar18 = pcVar18 + 1;
            pcVar19 = pcVar19 + 1;
          } while ((bool)uVar21);
          if ((bool)uVar21) {
            FUN_0041d6a0((int)(&DAT_004bbd50 + DAT_004c4f9c * 0x42c));
          }
          else {
            iVar3 = 8;
            pcVar18 = pcVar13;
            pcVar19 = "dae.bin";
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              uVar21 = *pcVar18 == *pcVar19;
              pcVar18 = pcVar18 + 1;
              pcVar19 = pcVar19 + 1;
            } while ((bool)uVar21);
            if ((bool)uVar21) {
              FUN_0041e180((void *)(&DAT_004bc15c)[DAT_004c4f9c * 0x10b],
                           (void *)(&DAT_004bc160)[DAT_004c4f9c * 0x10b]);
            }
            else {
              iVar3 = 8;
              pcVar18 = pcVar13;
              pcVar19 = "crl.bin";
              do {
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                uVar21 = *pcVar18 == *pcVar19;
                pcVar18 = pcVar18 + 1;
                pcVar19 = pcVar19 + 1;
              } while ((bool)uVar21);
              if ((bool)uVar21) {
                FUN_0041dc30((void *)(&DAT_004bc15c)[DAT_004c4f9c * 0x10b],
                             (&DAT_004bc160)[DAT_004c4f9c * 0x10b],(int)auStack_460);
              }
              else {
                iVar3 = 9;
                pcVar18 = pcVar13;
                pcVar19 = "fcrt.bin";
                do {
                  if (iVar3 == 0) break;
                  iVar3 = iVar3 + -1;
                  uVar21 = *pcVar18 == *pcVar19;
                  pcVar18 = pcVar18 + 1;
                  pcVar19 = pcVar19 + 1;
                } while ((bool)uVar21);
                if ((bool)uVar21) {
                  FUN_0041e620((uint *)(&DAT_004bc15c)[DAT_004c4f9c * 0x10b],
                               (&DAT_004bc160)[DAT_004c4f9c * 0x10b]);
                }
                else {
                  iVar3 = 8;
                  pcVar18 = pcVar13;
                  pcVar19 = "odd.bin";
                  do {
                    if (iVar3 == 0) break;
                    iVar3 = iVar3 + -1;
                    uVar21 = *pcVar18 == *pcVar19;
                    pcVar18 = pcVar18 + 1;
                    pcVar19 = pcVar19 + 1;
                  } while ((bool)uVar21);
                  if ((bool)uVar21) {
                    if ((&DAT_004c9110)[uVar2] != 0) {
                      FUN_00420b20((&DAT_004c9110)[uVar2],(undefined1 *)puVar17);
                    }
                  }
                  else {
                    FUN_00433690(0,
                                 "******* WARNING: writing %s%s as-is to NAND, if .meta was not included it may be invalid!\n"
                                );
                  }
                }
              }
            }
          }
        }
        else {
          FUN_0040ba30((uint)(ushort)((ushort)uStack_464 << 8 | (ushort)uStack_464 >> 8),
                       (uint)(ushort)(uStack_464._2_2_ << 8 | uStack_464._2_2_ >> 8),
                       (longlong *)auStack_460);
          iVar3 = 0xc;
          pcVar18 = pcVar13;
          pcVar19 = "secdata.bin";
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            uVar21 = *pcVar18 == *pcVar19;
            pcVar18 = pcVar18 + 1;
            pcVar19 = pcVar19 + 1;
          } while ((bool)uVar21);
          if (!(bool)uVar21) goto LAB_0042f13b;
LAB_0042f200:
          FUN_0041d9b0((int)(&DAT_004bbd50 + DAT_004c4f9c * 0x42c),(int)auStack_460);
        }
        FUN_00411030(pcVar13,(void *)(&DAT_004bc15c)[DAT_004c4f9c * 0x10b],puVar17,
                     (&DAT_004bc160)[DAT_004c4f9c * 0x10b]);
      }
      else {
        if ((DAT_00479f00._3_1_ & 1) == 0) {
          if ((void *)(&DAT_004bc15c)[DAT_004c4f9c * 0x10b] != (void *)0x0) {
            free((void *)(&DAT_004bc15c)[DAT_004c4f9c * 0x10b]);
          }
          iVar3 = FUN_0040c7b0(pcVar13,&DAT_004bc15c + DAT_004c4f9c * 0x10b,
                               &DAT_004bc160 + DAT_004c4f9c * 0x10b);
          if (iVar3 != 0) {
            FUN_00433690(1,"\tcould not read %s, using data from SUPD...\n");
            goto LAB_0042f080;
          }
        }
        iVar3 = (&DAT_004c90c0)[uVar2];
        bVar20 = iVar3 == 0;
        if (!bVar20) {
          if ((void *)(&DAT_004bc15c)[DAT_004c4f9c * 0x10b] != (void *)0x0) {
            free((void *)(&DAT_004bc15c)[DAT_004c4f9c * 0x10b]);
            iVar3 = (&DAT_004c90c0)[uVar2];
          }
          iVar6 = DAT_004c4f9c;
          (&DAT_004bc15c)[DAT_004c4f9c * 0x10b] = iVar3;
          (&DAT_004bc160)[iVar6 * 0x10b] = (&DAT_004c90e8)[uVar2];
          FUN_00433690(1,"\tcould not read %s, using data from previous parse...\n");
          goto LAB_0042f080;
        }
        iVar3 = 0xc;
        pcVar18 = pcVar13;
        pcVar19 = "secdata.bin";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar20 = *pcVar18 == *pcVar19;
          pcVar18 = pcVar18 + 1;
          pcVar19 = pcVar19 + 1;
        } while (bVar20);
        if (bVar20) {
LAB_0042fbd0:
          (&DAT_004bc160)[DAT_004c4f9c * 0x10b] = 0;
          goto LAB_0042f080;
        }
        iVar3 = 0xd;
        pcVar18 = pcVar13;
        pcVar19 = "extended.bin";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar20 = *pcVar18 == *pcVar19;
          pcVar18 = pcVar18 + 1;
          pcVar19 = pcVar19 + 1;
        } while (bVar20);
        if (bVar20) goto LAB_0042fbd0;
        iVar3 = 9;
        pcVar18 = pcVar13;
        pcVar19 = "fcrt.bin";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar20 = *pcVar18 == *pcVar19;
          pcVar18 = pcVar18 + 1;
          pcVar19 = pcVar19 + 1;
        } while (bVar20);
        if (bVar20) {
          uVar21 = FUN_00413370();
          if (CONCAT31(extraout_var,uVar21) == 0) {
            FUN_00433690(1,"\t%s not found and not required by keyvault, skipped\n");
          }
          else {
            FUN_00433690(0,
                         "\n\n***** ERROR: %s not found, keyvault has this file flagged as required but it\'s being skipped *****\n"
                        );
            if ((DAT_00479ea8 != 1) && (DAT_00479ea8 < 6)) {
              if (CONCAT31(extraout_var,uVar21) == 1) {
                FUN_00433690(0,
                             "             note - on hacked images a nofcrt patch should allow the drive and machine to function\n"
                            );
              }
              else {
                FUN_00433690(0,
                             "             note - on hacked images a nofcrt patch WILL NOT allow the drive to function\n"
                            );
                FUN_00433690(0,"             but should allow the machine to boot normally\n");
              }
            }
          }
        }
        else {
          FUN_00433690(0,"***** WARNING: %s not found, skipping *****\n");
        }
      }
      iVar3 = DAT_004c4f9c;
      if ((void *)(&DAT_004bc15c)[DAT_004c4f9c * 0x10b] != (void *)0x0) {
        free((void *)(&DAT_004bc15c)[DAT_004c4f9c * 0x10b]);
        iVar3 = DAT_004c4f9c;
        (&DAT_004bc15c)[DAT_004c4f9c * 0x10b] = 0;
      }
      uVar2 = uVar2 + 1;
      if (DAT_004c9160 <= uVar2) break;
      pcVar13 = pcVar13 + 0x16;
      puVar12 = (undefined4 *)(&DAT_004bbd50 + iVar3 * 0x42c);
      for (iVar6 = 0x10b; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      FUN_00420b20(0,(undefined1 *)puVar17);
      FUN_00433690(1,"\n");
    } while( true );
  }
  FUN_00433690(1,"\n------ checking for Mobile*.dat ------\n");
  puStack_480 = &DAT_004c9184;
  puVar15 = &DAT_004c9186;
  bVar16 = 0x31;
  uVar2 = 0;
  uVar8 = extraout_ECX;
  do {
    if (uVar2 == 9) {
      uStack_440 = 0x74617453;
      cStack_43a = 't';
      uStack_438 = 0x732e7363;
      uStack_434 = 0x69747465;
      uStack_430 = 0x73676e;
      iVar3 = FUN_00412e90(DAT_00479ef0,(uint)(5 < DAT_00479ea8),DAT_00479ea4 >> 0x1c & 1,
                           (undefined4 *)0x0,(undefined4 *)0x0);
      uVar8 = extraout_ECX_02;
LAB_0042f341:
      iVar6 = FUN_00427500(uVar8,(int)(&DAT_004bbd50 + DAT_004c4f9c * 0x42c));
      uVar8 = extraout_ECX_01;
      if (iVar6 != 0) goto LAB_0042f360;
      FUN_00433690(1,"%s found, adding from file\n");
      if (iVar3 == 0) {
LAB_0042f560:
        uVar4 = FUN_004110b0((void *)(&DAT_004bc15c)[DAT_004c4f9c * 0x10b],
                             (&DAT_004bc160)[DAT_004c4f9c * 0x10b],bVar16);
        uVar8 = extraout_ECX_05;
        if (((short)uVar4 != 0) && (uVar2 < 9)) {
          FUN_00420b00(uVar4 & 0xffff,puStack_480);
          uVar4 = (&DAT_004bc160)[DAT_004c4f9c * 0x10b];
          if (0x3fff < uVar4) {
            uVar4 = 0;
          }
          FUN_00420b00(uVar4,puVar15);
          uVar8 = extraout_ECX_06;
        }
      }
      else {
        uStack_478 = FUN_004104d0();
        puVar12 = (undefined4 *)(&DAT_004bc15c)[DAT_004c4f9c * 0x10b];
LAB_0042f4bd:
        FUN_00413030(&uStack_440,puVar12);
        FUN_004104e0(uStack_478);
        uVar8 = extraout_ECX_04;
      }
    }
    else {
      if (uVar2 == 10) {
        uStack_440 = 0x756e614d;
        cStack_43a = 'c';
        uStack_438 = 0x6e697275;
        uStack_434 = 0x61642e67;
        uStack_430 = CONCAT13(uStack_430._3_1_,0x6174);
        iVar3 = FUN_00412f60(DAT_00479ef0,(uint)(5 < DAT_00479ea8),DAT_00479ea4 >> 0x1c & 1,
                             (undefined4 *)0x0,(undefined4 *)0x0);
        uVar8 = extraout_ECX_00;
        goto LAB_0042f341;
      }
      cStack_43a = (char)uVar2 + 'B';
      uStack_440 = 0x69626f4d;
      uStack_438 = 0x746164;
      iVar3 = FUN_00427500(uVar8,(int)(&DAT_004bbd50 + DAT_004c4f9c * 0x42c));
      if (iVar3 == 0) {
        FUN_00433690(1,"%s found, adding from file\n");
        goto LAB_0042f560;
      }
      iVar3 = 0;
      uVar8 = extraout_ECX_03;
LAB_0042f360:
      if (((&DAT_0047a08c)[uVar2 * 2] != 0) && ((&DAT_0047a090)[uVar2 * 2] != 0)) {
        FUN_00433690(1,"%s found, adding from previous parse\n");
        if (iVar3 != 0) {
          uStack_478 = FUN_004104d0();
          puVar12 = (undefined4 *)(&DAT_0047a08c)[uVar2 * 2];
          goto LAB_0042f4bd;
        }
        uVar4 = FUN_004110b0((void *)(&DAT_0047a08c)[uVar2 * 2],(&DAT_0047a090)[uVar2 * 2],bVar16);
        uVar8 = extraout_ECX_07;
        if (((short)uVar4 != 0) && (uVar2 < 9)) {
          FUN_00420b00(uVar4 & 0xffff,puStack_480);
          uVar4 = (&DAT_0047a090)[uVar2 * 2] & 0xffff;
          if (0x3fff < (int)(&DAT_0047a090)[uVar2 * 2]) {
            uVar4 = 0;
          }
          FUN_00420b00(uVar4,puVar15);
          uVar8 = extraout_ECX_08;
        }
      }
    }
    uVar2 = uVar2 + 1;
    puVar15 = puVar15 + 4;
    puStack_480 = puStack_480 + 4;
    bVar16 = bVar16 + 1;
  } while (uVar2 != 0xb);
  uVar2 = FUN_00410220();
  uVar4 = FUN_00410220();
  FUN_00433690(1,"\n------ adding smc_config.bin ------\n");
  iVar3 = iStack_47c;
  if (0 < DAT_004c4f98) {
    iVar7 = 0;
    piVar9 = &DAT_004bc580;
    iVar6 = DAT_004bc154;
    while ((iVar6 != 0x1b && (iVar7 = iVar7 + 1, iVar3 = iStack_47c, iVar7 != DAT_004c4f98))) {
      iVar6 = *piVar9;
      piVar9 = piVar9 + 0x10b;
      iVar3 = iVar7;
    }
  }
  iStack_47c = iVar3;
  FUN_00411600((undefined4 *)(&DAT_004bc15c)[iStack_47c * 0x10b]);
  FUN_00433690(1,"\n------ cleaning up image ------\n");
  FUN_00433690(1,"Fixing up empty FS block entries...");
  FUN_004112f0(uVar2);
  FUN_00433690(1,"done!\nWriting FS table to image ");
  FUN_00411bd0(uVar4);
  FUN_00433690(1,"done!\n");
  if ((DAT_00479ea4 & 0x10000000) != 0) {
    DAT_004c917f = 1;
    FUN_0041e7b0(&DAT_004c9164);
    FUN_00412110(1);
    DAT_004c917f = 2;
    FUN_0041e7b0(&DAT_004c9164);
    FUN_00412110(2);
  }
  piVar9 = &DAT_004bc160;
  do {
    while (((void *)piVar9[-1] == (void *)0x0 || (*piVar9 == 0))) {
      *piVar9 = 0;
      piVar9 = piVar9 + 0x10b;
      if (piVar9 == &DAT_004c10a4) goto LAB_0042f719;
    }
    piVar14 = piVar9 + 0x10b;
    free((void *)piVar9[-1]);
    *piVar9 = 0;
    piVar9 = piVar14;
  } while (piVar14 != &DAT_004c10a4);
LAB_0042f719:
  if (DAT_004c8fe0 != 0) {
    FUN_00433690(1,"\n------ adding [rawpatch] data ------\n");
    if (DAT_004c8fe0 != 0) {
      pcVar13 = &DAT_004c4fa0;
      uVar2 = 0;
      do {
        pvStack_30 = (void *)0x0;
        uVar4 = FUN_00428040(pcVar13,(int)&uStack_440,0,0,(undefined1 *)auStack_460,0,0,0);
        if (uVar4 != 0) {
          FUN_00433690(0,"***** ERROR: could not load [rawpatch] file \'%s\'!!\n");
          return uVar4;
        }
        if (DAT_00479edc < *(int *)(pcVar13 + 0x400) + sStack_2c) {
          FUN_00433690(1,
                       "[rawpatch] (%d): \'%s\' copied to offset 0x%x (len: 0x%x) would exceed user size 0x%x!\n\n"
                      );
          free(pvStack_30);
          return 0xffffffff;
        }
        uVar2 = uVar2 + 1;
        memcpy((void *)(DAT_00479ed8 + *(int *)(pcVar13 + 0x400)),pvStack_30,sStack_2c);
        pcVar13 = pcVar13 + 0x404;
        FUN_00433690(1,
                     "[rawpatch] (%d): \'%s\' copied to offset 0x%x len: 0x%x (end: 0x%x) successfully!\n\n"
                    );
        free(pvStack_30);
      } while (uVar2 < DAT_004c8fe0);
    }
    pvStack_30 = (void *)0x0;
    FUN_00433690(1,"done!\n");
  }
  FUN_00433690(1,"\n------ finalizing image ------\n");
  uVar2 = FUN_004125a0();
  return uVar2;
}

