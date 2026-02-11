
void __cdecl FUN_00423370(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = param_2 + 0x10;
    do {
      param_2 = param_2 + 1;
      FUN_00433690(param_1,"%02X");
    } while (param_2 != iVar1);
  }
  return;
}

