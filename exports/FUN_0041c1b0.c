
void FUN_0041c1b0(void *param_1,byte *param_2,undefined4 *param_3,int param_4,int param_5)

{
  uint uVar1;
  byte *in_stack_00000030;
  
  *(undefined4 *)(param_2 + 0x10) = DAT_0044a6a4;
  *(undefined4 *)(param_2 + 0x14) = DAT_0044a6a8;
  *(undefined4 *)(param_2 + 0x18) = DAT_0044a6ac;
  *(undefined4 *)(param_2 + 0x1c) = DAT_0044a6b0;
  if (param_5 == 0) {
    FUN_00434110((uint *)&DAT_0047a10c,0x10,param_2 + 0x10,0x10,(void *)0x0,0,(void *)0x0,0,param_3,
                 0x10);
    *(undefined2 *)(param_2 + 0x20) = DAT_00479570;
    param_2[0x22] = DAT_00479572;
    param_2[0x23] = DAT_00479f14;
    FUN_00434110((uint *)&DAT_0047a11c,0x10,param_3,0x10,param_2 + 0x20,0x10,param_1,0x10,
                 (undefined4 *)(param_2 + 0x30),0x10);
  }
  else {
    param_2[0x20] = 0;
    param_2[0x21] = 0;
    param_2[0x22] = 0;
    param_2[0x23] = 0;
    uVar1 = 0;
    param_2[0x3c] = 0;
    param_2[0x3d] = 0;
    param_2[0x3e] = 0;
    param_2[0x3f] = 0;
    do {
      *(undefined4 *)(((uint)(param_2 + 0x24) & 0xfffffffc) + uVar1) = 0;
      uVar1 = uVar1 + 4;
    } while (uVar1 < ((uint)(param_2 + (0x40 - ((uint)(param_2 + 0x24) & 0xfffffffc))) & 0xfffffffc)
            );
    FUN_00434110((uint *)&DAT_0047a10c,0x10,param_2 + 0x10,0x10,(void *)0x0,0,(void *)0x0,0,param_3,
                 0x10);
    in_stack_00000030 = param_2;
  }
  FUN_004345b0((int)param_3,0x10,in_stack_00000030,param_4 - 0x20);
  return;
}

