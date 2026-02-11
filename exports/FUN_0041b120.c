
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0041b120(uint param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  DAT_0047a120 = param_2[1];
  DAT_0047a124 = param_2[2];
  DAT_0047a128 = param_2[3];
  _DAT_0047a11c = *param_2;
  FUN_00433690(param_1,"CPU Key set to  : ");
  FUN_00423370(param_1,(int)param_2);
  iVar2 = FUN_004223b0(&DAT_0047a11c,0x10);
  if (iVar2 == 0) {
    bVar1 = FUN_0041ae40(param_1,(undefined4 *)&DAT_0047a11c);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      FUN_00433690(param_1,"\n***** WARNING: CPU key check failed, CPU key may not be valid!\n\n");
    }
  }
  FUN_00433690(param_1,"\n");
  return 1;
}

