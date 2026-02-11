
bool __cdecl FUN_00401dc0(int param_1,uint *param_2)

{
  uint uVar1;
  int in_stack_00000034;
  
  FUN_00434110(param_2,0x10,(void *)(param_1 + 0x10),0x10,(void *)0x0,0,(void *)0x0,0,
               (undefined4 *)&stack0xffffffe4,0x10);
  FUN_004345b0((int)&stack0xffffffe4,0x10,(byte *)(param_1 + 0x20),in_stack_00000034 - 0x20);
  uVar1 = FUN_00420ad0((uint *)(param_1 + 0x20));
  return uVar1 == 0x120000;
}

