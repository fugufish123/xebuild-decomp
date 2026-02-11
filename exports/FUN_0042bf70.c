
void FUN_0042bf70(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_20;
  
  if (0 < DAT_004c4f98) {
    iVar4 = 0;
    piVar2 = &DAT_004bc580;
    if (DAT_004bc154 != 0x17) {
      do {
        iVar4 = iVar4 + 1;
        if (DAT_004c4f98 == iVar4) goto LAB_0042bfa8;
        iVar1 = *piVar2;
        piVar2 = piVar2 + 0x10b;
      } while (iVar1 != 0x17);
      goto LAB_0042bfaa;
    }
  }
LAB_0042bfa8:
  iVar4 = 0;
LAB_0042bfaa:
  iVar5 = 0;
  iVar1 = (&DAT_004bc15c)[iVar4 * 0x10b];
  FUN_00433690(1,"Fixing up patch set...");
  local_20 = 0;
LAB_0042bfe0:
  if (local_20 < (uint)(&DAT_004bc160)[iVar4 * 0x10b]) {
    if (iVar5 != 2) {
      uVar3 = FUN_00420ad0((uint *)(local_20 + iVar1));
      if (uVar3 == 0xffffffff) {
        iVar5 = iVar5 + 1;
        local_20 = local_20 + 4;
      }
      else {
        uVar3 = FUN_00420ad0((uint *)(local_20 + 4 + iVar1));
        local_20 = local_20 + 8 + uVar3 * 4;
      }
      goto LAB_0042bfe0;
    }
    uVar3 = 0;
    do {
      *(undefined1 *)((&DAT_004bc15c)[iVar4 * 0x10b] + uVar3) =
           *(undefined1 *)((&DAT_004bc15c)[iVar4 * 0x10b] + local_20 + uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (&DAT_004bc160)[iVar4 * 0x10b] - local_20);
    (&DAT_004bc160)[iVar4 * 0x10b] = (&DAT_004bc160)[iVar4 * 0x10b] - local_20;
  }
  FUN_00433690(1,"Done!\n");
  return;
}

