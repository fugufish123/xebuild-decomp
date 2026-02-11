
void __cdecl FUN_004349c0(uint *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_00444da0((undefined1 *)&local_20,param_1);
  if (0x14 < param_3) {
    *param_2 = local_20;
    param_2[1] = local_1c;
    param_2[2] = local_18;
    param_2[3] = local_14;
    param_2[4] = local_10;
    return;
  }
  memcpy(param_2,&local_20,param_3);
  return;
}

