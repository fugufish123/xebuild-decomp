
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0041b320(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = DAT_0047a120;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = _DAT_0047a11c;
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    uVar2 = DAT_0047a128;
    uVar1 = DAT_0047a124;
    *(undefined4 *)(param_1 + 0x28) = DAT_0047a124;
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(undefined4 *)(param_1 + 0x20) = _DAT_0047a11c;
    *(undefined4 *)(param_1 + 0x24) = DAT_0047a120;
    *(undefined4 *)(param_1 + 0x30) = DAT_0047a124;
    *(undefined4 *)(param_1 + 0x34) = DAT_0047a128;
    iVar3 = param_1 + 0x20;
    DAT_0047a124 = uVar1;
    DAT_0047a128 = uVar2;
    FUN_0041b1d0(param_1,DAT_00479f15);
    FUN_00433690(1,"Fuse CPU Key set to: 0x");
    do {
      iVar3 = iVar3 + 1;
      FUN_00433690(1,"%02X");
    } while (iVar3 != param_1 + 0x30);
    FUN_00433690(1,"\n");
    return;
  }
  FUN_00433690(0,"\nERROR: YOU SHOULD NOT BE SEEING THIS ERROR!\n");
  return;
}

