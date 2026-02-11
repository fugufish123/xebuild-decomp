
uint __cdecl FUN_00421de0(byte *param_1,uint param_2)

{
  byte bVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  sVar2 = strlen((char *)param_1);
  bVar4 = *param_1;
  pbVar7 = param_1;
  if ((2 < sVar2) && (bVar4 == 0x30)) {
    bVar1 = param_1[1];
    if ((byte)(bVar1 + 0xbf) < 0x19) {
      bVar1 = bVar1 + 0x20;
    }
    if (bVar1 == 0x78) {
      pbVar7 = param_1 + 2;
      if (pbVar7 == (byte *)0x0) {
        return param_2;
      }
      uVar3 = 0xffffffff;
      pbVar6 = pbVar7;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        bVar4 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar4 != 0);
      bVar4 = param_1[2];
      sVar2 = ~uVar3 - 1;
    }
  }
  uVar3 = param_2;
  if ((bVar4 != 0) && (sVar2 != 0)) {
    if (0 < (int)sVar2) {
      pbVar6 = pbVar7;
      do {
        if ((9 < (byte)(*pbVar6 - 0x30)) && (5 < (byte)((*pbVar6 & 0xdf) + 0xbf))) {
          return param_2;
        }
        pbVar6 = pbVar6 + 1;
      } while (pbVar6 != pbVar7 + sVar2);
    }
    bVar4 = *pbVar7;
    if (bVar4 == 0) {
      param_2 = 0;
      uVar3 = param_2;
    }
    else {
      if ((byte)(bVar4 + 0x9f) < 6) {
        bVar1 = bVar4 + 0xa9;
      }
      else {
        bVar1 = bVar4 - 0x30;
        if (9 < bVar1) {
          if (5 < (byte)(bVar4 + 0xbf)) {
            return param_2;
          }
          bVar1 = bVar4 - 0x37;
        }
      }
      bVar4 = pbVar7[1];
      uVar3 = (uint)bVar1;
      if (bVar4 != 0) {
        if ((byte)(bVar4 + 0x9f) < 6) {
          bVar5 = bVar4 + 0xa9;
        }
        else {
          bVar5 = bVar4 - 0x30;
          if ((9 < bVar5) && (bVar5 = bVar4 - 0x37, 5 < (byte)(bVar4 + 0xbf))) {
            return param_2;
          }
        }
        uVar3 = (uint)bVar1 * 0x10 + (uint)bVar5;
        bVar4 = pbVar7[2];
        if (bVar4 != 0) {
          if ((byte)(bVar4 + 0x9f) < 6) {
            bVar1 = bVar4 + 0xa9;
          }
          else {
            bVar1 = bVar4 - 0x30;
            if ((9 < bVar1) && (bVar1 = bVar4 - 0x37, 5 < (byte)(bVar4 + 0xbf))) {
              return param_2;
            }
          }
          uVar3 = uVar3 * 0x10 + (uint)bVar1;
          bVar4 = pbVar7[3];
          if (bVar4 != 0) {
            if ((byte)(bVar4 + 0x9f) < 6) {
              bVar1 = bVar4 + 0xa9;
            }
            else {
              bVar1 = bVar4 - 0x30;
              if ((9 < bVar1) && (bVar1 = bVar4 - 0x37, 5 < (byte)(bVar4 + 0xbf))) {
                return param_2;
              }
            }
            uVar3 = uVar3 * 0x10 + (uint)bVar1;
            bVar4 = pbVar7[4];
            if (bVar4 != 0) {
              if ((byte)(bVar4 + 0x9f) < 6) {
                bVar1 = bVar4 + 0xa9;
              }
              else {
                bVar1 = bVar4 - 0x30;
                if ((9 < bVar1) && (bVar1 = bVar4 - 0x37, 5 < (byte)(bVar4 + 0xbf))) {
                  return param_2;
                }
              }
              uVar3 = (uint)bVar1 + uVar3 * 0x10;
              bVar4 = pbVar7[5];
              if (bVar4 != 0) {
                if ((byte)(bVar4 + 0x9f) < 6) {
                  bVar1 = bVar4 + 0xa9;
                }
                else {
                  bVar1 = bVar4 - 0x30;
                  if ((9 < bVar1) && (bVar1 = bVar4 - 0x37, 5 < (byte)(bVar4 + 0xbf))) {
                    return param_2;
                  }
                }
                uVar3 = uVar3 * 0x10 + (uint)bVar1;
                bVar4 = pbVar7[6];
                if (bVar4 != 0) {
                  if ((byte)(bVar4 + 0x9f) < 6) {
                    bVar1 = bVar4 + 0xa9;
                  }
                  else {
                    bVar1 = bVar4 - 0x30;
                    if ((9 < bVar1) && (bVar1 = bVar4 - 0x37, 5 < (byte)(bVar4 + 0xbf))) {
                      return param_2;
                    }
                  }
                  uVar3 = uVar3 * 0x10 + (uint)bVar1;
                  bVar4 = pbVar7[7];
                  if (bVar4 != 0) {
                    if ((byte)(bVar4 + 0x9f) < 6) {
                      bVar1 = bVar4 + 0xa9;
                    }
                    else {
                      bVar1 = bVar4 - 0x30;
                      if ((9 < bVar1) && (bVar1 = bVar4 - 0x37, 5 < (byte)(bVar4 + 0xbf))) {
                        return param_2;
                      }
                    }
                    uVar3 = uVar3 * 0x10 + (uint)bVar1;
                    bVar4 = pbVar7[8];
                    if (bVar4 != 0) {
                      if ((byte)(bVar4 + 0x9f) < 6) {
                        bVar1 = bVar4 + 0xa9;
                      }
                      else {
                        bVar1 = bVar4 - 0x30;
                        if ((9 < bVar1) && (bVar1 = bVar4 - 0x37, 5 < (byte)(bVar4 + 0xbf))) {
                          return param_2;
                        }
                      }
                      uVar3 = uVar3 * 0x10 + (uint)bVar1;
                      bVar4 = pbVar7[9];
                      if (bVar4 != 0) {
                        if ((byte)(bVar4 + 0x9f) < 6) {
                          bVar1 = bVar4 + 0xa9;
                        }
                        else {
                          bVar1 = bVar4 - 0x30;
                          if ((9 < bVar1) && (bVar1 = bVar4 - 0x37, 5 < (byte)(bVar4 + 0xbf))) {
                            return param_2;
                          }
                        }
                        uVar3 = uVar3 * 0x10 + (uint)bVar1;
                        bVar4 = pbVar7[10];
                        if (bVar4 != 0) {
                          if ((byte)(bVar4 + 0x9f) < 6) {
                            bVar1 = bVar4 + 0xa9;
                          }
                          else {
                            bVar1 = bVar4 - 0x30;
                            if ((9 < bVar1) && (bVar1 = bVar4 - 0x37, 5 < (byte)(bVar4 + 0xbf))) {
                              return param_2;
                            }
                          }
                          uVar3 = uVar3 * 0x10 + (uint)bVar1;
                          bVar4 = pbVar7[0xb];
                          if (bVar4 != 0) {
                            if ((byte)(bVar4 + 0x9f) < 6) {
                              bVar1 = bVar4 + 0xa9;
                            }
                            else {
                              bVar1 = bVar4 - 0x30;
                              if ((9 < bVar1) && (bVar1 = bVar4 - 0x37, 5 < (byte)(bVar4 + 0xbf))) {
                                return param_2;
                              }
                            }
                            uVar3 = uVar3 * 0x10 + (uint)bVar1;
                            bVar4 = pbVar7[0xc];
                            if (bVar4 != 0) {
                              if ((byte)(bVar4 + 0x9f) < 6) {
                                bVar1 = bVar4 + 0xa9;
                              }
                              else {
                                bVar1 = bVar4 - 0x30;
                                if ((9 < bVar1) && (bVar1 = bVar4 - 0x37, 5 < (byte)(bVar4 + 0xbf)))
                                {
                                  return param_2;
                                }
                              }
                              uVar3 = uVar3 * 0x10 + (uint)bVar1;
                              bVar4 = pbVar7[0xd];
                              if (bVar4 != 0) {
                                if ((byte)(bVar4 + 0x9f) < 6) {
                                  bVar1 = bVar4 + 0xa9;
                                }
                                else {
                                  bVar1 = bVar4 - 0x30;
                                  if ((9 < bVar1) &&
                                     (bVar1 = bVar4 - 0x37, 5 < (byte)(bVar4 + 0xbf))) {
                                    return param_2;
                                  }
                                }
                                uVar3 = uVar3 * 0x10 + (uint)bVar1;
                                bVar4 = pbVar7[0xe];
                                if (bVar4 != 0) {
                                  if ((byte)(bVar4 + 0x9f) < 6) {
                                    bVar1 = bVar4 + 0xa9;
                                  }
                                  else {
                                    bVar1 = bVar4 - 0x30;
                                    if ((9 < bVar1) &&
                                       (bVar1 = bVar4 - 0x37, 5 < (byte)(bVar4 + 0xbf))) {
                                      return param_2;
                                    }
                                  }
                                  uVar3 = (uint)bVar1 + uVar3 * 0x10;
                                  bVar4 = pbVar7[0xf];
                                  if (bVar4 != 0) {
                                    if ((byte)(bVar4 + 0x9f) < 6) {
                                      bVar1 = bVar4 + 0xa9;
                                    }
                                    else {
                                      bVar1 = bVar4 - 0x30;
                                      if ((9 < bVar1) &&
                                         (bVar1 = bVar4 - 0x37, 5 < (byte)(bVar4 + 0xbf))) {
                                        return param_2;
                                      }
                                    }
                                    uVar3 = uVar3 * 0x10 + (uint)bVar1;
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
      }
    }
  }
  param_2 = uVar3;
  return param_2;
}

