
undefined4 __cdecl FUN_0040d120(int param_1)

{
  int iVar1;
  int iVar2;
  char *_Str1;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  void *_Memory;
  uint unaff_EBX;
  undefined4 uVar5;
  undefined4 in_stack_fffffff0;
  
  iVar1 = param_1 + 0x13c88;
  iVar2 = param_1 + 0x13c90;
  _Memory = (void *)(&DAT_00479ea0)[iVar1];
  if (_Memory == (void *)0x0) goto LAB_0040d154;
  if ((&DAT_00479ea8)[iVar2] != 0) {
    _Str1 = &DAT_004c8fe4 + param_1 * 0x16;
    iVar4 = _strnicmp(_Str1,"fcrt.bin",8);
    if (iVar4 == 0) {
      iVar4 = FUN_00402720((uint *)(&DAT_00479ea0)[iVar1]);
joined_r0x0040d218:
      if (iVar4 != 0) {
LAB_0040d1b6:
        FUN_00433690(1,"verified! Will use if external file not found.\n");
        return 1;
      }
    }
    else {
      iVar4 = _strnicmp(_Str1,"extended.bin",0xc);
      if (iVar4 == 0) {
        bVar3 = FUN_00401630((void *)(&DAT_00479ea0)[iVar1]);
        iVar4 = CONCAT31(extraout_var,bVar3);
        goto joined_r0x0040d218;
      }
      iVar4 = _strnicmp(_Str1,"crl.bin",7);
      if (iVar4 == 0) {
        iVar4 = FUN_00402020((uint *)(&DAT_00479ea0)[iVar1],(&DAT_00479ea8)[iVar2],1);
        if (iVar4 != 0) {
          FUN_0041abb0((undefined4 *)((&DAT_00479ea0)[iVar1] + 0x120));
          goto LAB_0040d1b6;
        }
      }
      else {
        uVar5 = 7;
        iVar4 = _strnicmp(_Str1,"dae.bin",7);
        if (iVar4 == 0) {
          bVar3 = FUN_00402410((&DAT_00479ea0)[iVar1],(&DAT_00479ea8)[iVar2],uVar5,in_stack_fffffff0
                               ,unaff_EBX);
          if (CONCAT31(extraout_var_00,bVar3) != 0) {
            FUN_0041ac00((undefined4 *)((&DAT_00479ea0)[iVar1] + 0x120));
            goto LAB_0040d1b6;
          }
        }
        else {
          iVar4 = _strnicmp(_Str1,"secdata.bin",0xb);
          if (iVar4 == 0) {
            bVar3 = FUN_00401e60((void *)(&DAT_00479ea0)[iVar1]);
            if (CONCAT31(extraout_var_01,bVar3) != 0) {
              FUN_0041ac50((undefined4 *)((&DAT_00479ea0)[iVar1] + 0x10));
              goto LAB_0040d1b6;
            }
          }
          else {
            iVar4 = _strnicmp(_Str1,"odd.bin",7);
            if (iVar4 == 0) goto LAB_0040d1b6;
          }
        }
      }
    }
    FUN_00433690(1,"verify failed! Discarding data.\n");
    _Memory = (void *)(&DAT_00479ea0)[iVar1];
    if (_Memory == (void *)0x0) goto LAB_0040d154;
  }
  free(_Memory);
LAB_0040d154:
  (&DAT_00479ea0)[iVar1] = 0;
  (&DAT_00479ea8)[iVar2] = 0;
  return 0;
}

