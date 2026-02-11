
void __cdecl FUN_004233b0(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + 1;
  FUN_00433690(param_1,"%02x");
  do {
    iVar1 = iVar1 + 1;
    FUN_00433690(param_1,":");
    FUN_00433690(param_1,"%02x");
  } while (param_2 + 6 != iVar1);
  return;
}

