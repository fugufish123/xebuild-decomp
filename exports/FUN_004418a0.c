
void __cdecl FUN_004418a0(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  if (1 < param_3) {
    memset(param_1 + 1,0,param_3 * 4 - 4);
  }
  *param_1 = param_2;
  return;
}

