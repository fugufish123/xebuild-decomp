
/* WARNING: Type propagation algorithm not settling */

bool FUN_00423830(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
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
  undefined3 extraout_var_15;
  undefined3 extraout_var_16;
  undefined3 extraout_var_17;
  undefined3 extraout_var_18;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined *puVar12;
  
  bVar2 = FUN_00423750("xenon");
  if (CONCAT31(extraout_var,bVar2) == 0) {
    bVar2 = FUN_00423750("zephyr");
    if (CONCAT31(extraout_var_00,bVar2) == 0) {
      bVar2 = FUN_00423750("falcon");
      if (CONCAT31(extraout_var_01,bVar2) == 0) {
        bVar2 = FUN_00423750("jasper");
        bVar3 = FUN_00423750("jasperbc");
        if (CONCAT31(extraout_var_02,bVar2) == 0 && CONCAT31(extraout_var_03,bVar3) == 0) {
          bVar2 = FUN_00423750("jaspersb");
          if (CONCAT31(extraout_var_04,bVar2) == 0) {
            bVar2 = FUN_00423750("jasperbb");
            if (CONCAT31(extraout_var_05,bVar2) == 0) {
              bVar2 = FUN_00423750("jasper256");
              if (CONCAT31(extraout_var_06,bVar2) == 0) {
                bVar2 = FUN_00423750("jasper512");
                if (CONCAT31(extraout_var_07,bVar2) == 0) {
                  bVar2 = FUN_00423750("trinity");
                  if (CONCAT31(extraout_var_08,bVar2) == 0) {
                    bVar2 = FUN_00423750("trinitybb");
                    if (CONCAT31(extraout_var_09,bVar2) == 0) {
                      bVar2 = FUN_00423750("trinitybigffs");
                      if (CONCAT31(extraout_var_10,bVar2) == 0) {
                        bVar2 = FUN_00423750("corona");
                        if (CONCAT31(extraout_var_11,bVar2) == 0) {
                          bVar2 = FUN_00423750("coronabb");
                          if (CONCAT31(extraout_var_12,bVar2) == 0) {
                            bVar2 = FUN_00423750("coronabigffs");
                            if (CONCAT31(extraout_var_13,bVar2) == 0) {
                              bVar2 = FUN_00423750("corona4g");
                              if (CONCAT31(extraout_var_14,bVar2) == 0) {
                                bVar2 = FUN_00423750("winchester");
                                if (CONCAT31(extraout_var_15,bVar2) == 0) {
                                  bVar2 = FUN_00423750("winchester4g");
                                  if (CONCAT31(extraout_var_16,bVar2) == 0) {
                                    bVar2 = FUN_00423750("winchesterbb");
                                    if (CONCAT31(extraout_var_17,bVar2) == 0) {
                                      bVar2 = FUN_00423750("winchesterbigffs");
                                      if (CONCAT31(extraout_var_18,bVar2) != 0) {
                                        FUN_00433690(1,
                                                  "Using winchester big block big file system ctype (perbox file)\n"
                                                  );
                                        DAT_00479ea4 = DAT_00479ea4 | 0x60000007;
                                        uVar5 = 0xffffffff;
                                        pcVar9 = (char *)&DAT_0047a94c;
                                        do {
                                          if (uVar5 == 0) break;
                                          uVar5 = uVar5 - 1;
                                          cVar1 = *pcVar9;
                                          pcVar9 = pcVar9 + 1;
                                        } while (cVar1 != '\0');
                                        pcVar9 = "winchesterbigffs";
                                        pcVar11 = &DAT_0047a94b + ~uVar5;
                                        for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
                                          *pcVar11 = *pcVar9;
                                          pcVar9 = pcVar9 + 1;
                                          pcVar11 = pcVar11 + 1;
                                        }
                                      }
                                    }
                                    else {
                                      FUN_00433690(1,
                                                  "Using winchester big block ctype (perbox file)\n"
                                                  );
                                      DAT_00479ea4 = DAT_00479ea4 | 0x40000007;
                                      uVar5 = 0xffffffff;
                                      pcVar9 = (char *)&DAT_0047a94c;
                                      do {
                                        if (uVar5 == 0) break;
                                        uVar5 = uVar5 - 1;
                                        cVar1 = *pcVar9;
                                        pcVar9 = pcVar9 + 1;
                                      } while (cVar1 != '\0');
                                      pcVar9 = "winchesterbb";
                                      pcVar11 = &DAT_0047a94b + ~uVar5;
                                      for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
                                        *pcVar11 = *pcVar9;
                                        pcVar9 = pcVar9 + 1;
                                        pcVar11 = pcVar11 + 1;
                                      }
                                    }
                                  }
                                  else {
                                    FUN_00433690(1,"Using winchester MMC ctype (perbox file)\n");
                                    DAT_00479ea4 = DAT_00479ea4 | 0x90000007;
                                    uVar5 = 0xffffffff;
                                    pcVar9 = (char *)&DAT_0047a94c;
                                    do {
                                      if (uVar5 == 0) break;
                                      uVar5 = uVar5 - 1;
                                      cVar1 = *pcVar9;
                                      pcVar9 = pcVar9 + 1;
                                    } while (cVar1 != '\0');
                                    pcVar9 = "winchester4g";
                                    pcVar11 = &DAT_0047a94b + ~uVar5;
                                    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
                                      *pcVar11 = *pcVar9;
                                      pcVar9 = pcVar9 + 1;
                                      pcVar11 = pcVar11 + 1;
                                    }
                                  }
                                }
                                else {
                                  FUN_00433690(1,"Using winchester ctype (perbox file)\n");
                                  DAT_00479ea4 = DAT_00479ea4 | 0x80000007;
                                  uVar5 = 0xffffffff;
                                  pcVar9 = (char *)&DAT_0047a94c;
                                  do {
                                    if (uVar5 == 0) break;
                                    uVar5 = uVar5 - 1;
                                    cVar1 = *pcVar9;
                                    pcVar9 = pcVar9 + 1;
                                  } while (cVar1 != '\0');
                                  pcVar9 = "winchester";
                                  pcVar11 = &DAT_0047a94b + ~uVar5;
                                  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
                                    *pcVar11 = *pcVar9;
                                    pcVar9 = pcVar9 + 1;
                                    pcVar11 = pcVar11 + 1;
                                  }
                                }
                              }
                              else {
                                FUN_00433690(1,"Using corona MMC ctype (perbox file)\n");
                                DAT_00479ea4 = DAT_00479ea4 | 0x90000006;
                                uVar5 = 0xffffffff;
                                pcVar9 = (char *)&DAT_0047a94c;
                                do {
                                  if (uVar5 == 0) break;
                                  uVar5 = uVar5 - 1;
                                  cVar1 = *pcVar9;
                                  pcVar9 = pcVar9 + 1;
                                } while (cVar1 != '\0');
                                puVar10 = &DAT_004580c8;
                                puVar12 = &DAT_0047a94b + ~uVar5;
                                for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
                                  *puVar12 = *puVar10;
                                  puVar10 = puVar10 + 1;
                                  puVar12 = puVar12 + 1;
                                }
                              }
                            }
                            else {
                              FUN_00433690(1,
                                           "Using corona big block big file system ctype (perbox file)\n"
                                          );
                              DAT_00479ea4 = DAT_00479ea4 | 0x60000006;
                              uVar5 = 0xffffffff;
                              pcVar9 = (char *)&DAT_0047a94c;
                              do {
                                if (uVar5 == 0) break;
                                uVar5 = uVar5 - 1;
                                cVar1 = *pcVar9;
                                pcVar9 = pcVar9 + 1;
                              } while (cVar1 != '\0');
                              pcVar9 = "coronabigffs";
                              pcVar11 = &DAT_0047a94b + ~uVar5;
                              for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
                                *pcVar11 = *pcVar9;
                                pcVar9 = pcVar9 + 1;
                                pcVar11 = pcVar11 + 1;
                              }
                            }
                          }
                          else {
                            FUN_00433690(1,"Using corona big block ctype (perbox file)\n");
                            DAT_00479ea4 = DAT_00479ea4 | 0x40000006;
                            puVar7 = &DAT_0047a94c;
                            do {
                              puVar8 = puVar7;
                              uVar4 = *puVar8 + 0xfefefeff & ~*puVar8;
                              uVar5 = uVar4 & 0x80808080;
                              puVar7 = puVar8 + 1;
                            } while (uVar5 == 0);
                            bVar2 = (uVar4 & 0x8080) == 0;
                            if (bVar2) {
                              uVar5 = uVar5 >> 0x10;
                            }
                            if (bVar2) {
                              puVar7 = (uint *)((int)puVar8 + 6);
                            }
                            iVar6 = (int)puVar7 +
                                    (-0x47a94f - (uint)CARRY1((byte)uVar5,(byte)uVar5));
                            *(undefined4 *)(iVar6 + 0x47a94c) = 0x6f726f63;
                            *(undefined4 *)(iVar6 + 0x47a950) = 0x6262616e;
                            (&DAT_0047a954)[iVar6] = 0;
                          }
                        }
                        else {
                          FUN_00433690(1,"Using corona ctype (perbox file)\n");
                          DAT_00479ea4 = DAT_00479ea4 | 0x80000006;
                          puVar7 = &DAT_0047a94c;
                          do {
                            puVar8 = puVar7;
                            uVar4 = *puVar8 + 0xfefefeff & ~*puVar8;
                            uVar5 = uVar4 & 0x80808080;
                            puVar7 = puVar8 + 1;
                          } while (uVar5 == 0);
                          bVar2 = (uVar4 & 0x8080) == 0;
                          if (bVar2) {
                            uVar5 = uVar5 >> 0x10;
                          }
                          if (bVar2) {
                            puVar7 = (uint *)((int)puVar8 + 6);
                          }
                          iVar6 = -(uint)CARRY1((byte)uVar5,(byte)uVar5);
                          *(undefined4 *)((int)puVar7 + iVar6 + -3) = 0x6f726f63;
                          *(undefined2 *)((int)puVar7 + iVar6 + 1) = 0x616e;
                          *(undefined1 *)((int)puVar7 + iVar6 + 3) = 0;
                        }
                      }
                      else {
                        FUN_00433690(1,
                                     "Using trinity big block big file system ctype (perbox file)\n"
                                    );
                        DAT_00479ea4 = DAT_00479ea4 | 0x60000005;
                        puVar7 = &DAT_0047a94c;
                        do {
                          puVar8 = puVar7;
                          uVar4 = *puVar8 + 0xfefefeff & ~*puVar8;
                          uVar5 = uVar4 & 0x80808080;
                          puVar7 = puVar8 + 1;
                        } while (uVar5 == 0);
                        bVar2 = (uVar4 & 0x8080) == 0;
                        if (bVar2) {
                          uVar5 = uVar5 >> 0x10;
                        }
                        if (bVar2) {
                          puVar7 = (uint *)((int)puVar8 + 6);
                        }
                        iVar6 = (int)puVar7 + (-0x47a94f - (uint)CARRY1((byte)uVar5,(byte)uVar5));
                        *(undefined4 *)(iVar6 + 0x47a94c) = 0x6e697274;
                        *(undefined4 *)(iVar6 + 0x47a950) = 0x62797469;
                        *(undefined4 *)(&DAT_0047a954 + iVar6) = 0x66666769;
                        *(undefined2 *)(&DAT_0047a958 + iVar6) = 0x73;
                      }
                    }
                    else {
                      FUN_00433690(1,"Using trinity big block ctype (perbox file)\n");
                      DAT_00479ea4 = DAT_00479ea4 | 0x40000005;
                      puVar7 = &DAT_0047a94c;
                      do {
                        puVar8 = puVar7;
                        uVar4 = *puVar8 + 0xfefefeff & ~*puVar8;
                        uVar5 = uVar4 & 0x80808080;
                        puVar7 = puVar8 + 1;
                      } while (uVar5 == 0);
                      bVar2 = (uVar4 & 0x8080) == 0;
                      if (bVar2) {
                        uVar5 = uVar5 >> 0x10;
                      }
                      if (bVar2) {
                        puVar7 = (uint *)((int)puVar8 + 6);
                      }
                      iVar6 = (int)puVar7 + (-0x47a94f - (uint)CARRY1((byte)uVar5,(byte)uVar5));
                      *(undefined4 *)(iVar6 + 0x47a94c) = 0x6e697274;
                      *(undefined4 *)(iVar6 + 0x47a950) = 0x62797469;
                      *(undefined2 *)(&DAT_0047a954 + iVar6) = 0x62;
                    }
                  }
                  else {
                    FUN_00433690(1,"Using trinity ctype (perbox file)\n");
                    DAT_00479ea4 = DAT_00479ea4 | 0x80000005;
                    puVar7 = &DAT_0047a94c;
                    do {
                      puVar8 = puVar7;
                      uVar4 = *puVar8 + 0xfefefeff & ~*puVar8;
                      uVar5 = uVar4 & 0x80808080;
                      puVar7 = puVar8 + 1;
                    } while (uVar5 == 0);
                    bVar2 = (uVar4 & 0x8080) == 0;
                    if (bVar2) {
                      uVar5 = uVar5 >> 0x10;
                    }
                    if (bVar2) {
                      puVar7 = (uint *)((int)puVar8 + 6);
                    }
                    iVar6 = -(uint)CARRY1((byte)uVar5,(byte)uVar5);
                    *(undefined4 *)((int)puVar7 + iVar6 + -3) = 0x6e697274;
                    *(undefined4 *)((int)puVar7 + iVar6 + 1) = 0x797469;
                  }
                }
                else {
                  FUN_00433690(1,"Using jasper big block ctype (perbox file)\n");
                  DAT_00479ea4 = DAT_00479ea4 | 0x40000004;
                  puVar7 = &DAT_0047a94c;
                  do {
                    puVar8 = puVar7;
                    uVar4 = *puVar8 + 0xfefefeff & ~*puVar8;
                    uVar5 = uVar4 & 0x80808080;
                    puVar7 = puVar8 + 1;
                  } while (uVar5 == 0);
                  bVar2 = (uVar4 & 0x8080) == 0;
                  if (bVar2) {
                    uVar5 = uVar5 >> 0x10;
                  }
                  if (bVar2) {
                    puVar7 = (uint *)((int)puVar8 + 6);
                  }
                  iVar6 = (int)puVar7 + (-0x47a94f - (uint)CARRY1((byte)uVar5,(byte)uVar5));
                  *(undefined4 *)(iVar6 + 0x47a94c) = 0x7073616a;
                  *(undefined4 *)(iVar6 + 0x47a950) = 0x31357265;
                  *(undefined2 *)(&DAT_0047a954 + iVar6) = 0x32;
                }
              }
              else {
                FUN_00433690(1,"Using jasper big block ctype (perbox file)\n");
                DAT_00479ea4 = DAT_00479ea4 | 0x40000004;
                puVar7 = &DAT_0047a94c;
                do {
                  puVar8 = puVar7;
                  uVar4 = *puVar8 + 0xfefefeff & ~*puVar8;
                  uVar5 = uVar4 & 0x80808080;
                  puVar7 = puVar8 + 1;
                } while (uVar5 == 0);
                bVar2 = (uVar4 & 0x8080) == 0;
                if (bVar2) {
                  uVar5 = uVar5 >> 0x10;
                }
                if (bVar2) {
                  puVar7 = (uint *)((int)puVar8 + 6);
                }
                iVar6 = (int)puVar7 + (-0x47a94f - (uint)CARRY1((byte)uVar5,(byte)uVar5));
                *(undefined4 *)(iVar6 + 0x47a94c) = 0x7073616a;
                *(undefined4 *)(iVar6 + 0x47a950) = 0x35327265;
                *(undefined2 *)(&DAT_0047a954 + iVar6) = 0x36;
              }
            }
            else {
              FUN_00433690(1,"Using jasper big block ctype (perbox file)\n");
              DAT_00479ea4 = DAT_00479ea4 | 0x40000004;
              puVar7 = &DAT_0047a94c;
              do {
                puVar8 = puVar7;
                uVar4 = *puVar8 + 0xfefefeff & ~*puVar8;
                uVar5 = uVar4 & 0x80808080;
                puVar7 = puVar8 + 1;
              } while (uVar5 == 0);
              bVar2 = (uVar4 & 0x8080) == 0;
              if (bVar2) {
                uVar5 = uVar5 >> 0x10;
              }
              if (bVar2) {
                puVar7 = (uint *)((int)puVar8 + 6);
              }
              iVar6 = (int)puVar7 + (-0x47a94f - (uint)CARRY1((byte)uVar5,(byte)uVar5));
              *(undefined4 *)(iVar6 + 0x47a94c) = 0x7073616a;
              *(undefined4 *)(iVar6 + 0x47a950) = 0x62627265;
              (&DAT_0047a954)[iVar6] = 0;
            }
            goto LAB_00423aeb;
          }
          FUN_00433690(1,"Using jasper smallblock ctype (perbox file)\n");
          DAT_00479ea4 = DAT_00479ea4 | 4;
          puVar7 = &DAT_0047a94c;
          do {
            uVar5 = *puVar7;
            puVar7 = puVar7 + 1;
            uVar5 = uVar5 + 0xfefefeff & ~uVar5 & 0x80808080;
          } while (uVar5 == 0);
        }
        else {
          FUN_00433690(1,"Using jasper ctype (perbox file)\n");
          DAT_00479ea4 = DAT_00479ea4 | 0x80000004;
          puVar7 = &DAT_0047a94c;
          do {
            uVar5 = *puVar7;
            puVar7 = puVar7 + 1;
            uVar5 = uVar5 + 0xfefefeff & ~uVar5 & 0x80808080;
          } while (uVar5 == 0);
        }
        bVar2 = (uVar5 & 0x8080) == 0;
        if (bVar2) {
          uVar5 = uVar5 >> 0x10;
        }
        if (bVar2) {
          puVar7 = (uint *)((int)puVar7 + 2);
        }
        iVar6 = -(uint)CARRY1((byte)uVar5,(byte)uVar5);
        *(undefined4 *)((int)puVar7 + iVar6 + -3) = 0x7073616a;
        *(undefined2 *)((int)puVar7 + iVar6 + 1) = 0x7265;
        *(undefined1 *)((int)puVar7 + iVar6 + 3) = 0;
      }
      else {
        FUN_00433690(1,"Using falcon ctype (perbox file)\n");
        DAT_00479ea4 = DAT_00479ea4 | 3;
        puVar7 = &DAT_0047a94c;
        do {
          puVar8 = puVar7;
          uVar4 = *puVar8 + 0xfefefeff & ~*puVar8;
          uVar5 = uVar4 & 0x80808080;
          puVar7 = puVar8 + 1;
        } while (uVar5 == 0);
        bVar2 = (uVar4 & 0x8080) == 0;
        if (bVar2) {
          uVar5 = uVar5 >> 0x10;
        }
        if (bVar2) {
          puVar7 = (uint *)((int)puVar8 + 6);
        }
        iVar6 = -(uint)CARRY1((byte)uVar5,(byte)uVar5);
        *(undefined4 *)((int)puVar7 + iVar6 + -3) = 0x636c6166;
        *(undefined2 *)((int)puVar7 + iVar6 + 1) = 0x6e6f;
        *(undefined1 *)((int)puVar7 + iVar6 + 3) = 0;
      }
    }
    else {
      FUN_00433690(1,"Using zephyr ctype (perbox file)\n");
      DAT_00479ea4 = DAT_00479ea4 | 2;
      puVar7 = &DAT_0047a94c;
      do {
        puVar8 = puVar7;
        uVar4 = *puVar8 + 0xfefefeff & ~*puVar8;
        uVar5 = uVar4 & 0x80808080;
        puVar7 = puVar8 + 1;
      } while (uVar5 == 0);
      bVar2 = (uVar4 & 0x8080) == 0;
      if (bVar2) {
        uVar5 = uVar5 >> 0x10;
      }
      if (bVar2) {
        puVar7 = (uint *)((int)puVar8 + 6);
      }
      iVar6 = -(uint)CARRY1((byte)uVar5,(byte)uVar5);
      *(undefined4 *)((int)puVar7 + iVar6 + -3) = 0x6870657a;
      *(undefined2 *)((int)puVar7 + iVar6 + 1) = 0x7279;
      *(undefined1 *)((int)puVar7 + iVar6 + 3) = 0;
    }
  }
  else {
    FUN_00433690(1,"Using xenon ctype (perbox file)\n");
    DAT_00479ea4 = DAT_00479ea4 | 1;
    puVar7 = &DAT_0047a94c;
    do {
      puVar8 = puVar7;
      uVar4 = *puVar8 + 0xfefefeff & ~*puVar8;
      uVar5 = uVar4 & 0x80808080;
      puVar7 = puVar8 + 1;
    } while (uVar5 == 0);
    bVar2 = (uVar4 & 0x8080) == 0;
    if (bVar2) {
      uVar5 = uVar5 >> 0x10;
    }
    if (bVar2) {
      puVar7 = (uint *)((int)puVar8 + 6);
    }
    iVar6 = -(uint)CARRY1((byte)uVar5,(byte)uVar5);
    *(undefined4 *)((int)puVar7 + iVar6 + -3) = 0x6f6e6578;
    *(undefined2 *)((int)puVar7 + iVar6 + 1) = 0x6e;
  }
LAB_00423aeb:
  return (DAT_00479ea4 & 7) != 0;
}

