
void __cdecl FUN_00415ef0(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  FUN_00433690(1,"cleaning up stray remaps\n");
  uVar3 = DAT_00479f74;
  if (DAT_00479f74 != 0) {
    do {
      while ((&DAT_00479ff8)[uVar5] != -1) {
LAB_00415f23:
        uVar5 = uVar5 + 1;
        if (uVar3 <= uVar5) goto LAB_00415fbb;
      }
      if (param_1 - 0x20U <= (uint)(&DAT_00479f78)[uVar5]) {
        FUN_00433690(1,"block 0x%x had no need of remap, it\'s in the wear area\n");
        (&DAT_00479ff8)[uVar5] = 0xfffffffb;
        uVar3 = DAT_00479f74;
        goto LAB_00415f23;
      }
      iVar4 = param_1 + -1;
      do {
        bVar1 = false;
        uVar2 = 0;
        do {
          while (((&DAT_00479ff8)[uVar2] != iVar4 && ((&DAT_00479f78)[uVar2] != iVar4))) {
            uVar2 = uVar2 + 1;
            if (uVar3 <= uVar2) goto LAB_00415f87;
          }
          bVar1 = true;
          uVar2 = uVar3 + 1;
        } while (uVar2 < uVar3);
LAB_00415f87:
        if (!bVar1) {
          if (iVar4 != 0) {
            (&DAT_00479ff8)[uVar5] = iVar4;
            FUN_00433690(1,"block 0x%x had no remap, assigning remap block 0x%x\n");
            uVar3 = DAT_00479f74;
            goto LAB_00415f23;
          }
          break;
        }
        iVar4 = iVar4 + -1;
      } while ((int)(param_1 - 0x20U) <= iVar4);
      uVar5 = uVar5 + 1;
      FUN_00433690(1,"block 0x%x had no remap, and I could not assign one!\n");
      uVar3 = DAT_00479f74;
    } while (uVar5 < DAT_00479f74);
  }
LAB_00415fbb:
  FUN_00433690(1,"done!\n");
  return;
}

