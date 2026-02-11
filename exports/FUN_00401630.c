
bool __cdecl FUN_00401630(void *param_1)

{
  int iVar1;
  int in_stack_00000030;
  
  FUN_00434110((uint *)&DAT_0047a11c,0x10,param_1,0x10,(void *)0x0,0,(void *)0x0,0,
               (undefined4 *)&stack0xffffffd4,0x10);
  FUN_004345b0((int)&stack0xffffffd4,0x10,(byte *)((int)param_1 + 0x10),in_stack_00000030 - 0x10U);
  FUN_00434110((uint *)&DAT_0047a11c,0x10,(byte *)((int)param_1 + 0x10),in_stack_00000030 - 0x10U,
               &stack0xfffffffa,2,(void *)0x0,0,(undefined4 *)&stack0xffffffd4,0x10);
  iVar1 = memcmp(param_1,&stack0xffffffd4,0x10);
  return iVar1 == 0;
}

