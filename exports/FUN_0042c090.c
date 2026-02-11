
/* WARNING: Removing unreachable block (ram,0x0042c41c) */

void FUN_0042c090(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  char *_Str1;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  
  iVar1 = FUN_004104f0();
  uVar9 = (-(ushort)(iVar1 == 0) & 0x2e0a) - 0xe0f;
  if (DAT_004c4f9c < 2) {
    uVar7 = 0;
  }
  else {
    _Str1 = &DAT_004bc17c;
    uVar8 = 1;
    uVar7 = 0;
    do {
      iVar1 = *(int *)(_Str1 + 0x404);
      if (*(uint *)(_Str1 + 0x408) != 0xffffffff) {
        uVar7 = *(uint *)(_Str1 + 0x408);
      }
      iVar2 = _strnicmp(_Str1,"none",4);
      if ((iVar2 != 0) || (*(int *)(_Str1 + 0x400) != 0)) {
        if (DAT_00479ea8 == 2) {
          if (iVar1 != 0xe) {
            if (iVar1 == 0x15) {
              if (DAT_004c4f98 < 1) {
LAB_0042c1f0:
                iVar1 = 0;
              }
              else {
                iVar1 = 0;
                piVar6 = &DAT_004bc580;
                if (DAT_004bc154 == 0x14) goto LAB_0042c1f0;
                do {
                  iVar1 = iVar1 + 1;
                  if (iVar1 == DAT_004c4f98) goto LAB_0042c1f0;
                  iVar2 = *piVar6;
                  piVar6 = piVar6 + 0x10b;
                } while (iVar2 != 0x14);
              }
LAB_0042c1f2:
              FUN_00433690(1,"adding %s at raw offset 0x%08x len 0x%x (end 0x%x, rest in fs)\n");
              uVar3 = *(int *)(_Str1 + 0x410) - (&DAT_004bc174)[iVar1 * 0x10b];
            }
            else {
              if (iVar1 == 10) {
                if (0 < DAT_004c4f98) {
                  iVar1 = 0;
                  piVar6 = &DAT_004bc580;
                  if (DAT_004bc154 != 9) {
                    do {
                      iVar1 = iVar1 + 1;
                      if (iVar1 == DAT_004c4f98) goto LAB_0042c1f0;
                      iVar2 = *piVar6;
                      piVar6 = piVar6 + 0x10b;
                    } while (iVar2 != 9);
                    goto LAB_0042c1f2;
                  }
                }
                goto LAB_0042c1f0;
              }
LAB_0042c380:
              FUN_00433690(1,"adding %s at raw offset 0x%08x len 0x%x (end 0x%x)\n");
LAB_0042c336:
              uVar3 = *(uint *)(_Str1 + 0x410);
            }
            FUN_00410500(uVar7,*(void **)(_Str1 + 0x40c),uVar3,0,uVar9,1);
          }
        }
        else {
          if (iVar1 != 9) {
            if (iVar1 == 0x17) {
              iVar2 = FUN_00410460();
              iVar5 = FUN_00410490();
              iVar2 = iVar2 + iVar5;
              if (DAT_00479eb4 == 0) {
                uVar7 = iVar2 + 0x10;
                if (1 < DAT_00479ea8 - 4) goto LAB_0042c466;
                uVar7 = iVar2 + 0x60;
              }
              else {
                uVar7 = iVar2 + 0x60;
LAB_0042c466:
                if (DAT_00479ea8 == 1) goto LAB_0042c360;
              }
              if (DAT_00479ea8 < 6) goto LAB_0042c100;
            }
            else {
              if (DAT_00479ea8 == 1) {
                if ((iVar1 - 0x17U & 0xfffffffd) != 0) goto LAB_0042c2cc;
LAB_0042c360:
                FUN_00433690(1,"retail image, skipping %s\n");
                goto LAB_0042c146;
              }
              if (DAT_00479ea8 < 6) {
LAB_0042c2cc:
                if (iVar1 != 0x19) goto LAB_0042c100;
                uVar3 = *(uint *)(_Str1 + 0x408);
                uVar4 = FUN_004104d0();
                if (uVar3 < uVar4) {
                  FUN_00433690(0,
                               "***** WARNING: skipping xell, there doesn\'t appear to be enough room!\n"
                              );
                  goto LAB_0042c146;
                }
                goto LAB_0042c2ee;
              }
              if ((iVar1 - 0x17U & 0xfffffffd) != 0) goto LAB_0042c100;
            }
            FUN_00433690(1,"devkit/testkit image, skipping %s\n");
            goto LAB_0042c146;
          }
          uVar7 = FUN_00410460();
          if (DAT_00479ea8 == 1) {
LAB_0042c2ee:
            FUN_00433690(1,"adding %s at raw offset 0x%08x len 0x%x (end 0x%x)\n");
LAB_0042c31b:
            if (iVar1 == 0x10) {
              if (0 < DAT_004c4f98) {
                iVar1 = 0;
                piVar6 = &DAT_004bc580;
                if (DAT_004bc154 != 0xf) {
                  do {
                    iVar1 = iVar1 + 1;
                    if (iVar1 == DAT_004c4f98) goto LAB_0042c1f0;
                    iVar2 = *piVar6;
                    piVar6 = piVar6 + 0x10b;
                  } while (iVar2 != 0xf);
                  goto LAB_0042c1f2;
                }
              }
              goto LAB_0042c1f0;
            }
            if (iVar1 == 6) {
              if (DAT_00479eb8 == 0) goto LAB_0042c140;
            }
            else if (iVar1 == 0x18) goto LAB_0042c11b;
            goto LAB_0042c336;
          }
LAB_0042c100:
          if ((iVar1 == 10) || (iVar1 == 0x10)) {
            if (iVar1 == 10) {
              if (0 < DAT_004c4f98) {
                iVar1 = 0;
                piVar6 = &DAT_004bc580;
                if (DAT_004bc154 != 9) {
                  do {
                    iVar1 = iVar1 + 1;
                    if (iVar1 == DAT_004c4f98) goto LAB_0042c1f0;
                    iVar2 = *piVar6;
                    piVar6 = piVar6 + 0x10b;
                  } while (iVar2 != 9);
                  goto LAB_0042c1f2;
                }
              }
              goto LAB_0042c1f0;
            }
            goto LAB_0042c31b;
          }
          if (iVar1 != 0x18) goto LAB_0042c2ee;
LAB_0042c11b:
          if ((DAT_00479eb4 != 0) || (DAT_00479ea8 - 4 < 2)) goto LAB_0042c380;
        }
LAB_0042c140:
        uVar7 = uVar7 + *(int *)(_Str1 + 0x410);
      }
LAB_0042c146:
      uVar8 = uVar8 + 1;
      _Str1 = _Str1 + 0x42c;
    } while (uVar8 < DAT_004c4f9c);
  }
  if (DAT_00479ebc == 0) {
    return;
  }
  if (0 < DAT_004c4f98) {
    iVar1 = 0;
    piVar6 = &DAT_004bc580;
    if (DAT_004bc154 != 0xe) {
      do {
        iVar1 = iVar1 + 1;
        if (DAT_004c4f98 == iVar1) goto LAB_0042c4da;
        iVar2 = *piVar6;
        piVar6 = piVar6 + 0x10b;
      } while (iVar2 != 0xe);
      goto LAB_0042c4e1;
    }
  }
LAB_0042c4da:
  iVar1 = 0;
LAB_0042c4e1:
  FUN_00433690(1,"adding %s at raw offset 0x%08x len 0x%x (end 0x%x)\n");
  FUN_00410500(uVar7,(void *)(&DAT_004bc15c)[iVar1 * 0x10b],(&DAT_004bc160)[iVar1 * 0x10b],0,uVar9,1
              );
  return;
}

