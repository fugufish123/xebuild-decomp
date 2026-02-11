
undefined4 __cdecl FUN_00441800(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_3 + -1;
  if (param_3 != 0) {
    do {
      uVar1 = *(uint *)(param_2 + iVar3 * 4);
      uVar2 = *(uint *)(param_1 + iVar3 * 4);
      if (uVar2 >= uVar1 && uVar2 != uVar1) {
        return 1;
      }
      if (uVar2 < uVar1) {
        return 0xffffffff;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return 0;
}

