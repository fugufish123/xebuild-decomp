
void FUN_0041bf50(undefined4 param_1,void *param_2,undefined4 *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte *in_stack_00000030;
  
  *(undefined4 *)((int)param_2 + 0x10) = DAT_0044a6a4;
  *(undefined4 *)((int)param_2 + 0x14) = DAT_0044a6a8;
  *(undefined4 *)((int)param_2 + 0x18) = DAT_0044a6ac;
  *(undefined4 *)((int)param_2 + 0x1c) = DAT_0044a6b0;
  FUN_00434110((uint *)&DAT_0047a10c,0x10,(void *)((int)param_2 + 0x10),0x10,(void *)0x0,0,
               (void *)0x0,0,param_3,0x10);
  pbVar1 = (byte *)((int)param_2 + 0x20);
  if (param_5 == 0) {
    FUN_00433690(1,"CBENC pairing set to: %02x %02x %02x\n");
    *(undefined2 *)((int)param_2 + 0x20) = DAT_00479570;
    *(undefined1 *)((int)param_2 + 0x22) = DAT_00479572;
    *(undefined1 *)((int)param_2 + 0x23) = DAT_00479f14;
    FUN_00434110((uint *)&DAT_0047a11c,0x10,param_3,0x10,(void *)((int)param_2 + 0x20),0x10,param_2,
                 0x10,(undefined4 *)((int)param_2 + 0x30),0x10);
    pbVar1 = in_stack_00000030;
  }
  FUN_004345b0((int)param_3,0x10,pbVar1,param_4 - 0x20);
  return;
}

