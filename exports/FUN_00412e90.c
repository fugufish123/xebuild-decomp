
undefined4 __cdecl
FUN_00412e90(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  if (param_3 != 0) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x17fc00;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0x17fc0;
      return 0x2ff8000;
    }
    return 0x2ff8000;
  }
  if (param_1 != 0) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x1de000;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0xef000;
      return 0x3bc0000;
    }
    return 0x3bc0000;
  }
  if (param_2 == 0) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x7bc00;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0x7bc0;
      return 0xf78000;
    }
    return 0xf78000;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0x1efc00;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0x1efc0;
    return 0x3df8000;
  }
  return 0x3df8000;
}

