
void __cdecl FUN_004448d0(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  uint *puVar12;
  
  if (param_3 == 0) {
    return;
  }
  if (CARRY4(param_3 * 8,param_1[5])) {
    uVar3 = param_1[6] + 1;
  }
  else {
    uVar3 = param_1[6];
  }
  param_1[5] = param_3 * 8 + param_1[5];
  puVar1 = param_1 + 7;
  param_1[6] = (param_3 >> 0x1d) + uVar3;
  uVar3 = param_1[0x17];
  if (uVar3 != 0) {
    iVar4 = (int)uVar3 >> 2;
    uVar6 = uVar3 + param_3;
    uVar3 = uVar3 & 3;
    if (uVar6 < 0x40) {
      param_1[0x17] = uVar6;
      if (param_3 + uVar3 < 4) {
        puVar1 = puVar1 + iVar4;
        uVar6 = *puVar1;
        if (uVar3 != 1) {
          puVar7 = param_2;
          if (uVar3 == 2) goto LAB_00444d4e;
          if (uVar3 != 0) goto LAB_00444c0e;
          uVar3 = *param_2;
          param_2 = (uint *)((int)param_2 + 1);
          uVar6 = (uint)(byte)uVar3 << 0x18;
          param_3 = param_3 - 1;
          if (param_3 == 0) goto LAB_00444c0e;
        }
        puVar7 = (uint *)((int)param_2 + 1);
        uVar6 = uVar6 | (uint)(byte)*param_2 << 0x10;
        if (param_3 == 1) {
LAB_00444c0e:
          *puVar1 = uVar6;
          return;
        }
LAB_00444d4e:
        *puVar1 = uVar6 | (uint)(byte)*puVar7 << 8;
        return;
      }
      uVar11 = uVar6 & 3;
      uVar8 = puVar1[iVar4];
      if (uVar3 == 2) {
LAB_00444c88:
        puVar7 = (uint *)((int)param_2 + 1);
        uVar8 = uVar8 | (uint)(byte)*param_2 << 8;
      }
      else {
        puVar7 = param_2;
        if (uVar3 != 3) {
          if (uVar3 != 1) {
            uVar3 = *param_2;
            param_2 = (uint *)((int)param_2 + 1);
            uVar8 = (uint)(byte)uVar3 << 0x18;
          }
          uVar3 = *param_2;
          param_2 = (uint *)((int)param_2 + 1);
          uVar8 = uVar8 | (uint)(byte)uVar3 << 0x10;
          goto LAB_00444c88;
        }
      }
      pbVar9 = (byte *)((int)puVar7 + 1);
      iVar5 = iVar4 + 1;
      puVar1[iVar4] = uVar8 | (byte)*puVar7;
      if (iVar5 < (int)uVar6 >> 2) {
        do {
          uVar3 = *(uint *)((int)puVar7 + iVar5 * 4 + iVar4 * -4 + -3);
          puVar1[iVar5] =
               uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
          iVar5 = iVar5 + 1;
        } while ((int)uVar6 >> 2 != iVar5);
        pbVar9 = (byte *)((int)puVar7 + (iVar5 - iVar4) * 4 + -3);
      }
      if (uVar11 == 0) {
        return;
      }
      pbVar10 = pbVar9 + uVar11;
      if (uVar11 == 2) {
        uVar3 = 0;
      }
      else {
        if (uVar11 != 3) {
          uVar3 = 0;
          goto LAB_00444d12;
        }
        pbVar2 = pbVar10 + -1;
        pbVar10 = pbVar9 + 2;
        uVar3 = (uint)*pbVar2 << 8;
      }
      pbVar9 = pbVar10 + -1;
      pbVar10 = pbVar10 + -1;
      uVar3 = uVar3 | (uint)*pbVar9 << 0x10;
LAB_00444d12:
      puVar1[iVar5] = (uint)pbVar10[-1] << 0x18 | uVar3;
      return;
    }
    puVar7 = puVar1 + iVar4;
    uVar8 = *puVar7;
    if (uVar3 == 2) {
LAB_00444b5e:
      puVar12 = (uint *)((int)param_2 + 1);
      uVar8 = uVar8 | (uint)(byte)*param_2 << 8;
    }
    else {
      puVar12 = param_2;
      if (uVar3 != 3) {
        if (uVar3 != 1) {
          uVar3 = *param_2;
          param_2 = (uint *)((int)param_2 + 1);
          uVar8 = (uint)(byte)uVar3 << 0x18;
        }
        uVar3 = *param_2;
        param_2 = (uint *)((int)param_2 + 1);
        uVar8 = uVar8 | (uint)(byte)uVar3 << 0x10;
        goto LAB_00444b5e;
      }
    }
    param_2 = (uint *)((int)puVar12 + 1);
    *puVar7 = (byte)*puVar12 | uVar8;
    if (iVar4 < 0xf) {
      iVar5 = 0;
      do {
        uVar3 = *(uint *)((int)puVar12 + iVar5 * 4 + 1);
        puVar7[iVar5 + 1] =
             uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0xf - iVar4);
      param_2 = (uint *)((int)puVar12 + iVar4 * -4 + 0x3d);
    }
    param_3 = uVar6 - 0x40;
    FUN_00442b40(param_1,puVar1,0x40);
    param_1[0x17] = 0;
  }
  if (0x3f < param_3) {
    uVar3 = param_3 - 0x40;
    puVar7 = param_2;
    do {
      uVar6 = *puVar7;
      puVar12 = puVar7 + 0x10;
      param_1[7] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      uVar6 = puVar7[1];
      param_1[8] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      uVar6 = puVar7[2];
      param_1[9] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      uVar6 = puVar7[3];
      param_1[10] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      uVar6 = puVar7[4];
      param_1[0xb] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18
      ;
      uVar6 = puVar7[5];
      param_1[0xc] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18
      ;
      uVar6 = puVar7[6];
      param_1[0xd] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18
      ;
      uVar6 = puVar7[7];
      param_1[0xe] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18
      ;
      uVar6 = puVar7[8];
      param_1[0xf] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18
      ;
      uVar6 = puVar7[9];
      param_1[0x10] =
           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      uVar6 = puVar7[10];
      param_1[0x11] =
           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      uVar6 = puVar7[0xb];
      param_1[0x12] =
           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      uVar6 = puVar7[0xc];
      param_1[0x13] =
           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      uVar6 = puVar7[0xd];
      param_1[0x14] =
           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      uVar6 = puVar7[0xe];
      param_1[0x15] =
           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      uVar6 = puVar7[0xf];
      param_1[0x16] =
           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      FUN_00442b40(param_1,puVar1,0x40);
      puVar7 = puVar12;
    } while ((uint *)((int)param_2 + (uVar3 & 0xffffffc0) + 0x40) != puVar12);
    param_3 = param_3 & 0x3f;
    param_2 = (uint *)((int)param_2 + (uVar3 & 0xffffffc0) + 0x40);
  }
  param_1[0x17] = param_3;
  iVar4 = (int)param_3 >> 2;
  uVar3 = param_3 & 3;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  else {
    uVar6 = *param_2;
    *puVar1 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    if (iVar4 != 1) {
      uVar6 = param_2[1];
      param_1[8] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      if (iVar4 != 2) {
        uVar6 = param_2[2];
        param_1[9] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18
        ;
        if (iVar4 != 3) {
          uVar6 = param_2[3];
          param_1[10] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                        uVar6 << 0x18;
          if (iVar4 != 4) {
            uVar6 = param_2[4];
            param_1[0xb] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                           uVar6 << 0x18;
            if (iVar4 != 5) {
              uVar6 = param_2[5];
              param_1[0xc] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                             uVar6 << 0x18;
              if (iVar4 != 6) {
                uVar6 = param_2[6];
                param_1[0xd] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                               uVar6 << 0x18;
                if (iVar4 != 7) {
                  uVar6 = param_2[7];
                  param_1[0xe] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                                 uVar6 << 0x18;
                  if (iVar4 != 8) {
                    uVar6 = param_2[8];
                    param_1[0xf] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                                   uVar6 << 0x18;
                    if (iVar4 != 9) {
                      uVar6 = param_2[9];
                      param_1[0x10] =
                           uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                           uVar6 << 0x18;
                      if (iVar4 != 10) {
                        uVar6 = param_2[10];
                        param_1[0x11] =
                             uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                             uVar6 << 0x18;
                        if (iVar4 != 0xb) {
                          uVar6 = param_2[0xb];
                          param_1[0x12] =
                               uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                               uVar6 << 0x18;
                          if (iVar4 != 0xc) {
                            uVar6 = param_2[0xc];
                            param_1[0x13] =
                                 uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                                 uVar6 << 0x18;
                            if (iVar4 != 0xd) {
                              uVar6 = param_2[0xd];
                              param_1[0x14] =
                                   uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                                   uVar6 << 0x18;
                              if (iVar4 == 0xf) {
                                uVar6 = param_2[0xe];
                                param_1[0x15] =
                                     uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8
                                     | uVar6 << 0x18;
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
          }
        }
      }
    }
    iVar5 = iVar4 * 4;
    param_2 = param_2 + iVar4;
  }
  pbVar9 = (byte *)((int)param_2 + uVar3);
  if (uVar3 == 2) {
    uVar3 = 0;
LAB_00444c27:
    pbVar10 = pbVar9 + -1;
    pbVar9 = pbVar9 + -1;
    uVar3 = uVar3 | (uint)*pbVar10 << 0x10;
  }
  else {
    if (uVar3 == 3) {
      pbVar10 = pbVar9 + -1;
      pbVar9 = (byte *)((int)param_2 + 2);
      uVar3 = (uint)*pbVar10 << 8;
      goto LAB_00444c27;
    }
    if (uVar3 != 1) {
      uVar3 = 0;
      goto LAB_00444b01;
    }
    uVar3 = 0;
  }
  uVar3 = (uint)pbVar9[-1] << 0x18 | uVar3;
LAB_00444b01:
  *(uint *)((int)puVar1 + iVar5) = uVar3;
  return;
}

