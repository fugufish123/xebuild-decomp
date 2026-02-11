
uint __cdecl FUN_0043e550(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_stack_0000001c;
  
  if (param_1 == param_3) {
    FUN_00448760((byte *)"w != v",
                 (byte *)"H:/x360sdk/__NAND/nandbuild_trin/XeCrypt/bign/mpSubtract.c",0x12);
  }
  if (in_stack_0000001c == 0) {
    uVar1 = 0;
  }
  else {
    iVar5 = 0;
    uVar1 = 0;
    do {
      uVar3 = *(int *)(param_2 + iVar5 * 4) - uVar1;
      uVar2 = ~uVar1;
      *(uint *)(param_1 + iVar5 * 4) = uVar3;
      uVar4 = uVar3 - *(int *)(param_3 + iVar5 * 4);
      *(uint *)(param_1 + iVar5 * 4) = uVar4;
      uVar1 = (uint)(uVar2 < uVar3);
      if (~*(uint *)(param_3 + iVar5 * 4) < uVar4) {
        uVar1 = (uVar2 < uVar3) + 1;
      }
      iVar5 = iVar5 + 1;
    } while (in_stack_0000001c != iVar5);
  }
  return uVar1;
}

