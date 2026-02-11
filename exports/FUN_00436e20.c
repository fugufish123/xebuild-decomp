
void __cdecl FUN_00436e20(undefined1 *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = param_2 + param_3;
  if (0 < param_3) {
    do {
      puVar1 = (undefined1 *)(iVar2 + -1);
      iVar2 = iVar2 + -1;
      *param_1 = *puVar1;
      param_1 = param_1 + 1;
    } while (iVar2 != param_2);
  }
  return;
}

