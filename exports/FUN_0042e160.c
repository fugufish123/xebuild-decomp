
uint FUN_0042e160(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  if (DAT_00479ea8 != 2) {
    if (DAT_00479ea8 < 6) {
      if (DAT_004c4f9c < 1) {
        uVar8 = 0;
      }
      else {
        iVar6 = 0;
        piVar3 = &DAT_004bc580;
        if (DAT_004bc154 == 5) {
          iVar6 = 0;
        }
        else {
          do {
            iVar6 = iVar6 + 1;
            if (iVar6 == DAT_004c4f9c) {
              iVar6 = 0;
              goto LAB_0042e320;
            }
            iVar4 = *piVar3;
            piVar3 = piVar3 + 0x10b;
          } while (iVar4 != 5);
        }
        iVar6 = (&DAT_004bc158)[iVar6 * 0x10b];
        if (DAT_004bc154 == 5) {
          iVar4 = 0;
        }
        else {
LAB_0042e320:
          iVar4 = 0;
          piVar3 = &DAT_004bc580;
          do {
            iVar4 = iVar4 + 1;
            if (iVar4 == DAT_004c4f9c) {
              iVar4 = 0;
              goto LAB_0042e34c;
            }
            iVar5 = *piVar3;
            piVar3 = piVar3 + 0x10b;
          } while (iVar5 != 5);
        }
        iVar4 = (&DAT_004bc160)[iVar4 * 0x10b];
LAB_0042e34c:
        iVar5 = 0;
        piVar3 = &DAT_004bc580;
        if (DAT_004bc154 == 6) {
          iVar5 = 0;
        }
        else {
          do {
            iVar5 = iVar5 + 1;
            if (iVar5 == DAT_004c4f9c) {
              iVar5 = 0;
              goto LAB_0042e37c;
            }
            iVar7 = *piVar3;
            piVar3 = piVar3 + 0x10b;
          } while (iVar7 != 6);
        }
        iVar5 = (&DAT_004bc160)[iVar5 * 0x10b];
LAB_0042e37c:
        iVar7 = 0;
        piVar3 = &DAT_004bc580;
        if (DAT_004bc154 == 7) {
          iVar7 = 0;
        }
        else {
          do {
            iVar7 = iVar7 + 1;
            if (iVar7 == DAT_004c4f9c) {
              iVar7 = 0;
              goto LAB_0042e3ac;
            }
            iVar1 = *piVar3;
            piVar3 = piVar3 + 0x10b;
          } while (iVar1 != 7);
        }
        iVar7 = (&DAT_004bc160)[iVar7 * 0x10b];
LAB_0042e3ac:
        uVar8 = iVar7 + iVar6 + iVar4 + iVar5;
        if (DAT_004bc154 == 8) {
          iVar6 = 0;
        }
        else {
          iVar6 = 0;
          piVar3 = &DAT_004bc580;
          do {
            iVar6 = iVar6 + 1;
            if (iVar6 == DAT_004c4f9c) goto LAB_0042e3da;
            iVar4 = *piVar3;
            piVar3 = piVar3 + 0x10b;
          } while (iVar4 != 8);
        }
        uVar8 = uVar8 + (&DAT_004bc160)[iVar6 * 0x10b];
      }
LAB_0042e3da:
      if (DAT_00479ea8 != 1) {
        if (DAT_004c4f98 < 1) {
LAB_0042e416:
          iVar6 = 0;
        }
        else {
          iVar6 = 0;
          piVar3 = &DAT_004bc580;
          if (DAT_004bc154 == 0x19) goto LAB_0042e416;
          do {
            iVar6 = iVar6 + 1;
            if (iVar6 == DAT_004c4f98) goto LAB_0042e416;
            iVar4 = *piVar3;
            piVar3 = piVar3 + 0x10b;
          } while (iVar4 != 0x19);
        }
        uVar2 = (&DAT_004bc158)[iVar6 * 0x10b];
        if (uVar8 < uVar2) {
          uVar8 = (&DAT_004bc160)[iVar6 * 0x10b];
          if (uVar8 < 0x40001) {
            uVar8 = 0x40000;
          }
          else {
            FUN_00433690(0,"***** WARNING: xell is unexpectedly larger than 256KiB!!\n");
            uVar2 = (&DAT_004bc158)[iVar6 * 0x10b];
          }
          uVar8 = uVar8 + uVar2;
        }
      }
      uVar8 = uVar8 + 0xffff & 0xffff0000;
      FUN_00410360(uVar8);
      iVar6 = FUN_00410490();
      uVar8 = uVar8 + iVar6 * 2;
      goto LAB_0042e2c5;
    }
    iVar6 = DAT_004bc160;
    if (DAT_004c4f98 < 1) {
      iVar4 = DAT_004bc160;
      if (0 < DAT_004c4f9c) {
        iVar5 = 0;
        if (DAT_004bc154 != 0xb) goto LAB_0042e1c6;
        iVar4 = 0;
        goto LAB_0042e5a0;
      }
LAB_0042e6ac:
      iVar4 = iVar4 + DAT_004bc160 * 2;
    }
    else {
      iVar5 = 0;
      piVar3 = &DAT_004bc580;
      if (DAT_004bc154 == 0xb) {
        iVar5 = 0;
        iVar4 = 0;
        if (0 < DAT_004c4f9c) goto LAB_0042e5a0;
LAB_0042e6dc:
        iVar4 = (&DAT_004bc160)[iVar5 * 0x10b];
      }
      else {
        do {
          iVar5 = iVar5 + 1;
          if (iVar5 == DAT_004c4f98) {
            iVar5 = 0;
            break;
          }
          iVar4 = *piVar3;
          piVar3 = piVar3 + 0x10b;
        } while (iVar4 != 0xb);
        if (DAT_004c4f9c < 1) goto LAB_0042e6dc;
LAB_0042e1c6:
        iVar4 = 0;
        piVar3 = &DAT_004bc580;
        do {
          iVar4 = iVar4 + 1;
          if (DAT_004c4f9c <= iVar4) {
            iVar4 = 0;
            goto LAB_0042e1ec;
          }
          iVar7 = *piVar3;
          piVar3 = piVar3 + 0x10b;
        } while (iVar7 != 0xb);
LAB_0042e5a0:
        iVar4 = (&DAT_004bc158)[iVar4 * 0x10b];
LAB_0042e1ec:
        iVar4 = iVar4 + (&DAT_004bc160)[iVar5 * 0x10b];
        if (DAT_004c4f98 < 1) goto LAB_0042e6ac;
      }
      iVar5 = 0;
      piVar3 = &DAT_004bc580;
      if (DAT_004bc154 == 0xc) {
        iVar4 = iVar4 + DAT_004bc160;
LAB_0042e24d:
        iVar5 = 0;
        piVar3 = &DAT_004bc580;
        do {
          iVar5 = iVar5 + 1;
          if (iVar5 == DAT_004c4f98) {
            iVar5 = 0;
            break;
          }
          iVar7 = *piVar3;
          piVar3 = piVar3 + 0x10b;
        } while (iVar7 != 0xd);
        iVar4 = iVar4 + (&DAT_004bc160)[iVar5 * 0x10b];
        if (DAT_004bc154 == 0xe) goto LAB_0042e2b3;
      }
      else {
        do {
          iVar5 = iVar5 + 1;
          if (iVar5 == DAT_004c4f98) {
            iVar5 = 0;
            break;
          }
          iVar7 = *piVar3;
          piVar3 = piVar3 + 0x10b;
        } while (iVar7 != 0xc);
        iVar4 = iVar4 + (&DAT_004bc160)[iVar5 * 0x10b];
        if (DAT_004bc154 != 0xd) goto LAB_0042e24d;
        iVar4 = iVar4 + DAT_004bc160;
      }
      iVar5 = 0;
      piVar3 = &DAT_004bc580;
      do {
        iVar5 = iVar5 + 1;
        if (iVar5 == DAT_004c4f98) goto LAB_0042e2b3;
        iVar7 = *piVar3;
        piVar3 = piVar3 + 0x10b;
      } while (iVar7 != 0xe);
      iVar6 = (&DAT_004bc160)[iVar5 * 0x10b];
    }
LAB_0042e2b3:
    FUN_00410360(iVar4 + iVar6);
    iVar5 = FUN_00410490();
    uVar8 = iVar4 + iVar6 + iVar5 * 2;
    goto LAB_0042e2c5;
  }
  if (DAT_004c4f98 < 1) {
    iVar6 = DAT_004bc160;
    if (0 < DAT_004c4f9c) {
      iVar4 = 0;
      if (DAT_004bc154 != 5) goto LAB_0042e4b6;
      iVar6 = 0;
      goto LAB_0042e661;
    }
LAB_0042e700:
    uVar8 = iVar6 + DAT_004bc160;
    if (DAT_00479ebc != 0) {
      uVar8 = uVar8 + DAT_004bc160;
    }
    goto LAB_0042e2c5;
  }
  iVar4 = 0;
  piVar3 = &DAT_004bc580;
  if (DAT_004bc154 == 5) {
    iVar4 = 0;
    iVar6 = 0;
    if (0 < DAT_004c4f9c) goto LAB_0042e661;
LAB_0042e729:
    iVar6 = (&DAT_004bc160)[iVar4 * 0x10b];
  }
  else {
    do {
      iVar4 = iVar4 + 1;
      if (iVar4 == DAT_004c4f98) {
        iVar4 = 0;
        break;
      }
      iVar6 = *piVar3;
      piVar3 = piVar3 + 0x10b;
    } while (iVar6 != 5);
    if (DAT_004c4f9c < 1) goto LAB_0042e729;
LAB_0042e4b6:
    iVar6 = 0;
    piVar3 = &DAT_004bc580;
    do {
      iVar6 = iVar6 + 1;
      if (DAT_004c4f9c <= iVar6) {
        iVar6 = 0;
        goto LAB_0042e4dc;
      }
      iVar5 = *piVar3;
      piVar3 = piVar3 + 0x10b;
    } while (iVar5 != 5);
LAB_0042e661:
    iVar6 = (&DAT_004bc158)[iVar6 * 0x10b];
LAB_0042e4dc:
    iVar6 = iVar6 + (&DAT_004bc160)[iVar4 * 0x10b];
    if (DAT_004c4f98 < 1) goto LAB_0042e700;
  }
  iVar4 = 0;
  piVar3 = &DAT_004bc580;
  if (DAT_004bc154 == 7) {
    uVar8 = iVar6 + DAT_004bc160;
    if (DAT_00479ebc == 0) goto LAB_0042e2c5;
  }
  else {
    do {
      iVar4 = iVar4 + 1;
      if (iVar4 == DAT_004c4f98) {
        iVar4 = 0;
        break;
      }
      iVar5 = *piVar3;
      piVar3 = piVar3 + 0x10b;
    } while (iVar5 != 7);
    uVar8 = iVar6 + (&DAT_004bc160)[iVar4 * 0x10b];
    if (DAT_00479ebc == 0) goto LAB_0042e2c5;
    if (DAT_004bc154 == 0xe) {
LAB_0042e56a:
      uVar8 = uVar8 + DAT_004bc160;
      goto LAB_0042e2c5;
    }
  }
  iVar6 = 0;
  piVar3 = &DAT_004bc580;
  do {
    iVar6 = iVar6 + 1;
    if (iVar6 == DAT_004c4f98) goto LAB_0042e56a;
    iVar4 = *piVar3;
    piVar3 = piVar3 + 0x10b;
  } while (iVar4 != 0xe);
  uVar8 = uVar8 + (&DAT_004bc160)[iVar6 * 0x10b];
LAB_0042e2c5:
  if ((uVar8 & 0x3fff) != 0) {
    uVar8 = uVar8 + 0x3fff & 0xffffc000;
  }
  return uVar8;
}

