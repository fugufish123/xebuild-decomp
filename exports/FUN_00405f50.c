
void __cdecl FUN_00405f50(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  *param_1 = 0;
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
  }
  param_1[1] = 0;
  return;
}

