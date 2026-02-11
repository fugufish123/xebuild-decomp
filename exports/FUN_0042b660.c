
undefined4 FUN_0042b660(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_3c;
  
  if (DAT_004c4f98 < 1) {
    iVar9 = 0;
    iVar11 = 0;
    iVar10 = 0;
    goto LAB_0042b70a;
  }
  iVar9 = 0;
  piVar6 = &DAT_004bc580;
  if (DAT_004bc154 == 0xb) {
    iVar9 = 0;
LAB_0042b6b1:
    iVar11 = 0;
    piVar6 = &DAT_004bc580;
    do {
      iVar11 = iVar11 + 1;
      if (DAT_004c4f98 == iVar11) {
        iVar11 = 0;
        break;
      }
      iVar10 = *piVar6;
      piVar6 = piVar6 + 0x10b;
    } while (iVar10 != 7);
    if (DAT_004bc154 == 0x17) {
LAB_0042b708:
      iVar10 = 0;
      goto LAB_0042b70a;
    }
  }
  else {
    do {
      iVar9 = iVar9 + 1;
      if (DAT_004c4f98 == iVar9) {
        iVar9 = 0;
        break;
      }
      iVar10 = *piVar6;
      piVar6 = piVar6 + 0x10b;
    } while (iVar10 != 0xb);
    if (DAT_004bc154 != 7) goto LAB_0042b6b1;
    iVar11 = 0;
  }
  iVar10 = 0;
  piVar6 = &DAT_004bc580;
  do {
    iVar10 = iVar10 + 1;
    if (DAT_004c4f98 == iVar10) goto LAB_0042b708;
    iVar2 = *piVar6;
    piVar6 = piVar6 + 0x10b;
  } while (iVar2 != 0x17);
LAB_0042b70a:
  iVar2 = (&DAT_004bc15c)[iVar10 * 0x10b];
  FUN_00433690(1,"Patching BLs...");
  local_3c = 0;
  uVar7 = 0;
LAB_0042b760:
  if (uVar7 < (uint)(&DAT_004bc160)[iVar10 * 0x10b]) {
    if (local_3c != 2) {
      uVar3 = FUN_00420ad0((uint *)(iVar2 + uVar7));
      if (uVar3 == 0xffffffff) {
        local_3c = local_3c + 1;
        uVar7 = uVar7 + 4;
      }
      else {
        uVar4 = FUN_00420ad0((uint *)(uVar7 + 4 + iVar2));
        iVar1 = uVar4 * 4;
        if (local_3c != 0) {
          uVar4 = uVar3 + iVar1;
          if ((uint)(&DAT_004bc160)[iVar11 * 0x10b] < uVar4) {
            uVar5 = uVar4 + 0xf & 0xfffffff0;
            (&DAT_004bc160)[iVar11 * 0x10b] = uVar5;
            FUN_00420b20(uVar5,(undefined1 *)((&DAT_004bc15c)[iVar11 * 0x10b] + 0xc));
          }
          if (iVar1 != 0) {
            iVar8 = uVar7 - uVar3;
            do {
              *(undefined1 *)((&DAT_004bc15c)[iVar11 * 0x10b] + uVar3) =
                   *(undefined1 *)(iVar8 + iVar2 + 8 + uVar3);
              uVar3 = uVar3 + 1;
            } while (uVar4 != uVar3);
          }
        }
        uVar7 = uVar7 + 8 + iVar1;
      }
      goto LAB_0042b760;
    }
    uVar3 = 0;
    do {
      *(undefined1 *)((&DAT_004bc15c)[iVar10 * 0x10b] + uVar3) =
           *(undefined1 *)((&DAT_004bc15c)[iVar10 * 0x10b] + uVar7 + uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (&DAT_004bc160)[iVar10 * 0x10b] - uVar7);
    (&DAT_004bc160)[iVar10 * 0x10b] = (&DAT_004bc160)[iVar10 * 0x10b] - uVar7;
  }
  FUN_00433690(1,"Done!\n");
  if (iVar9 == 0) {
    FUN_00433690(1,"could not locate SB data to check %s!\n");
  }
  else {
    FUN_00433690(1,"Checking patched CD signature...");
    iVar10 = FUN_0040e620((uint *)(&DAT_004bc15c)[iVar11 * 0x10b],(&DAT_004bc160)[iVar11 * 0x10b],
                          (uint *)((&DAT_004bc15c)[iVar9 * 0x10b] + 0x268),
                          (uint *)((&DAT_004bc15c)[iVar9 * 0x10b] + 0x392));
    if (iVar10 != 0) {
      FUN_00433690(1,"%s signature is good\n");
LAB_0042ba84:
      FUN_00433690(1,"Done!\n");
      return 1;
    }
    if (DAT_0047a148 == (uint *)0x0) {
      FUN_00433690(0,
                   "\n***** ERROR: %s failed signature check, RSA key not available for resigning!\n"
                  );
    }
    else {
      iVar10 = memcmp(DAT_0047a148,(void *)((&DAT_004bc15c)[iVar9 * 0x10b] + 0x268),0x110);
      if (iVar10 != 0) {
        FUN_00433690(0,
                     "\n***** ERROR: %s failed signature check, RSA key provided does not match the pub key in SB!\n"
                    );
        return 0;
      }
      FUN_00433690(0,"%s failed signature check, attempting to resign\n");
      iVar9 = FUN_0040e690((uint *)(&DAT_004bc15c)[iVar11 * 0x10b],(&DAT_004bc160)[iVar11 * 0x10b],
                           (uint *)((&DAT_004bc15c)[iVar9 * 0x10b] + 0x268),DAT_0047a148,
                           (uint *)((&DAT_004bc15c)[iVar9 * 0x10b] + 0x392));
      if (iVar9 != 0) {
        FUN_00433690(1,"%s resigned successfully!\n");
        goto LAB_0042ba84;
      }
      FUN_00433690(0,"\n***** ERROR: failed to resign %s!\n");
    }
  }
  return 0;
}

