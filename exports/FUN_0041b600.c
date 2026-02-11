
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0041b600(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  _DAT_0047a10c = *param_1;
  _DAT_0047a110 = param_1[1];
  _DAT_0047a114 = param_1[2];
  _DAT_0047a118 = param_1[3];
  iVar1 = FUN_00422ae0(&DAT_0047a10c,0x10);
  iVar2 = FUN_0041b420();
  if ((iVar1 == 0x983) && (iVar2 == 0x800)) {
    FUN_00433690(1,"1BL Key set to  : 0x");
    FUN_00423370(1,0x47a10c);
    FUN_00433690(1," sum: 0x%x (expects: 0x983)\n");
    FUN_00433690(1,"xex Key set to  : 0x");
    FUN_00423370(1,0x47a12c);
    FUN_00433690(1," sum: 0x%x (expects: 0x800)\n");
    return 1;
  }
  FUN_00433690(0,"\n******* ERROR: 1BL key 0x");
  FUN_00423370(0,0x47a10c);
  FUN_00433690(0," does not appear to be correct!\n");
  return 0;
}

