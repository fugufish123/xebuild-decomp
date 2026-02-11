
void __cdecl FUN_0041c0c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int in_stack_00000030;
  int in_stack_00000034;
  
  uVar2 = 0;
  DAT_00479570 = 0;
  DAT_00479572 = 0;
  *(undefined4 *)(param_1 + 0x10) = DAT_0044a6a4;
  *(undefined4 *)(param_1 + 0x14) = DAT_0044a6a8;
  uVar3 = param_1 + 0x24U & 0xfffffffc;
  *(undefined4 *)(param_1 + 0x18) = DAT_0044a6ac;
  uVar1 = DAT_0044a6b0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  do {
    *(undefined4 *)(uVar3 + uVar2) = 0;
    uVar2 = uVar2 + 4;
  } while (uVar2 < ((uint)((byte *)(param_1 + 0x20) + (0x20 - uVar3)) & 0xfffffffc));
  FUN_00434110((uint *)&DAT_0047a10c,0x10,(void *)(param_1 + 0x10),0x10,(void *)0x0,0,(void *)0x0,0,
               param_2,0x10);
  FUN_004345b0(in_stack_00000030,0x10,(byte *)(param_1 + 0x20),in_stack_00000034 - 0x20);
  return;
}

