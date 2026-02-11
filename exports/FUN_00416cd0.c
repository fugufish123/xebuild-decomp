
/* WARNING: Removing unreachable block (ram,0x00416f72) */
/* WARNING: Removing unreachable block (ram,0x00417263) */
/* WARNING: Removing unreachable block (ram,0x004172ab) */

uint __cdecl FUN_00416cd0(undefined4 param_1,FILE *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var;
  uint uVar4;
  longlong lVar5;
  uint local_2b0;
  ushort local_2ac [4];
  uint local_2a4;
  uint local_2a0;
  uint local_24c;
  uint local_248;
  ushort local_244;
  ushort local_242;
  uint local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  uint local_22c [128];
  uint local_2c [7];
  
  lVar5 = FUN_004224d0(param_2);
  uVar2 = (uint)lVar5;
  FUN_00433690(1,"%s file size: 0x%llx\n");
  if (0x107ffff < lVar5) {
    fread(local_2ac,0x80,1,param_2);
    rewind(param_2);
    if ((local_2ac[0] & 0xff) * 0x100 + (uint)(local_2ac[0] >> 8) == 0xff4f) {
      if ((lVar5 < 0x100000000) &&
         ((lVar5 < 0 ||
          (uVar2 < (local_2a4 >> 8 & 0xff00) +
                   (local_2a4 & 0xff00) * 0x100 + local_2a4 * 0x1000000 + (local_2a4 >> 0x18))))) {
        FUN_00433690(0,"******* ERROR loading \'%s\', flash header Entry is too large\n");
        uVar2 = 0;
      }
      else {
        uVar3 = (local_2a0 >> 8 & 0xff00) +
                (local_2a0 & 0xff00) * 0x100 + local_2a0 * 0x1000000 + (local_2a0 >> 0x18);
        if ((lVar5 < 0x100000000) && ((lVar5 < 0 || (uVar2 < uVar3)))) {
          FUN_00433690(0,"******* ERROR loading \'%s\', flash header Size is too large\n");
          uVar2 = 0;
        }
        else if ((local_24c & 0xff00) * 0x100 + local_24c * 0x1000000 + (local_24c >> 0x18) +
                 (local_24c >> 8 & 0xff00) < 0x8001) {
          uVar4 = (local_248 & 0xff00) * 0x100 + local_248 * 0x1000000 + (local_248 >> 0x18) +
                  (local_248 >> 8 & 0xff00);
          if ((lVar5 < 0) || (((lVar5 < 0x100000000 && (uVar2 < uVar4)) || (uVar4 < uVar3)))) {
            FUN_00433690(0,"******* ERROR loading \'%s\', flash header SysUpdateAddr is malformed\n"
                        );
            uVar2 = 0;
          }
          else {
            if ((local_244 & 0xff) * 0x100 + (uint)(local_244 >> 8) != 2) {
              FUN_00433690(0,
                           "******* ERROR loading \'%s\', flash header SysUpdateCount is not 2, continuing anyway\n"
                          );
            }
            if ((local_242 & 0xff) * 0x100 + (uint)(local_242 >> 8) != 0x712) {
              FUN_00433690(0,
                           "******* ERROR loading \'%s\', flash header KeyVaultVersion is not 0x0712, continuing anyway\n"
                          );
            }
            if ((lVar5 < 0x100000000) &&
               ((lVar5 < 0 ||
                (uVar2 < (local_240 >> 8 & 0xff00) +
                         (local_240 & 0xff00) * 0x100 + local_240 * 0x1000000 + (local_240 >> 0x18))
                ))) {
              FUN_00433690(0,
                           "******* ERROR loading \'%s\', flash header KeyVaultAddr is too large\n")
              ;
              uVar2 = 0;
            }
            else if ((lVar5 < 0x100000000) &&
                    ((lVar5 < 0 ||
                     (uVar2 < (local_23c >> 8 & 0xff00) +
                              (local_23c & 0xff00) * 0x100 +
                              local_23c * 0x1000000 + (local_23c >> 0x18))))) {
              FUN_00433690(0,
                           "******* ERROR loading \'%s\', flash header FileSystemAddr is too large\n"
                          );
              uVar2 = 0;
            }
            else {
              if ((local_238 & 0xff00) * 0x100 + local_238 * 0x1000000 + (local_238 >> 0x18) +
                  (local_238 >> 8 & 0xff00) != 0) {
                FUN_00433690(0,
                             "******* ERROR loading \'%s\', flash header SmcConfigAddr is not 0, continuing anyway\n"
                            );
              }
              if (((local_234 >> 8 & 0xff00) +
                   (local_234 & 0xff00) * 0x100 + local_234 * 0x1000000 + (local_234 >> 0x18) &
                  0xfffff7ff) == 0x3000) {
                if ((lVar5 < 0x100000000) &&
                   ((lVar5 < 0 ||
                    (uVar2 < (local_230 >> 8 & 0xff00) +
                             (local_230 & 0xff00) * 0x100 +
                             local_230 * 0x1000000 + (local_230 >> 0x18))))) {
                  FUN_00433690(0,
                               "******* ERROR loading \'%s\', flash header SmcBootAddr is too large\n"
                              );
                  uVar2 = 0;
                }
                else {
                  if (0x3000000 < lVar5) {
                    FUN_00448af0(param_2,0x3000000,0,0);
                    fread(&local_2b0,4,1,param_2);
                    rewind(param_2);
                    uVar3 = FUN_00420ad0(&local_2b0);
                    if (uVar3 == 0x58544146) {
                      FUN_00433690(1,
                                   "FATX magic found, truncating load size to 0x3000000 bytes for mmc consoles\n"
                                  );
                      uVar2 = 0x3000000;
                    }
                    else {
                      rewind(param_2);
                      fread(local_22c,0x210,1,param_2);
                      rewind(param_2);
                      bVar1 = FUN_0040fc30(local_22c,local_2c);
                      if (CONCAT31(extraout_var,bVar1) == 0) {
                        FUN_00433690(1,
                                     "First page does not contain a valid ECC, assuming this is an mmc dump and truncating load size to 0x3000000 bytes!\n"
                                    );
                        uVar2 = 0x3000000;
                      }
                      else if (0x4200000 < lVar5) {
                        FUN_00433690(1,
                                     "First page contains a valid ECC, assuming this is a big block flash overdump and truncating load size to 0x4200000 bytes\n"
                                    );
                        uVar2 = 0x4200000;
                      }
                    }
                  }
                  FUN_00433690(1,"nanddump header checks passed OK!\n");
                }
              }
              else {
                FUN_00433690(0,
                             "******* ERROR loading \'%s\', flash header SmcBootSize is not 0x3000 or 0x3800\n"
                            );
                uVar2 = 0;
              }
            }
          }
        }
        else {
          FUN_00433690(0,"******* ERROR loading \'%s\', flash header KeyVaultSize is too large\n");
          uVar2 = 0;
        }
      }
    }
    else {
      FUN_00433690(0,"******* ERROR loading \'%s\', flash header magic is incorrect\n");
      uVar2 = 0;
    }
    return uVar2;
  }
  FUN_00433690(0,"******* ERROR loading \'%s\', file size 0x%llx is not large enough\n");
  return 0;
}

