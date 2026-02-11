
undefined4 __cdecl FUN_00427000(char *param_1)

{
  size_t sVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  byte *pbVar5;
  
  sVar1 = strlen(param_1);
  if (0 < (int)sVar1) {
    pbVar5 = (byte *)0x0;
    iVar2 = 0;
    do {
      while (param_1[iVar2] == ',') {
        pbVar5 = (byte *)(param_1 + iVar2 + 1);
        param_1[iVar2] = '\0';
        if (*pbVar5 == 0) {
          FUN_00433690(1,
                       "\n\n***** ERROR: option \'%s\' provided on command line with = but no value!\n"
                      );
          return 0;
        }
        iVar2 = sVar1 + 2;
        if ((int)sVar1 <= iVar2) goto LAB_0042704b;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)sVar1);
LAB_0042704b:
    sVar3 = strlen(param_1);
    if (sVar1 != sVar3) {
      if (0xf < DAT_004c8fe0) {
        FUN_00433690(0,"***** ERROR: %d of %d [rawpatch] slots are already full!\n");
        return 0;
      }
      memcpy(&DAT_004c4fa0 + DAT_004c8fe0 * 0x404,param_1,sVar3 + 1);
      iVar2 = DAT_004c8fe0;
      uVar4 = FUN_00421860(pbVar5,0xffffffff);
      (&DAT_004c53a0)[iVar2 * 0x101] = uVar4;
      if ((&DAT_004c53a0)[DAT_004c8fe0 * 0x101] != -1) {
        FUN_00433690(1,"parsed [rawpatch] (%d) from command line file \'%s\' offset 0x%x\n");
        DAT_004c8fe0 = DAT_004c8fe0 + 1;
        return 1;
      }
      FUN_00433690(0,
                   "***** ERROR: [rawpatch] command option \'%s\' does not appear to have sane offset info!\n"
                  );
      return 0;
    }
  }
  FUN_00433690(0,"***** ERROR: parsing optional patch string \'%s\' failed!\n");
  return 0;
}

