
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_00417680(char *param_1)

{
  FILE *_File;
  uint *puVar1;
  size_t _Size;
  void *_Dst;
  void *_Dst_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  size_t _Size_00;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  char *pcVar11;
  size_t local_43c;
  uint local_420;
  uint local_41c [259];
  
  if (param_1 == (char *)0x0) {
    strcpy((char *)local_41c,&DAT_0047ad4c);
    puVar1 = local_41c;
    do {
      puVar6 = puVar1;
      uVar3 = *puVar6 + 0xfefefeff & ~*puVar6;
      uVar5 = uVar3 & 0x80808080;
      puVar1 = puVar6 + 1;
    } while (uVar5 == 0);
    bVar10 = (uVar3 & 0x8080) == 0;
    if (bVar10) {
      uVar5 = uVar5 >> 0x10;
    }
    if (bVar10) {
      puVar1 = (uint *)((int)puVar6 + 6);
    }
    builtin_strncpy((char *)((int)puVar1 + (-3 - (uint)CARRY1((byte)uVar5,(byte)uVar5))),
                    "nanddump.bin",0xd);
  }
  else {
    strcpy((char *)local_41c,param_1);
  }
  DAT_00478d40 = 0;
  if (DAT_00479f50 != (void *)0x0) {
    free(DAT_00479f50);
  }
  if (DAT_00479f4c != (void *)0x0) {
    free(DAT_00479f4c);
  }
  puVar7 = &DAT_0047a08c;
  DAT_00479f74 = 0;
  DAT_00479f4c = (void *)0x0;
  DAT_00479f50 = (void *)0x0;
  DAT_00479f6c = 0;
  puVar8 = &DAT_0047a08c;
  DAT_00479f70 = 0;
  do {
    if ((void *)*puVar8 != (void *)0x0) {
      free((void *)*puVar8);
    }
    puVar8 = puVar8 + 2;
  } while (puVar8 != &DAT_0047a0e4);
  puVar8 = &DAT_00479ea0;
  puVar9 = &DAT_00479ea0;
  do {
    if ((void *)puVar9[0x91] != (void *)0x0) {
      free((void *)puVar9[0x91]);
    }
    puVar9[0x92] = 0;
    puVar9 = puVar9 + 2;
  } while (puVar9 != &DAT_00479ec0);
  if (DAT_0047a104 != (uint *)0x0) {
    free(DAT_0047a104);
  }
  FUN_00433690(1,"\n------ Checking %s ------\n");
  _File = fopen((char *)local_41c,"rb");
  if (_File == (FILE *)0x0) {
    FUN_00433690(1,"NAND dump not found at \'%s\'\n");
    return 0;
  }
  DAT_00478d40 = FUN_00416cd0(local_41c,_File);
  if (DAT_00478d40 == 0) {
    DAT_00478d40 = 0;
    if (DAT_00479f50 != (void *)0x0) {
      free(DAT_00479f50);
    }
    if (DAT_00479f4c != (void *)0x0) {
      free(DAT_00479f4c);
    }
    DAT_00479f74 = 0;
    DAT_00479f4c = (void *)0x0;
    DAT_00479f50 = (void *)0x0;
    DAT_00479f6c = 0;
    DAT_00479f70 = 0;
    do {
      if ((void *)*puVar7 != (void *)0x0) {
        free((void *)*puVar7);
      }
      puVar7 = puVar7 + 2;
    } while (puVar7 != &DAT_0047a0e4);
    do {
      if ((void *)puVar8[0x91] != (void *)0x0) {
        free((void *)puVar8[0x91]);
      }
      puVar8[0x92] = 0;
      puVar8 = puVar8 + 2;
    } while (puVar8 != &DAT_00479ec0);
    iVar2 = 0;
    puVar1 = DAT_0047a104;
    if (DAT_0047a104 == (uint *)0x0) {
      return 0;
    }
    goto LAB_00417a1b;
  }
  uVar5 = DAT_00478d40;
  if (DAT_00478d40 == 0x3000000) {
    DAT_00479f5c = 0x18000;
    local_43c = 0x3000000;
    iVar2 = DAT_00479f5c;
  }
  else {
    if (DAT_00478d40 != ((int)DAT_00478d40 / 0x210) * 0x210) {
      pcVar11 = "NAND dump \'%s\' is not a correct dump size (0x%x bytes), ignoring\n";
LAB_00417aea:
      FUN_00433690(1,pcVar11);
      fclose(_File);
      return 0;
    }
    if ((int)DAT_00478d40 < 0x4200000) {
      local_43c = 0x1080000;
      iVar2 = 0x8000;
      if (DAT_00478d40 != 0x1080000) {
        pcVar11 = 
        "NAND dump \'%s\' is not a correct raw (with ecc) dump size (0x%x bytes), ignoring\n";
        goto LAB_00417aea;
      }
    }
    else {
      local_43c = 0x4200000;
      uVar5 = 0x4200000;
      iVar2 = 0x20000;
    }
  }
  DAT_00479f5c = iVar2;
  puVar1 = (uint *)malloc(local_43c);
  if (puVar1 == (uint *)0x0) {
    FUN_00433690(0,"******* ERROR loading \'%s\', unable to allocate memory\n");
    fclose(_File);
    return 0;
  }
  FUN_00433690(1,"Loading NAND dump (0x%x bytes)...");
  fread(puVar1,local_43c,1,_File);
  fclose(_File);
  FUN_00433690(1,"done!\n");
  _Size = DAT_00479f5c << 4;
  _Size_00 = DAT_00479f5c << 9;
  DAT_00479f54 = _Size_00;
  _DAT_00479f58 = _Size;
  _Dst = malloc(_Size_00);
  DAT_00479f4c = _Dst;
  _Dst_00 = malloc(_Size);
  DAT_00479f50 = _Dst_00;
  if ((_Dst == (void *)0x0) || (_Dst_00 == (void *)0x0)) {
    FUN_00433690(0,"******* ERROR loading \'%s\', unable to allocate user/spare memory\n");
    DAT_00478d40 = 0;
    if (DAT_00479f50 != (void *)0x0) {
      free(DAT_00479f50);
    }
    if (DAT_00479f4c != (void *)0x0) {
      free(DAT_00479f4c);
    }
    DAT_00479f74 = 0;
    DAT_00479f4c = (void *)0x0;
    DAT_00479f50 = (void *)0x0;
    DAT_00479f6c = 0;
    DAT_00479f70 = 0;
    puVar8 = &DAT_00479ea0;
    do {
      if ((void *)*puVar7 != (void *)0x0) {
        free((void *)*puVar7);
      }
      puVar7 = puVar7 + 2;
    } while (puVar7 != &DAT_0047a0e4);
    do {
      if ((void *)puVar8[0x91] != (void *)0x0) {
        free((void *)puVar8[0x91]);
      }
      puVar8[0x92] = 0;
      puVar8 = puVar8 + 2;
    } while (puVar8 != &DAT_00479ec0);
    if (DAT_0047a104 != (uint *)0x0) {
      free(DAT_0047a104);
    }
    free(puVar1);
    return 0;
  }
  memset(_Dst,0xff,_Size_00);
  memset(_Dst_00,0xff,_Size);
  FUN_00433690(1,"Detecting NAND controller type from dump data...\n");
  iVar2 = FUN_00416aa0((int)puVar1,uVar5);
  if (iVar2 == 0) {
    iVar2 = 0;
    FUN_00433690(0,"******* ERROR loading \'%s\', unable to determine NAND controller type!\n");
    goto LAB_00417a1b;
  }
  if (DAT_00479f68 == 0) {
    iVar2 = FUN_00416150(puVar1);
    if (iVar2 != 0) {
LAB_00417c40:
      FUN_00413d30();
      FUN_00413ad0();
      FUN_00415970();
      FUN_004138c0();
      iVar4 = FUN_00415230();
      if (iVar4 != 0) {
        if ((DAT_00479f00 & 0x20000000) == 0) {
          FUN_00414300();
          FUN_00414050();
        }
        if ((DAT_00479f00 & 0x4000000) == 0) {
          FUN_00433690(1,"seeking security files...\n");
          if (DAT_004c9160 != 0) {
            if (((DAT_004c8fe4 != '\0') && (DAT_00474d24 == 1)) &&
               (iVar4 = FUN_004136a0(&DAT_004c90e8,(int *)&local_420,&DAT_004c9110,0), iVar4 != 0))
            {
              FUN_004144e0(0,local_420);
            }
            if (1 < DAT_004c9160) {
              if (((DAT_004c8ffa != '\0') && (DAT_00474d24 == 1)) &&
                 (iVar4 = FUN_004136a0(&DAT_004c90ec,(int *)&local_420,(int *)&DAT_004c9114,0),
                 iVar4 != 0)) {
                FUN_004144e0(1,local_420);
              }
              if (2 < DAT_004c9160) {
                if (((DAT_004c9010 != '\0') && (DAT_00474d24 == 1)) &&
                   (iVar4 = FUN_004136a0((int *)&DAT_004c90f0,(int *)&local_420,(int *)&DAT_004c9118
                                         ,0), iVar4 != 0)) {
                  FUN_004144e0(2,local_420);
                }
                if (3 < DAT_004c9160) {
                  if (((DAT_004c9026 != '\0') && (DAT_00474d24 == 1)) &&
                     (iVar4 = FUN_004136a0((int *)&DAT_004c90f4,(int *)&local_420,
                                           (int *)&DAT_004c911c,0), iVar4 != 0)) {
                    FUN_004144e0(3,local_420);
                  }
                  if (4 < DAT_004c9160) {
                    if (((DAT_004c903c != '\0') && (DAT_00474d24 == 1)) &&
                       (iVar4 = FUN_004136a0((int *)&DAT_004c90f8,(int *)&local_420,
                                             (int *)&DAT_004c9120,0), iVar4 != 0)) {
                      FUN_004144e0(4,local_420);
                    }
                    if (5 < DAT_004c9160) {
                      if (((DAT_004c9052 != '\0') && (DAT_00474d24 == 1)) &&
                         (iVar4 = FUN_004136a0((int *)&DAT_004c90fc,(int *)&local_420,
                                               (int *)&DAT_004c9124,0), iVar4 != 0)) {
                        FUN_004144e0(5,local_420);
                      }
                      if (6 < DAT_004c9160) {
                        if (((DAT_004c9068 != '\0') && (DAT_00474d24 == 1)) &&
                           (iVar4 = FUN_004136a0((int *)&DAT_004c9100,(int *)&local_420,
                                                 (int *)&DAT_004c9128,0), iVar4 != 0)) {
                          FUN_004144e0(6,local_420);
                        }
                        if (7 < DAT_004c9160) {
                          if (((DAT_004c907e != '\0') && (DAT_00474d24 == 1)) &&
                             (iVar4 = FUN_004136a0((int *)&DAT_004c9104,(int *)&local_420,
                                                   (int *)&DAT_004c912c,0), iVar4 != 0)) {
                            FUN_004144e0(7,local_420);
                          }
                          if (8 < DAT_004c9160) {
                            if (((DAT_004c9094 != '\0') && (DAT_00474d24 == 1)) &&
                               (iVar4 = FUN_004136a0((int *)&DAT_004c9108,(int *)&local_420,
                                                     (int *)&DAT_004c9130,0), iVar4 != 0)) {
                              FUN_004144e0(8,local_420);
                            }
                            if ((((9 < DAT_004c9160) && (DAT_004c90aa != '\0')) &&
                                (DAT_00474d24 == 1)) &&
                               (iVar4 = FUN_004136a0((int *)&DAT_004c910c,(int *)&local_420,
                                                     (int *)&DAT_004c9134,0), iVar4 != 0)) {
                              FUN_004144e0(9,local_420);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          FUN_00433690(1,"done!\n");
        }
      }
      FUN_004172c0();
      goto LAB_00417a1b;
    }
  }
  else {
    iVar2 = 1;
    DAT_00479f74 = 0;
    memcpy(DAT_00479f4c,puVar1,DAT_00479f54);
    iVar4 = memcmp(s_zeropair_image_0044a5c0,(void *)((int)DAT_00479f4c + 0x10),0xe);
    if (iVar4 != 0) goto LAB_00417c40;
    FUN_00433690(0,"\n\n***** ERROR: nanddump.bin is a ZEROPAIR/XELL image, discarding\n");
  }
  DAT_00478d40 = 0;
  if (DAT_00479f50 != (void *)0x0) {
    free(DAT_00479f50);
  }
  if (DAT_00479f4c != (void *)0x0) {
    free(DAT_00479f4c);
  }
  DAT_00479f74 = 0;
  DAT_00479f4c = (void *)0x0;
  DAT_00479f50 = (void *)0x0;
  DAT_00479f6c = 0;
  DAT_00479f70 = 0;
  do {
    if ((void *)*puVar7 != (void *)0x0) {
      free((void *)*puVar7);
    }
    puVar7 = puVar7 + 2;
  } while (puVar7 != &DAT_0047a0e4);
  do {
    if ((void *)puVar8[0x91] != (void *)0x0) {
      free((void *)puVar8[0x91]);
    }
    puVar8[0x92] = 0;
    puVar8 = puVar8 + 2;
  } while (puVar8 != &DAT_00479ec0);
  iVar2 = 0;
  if (DAT_0047a104 != (uint *)0x0) {
    free(DAT_0047a104);
  }
LAB_00417a1b:
  free(puVar1);
  return iVar2;
}

