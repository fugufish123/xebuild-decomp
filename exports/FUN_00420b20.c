
void __cdecl FUN_00420b20(undefined4 param_1,undefined1 *param_2)

{
  param_2[3] = (char)param_1;
  *param_2 = (char)((uint)param_1 >> 0x18);
  param_2[1] = (char)((uint)param_1 >> 0x10);
  param_2[2] = (char)((uint)param_1 >> 8);
  return;
}

