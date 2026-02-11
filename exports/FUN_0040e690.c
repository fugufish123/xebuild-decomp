
undefined4 __cdecl FUN_0040e690(uint *param_1,int param_2,uint *param_3,uint *param_4,uint *param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  int iVar3;
  undefined3 extraout_var_00;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_130 [5];
  uint local_11c [63];
  uint local_20;
  
  FUN_00434c00(param_1,0x10,param_1 + 0x48,param_2 - 0x120,local_130,0x14);
  bVar1 = FUN_00435530(local_11c,local_130,param_5,param_4);
  if (((CONCAT31(extraout_var,bVar1) == 0) ||
      (iVar3 = FUN_00435820(local_11c,local_11c,param_4), iVar3 == 0)) ||
     (bVar1 = FUN_00435440((int)local_11c,local_130,param_5,param_3),
     CONCAT31(extraout_var_00,bVar1) == 0)) {
    uVar2 = 0;
  }
  else {
    param_1[8] = local_11c[0];
    param_1[0x47] = local_20;
    uVar2 = 1;
    iVar3 = (int)param_1 + (0x20 - (int)((uint)(param_1 + 9) & 0xfffffffc));
    puVar5 = (undefined4 *)((int)local_11c - iVar3);
    puVar6 = (undefined4 *)((uint)(param_1 + 9) & 0xfffffffc);
    for (uVar4 = iVar3 + 0x100U >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  return uVar2;
}

