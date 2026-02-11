
undefined4 FUN_00429e70(void)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 local_20;
  
  if (DAT_004c4f98 < 2) {
    local_20 = 1;
  }
  else {
    local_20 = 1;
    puVar8 = &DAT_004bc17c;
    uVar9 = 1;
    uVar2 = DAT_004c4f98;
    do {
      uVar6 = *(uint *)(puVar8 + 0x404);
      if (uVar6 < 0x12) {
        uVar4 = 1 << ((byte)uVar6 & 0x1f);
        if ((uVar4 & 0x20820) == 0) {
          if ((uVar4 & 0x4000) == 0) {
            if ((uVar4 & 0x3000) != 0) {
              if (0 < (int)uVar2) {
                uVar4 = 0;
                piVar5 = &DAT_004bc580;
                if (DAT_004bc154 != 0xb) {
                  do {
                    uVar4 = uVar4 + 1;
                    if (uVar4 == uVar2) goto LAB_00429fba;
                    iVar3 = *piVar5;
                    piVar5 = piVar5 + 0x10b;
                  } while (iVar3 != 0xb);
                  iVar3 = (&DAT_004bc15c)[uVar4 * 0x10b];
                  puVar7 = (uint *)(iVar3 + 0x388);
                  if (uVar6 != 0xc) {
                    puVar7 = (uint *)(iVar3 + 0x392);
                  }
                  iVar3 = FUN_0040e620(*(uint **)(puVar8 + 0x40c),*(int *)(puVar8 + 0x410),
                                       (uint *)(iVar3 + 0x268),puVar7);
                  if (iVar3 != 0) goto LAB_00429fe0;
                  if (DAT_0047a148 == (uint *)0x0) {
                    FUN_00433690(0,
                                 "\n***** ERROR: %s failed signature check, RSA key not available for resigning!\n"
                                );
                    uVar2 = DAT_004c4f98;
                  }
                  else {
                    iVar3 = memcmp(DAT_0047a148,(void *)((&DAT_004bc15c)[uVar4 * 0x10b] + 0x268),
                                   0x110);
                    if (iVar3 == 0) {
                      FUN_00433690(0,"%s failed signature check, attempting to resign\n");
                      iVar3 = FUN_0040e690(*(uint **)(puVar8 + 0x40c),*(int *)(puVar8 + 0x410),
                                           (uint *)((&DAT_004bc15c)[uVar4 * 0x10b] + 0x268),
                                           DAT_0047a148,puVar7);
                      if (iVar3 == 0) {
                        FUN_00433690(0,"\n***** ERROR: failed to resign %s!\n");
                        local_20 = 0;
                        uVar2 = DAT_004c4f98;
                      }
                      else {
                        FUN_00433690(1,"%s resigned successfully!\n");
                        uVar2 = DAT_004c4f98;
                      }
                    }
                    else {
                      FUN_00433690(0,
                                   "\n***** ERROR: %s failed signature check, RSA key provided does not match the pub key in SB!\n"
                                  );
                      uVar2 = DAT_004c4f98;
                    }
                  }
                  goto LAB_00429f20;
                }
              }
LAB_00429fba:
              FUN_00433690(1,"could not locate SB data to check %s!\n");
              uVar2 = DAT_004c4f98;
            }
          }
          else {
            if (0 < (int)uVar2) {
              uVar6 = 0;
              piVar5 = &DAT_004bc580;
              if (DAT_004bc154 != 0xd) {
                do {
                  uVar6 = uVar6 + 1;
                  if (uVar6 == uVar2) goto LAB_00429efa;
                  iVar3 = *piVar5;
                  piVar5 = piVar5 + 0x10b;
                } while (iVar3 != 0xd);
                bVar1 = FUN_0040e7b0(*(uint **)(puVar8 + 0x40c),*(int *)(puVar8 + 0x410),
                                     (void *)((&DAT_004bc15c)[uVar6 * 0x10b] + 0x24c));
                if (CONCAT31(extraout_var,bVar1) == 0) {
                  if (DAT_0047a148 == (uint *)0x0) {
                    FUN_00433690(0,"\n***** ERROR: %s failed hash check!\n");
                    uVar2 = DAT_004c4f98;
                  }
                  else {
                    if (((int)DAT_004c4f98 < 1) ||
                       (uVar2 = 0, piVar5 = &DAT_004bc580, DAT_004bc154 == 0xb)) {
LAB_0042a076:
                      uVar2 = 0;
                    }
                    else {
                      do {
                        uVar2 = uVar2 + 1;
                        if (uVar2 == DAT_004c4f98) goto LAB_0042a076;
                        iVar3 = *piVar5;
                        piVar5 = piVar5 + 0x10b;
                      } while (iVar3 != 0xb);
                    }
                    iVar3 = memcmp(DAT_0047a148,(void *)((&DAT_004bc15c)[uVar2 * 0x10b] + 0x268),
                                   0x110);
                    if (iVar3 == 0) {
                      FUN_00433690(0,"%s failed hash check, attempting to correct SE and resign\n");
                      iVar3 = FUN_0040e8a0(*(uint **)(puVar8 + 0x40c),*(int *)(puVar8 + 0x410),
                                           (uint *)(&DAT_004bc15c)[uVar6 * 0x10b],
                                           (&DAT_004bc160)[uVar6 * 0x10b],
                                           (uint *)(&DAT_004bc15c)[uVar6 * 0x10b] + 0x93,
                                           (uint *)((&DAT_004bc15c)[uVar2 * 0x10b] + 0x268),
                                           DAT_0047a148);
                      if (iVar3 == 0) {
                        FUN_00433690(0,"\n***** ERROR: failed to resign SE to correct %s hash!\n");
                        uVar2 = DAT_004c4f98;
                      }
                      else {
                        FUN_00433690(1,"SE resigned successfully to correct %s hash!\n");
                        uVar2 = DAT_004c4f98;
                      }
                    }
                    else {
                      FUN_00433690(0,
                                   "\n***** ERROR: %s failed hash check, RSA key provided does not match the pub key in SD!\n"
                                  );
                      uVar2 = DAT_004c4f98;
                    }
                  }
                }
                else {
                  FUN_00433690(1,"%s hash from SE is good\n");
                  uVar2 = DAT_004c4f98;
                }
                goto LAB_00429f20;
              }
            }
LAB_00429efa:
            FUN_00433690(1,"\n***** ERROR: could not locate SD data to check %s!\n");
            uVar2 = DAT_004c4f98;
          }
        }
        else if (DAT_0047a13c == (uint *)0x0) {
          FUN_00433690(1,"could not check signature of %s, 1BL RSA key not present!\n");
          uVar2 = DAT_004c4f98;
        }
        else {
          iVar3 = FUN_0040e5a0(*(uint **)(puVar8 + 0x40c),DAT_0047a13c);
          if (iVar3 == 0) {
            FUN_00433690(0,"\n***** ERROR: %s failed signature check!\n");
            uVar2 = DAT_004c4f98;
          }
          else {
LAB_00429fe0:
            FUN_00433690(1,"%s signature is good\n");
            uVar2 = DAT_004c4f98;
          }
        }
      }
LAB_00429f20:
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 0x42c;
    } while (uVar9 < uVar2);
  }
  return local_20;
}

