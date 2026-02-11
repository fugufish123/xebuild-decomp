
void FUN_004232e0(uint param_1,char *param_2)

{
  uint uVar1;
  
  if (param_2 != (char *)0x0) {
    FUN_00433690(param_1,param_2);
  }
  uVar1 = 0;
  do {
    if ((uVar1 & 7) == 0) {
      FUN_00433690(param_1,"\n\tfuseset %02d: ");
    }
    uVar1 = uVar1 + 1;
    FUN_00433690(param_1,"%02X");
  } while (uVar1 != 0x60);
  FUN_00433690(param_1,"\n");
  return;
}

