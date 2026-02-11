
undefined4 __cdecl FUN_00402020(uint *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var;
  uint in_stack_fffffdd8;
  uint in_stack_fffffddc;
  uint in_stack_fffffde0;
  uint in_stack_fffffde4;
  uint local_204 [5];
  undefined4 auStack_1f0 [120];
  
  if (param_3 == 0) {
    FUN_00434850(local_204,(uint *)&DAT_0047a12c);
  }
  else {
    FUN_00434850(local_204,(uint *)&DAT_0047a11c);
  }
  FUN_004348a0(local_204,param_1 + 0x4c,&stack0xfffffdc8,0);
  param_1[0x4c] = in_stack_fffffdd8;
  param_1[0x4d] = in_stack_fffffddc;
  param_1[0x4e] = in_stack_fffffde0;
  param_1[0x4f] = in_stack_fffffde4;
  FUN_00434850(local_204,(uint *)&stack0xfffffdc8);
  FUN_004348f0(local_204,param_1 + 0x50,0x10,param_1 + 0x50,(uint *)&stack0xfffffde8,0);
  FUN_004348f0(local_204,param_1 + 0x54,param_2 - 0x150,param_1 + 0x54,(uint *)&stack0xfffffde8,0);
  iVar2 = FUN_0041db70((int)param_1,param_2,0xc,0x14,0x150,auStack_1f0);
  if (iVar2 != 0) {
    if ((DAT_0047a144 != (uint *)0x0) && (uVar3 = FUN_00420ad0(param_1), uVar3 == 0x43524c50)) {
      bVar1 = FUN_00435b00(auStack_1f0,param_1 + 8,DAT_0047a144);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        FUN_00433690(1,"sig good! ");
        return 1;
      }
      FUN_00433690(1,"\nsignature check FAILED!\n");
    }
    return 1;
  }
  return 0;
}

