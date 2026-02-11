
uint __cdecl FUN_004420b0(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int in_stack_0000001c;
  
  if (param_1 == param_3) {
    FUN_00448760((byte *)"w != v",(byte *)"H:/x360sdk/__NAND/nandbuild_trin/XeCrypt/bign/mpAdd.c",
                 0x12);
  }
  if (in_stack_0000001c == 0) {
    uVar2 = 0;
  }
  else {
    iVar5 = 0;
    uVar2 = 0;
    do {
      puVar1 = (uint *)(param_2 + iVar5 * 4);
      iVar3 = uVar2 + *puVar1;
      uVar2 = (uint)CARRY4(uVar2,*puVar1);
      *(int *)(param_1 + iVar5 * 4) = iVar3;
      uVar4 = iVar3 + *(int *)(param_3 + iVar5 * 4);
      *(uint *)(param_1 + iVar5 * 4) = uVar4;
      if (uVar4 < *(uint *)(param_3 + iVar5 * 4)) {
        uVar2 = uVar2 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (in_stack_0000001c != iVar5);
  }
  return uVar2;
}

