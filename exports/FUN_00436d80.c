
void __cdecl FUN_00436d80(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 != param_2) && (param_3 != 0)) {
    iVar2 = 0;
    do {
      uVar1 = *(undefined4 *)(param_1 + 4 + iVar2 * 8);
      *(undefined4 *)(param_2 + iVar2 * 8) = *(undefined4 *)(param_1 + iVar2 * 8);
      *(undefined4 *)(param_2 + 4 + iVar2 * 8) = uVar1;
      iVar2 = iVar2 + 1;
    } while (param_3 != iVar2);
  }
  return;
}

