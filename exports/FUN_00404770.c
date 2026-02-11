
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00404770(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  bool bVar15;
  undefined4 uStack_14;
  
  uStack_14 = 0x40477e;
  uVar4 = FUN_00447c00();
  iVar3 = -uVar4;
  DAT_0047ad4c = 0;
  iVar6 = *(int *)(&stack0x00001034 + iVar3);
  *(undefined4 *)(&stack0x00000010 + iVar3) = 0x61645c2e;
  *(undefined4 *)(&stack0x00000014 + iVar3) = 0x5c6174;
  *(undefined4 *)(&stack0x00000410 + iVar3) = 0x5c2e;
  puVar14 = (undefined4 *)(&stack0x00000018 + iVar3);
  for (iVar13 = 0xfe; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  puVar14 = (undefined4 *)(&stack0x00000414 + iVar3);
  for (iVar13 = 0xff; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  *(char **)(&stack0xfffffff0 + iVar3) = "update";
  *(undefined4 *)((int)&uStack_14 + iVar3) = 0x4047d0;
  FUN_00433610(*(char **)(&stack0xfffffff0 + iVar3));
  if (*(int *)(&stack0x00001030 + iVar3) < 1) {
    *(undefined4 *)(&stack0x00000008 + iVar3) = 0;
    *(undefined4 *)(&stack0x0000000c + iVar3) = 0;
  }
  else {
    iVar13 = 0;
    *(undefined4 *)(&stack0x0000000c + iVar3) = 0;
    *(undefined4 *)(&stack0x00000008 + iVar3) = 0;
LAB_00404821:
    do {
      iVar1 = iVar13 * 4;
      *(undefined4 *)(&stack0xfffffff8 + iVar3) = 2;
      *(undefined **)(&stack0xfffffff4 + iVar3) = &DAT_0044d5fe;
      piVar2 = (int *)(iVar6 + iVar1);
      *(int *)(&stack0xfffffff0 + iVar3) = *piVar2;
      *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404846;
      iVar5 = _strnicmp(*(char **)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3),
                        *(size_t *)(&stack0xfffffff8 + iVar3));
      if (iVar5 == 0) {
LAB_00404fd3:
                    /* WARNING: Subroutine does not return */
        *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404fd8;
        FUN_004031d0();
      }
      *(undefined4 *)(&stack0xfffffff8 + iVar3) = 2;
      *(undefined **)(&stack0xfffffff4 + iVar3) = &DAT_0044d603;
      *(int *)(&stack0xfffffff0 + iVar3) = *piVar2;
      *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404868;
      iVar5 = _strnicmp(*(char **)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3),
                        *(size_t *)(&stack0xfffffff8 + iVar3));
      if (iVar5 == 0) goto LAB_00404fd3;
      *(undefined4 *)(&stack0xfffffff8 + iVar3) = 2;
      *(undefined **)(&stack0xfffffff4 + iVar3) = &DAT_0044d606;
      *(int *)(&stack0xfffffff0 + iVar3) = *piVar2;
      *(undefined4 *)((int)&uStack_14 + iVar3) = 0x40488a;
      iVar5 = _strnicmp(*(char **)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3),
                        *(size_t *)(&stack0xfffffff8 + iVar3));
      if (iVar5 == 0) goto LAB_00404fd3;
      *(undefined4 *)(&stack0xfffffff8 + iVar3) = 8;
      *(char **)(&stack0xfffffff4 + iVar3) = "-noenter";
      *(int *)(&stack0xfffffff0 + iVar3) = *piVar2;
      *(undefined4 *)((int)&uStack_14 + iVar3) = 0x4048ac;
      iVar5 = _strnicmp(*(char **)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3),
                        *(size_t *)(&stack0xfffffff8 + iVar3));
      if (iVar5 == 0) {
        *(char **)(&stack0xfffffff4 + iVar3) = "<enter> key on completion suppressed\n";
        *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
        *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404807;
        FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
        DAT_0044a524 = 0;
LAB_00404811:
        iVar13 = iVar13 + 1;
        if (*(int *)(&stack0x00001030 + iVar3) <= iVar13) break;
        goto LAB_00404821;
      }
      *(undefined4 *)(&stack0xfffffff8 + iVar3) = 3;
      *(undefined **)(&stack0xfffffff4 + iVar3) = &DAT_0044d63a;
      *(int *)(&stack0xfffffff0 + iVar3) = *piVar2;
      *(undefined4 *)((int)&uStack_14 + iVar3) = 0x4048ce;
      iVar5 = _strnicmp(*(char **)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3),
                        *(size_t *)(&stack0xfffffff8 + iVar3));
      if (iVar5 != 0) {
        *(undefined4 *)(&stack0xfffffff8 + iVar3) = 2;
        *(undefined **)(&stack0xfffffff4 + iVar3) = &DAT_0044d6a3;
        *(int *)(&stack0xfffffff0 + iVar3) = *piVar2;
        *(undefined4 *)((int)&uStack_14 + iVar3) = 0x4049ba;
        iVar5 = _strnicmp(*(char **)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3),
                          *(size_t *)(&stack0xfffffff8 + iVar3));
        if (iVar5 == 0) {
          pcVar8 = *(char **)(iVar6 + 4 + iVar1);
          iVar13 = iVar13 + 1;
          if (((pcVar8 == (char *)0x0) || (*(int *)(&stack0x00001030 + iVar3) == iVar13)) ||
             (*pcVar8 == '-')) {
            *(char **)(&stack0xfffffff8 + iVar3) = pcVar8;
            *(char **)(&stack0xfffffff4 + iVar3) =
                 "\n\n***** ERROR: option flag -a on command line but no argument provided!\n";
            *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
            *(undefined4 *)((int)&uStack_14 + iVar3) = 0x4053d0;
            FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
                    /* WARNING: Subroutine does not return */
            *(undefined4 *)((int)&uStack_14 + iVar3) = 0x4053d5;
            FUN_004031d0();
          }
          DAT_0044a008 = 0;
          if (DAT_004c4f94 < 0x10) {
            *(char **)(&stack0xfffffff4 + iVar3) = pcVar8;
            *(undefined **)(&stack0xfffffff0 + iVar3) = &DAT_004c0c94 + DAT_004c4f94 * 0x42c;
            *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404a12;
            strcpy(*(char **)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
            puVar7 = (uint *)(&DAT_004c0c94 + DAT_004c4f94 * 0x42c);
            do {
              puVar11 = puVar7;
              uVar9 = *puVar11 + 0xfefefeff & ~*puVar11;
              uVar4 = uVar9 & 0x80808080;
              puVar7 = puVar11 + 1;
            } while (uVar4 == 0);
            bVar15 = (uVar9 & 0x8080) == 0;
            if (bVar15) {
              uVar4 = uVar4 >> 0x10;
            }
            if (bVar15) {
              puVar7 = (uint *)((int)puVar11 + 6);
            }
            puVar14 = (undefined4 *)((int)puVar7 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)));
            *puVar14 = 0x6e69622e;
            *(undefined1 *)(puVar14 + 1) = 0;
            DAT_004c4f94 = DAT_004c4f94 + 1;
          }
          else {
            *(char **)(&stack0xfffffff8 + iVar3) = pcVar8;
            *(char **)(&stack0xfffffff4 + iVar3) =
                 "***** WARNING: exceeded total number of optional patches with -a %s!\n";
            *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
            *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404a88;
            FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
          }
        }
        else {
          *(undefined4 *)(&stack0xfffffff8 + iVar3) = 2;
          *(undefined **)(&stack0xfffffff4 + iVar3) = &DAT_0044d73a;
          *(int *)(&stack0xfffffff0 + iVar3) = *piVar2;
          *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404aaa;
          iVar5 = _strnicmp(*(char **)(&stack0xfffffff0 + iVar3),
                            *(char **)(&stack0xfffffff4 + iVar3),
                            *(size_t *)(&stack0xfffffff8 + iVar3));
          if (iVar5 == 0) {
            iVar13 = iVar13 + 1;
            puVar14 = (undefined4 *)(iVar6 + 4 + iVar1);
            pcVar8 = (char *)*puVar14;
            if (((*(int *)(&stack0x00001030 + iVar3) == iVar13) || (pcVar8 == (char *)0x0)) ||
               (*pcVar8 == '-')) {
              *(char **)(&stack0xfffffff4 + iVar3) =
                   "\n\n***** ERROR: option flag -r on command line but no argument provided!\n";
              *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
              *(undefined4 *)((int)&uStack_14 + iVar3) = 0x4054d6;
              FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3))
              ;
                    /* WARNING: Subroutine does not return */
              *(undefined4 *)((int)&uStack_14 + iVar3) = 0x4054db;
              FUN_004031d0();
            }
            if (DAT_004c4f54 != '\0') {
              *(char **)(&stack0xfffffff8 + iVar3) = pcVar8;
              *(undefined **)(&stack0xfffffffc + iVar3) = &DAT_004c4f55;
              *(char **)(&stack0xfffffff4 + iVar3) =
                   "***** WARNING: option flag -r %s on command line replacing previous setting of -r %s!\n"
              ;
              *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
              *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404ba7;
              FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3))
              ;
              pcVar8 = (char *)*puVar14;
            }
            *(char **)(&stack0xfffffff8 + iVar3) = pcVar8;
            *(undefined **)(&stack0xfffffff4 + iVar3) = &DAT_0044d7e3;
            *(char **)(&stack0xfffffff0 + iVar3) = &DAT_004c4f54;
            *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404afa;
            sprintf(*(char **)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
          }
          else {
            *(undefined4 *)(&stack0xfffffff8 + iVar3) = 2;
            *(undefined **)(&stack0xfffffff4 + iVar3) = &DAT_0044d7e7;
            *(int *)(&stack0xfffffff0 + iVar3) = *piVar2;
            *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404b1a;
            iVar5 = _strnicmp(*(char **)(&stack0xfffffff0 + iVar3),
                              *(char **)(&stack0xfffffff4 + iVar3),
                              *(size_t *)(&stack0xfffffff8 + iVar3));
            if (iVar5 == 0) {
              puVar14 = (undefined4 *)(iVar6 + 4 + iVar1);
              iVar13 = iVar13 + 1;
              pcVar8 = (char *)*puVar14;
              if (((pcVar8 == (char *)0x0) || (*(int *)(&stack0x00001030 + iVar3) == iVar13)) ||
                 (*pcVar8 == '-')) {
                *(char **)(&stack0xfffffff8 + iVar3) = pcVar8;
                *(char **)(&stack0xfffffff4 + iVar3) =
                     "\n\n***** ERROR: data directory flag -i on command line but no argument provided!\n"
                ;
                *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
                *(undefined4 *)((int)&uStack_14 + iVar3) = 0x4054f3;
                FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),
                             *(char **)(&stack0xfffffff4 + iVar3));
                    /* WARNING: Subroutine does not return */
                *(undefined4 *)((int)&uStack_14 + iVar3) = 0x4054f8;
                FUN_004031d0();
              }
              _DAT_0047a14c = 0x5f;
              uVar12 = *puVar14;
              *(undefined **)(&stack0xfffffff0 + iVar3) = &DAT_0047a14d;
              *(undefined4 *)(&stack0xfffffff4 + iVar3) = uVar12;
              *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404b66;
              strcpy(*(char **)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
              *(undefined **)(&stack0xfffffff8 + iVar3) = &DAT_0047a14c;
              *(char **)(&stack0xfffffff4 + iVar3) =
                   "suffix \'%s\' added from command line to ini and patches filenames\n";
              *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
              *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404b82;
              FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3))
              ;
            }
            else {
              *(undefined4 *)(&stack0xfffffff8 + iVar3) = 8;
              *(char **)(&stack0xfffffff4 + iVar3) = "-nowrite";
              *(int *)(&stack0xfffffff0 + iVar3) = *piVar2;
              *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404efd;
              iVar5 = _strnicmp(*(char **)(&stack0xfffffff0 + iVar3),
                                *(char **)(&stack0xfffffff4 + iVar3),
                                *(size_t *)(&stack0xfffffff8 + iVar3));
              if (iVar5 == 0) {
                *(char **)(&stack0xfffffff4 + iVar3) =
                     "-nowrite: flash image and avatars will not be sent to xbox\n";
                *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
                iVar13 = iVar13 + 1;
                DAT_0046f14c = 1;
                DAT_0046f144 = 1;
                DAT_0046f148 = 1;
                *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404f36;
                FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),
                             *(char **)(&stack0xfffffff4 + iVar3));
              }
              else {
                *(undefined4 *)(&stack0xfffffff8 + iVar3) = 6;
                *(char **)(&stack0xfffffff4 + iVar3) = "-noava";
                *(int *)(&stack0xfffffff0 + iVar3) = *piVar2;
                *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404f73;
                iVar5 = _strnicmp(*(char **)(&stack0xfffffff0 + iVar3),
                                  *(char **)(&stack0xfffffff4 + iVar3),
                                  *(size_t *)(&stack0xfffffff8 + iVar3));
                if (iVar5 == 0) {
                  *(char **)(&stack0xfffffff4 + iVar3) =
                       "-noava: avatar data, if available, will not be sent to console\n";
                  *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
                  iVar13 = iVar13 + 1;
                  DAT_0046f148 = 1;
                  *(undefined4 *)((int)&uStack_14 + iVar3) = 0x405017;
                  FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),
                               *(char **)(&stack0xfffffff4 + iVar3));
                }
                else {
                  *(undefined4 *)(&stack0xfffffff8 + iVar3) = 6;
                  *(char **)(&stack0xfffffff4 + iVar3) = "-noreeb";
                  *(int *)(&stack0xfffffff0 + iVar3) = *piVar2;
                  *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404f91;
                  iVar5 = _strnicmp(*(char **)(&stack0xfffffff0 + iVar3),
                                    *(char **)(&stack0xfffffff4 + iVar3),
                                    *(size_t *)(&stack0xfffffff8 + iVar3));
                  if (iVar5 == 0) {
                    *(char **)(&stack0xfffffff4 + iVar3) =
                         "-noreeb: console will not reboot after writes are done\n";
                    *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
                    iVar13 = iVar13 + 1;
                    DAT_0046f144 = 1;
                    *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404fba;
                    FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),
                                 *(char **)(&stack0xfffffff4 + iVar3));
                  }
                  else {
                    *(undefined4 *)(&stack0xfffffff8 + iVar3) = 6;
                    *(char **)(&stack0xfffffff4 + iVar3) = "-clean";
                    *(int *)(&stack0xfffffff0 + iVar3) = *piVar2;
                    *(undefined4 *)((int)&uStack_14 + iVar3) = 0x405255;
                    iVar5 = _strnicmp(*(char **)(&stack0xfffffff0 + iVar3),
                                      *(char **)(&stack0xfffffff4 + iVar3),
                                      *(size_t *)(&stack0xfffffff8 + iVar3));
                    if (iVar5 == 0) {
                      *(char **)(&stack0xfffffff4 + iVar3) =
                           "-clean: secdata, extended and statistics will not be retrieved from console, builder will make clean versions\n"
                      ;
                      *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
                      iVar13 = iVar13 + 1;
                      DAT_0046f150 = 1;
                      *(undefined4 *)((int)&uStack_14 + iVar3) = 0x40527e;
                      FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),
                                   *(char **)(&stack0xfffffff4 + iVar3));
                    }
                    else {
                      *(undefined4 *)(&stack0xfffffff8 + iVar3) = 2;
                      *(undefined **)(&stack0xfffffff4 + iVar3) = &DAT_0044d9c7;
                      *(int *)(&stack0xfffffff0 + iVar3) = *piVar2;
                      *(undefined4 *)((int)&uStack_14 + iVar3) = 0x405387;
                      iVar5 = _strnicmp(*(char **)(&stack0xfffffff0 + iVar3),
                                        *(char **)(&stack0xfffffff4 + iVar3),
                                        *(size_t *)(&stack0xfffffff8 + iVar3));
                      if (iVar5 == 0) {
                        *(uint *)(&stack0xfffffff0 + iVar3) = (uint)*(byte *)(*piVar2 + 2);
                        *(undefined4 *)((int)&uStack_14 + iVar3) = 0x405399;
                        FUN_004335a0((&stack0xfffffff0)[iVar3]);
                      }
                      else {
                        *(undefined4 *)(&stack0xfffffff8 + iVar3) = 2;
                        *(undefined **)(&stack0xfffffff4 + iVar3) = &DAT_0044d9ca;
                        *(int *)(&stack0xfffffff0 + iVar3) = *piVar2;
                        *(undefined4 *)((int)&uStack_14 + iVar3) = 0x405414;
                        iVar5 = _strnicmp(*(char **)(&stack0xfffffff0 + iVar3),
                                          *(char **)(&stack0xfffffff4 + iVar3),
                                          *(size_t *)(&stack0xfffffff8 + iVar3));
                        if (iVar5 == 0) {
                          pcVar8 = *(char **)(iVar6 + 4 + iVar1);
                          iVar13 = iVar13 + 1;
                          if (((pcVar8 == (char *)0x0) ||
                              (*(int *)(&stack0x00001030 + iVar3) == iVar13)) || (*pcVar8 == '-')) {
                            *(char **)(&stack0xfffffff8 + iVar3) = pcVar8;
                            *(char **)(&stack0xfffffff4 + iVar3) =
                                 "\n\n***** ERROR: dump directory flag -d on command line but no argument provided!\n"
                            ;
                            *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
                            *(undefined4 *)((int)&uStack_14 + iVar3) = 0x405510;
                            FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),
                                         *(char **)(&stack0xfffffff4 + iVar3));
                    /* WARNING: Subroutine does not return */
                            *(undefined4 *)((int)&uStack_14 + iVar3) = 0x405515;
                            FUN_004031d0();
                          }
                          *(char **)(&stack0xfffffff4 + iVar3) = pcVar8;
                          *(undefined1 **)(&stack0xfffffff0 + iVar3) = &stack0x00000410 + iVar3;
                          *(undefined4 *)((int)&uStack_14 + iVar3) = 0x405454;
                          strcpy(*(char **)(&stack0xfffffff0 + iVar3),
                                 *(char **)(&stack0xfffffff4 + iVar3));
                          puVar7 = (uint *)(&stack0x00000410 + iVar3);
                          do {
                            puVar11 = puVar7;
                            uVar9 = *puVar11 + 0xfefefeff & ~*puVar11;
                            uVar4 = uVar9 & 0x80808080;
                            puVar7 = puVar11 + 1;
                          } while (uVar4 == 0);
                          bVar15 = (uVar9 & 0x8080) == 0;
                          if (bVar15) {
                            uVar4 = uVar4 >> 0x10;
                          }
                          if (bVar15) {
                            puVar7 = (uint *)((int)puVar11 + 6);
                          }
                          *(undefined2 *)
                           ((int)puVar7 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4))) = 0x5c;
                          *(char **)(&stack0xfffffff4 + iVar3) = "dump directory set to \'%s\'\n";
                          *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
                          *(undefined1 **)(&stack0xfffffff8 + iVar3) = &stack0x00000410 + iVar3;
                          *(undefined4 *)((int)&uStack_14 + iVar3) = 0x4054b2;
                          FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),
                                       *(char **)(&stack0xfffffff4 + iVar3));
                          *(undefined1 **)(&stack0x0000000c + iVar3) = &stack0x00000410 + iVar3;
                        }
                        else {
                          *(undefined4 *)(&stack0xfffffff8 + iVar3) = 2;
                          *(undefined **)(&stack0xfffffff4 + iVar3) = &DAT_0044da3d;
                          *(int *)(&stack0xfffffff0 + iVar3) = *piVar2;
                          *(undefined4 *)((int)&uStack_14 + iVar3) = 0x40552f;
                          iVar5 = _strnicmp(*(char **)(&stack0xfffffff0 + iVar3),
                                            *(char **)(&stack0xfffffff4 + iVar3),
                                            *(size_t *)(&stack0xfffffff8 + iVar3));
                          if (iVar5 != 0) {
                            iVar6 = *piVar2;
                            *(char **)(&stack0xfffffff4 + iVar3) =
                                 "\n\n***** ERROR: unknown option \'%s\' provided on command line!\n"
                            ;
                            *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
                            *(int *)(&stack0xfffffff8 + iVar3) = iVar6;
                            *(undefined4 *)((int)&uStack_14 + iVar3) = 0x4055e5;
                            FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),
                                         *(char **)(&stack0xfffffff4 + iVar3));
                    /* WARNING: Subroutine does not return */
                            *(undefined4 *)((int)&uStack_14 + iVar3) = 0x4055ea;
                            FUN_004031d0();
                          }
                          puVar14 = (undefined4 *)(iVar6 + 4 + iVar1);
                          iVar13 = iVar13 + 1;
                          pcVar8 = (char *)*puVar14;
                          if (((pcVar8 == (char *)0x0) ||
                              (*(int *)(&stack0x00001030 + iVar3) == iVar13)) || (*pcVar8 == '-')) {
                            *(char **)(&stack0xfffffff8 + iVar3) = pcVar8;
                            *(char **)(&stack0xfffffff4 + iVar3) =
                                 "\n\n***** ERROR: data directory flag -f on command line but no argument provided!\n"
                            ;
                            *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
                            *(undefined4 *)((int)&uStack_14 + iVar3) = 0x405602;
                            FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),
                                         *(char **)(&stack0xfffffff4 + iVar3));
                    /* WARNING: Subroutine does not return */
                            *(undefined4 *)((int)&uStack_14 + iVar3) = 0x405607;
                            FUN_004031d0();
                          }
                          *(char **)(&stack0xfffffff8 + iVar3) = pcVar8;
                          *(undefined **)(&stack0xfffffff4 + iVar3) = &DAT_0044da91;
                          *(undefined1 **)(&stack0xfffffff0 + iVar3) = &stack0x00000010 + iVar3;
                          *(undefined4 *)((int)&uStack_14 + iVar3) = 0x405576;
                          sprintf(*(char **)(&stack0xfffffff0 + iVar3),
                                  *(char **)(&stack0xfffffff4 + iVar3));
                          *(char **)(&stack0xfffffff4 + iVar3) =
                               "data directory set from command line to \'%s\'\n";
                          *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
                          *(undefined1 **)(&stack0xfffffff8 + iVar3) = &stack0x00000010 + iVar3;
                          *(undefined4 *)((int)&uStack_14 + iVar3) = 0x405592;
                          FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),
                                       *(char **)(&stack0xfffffff4 + iVar3));
                          uVar12 = *puVar14;
                          *(undefined **)(&stack0xfffffff4 + iVar3) = &DAT_0044da91;
                          *(undefined **)(&stack0xfffffff0 + iVar3) = &DAT_0047b14c;
                          *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar12;
                          *(undefined4 *)((int)&uStack_14 + iVar3) = 0x4055ac;
                          sprintf(*(char **)(&stack0xfffffff0 + iVar3),
                                  *(char **)(&stack0xfffffff4 + iVar3));
                          uVar12 = *puVar14;
                          *(char **)(&stack0xfffffff4 + iVar3) = "%s\\bin\\";
                          *(undefined **)(&stack0xfffffff0 + iVar3) = &DAT_0047a54c;
                          *(undefined4 *)(&stack0xfffffff8 + iVar3) = uVar12;
                          *(undefined4 *)((int)&uStack_14 + iVar3) = 0x4055c6;
                          sprintf(*(char **)(&stack0xfffffff0 + iVar3),
                                  *(char **)(&stack0xfffffff4 + iVar3));
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_00404811;
      }
      pcVar8 = *(char **)(iVar6 + 4 + iVar1);
      *(char **)(&stack0x00000008 + iVar3) = pcVar8;
      if (((*(int *)(&stack0x00001030 + iVar3) == iVar13 + 1) || (pcVar8 == (char *)0x0)) ||
         (*pcVar8 == '-')) {
        *(char **)(&stack0xfffffff4 + iVar3) =
             "\n\n***** ERROR: option flag -ip on command line but no argument provided!\n";
        *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
        *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404fd3;
        FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
        goto LAB_00404fd3;
      }
      *(char **)(&stack0xfffffff8 + iVar3) = pcVar8;
      *(char **)(&stack0xfffffff4 + iVar3) = "setting forced IP to %s\n";
      iVar13 = iVar13 + 2;
      *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
      *(undefined4 *)((int)&uStack_14 + iVar3) = 0x40491a;
      FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
    } while (iVar13 < *(int *)(&stack0x00001030 + iVar3));
    if (*(int *)(&stack0x0000000c + iVar3) != 0) {
      *(int *)(&stack0xfffffff0 + iVar3) = *(int *)(&stack0x0000000c + iVar3);
      *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404937;
      iVar6 = FUN_00423650(*(char **)(&stack0xfffffff0 + iVar3));
      if (iVar6 == 0) {
        *(char **)(&stack0xfffffff4 + iVar3) = "Dumping disabled!\n";
        *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
        *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404ed6;
        FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
        *(undefined4 *)(&stack0x0000000c + iVar3) = 0;
      }
    }
  }
  *(undefined4 *)(&stack0xfffffff0 + iVar3) = *(undefined4 *)(&stack0x00000008 + iVar3);
  *(undefined4 *)((int)&uStack_14 + iVar3) = 0x40494b;
  iVar6 = FUN_0041f700(*(int *)(&stack0xfffffff0 + iVar3));
  if (iVar6 == 0) {
    *(char **)(&stack0xfffffff4 + iVar3) =
         "\n\n***** FATAL UPDATE ERROR: unable to find console!\n\n";
    *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
    iVar6 = 5;
    *(undefined4 *)((int)&uStack_14 + iVar3) = 0x40496c;
    FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
  }
  else {
    *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404bb3;
    DAT_0046f15c = FUN_0041fe10();
    *(int **)(&stack0xfffffffc + iVar3) = &DAT_0046f154;
    *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
    *(undefined4 *)(&stack0xfffffff8 + iVar3) = *(undefined4 *)(&stack0x0000000c + iVar3);
    *(undefined4 *)(&stack0xfffffff4 + iVar3) = *(undefined4 *)(&stack0x0000000c + iVar3);
    *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404bd8;
    iVar6 = FUN_00431a60(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3),
                         *(char **)(&stack0xfffffff8 + iVar3),
                         *(undefined4 **)(&stack0xfffffffc + iVar3));
    if (iVar6 == 0) {
      *(char **)(&stack0xfffffff4 + iVar3) =
           "\n\n***** FATAL UPDATE ERROR: unable to parse info reply from console!\n\n";
      *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
      iVar6 = 5;
      *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404f54;
      FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
    }
    else {
      if (DAT_00479ea8 == 1) {
        puVar7 = (uint *)(&stack0x00000010 + iVar3);
        do {
          puVar11 = puVar7;
          uVar9 = *puVar11 + 0xfefefeff & ~*puVar11;
          uVar4 = uVar9 & 0x80808080;
          puVar7 = puVar11 + 1;
        } while (uVar4 == 0);
        bVar15 = (uVar9 & 0x8080) == 0;
        if (bVar15) {
          uVar4 = uVar4 >> 0x10;
        }
        if (bVar15) {
          puVar7 = (uint *)((int)puVar11 + 6);
        }
        puVar14 = (undefined4 *)((int)puVar7 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)));
        *puVar14 = 0x7465725f;
        puVar14[1] = 0x6c6961;
      }
      else if (DAT_00479ea8 == 2) {
        puVar7 = (uint *)(&stack0x00000010 + iVar3);
        do {
          puVar11 = puVar7;
          uVar9 = *puVar11 + 0xfefefeff & ~*puVar11;
          uVar4 = uVar9 & 0x80808080;
          puVar7 = puVar11 + 1;
        } while (uVar4 == 0);
        bVar15 = (uVar9 & 0x8080) == 0;
        if (bVar15) {
          uVar4 = uVar4 >> 0x10;
        }
        if (bVar15) {
          puVar7 = (uint *)((int)puVar11 + 6);
        }
        puVar14 = (undefined4 *)((int)puVar7 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)));
        *puVar14 = 0x61746a5f;
        *(undefined2 *)(puVar14 + 1) = 0x67;
      }
      else if (DAT_00479ea8 == 3) {
        puVar7 = (uint *)(&stack0x00000010 + iVar3);
        if (DAT_00479eb4 == 0) {
          if (DAT_00479eb0 == 0) {
            do {
              puVar11 = puVar7;
              uVar9 = *puVar11 + 0xfefefeff & ~*puVar11;
              uVar4 = uVar9 & 0x80808080;
              puVar7 = puVar11 + 1;
            } while (uVar4 == 0);
            bVar15 = (uVar9 & 0x8080) == 0;
            if (bVar15) {
              uVar4 = uVar4 >> 0x10;
            }
            if (bVar15) {
              puVar7 = (uint *)((int)puVar11 + 6);
            }
            puVar14 = (undefined4 *)((int)puVar7 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)));
            *puVar14 = 0x696c675f;
            puVar14[1] = 0x686374;
          }
          else {
            do {
              puVar11 = puVar7;
              uVar9 = *puVar11 + 0xfefefeff & ~*puVar11;
              uVar4 = uVar9 & 0x80808080;
              puVar7 = puVar11 + 1;
            } while (uVar4 == 0);
            bVar15 = (uVar9 & 0x8080) == 0;
            if (bVar15) {
              uVar4 = uVar4 >> 0x10;
            }
            if (bVar15) {
              puVar7 = (uint *)((int)puVar11 + 6);
            }
            puVar14 = (undefined4 *)((int)puVar7 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)));
            *puVar14 = 0x696c675f;
            puVar14[1] = 0x32686374;
            *(undefined1 *)(puVar14 + 2) = 0;
          }
        }
        else {
          do {
            puVar11 = puVar7;
            uVar9 = *puVar11 + 0xfefefeff & ~*puVar11;
            uVar4 = uVar9 & 0x80808080;
            puVar7 = puVar11 + 1;
          } while (uVar4 == 0);
          bVar15 = (uVar9 & 0x8080) == 0;
          if (bVar15) {
            uVar4 = uVar4 >> 0x10;
          }
          if (bVar15) {
            puVar7 = (uint *)((int)puVar11 + 6);
          }
          puVar14 = (undefined4 *)((int)puVar7 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)));
          *puVar14 = 0x696c675f;
          puVar14[1] = 0x32686374;
          *(undefined2 *)(puVar14 + 2) = 0x6d;
        }
      }
      else if (DAT_00479ea8 - 6U < 2) {
        puVar7 = (uint *)(&stack0x00000010 + iVar3);
        do {
          puVar11 = puVar7;
          uVar9 = *puVar11 + 0xfefefeff & ~*puVar11;
          uVar4 = uVar9 & 0x80808080;
          puVar7 = puVar11 + 1;
        } while (uVar4 == 0);
        bVar15 = (uVar9 & 0x8080) == 0;
        if (bVar15) {
          uVar4 = uVar4 >> 0x10;
        }
        if (bVar15) {
          puVar7 = (uint *)((int)puVar11 + 6);
        }
        puVar14 = (undefined4 *)((int)puVar7 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)));
        *puVar14 = 0x7665645f;
        puVar14[1] = 0x74696b;
      }
      else {
        puVar7 = (uint *)(&stack0x00000010 + iVar3);
        if (DAT_00479ea8 - 8U < 2) {
          do {
            puVar11 = puVar7;
            uVar9 = *puVar11 + 0xfefefeff & ~*puVar11;
            uVar4 = uVar9 & 0x80808080;
            puVar7 = puVar11 + 1;
          } while (uVar4 == 0);
          bVar15 = (uVar9 & 0x8080) == 0;
          if (bVar15) {
            uVar4 = uVar4 >> 0x10;
          }
          if (bVar15) {
            puVar7 = (uint *)((int)puVar11 + 6);
          }
          puVar14 = (undefined4 *)((int)puVar7 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)));
          *puVar14 = 0x7365745f;
          puVar14[1] = 0x74696b74;
          *(undefined1 *)(puVar14 + 2) = 0;
        }
      }
      puVar11 = (uint *)(&stack0x00000010 + iVar3);
      *(undefined **)(&stack0xfffffff4 + iVar3) = &DAT_0047a14c;
      *(uint **)(&stack0xfffffff0 + iVar3) = puVar11;
      *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404c2c;
      strcat(*(char **)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
      puVar7 = puVar11;
      do {
        puVar10 = puVar7;
        uVar9 = *puVar10 + 0xfefefeff & ~*puVar10;
        uVar4 = uVar9 & 0x80808080;
        puVar7 = puVar10 + 1;
      } while (uVar4 == 0);
      bVar15 = (uVar9 & 0x8080) == 0;
      if (bVar15) {
        uVar4 = uVar4 >> 0x10;
      }
      if (bVar15) {
        puVar7 = (uint *)((int)puVar10 + 6);
      }
      puVar14 = (undefined4 *)((int)puVar7 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)));
      *puVar14 = 0x696e692e;
      *(undefined1 *)(puVar14 + 1) = 0;
      *(uint **)(&stack0xfffffff0 + iVar3) = puVar11;
      *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404c70;
      iVar6 = FUN_00409430(*(char **)(&stack0xfffffff0 + iVar3));
      if (iVar6 == 0) {
        *(uint **)(&stack0xfffffff8 + iVar3) = puVar11;
        *(char **)(&stack0xfffffff4 + iVar3) =
             "\n\n***** FATAL UPDATE ERROR: unable to parse %s\n\n";
        iVar6 = 1;
        *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
        *(undefined4 *)((int)&uStack_14 + iVar3) = 0x40514a;
        FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
      }
      else {
        if (*(int *)(&stack0x0000000c + iVar3) == 0) {
          *(undefined4 **)(&stack0xfffffff8 + iVar3) = &DAT_0047a94c;
          *(char **)(&stack0xfffffff4 + iVar3) = "%s_update";
          *(undefined1 **)(&stack0xfffffff0 + iVar3) = &stack0x00000810 + iVar3;
          *(undefined4 *)((int)&uStack_14 + iVar3) = 0x405215;
          sprintf(*(char **)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
          *(undefined1 **)(&stack0xfffffff0 + iVar3) = &stack0x00000810 + iVar3;
          *(undefined4 *)((int)&uStack_14 + iVar3) = 0x40521d;
          FUN_00433610(*(char **)(&stack0xfffffff0 + iVar3));
        }
        else {
          *(undefined4 **)(&stack0xfffffffc + iVar3) = &DAT_0047a94c;
          *(int *)(&stack0xfffffff8 + iVar3) = *(int *)(&stack0x0000000c + iVar3);
          *(undefined **)(&stack0xfffffff4 + iVar3) = &DAT_0044db21;
          *(undefined1 **)(&stack0xfffffff0 + iVar3) = &stack0x00000810 + iVar3;
          *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404ca7;
          sprintf(*(char **)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
          *(undefined1 **)(&stack0xfffffff4 + iVar3) = &stack0x00000810 + iVar3;
          *(undefined4 **)(&stack0xfffffff0 + iVar3) = &DAT_0047a94c;
          *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404cb7;
          strcpy(*(char **)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
          *(undefined4 **)(&stack0xfffffff0 + iVar3) = &DAT_0047a94c;
          *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404cc3;
          FUN_00433610(*(char **)(&stack0xfffffff0 + iVar3));
        }
        iVar13 = *(int *)(&stack0x0000000c + iVar3);
        *(int *)(&stack0xfffffff0 + iVar3) = iVar13;
        *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404ccf;
        iVar6 = FUN_00404430(*(char **)(&stack0xfffffff0 + iVar3));
        if (iVar6 == 0) {
          *(char **)(&stack0xfffffff4 + iVar3) =
               "\n\n***** FATAL UPDATE ERROR: unable to get console unique files\n\n";
          *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
          iVar6 = 5;
          *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404ff1;
          FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
        }
        else {
          DAT_0046f158 = 1;
          *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404ce6;
          uVar4 = FUN_0040f330();
          if (uVar4 == 0) {
            *(undefined **)(&stack0xfffffff0 + iVar3) = &DAT_0044d4c5;
            *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404cfc;
            FUN_0041fc30(*(undefined4 *)(&stack0xfffffff0 + iVar3));
            iVar6 = 0;
            if (iVar13 != 0) {
              *(int *)(&stack0xfffffff4 + iVar3) = iVar13;
              puVar7 = (uint *)(&stack0x00000c10 + iVar3);
              *(uint **)(&stack0xfffffff0 + iVar3) = puVar7;
              *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404d17;
              strcpy(*(char **)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
              puVar11 = puVar7;
              do {
                puVar10 = puVar11;
                uVar9 = *puVar10 + 0xfefefeff & ~*puVar10;
                uVar4 = uVar9 & 0x80808080;
                puVar11 = puVar10 + 1;
              } while (uVar4 == 0);
              bVar15 = (uVar9 & 0x8080) == 0;
              if (bVar15) {
                uVar4 = uVar4 >> 0x10;
              }
              if (bVar15) {
                puVar11 = (uint *)((int)puVar10 + 6);
              }
              puVar14 = (undefined4 *)((int)puVar11 + (-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)));
              *puVar14 = 0x646e616e;
              puVar14[1] = 0x706d7564;
              puVar14[2] = 0x6e69622e;
              *(undefined1 *)(puVar14 + 3) = 0;
              *(char **)(&stack0xfffffff4 + iVar3) = "\n------ dumping console flash ------\n";
              *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
              *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404d77;
              FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3))
              ;
              *(uint **)(&stack0xfffffff0 + iVar3) = puVar7;
              *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404d7f;
              iVar13 = FUN_0041fe20(*(char **)(&stack0xfffffff0 + iVar3));
              if (iVar13 == 0) {
                *(char **)(&stack0xfffffff4 + iVar3) = "failed!\n";
                *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
                iVar6 = 5;
                *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404d9c;
                FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),
                             *(char **)(&stack0xfffffff4 + iVar3));
              }
            }
            *(char **)(&stack0xfffffff4 + iVar3) = "\n------ flashing console ------\n";
            *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
            *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404db0;
            FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
            if (DAT_0046f14c == 0) {
              *(undefined1 **)(&stack0xfffffff0 + iVar3) = &stack0x00000c10 + iVar3;
              *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404dcd;
              uVar12 = FUN_00412230(*(int **)(&stack0xfffffff0 + iVar3));
              *(char **)(&stack0xfffffff4 + iVar3) = "sending flash data to console...\n";
              *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
              *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404de3;
              FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3))
              ;
              *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404de8;
              FUN_0041ed50();
              *(undefined4 *)(&stack0xfffffff0 + iVar3) = uVar12;
              *(undefined4 *)(&stack0xfffffff4 + iVar3) = *(undefined4 *)(&stack0x00000c10 + iVar3);
              *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404dfb;
              iVar13 = FUN_0041ffe0(*(int *)(&stack0xfffffff0 + iVar3),
                                    *(uint *)(&stack0xfffffff4 + iVar3));
              if (iVar13 == 0) {
                iVar6 = 5;
              }
            }
            else {
              *(char **)(&stack0xfffffff4 + iVar3) = "flashing console skipped, -nowrite used\n";
              *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
              *(undefined4 *)((int)&uStack_14 + iVar3) = 0x405236;
              FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3))
              ;
            }
            *(char **)(&stack0xfffffff4 + iVar3) =
                 "\n------ loading and sending avatar data ------\n";
            *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
            *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404e19;
            FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
            if (DAT_0046f154 == 0) {
              *(char **)(&stack0xfffffff4 + iVar3) = "avatar data skipped, no HDD detected\n";
              *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
              *(undefined4 *)((int)&uStack_14 + iVar3) = 0x405320;
              FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3))
              ;
            }
            else if ((DAT_0046f148 == 0) && (DAT_0046f14c == 0)) {
              *(undefined **)(&stack0xfffffff0 + iVar3) = &DAT_0047b14c;
              *(undefined4 *)(&stack0xfffffff4 + iVar3) = DAT_00479eac;
              *(undefined4 *)((int)&uStack_14 + iVar3) = 0x4053b3;
              FUN_00432e50(*(char **)(&stack0xfffffff0 + iVar3),*(uint *)(&stack0xfffffff4 + iVar3))
              ;
            }
            else {
              *(char **)(&stack0xfffffff4 + iVar3) =
                   "avatar data skipped, -noava or -nowrite used\n";
              *(undefined4 *)(&stack0xfffffff0 + iVar3) = 1;
              *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404e53;
              FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3))
              ;
            }
            if (DAT_0046f144 == 0) {
              if (iVar6 == 0) {
                *(undefined4 *)(&stack0xfffffff0 + iVar3) = 2;
                *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404e71;
                FUN_00420840(*(int *)(&stack0xfffffff0 + iVar3));
              }
              else {
                *(char **)(&stack0xfffffff4 + iVar3) =
                     "\n***** WARNING: due to previous possible errors, console reboot is not being done\n"
                ;
                *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
                *(undefined4 *)((int)&uStack_14 + iVar3) = 0x4052df;
                FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),
                             *(char **)(&stack0xfffffff4 + iVar3));
                *(char **)(&stack0xfffffff4 + iVar3) =
                     "               it is not recommended to use update mode on this console again\n"
                ;
                *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
                *(undefined4 *)((int)&uStack_14 + iVar3) = 0x4052f3;
                FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),
                             *(char **)(&stack0xfffffff4 + iVar3));
                *(char **)(&stack0xfffffff4 + iVar3) =
                     "               until you have determined it\'s got a good image on it\n\n";
                *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
                *(undefined4 *)((int)&uStack_14 + iVar3) = 0x405307;
                FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),
                             *(char **)(&stack0xfffffff4 + iVar3));
              }
            }
            if (*(int *)(&stack0x0000000c + iVar3) != 0) {
              *(undefined4 **)(&stack0xfffffff0 + iVar3) = &DAT_0047a94c;
              *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404e85;
              iVar13 = FUN_00412260(*(char **)(&stack0xfffffff0 + iVar3));
              if (iVar13 != 0) {
                *(undefined4 **)(&stack0xfffffffc + iVar3) = &DAT_0047a94c;
                *(int *)(&stack0xfffffff8 + iVar3) = iVar13;
                *(char **)(&stack0xfffffff4 + iVar3) = "\n\n***** ERROR: %i writing to file %s\n\n";
                *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
                *(undefined4 *)((int)&uStack_14 + iVar3) = 0x4053f5;
                FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),
                             *(char **)(&stack0xfffffff4 + iVar3));
              }
              *(char **)(&stack0xfffffff4 + iVar3) = s__________________________________0044a4e0;
              *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
              *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404ea1;
              FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3))
              ;
            }
            *(undefined4 **)(&stack0xfffffff8 + iVar3) = &DAT_0047a94c;
            *(char **)(&stack0xfffffff4 + iVar3) = "%s image built, info:\n";
            *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
            *(undefined4 *)((int)&uStack_14 + iVar3) = 0x404ebd;
            FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
          }
          else {
            *(uint *)(&stack0xfffffff8 + iVar3) = uVar4;
            *(char **)(&stack0xfffffff4 + iVar3) =
                 "\n\n***** FATAL UPDATE ERROR: %i unable to complete NAND image\n\n";
            iVar6 = 3;
            *(undefined4 *)(&stack0xfffffff0 + iVar3) = 0;
            *(undefined4 *)((int)&uStack_14 + iVar3) = 0x405039;
            FUN_00433690(*(uint *)(&stack0xfffffff0 + iVar3),*(char **)(&stack0xfffffff4 + iVar3));
          }
        }
      }
    }
  }
  DAT_0047a13c = 0;
  DAT_0047a144 = 0;
  DAT_0047a140 = 0;
  return iVar6;
}

