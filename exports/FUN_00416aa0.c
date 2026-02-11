
undefined4 __cdecl FUN_00416aa0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_20;
  
  if (param_2 == 0x3000000) {
    FUN_00433690(1,"\tNAND dump is from a mmc machine\n");
    FUN_00433690(1,"\tNAND dump uses big block controller\n");
    DAT_00479f64 = 1;
    DAT_00479f60 = 0;
    uVar3 = 1;
    DAT_00479f70 = 1;
    DAT_00479f68 = 1;
  }
  else if (*(char *)(param_1 + 0x200) == -1) {
    FUN_00433690(1,"\tNAND dump is from a big block machine\n");
    FUN_00433690(1,"\tNAND dump uses big block controller\n");
    if (param_2 < 0x4200000) {
      FUN_00433690(0,
                   "***** WARNING: NAND dump too small to be from a big block machine, discarding dump!\n"
                  );
      uVar3 = 0;
    }
    else {
      DAT_00479f60 = 1;
      DAT_00479f64 = 1;
      uVar3 = 1;
    }
  }
  else if (*(char *)(param_1 + 0x205) == -1) {
    iVar2 = param_2 / 0x4200;
    FUN_00433690(1,"\tNAND dump is from a small block machine\n");
    uVar3 = 0;
    DAT_00479f60 = 0;
    DAT_00479f70 = 1;
    if (1 < iVar2) {
      iVar5 = 1;
      local_20 = 0;
      do {
        iVar4 = iVar5 * 0x4200 + param_1;
        if (*(char *)(iVar4 + 0x205) == -1) {
          bVar1 = *(byte *)(iVar4 + 0x201);
          if (bVar1 != 0xff) {
            if ((*(byte *)(iVar4 + 0x202) & 0xf) * 0x100 + (uint)bVar1 == iVar5) {
              FUN_00433690(1,"\tNAND dump uses big block controller\n");
              DAT_00479f64 = 1;
              local_20 = 1;
              iVar5 = iVar2;
            }
            else if ((bVar1 & 0xf) * 0x100 + (uint)*(byte *)(iVar4 + 0x200) == iVar5) {
              FUN_00433690(1,"\tNAND dump uses small block controller\n");
              DAT_00479f64 = 0;
              local_20 = 1;
              iVar5 = iVar2;
            }
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
      return local_20;
    }
  }
  else {
    FUN_00433690(0,
                 "***** WARNING: NAND dump does not appear to have a good block at block 0, discarding dump!\n"
                );
    uVar3 = 0;
  }
  return uVar3;
}

