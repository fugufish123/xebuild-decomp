
void __cdecl FUN_00446200(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = param_3 + -1;
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_2 + iVar1 * 4);
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return;
}

