
void __cdecl FUN_00423420(uint param_1,char *param_2)

{
  size_t sVar1;
  uint uVar2;
  
  uVar2 = 0;
  sVar1 = strlen(param_2);
  if (0 < (int)sVar1) {
    while( true ) {
      uVar2 = uVar2 + 1;
      FUN_00433690(param_1,"%c");
      if (sVar1 == uVar2) break;
      if ((uVar2 & 1) == 0) {
        FUN_00433690(param_1,":");
      }
    }
  }
  return;
}

