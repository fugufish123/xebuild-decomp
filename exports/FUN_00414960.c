
undefined4 FUN_00414960(void)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  FUN_00433690(1,"attempting to find valid anchor block\n");
  uVar3 = FUN_00420ad0((uint *)(DAT_00479f4c + 0x2fe8018));
  uVar4 = FUN_00420ad0((uint *)(DAT_00479f4c + 0x2fec018));
  bVar1 = FUN_00402a00((void *)(DAT_00479f4c + 0x2fe8000));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_00433690(1,"anchor block at 0x2fe8000 is invalid\n");
    bVar2 = FUN_00402a00((void *)(DAT_00479f4c + 0x2fec000));
    if (CONCAT31(extraout_var_01,bVar2) != 0) {
      FUN_00433690(1,"anchor block v %d at 0x2fec000 is valid\n");
LAB_00414a10:
      FUN_00433690(1,"anchor block v %d at 0x2fec000 is selected\n");
      puVar6 = (undefined4 *)(DAT_00479f4c + 0x2fec000);
      puVar7 = &DAT_00474b20;
      for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      return 1;
    }
  }
  else {
    FUN_00433690(1,"anchor block v %d at 0x2fe8000 is valid\n");
    bVar2 = FUN_00402a00((void *)(DAT_00479f4c + 0x2fec000));
    if (CONCAT31(extraout_var_00,bVar2) != 0) {
      FUN_00433690(1,"anchor block v %d at 0x2fec000 is valid\n");
      if (uVar3 < uVar4) goto LAB_00414a10;
      goto LAB_00414a94;
    }
  }
  FUN_00433690(1,"anchor block at 0x2fec000 is invalid\n");
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return 0;
  }
LAB_00414a94:
  FUN_00433690(1,"anchor block v %d at 0x2fe8000 is selected\n");
  puVar6 = (undefined4 *)(DAT_00479f4c + 0x2fe8000);
  puVar7 = &DAT_00474b20;
  for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  return 1;
}

