
undefined4 __cdecl FUN_00425110(char *param_1)

{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  size_t sVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *_Str;
  
  sVar2 = strlen(param_1);
  if ((int)sVar2 < 1) {
    iVar3 = FUN_00424bb0(param_1,(char *)0x0);
    if (iVar3 == 1) goto LAB_004252d0;
LAB_0042530a:
    FUN_00433690(1,
                 "\n\n***** ERROR: unknown or incomplete option \'%s\' provided on the command line!\n"
                );
    return 0;
  }
  _Str = (byte *)0x0;
  iVar3 = 0;
  do {
    while (param_1[iVar3] == '=') {
      _Str = (byte *)(param_1 + iVar3 + 1);
      param_1[iVar3] = '\0';
      if (*_Str == 0) {
        FUN_00433690(1,
                     "\n\n***** ERROR: option \'%s\' provided on command line with = but no value!\n"
                    );
        return 0;
      }
      iVar3 = sVar2 + 2;
      if ((int)sVar2 <= iVar3) goto LAB_0042515c;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < (int)sVar2);
LAB_0042515c:
  sVar4 = strlen(param_1);
  if (sVar2 == sVar4) {
    iVar3 = FUN_00424bb0(param_1,(char *)_Str);
    if (iVar3 == 1) goto LAB_004252d0;
    if (_Str == (byte *)0x0) goto LAB_0042530a;
    sVar2 = 0;
  }
  else {
    sVar2 = strlen((char *)_Str);
    iVar3 = FUN_00424bb0(param_1,(char *)_Str);
    if (iVar3 == 1) goto LAB_004252d0;
  }
  iVar3 = _stricmp(param_1,"cputemp");
  if (iVar3 == 0) {
    DAT_00479f18 = FUN_00421860(_Str,0xffffffff);
    if (DAT_00479f18 != 0xffffffff) {
      FUN_00433690(1,"Using CPUTEMP option, value %d\n");
      return 1;
    }
  }
  else {
    iVar3 = _stricmp(param_1,"gputemp");
    if (iVar3 == 0) {
      DAT_00479f1c = FUN_00421860(_Str,0xffffffff);
      if (DAT_00479f1c != 0xffffffff) {
        FUN_00433690(1,"Using GPUTEMP option, value %d\n");
        return 1;
      }
    }
    else {
      iVar3 = _stricmp(param_1,"edramtemp");
      if (iVar3 == 0) {
        DAT_00479f20 = FUN_00421860(_Str,0xffffffff);
        if (DAT_00479f20 != 0xffffffff) {
          FUN_00433690(1,"Using EDRAMTEMP option, value %d\n");
          return 1;
        }
      }
      else {
        iVar3 = _stricmp(param_1,"overcputemp");
        if (iVar3 == 0) {
          DAT_00479f24 = FUN_00421860(_Str,0xffffffff);
          if (DAT_00479f24 != 0xffffffff) {
            FUN_00433690(1,"Using OVERCPUTEMP option, value %d\n");
            return 1;
          }
        }
        else {
          iVar3 = _stricmp(param_1,"overgputemp");
          if (iVar3 == 0) {
            DAT_00479f28 = FUN_00421860(_Str,0xffffffff);
            if (DAT_00479f28 != 0xffffffff) {
              FUN_00433690(1,"Using OVERGPUTEMP option, value %d\n");
              return 1;
            }
          }
          else {
            iVar3 = _stricmp(param_1,"overedramtemp");
            if (iVar3 == 0) {
              DAT_00479f2c = FUN_00421860(_Str,0xffffffff);
              if (DAT_00479f2c != 0xffffffff) {
                FUN_00433690(1,"Using OVEREDRAMTEMP option, value %d\n");
                return 1;
              }
            }
            else {
              iVar3 = _stricmp(param_1,"cpufan");
              if (iVar3 == 0) {
                DAT_00479f30 = FUN_00421860(_Str,0xffffffff);
                if (DAT_00479f30 != 0xffffffff) {
                  FUN_00433690(1,"Using CPUFAN option, value %d\n");
                  return 1;
                }
              }
              else {
                iVar3 = _stricmp(param_1,"gpufan");
                if (iVar3 == 0) {
                  DAT_00479f34 = FUN_00421860(_Str,0xffffffff);
                  if (DAT_00479f34 != 0xffffffff) {
                    FUN_00433690(1,"Using GPUFAN option, value %d\n");
                    return 1;
                  }
                }
                else {
                  iVar3 = _stricmp(param_1,"avregion");
                  if (iVar3 == 0) {
                    DAT_00479f38 = FUN_00421860(_Str,0xffffffff);
                    if (DAT_00479f38 != 0xffffffff) {
                      FUN_00433690(1,"Using AVREGION option, value 0x%x\n");
                      return 1;
                    }
                  }
                  else {
                    iVar3 = _stricmp(param_1,"gameregion");
                    if (iVar3 == 0) {
                      DAT_00479f3c = FUN_00421860(_Str,0xffffffff);
                      if (DAT_00479f3c != 0xffffffff) {
                        FUN_00433690(1,"Using GAMEREGION option, value 0x%x\n");
                        return 1;
                      }
                    }
                    else {
                      iVar3 = _stricmp(param_1,"dvdregion");
                      if (iVar3 == 0) {
                        DAT_00479f40 = FUN_00421860(_Str,0xffffffff);
                        if (DAT_00479f40 != 0xffffffff) {
                          FUN_00433690(1,"Using DVDREGION option, value 0x%x\n");
                          return 1;
                        }
                      }
                      else {
                        iVar3 = _stricmp(param_1,"xellbutton");
                        if (iVar3 == 0) {
                          bVar1 = FUN_00424a70((char *)_Str);
                          DAT_00479f08 = CONCAT31(extraout_var,bVar1);
                          if (DAT_00479f08 != 0) {
                            FUN_00433690(1,"Using XELLBUTTON option, value %s\n");
                            return 1;
                          }
                        }
                        else {
                          iVar3 = _stricmp(param_1,"xellbutton2");
                          if (iVar3 == 0) {
                            bVar1 = FUN_00424a70((char *)_Str);
                            DAT_00479f0c = CONCAT31(extraout_var_00,bVar1);
                            if (DAT_00479f0c != 0) {
                              FUN_00433690(1,"Using XELLBUTTON2 option, value %s\n");
                              return 1;
                            }
                          }
                          else {
                            iVar3 = _stricmp(param_1,"dualboot");
                            if (iVar3 == 0) {
                              bVar1 = FUN_00424a70((char *)_Str);
                              DAT_00479f10 = CONCAT31(extraout_var_01,bVar1);
                              if (DAT_00479f10 != 0) {
                                FUN_00433690(1,"Using DUALBOOT option, value %s\n");
                                return 1;
                              }
                            }
                            else {
                              iVar3 = _stricmp(param_1,"cfldv");
                              if (iVar3 == 0) {
                                uVar5 = FUN_00421860(_Str,0);
                                DAT_00479f15 = (byte)uVar5;
                                if (DAT_00479f15 < 0x21) {
                                  if (DAT_00479f15 == 0) goto LAB_00425230;
                                }
                                else {
                                  FUN_00433690(0,
                                               "***** WARNING: cfldv value %d on command line is too large, setting to max value of 32\n"
                                              );
                                  DAT_00479f15 = 0x20;
                                }
                                FUN_00433690(1,"Using CFLDV option, value %d\n");
                                return 1;
                              }
                              iVar3 = _stricmp(param_1,"macid");
                              if (iVar3 == 0) {
                                FUN_00424b20((char *)_Str);
                                sVar2 = strlen((char *)_Str);
                                if (sVar2 != 0xc) {
                                  FUN_00433690(1,
                                               "\n\n***** ERROR: invalid length macid %s provided on the command line!\n"
                                              );
                                  return 0;
                                }
                                iVar3 = FUN_00422350(_Str);
                                if (iVar3 == 0) {
                                  FUN_00433690(1,
                                               "\n\n***** ERROR: invalid values in macid %s provided on the command line!\n"
                                              );
                                  return 0;
                                }
                                FUN_00433690(1,"Using MACID option address: ");
                                iVar3 = FUN_00421300(_Str);
                                DAT_00479f44 = (undefined1)iVar3;
                                FUN_00433690(1,"%02x");
                                iVar3 = 0;
                                do {
                                  _Str = _Str + 2;
                                  iVar7 = iVar3 + 1;
                                  FUN_00433690(1,":");
                                  iVar6 = FUN_00421300(_Str);
                                  (&DAT_00479f45)[iVar3] = (char)iVar6;
                                  FUN_00433690(1,"%02x");
                                  iVar3 = iVar7;
                                } while (iVar7 != 5);
LAB_004252d0:
                                FUN_00433690(1,"\n");
                                return 1;
                              }
                              iVar3 = _stricmp(param_1,"dvdkey");
                              if (iVar3 != 0) {
                                if (sVar2 != 0) {
                                  FUN_00433690(1,
                                               "\n\n***** ERROR: unknown option \'%s\' with value \'%s\' provided on the command line!\n"
                                              );
                                  return 0;
                                }
                                goto LAB_0042530a;
                              }
                              iVar3 = FUN_004135a0(_Str);
                              if (iVar3 != 0) {
                                DAT_00479f00 = DAT_00479f00 | 0x2000000;
                                return 1;
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
LAB_00425230:
  FUN_00433690(1,"\n\n***** ERROR: parsing option \'%s\', value \'%s\' is incorrect!\n");
  return 0;
}

