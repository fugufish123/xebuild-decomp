
void FUN_0042bb10(void *param_1,size_t param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_40;
  
  if (DAT_004c4f98 < 1) {
    iVar10 = 0;
    iVar8 = 0;
    iVar9 = 0;
    goto LAB_0042bbc8;
  }
  iVar10 = 0;
  piVar6 = &DAT_004bc580;
  if (DAT_004bc154 == 7) {
    iVar10 = 0;
LAB_0042bb71:
    iVar8 = 0;
    piVar6 = &DAT_004bc580;
    do {
      iVar8 = iVar8 + 1;
      if (iVar8 == DAT_004c4f98) {
        iVar8 = 0;
        break;
      }
      iVar9 = *piVar6;
      piVar6 = piVar6 + 0x10b;
    } while (iVar9 != 6);
    if (DAT_004bc154 == 0x17) {
LAB_0042bbc6:
      iVar9 = 0;
      goto LAB_0042bbc8;
    }
  }
  else {
    do {
      iVar10 = iVar10 + 1;
      if (iVar10 == DAT_004c4f98) {
        iVar10 = 0;
        break;
      }
      iVar8 = *piVar6;
      piVar6 = piVar6 + 0x10b;
    } while (iVar8 != 7);
    if (DAT_004bc154 != 6) goto LAB_0042bb71;
    iVar8 = 0;
  }
  iVar9 = 0;
  piVar6 = &DAT_004bc580;
  do {
    iVar9 = iVar9 + 1;
    if (iVar9 == DAT_004c4f98) goto LAB_0042bbc6;
    iVar2 = *piVar6;
    piVar6 = piVar6 + 0x10b;
  } while (iVar2 != 0x17);
LAB_0042bbc8:
  iVar2 = (&DAT_004bc15c)[iVar9 * 0x10b];
  FUN_00433690(1,"Patching BLs...");
  local_40 = 0;
  uVar4 = 0;
  while (uVar4 < (uint)(&DAT_004bc160)[iVar9 * 0x10b]) {
    while( true ) {
      if (local_40 == 2) {
        uVar3 = 0;
        do {
          *(undefined1 *)((&DAT_004bc15c)[iVar9 * 0x10b] + uVar3) =
               *(undefined1 *)((&DAT_004bc15c)[iVar9 * 0x10b] + uVar4 + uVar3);
          uVar3 = uVar3 + 1;
        } while (uVar3 < (&DAT_004bc160)[iVar9 * 0x10b] - uVar4);
        (&DAT_004bc160)[iVar9 * 0x10b] = (&DAT_004bc160)[iVar9 * 0x10b] - uVar4;
        goto LAB_0042bc7d;
      }
      uVar3 = FUN_00420ad0((uint *)(iVar2 + uVar4));
      if (uVar3 == 0xffffffff) break;
      uVar11 = FUN_00420ad0((uint *)(uVar4 + 4 + iVar2));
      iVar1 = uVar11 * 4;
      uVar11 = uVar3 + iVar1;
      if (local_40 == 0) {
        if ((uint)(&DAT_004bc160)[iVar8 * 0x10b] < uVar11) {
          uVar5 = uVar11 + 0xf & 0xfffffff0;
          (&DAT_004bc160)[iVar8 * 0x10b] = uVar5;
          FUN_00420b20(uVar5,(undefined1 *)((&DAT_004bc15c)[iVar8 * 0x10b] + 0xc));
        }
        if (iVar1 != 0) {
          iVar7 = uVar4 - uVar3;
          do {
            *(undefined1 *)((&DAT_004bc15c)[iVar8 * 0x10b] + uVar3) =
                 *(undefined1 *)(iVar7 + iVar2 + 8 + uVar3);
            uVar3 = uVar3 + 1;
          } while (uVar11 != uVar3);
        }
      }
      else {
        if ((uint)(&DAT_004bc160)[iVar10 * 0x10b] < uVar11) {
          uVar5 = uVar11 + 0xf & 0xfffffff0;
          (&DAT_004bc160)[iVar10 * 0x10b] = uVar5;
          FUN_00420b20(uVar5,(undefined1 *)((&DAT_004bc15c)[iVar10 * 0x10b] + 0xc));
        }
        if (iVar1 != 0) {
          iVar7 = uVar4 - uVar3;
          do {
            *(undefined1 *)((&DAT_004bc15c)[iVar10 * 0x10b] + uVar3) =
                 *(undefined1 *)(iVar7 + iVar2 + 8 + uVar3);
            uVar3 = uVar3 + 1;
          } while (uVar11 != uVar3);
        }
      }
      uVar4 = uVar4 + 8 + iVar1;
      if ((uint)(&DAT_004bc160)[iVar9 * 0x10b] <= uVar4) goto LAB_0042bc7d;
    }
    local_40 = local_40 + 1;
    uVar4 = uVar4 + 4;
  }
LAB_0042bc7d:
  if ((param_1 != (void *)0x0) && (param_2 != 0)) {
    FUN_00433690(1,"Done!\n");
    if (DAT_00479eb8 == 0) {
      iVar8 = iVar10;
    }
    uVar11 = (-(uint)(DAT_00479eb8 == 0) & 0x4000) + 0xc000;
    uVar4 = FUN_00420ad0((uint *)((&DAT_004bc15c)[iVar8 * 0x10b] + 0xc));
    uVar3 = uVar4 + 0xf + param_2 & 0xfffffff0;
    if (uVar11 < uVar3) {
      param_2 = (param_2 + uVar11) - uVar3;
      FUN_00433690(0,"***** WARNING: blmod.bin is 0x%x bytes too large, truncating to 0x%x bytes!\n"
                  );
    }
    FUN_00433690(1,"Adding 0x%x bytes blmod.bin data to %s...");
    memcpy((void *)((&DAT_004bc15c)[iVar8 * 0x10b] + uVar4),param_1,param_2);
    iVar10 = DAT_00479ed8;
    uVar4 = uVar4 + 0xf + param_2 & 0xfffffff0;
    iVar9 = (&DAT_004bc160)[iVar8 * 0x10b];
    *(char *)(DAT_00479ed8 + 0x4a) = (char)(uVar4 - iVar9);
    *(char *)(iVar10 + 0x49) = (char)(uVar4 - iVar9 >> 8);
    (&DAT_004bc160)[iVar8 * 0x10b] = uVar4;
    FUN_00420b20(uVar4,(undefined1 *)((&DAT_004bc15c)[iVar8 * 0x10b] + 0xc));
  }
  FUN_00433690(1,"Done!\n");
  return;
}

