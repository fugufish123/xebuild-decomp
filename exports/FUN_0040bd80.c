
bool __cdecl FUN_0040bd80(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  char local_23 [19];
  
  local_23[0] = 'x';
  local_23[1] = 0xba;
  local_23[2] = 0xb6;
  local_23[3] = -0x30;
  local_23[4] = '\0';
  local_23[5] = '\0';
  local_23[6] = '\x1b';
  pbVar4 = (byte *)(param_1 + 4);
  uVar1 = FUN_00433800(pbVar4,param_2 + -4);
  uVar2 = (uint)(*(byte *)(param_1 + 0x100) >> 4);
  FUN_00433690(1,"SMC checksum: %08x\n");
  if (((((((uVar1 == DAT_0044a480) || (uVar1 == DAT_0044a488)) || (uVar1 == DAT_0044a490)) ||
        ((uVar1 == DAT_0044a498 || (uVar1 == DAT_0044a4a0)))) ||
       ((uVar1 == DAT_0044a4a8 || ((uVar1 == DAT_0044a4b0 || (uVar1 == DAT_0044a4b8)))))) ||
      (uVar1 == DAT_0044a4c0)) || ((uVar1 == DAT_0044a4c8 || (uVar1 == DAT_0044a4d0)))) {
    FUN_00420a90(uVar2);
    FUN_00433690(1,"known clean SMC found, type: %s v%d.%d(%d.%02d)\n");
    return false;
  }
  FUN_00420a90(uVar2);
  FUN_00433690(1,"unknown SMC found, type: %s v%d.%d(%d.%02d)\n");
  if (param_3 == 3) {
    if (10 < param_2) {
      iVar3 = 4;
      do {
        if ((((*(char *)(param_1 + iVar3) == '\x05') && (*(char *)(param_1 + 2 + iVar3) == -0x1b))
            && (*(char *)(param_1 + 4 + iVar3) == -0x4c)) &&
           (*(char *)(param_1 + 5 + iVar3) == '\x05')) {
          return false;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != param_2 + -6);
    }
  }
  else if (param_3 == 2) {
LAB_0040bf22:
    iVar3 = FUN_00421170(param_1,param_2,local_23,3);
    if (iVar3 == 0) {
      iVar3 = FUN_00421170(param_1,param_2,local_23 + 3,4);
      return iVar3 != 0;
    }
  }
  else if (((param_3 == 1) || (5 < param_3)) && (10 < param_2)) {
    do {
      if (((*pbVar4 == 5) && (pbVar4[2] == 0xe5)) && ((pbVar4[4] == 0xb4 && (pbVar4[5] == 5))))
      goto LAB_0040bf22;
      pbVar4 = pbVar4 + 1;
    } while ((byte *)(param_1 + -6 + param_2) != pbVar4);
  }
  return true;
}

