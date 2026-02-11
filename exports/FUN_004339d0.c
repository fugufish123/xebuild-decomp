
void __fastcall FUN_004339d0(undefined1 *param_1,int param_2,size_t param_3)

{
  int in_EAX;
  
  memset(param_1,0xff,param_3);
  param_1[param_3 - 1] = 0;
  param_1[param_3 - 2] = 1;
  FUN_00436e20(param_1,in_EAX,0x14);
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0x5000414;
    *(undefined4 *)(param_1 + 0x18) = 0xe03021a;
    *(undefined4 *)(param_1 + 0x1c) = 0x906052b;
    *(undefined4 *)(param_1 + 0x20) = 0x302130;
    return;
  }
  if (param_2 != 1) {
    param_1[0x14] = 0;
    return;
  }
  param_1[0x14] = 0x14;
  param_1[0x15] = 4;
  param_1[0x16] = 0x1a;
  param_1[0x17] = 2;
  param_1[0x18] = 3;
  param_1[0x19] = 0xe;
  param_1[0x1a] = 0x2b;
  param_1[0x1b] = 5;
  param_1[0x1c] = 6;
  param_1[0x1d] = 7;
  param_1[0x1e] = 0x30;
  param_1[0x1f] = 0x1f;
  param_1[0x20] = 0x30;
  param_1[0x21] = 0;
  return;
}

