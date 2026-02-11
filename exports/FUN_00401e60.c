
bool __cdecl FUN_00401e60(void *param_1)

{
  int iVar1;
  int in_stack_00000030;
  int iStack_18;
  
  FUN_00434110((uint *)&DAT_0047a11c,0x10,param_1,0x10,(void *)0x0,0,(void *)0x0,0,
               (undefined4 *)&stack0xffffffc4,0x10);
  FUN_004345b0(iStack_18,0x10,(byte *)((int)param_1 + 0x10),in_stack_00000030 - 0x10U);
  FUN_00434110((uint *)&DAT_0047a11c,0x10,(byte *)((int)param_1 + 0x10),in_stack_00000030 - 0x10U,
               (void *)0x0,0,(void *)0x0,0,(undefined4 *)&stack0xffffffd4,0x10);
  iVar1 = memcmp(param_1,&stack0xffffffd4,0x10);
  return iVar1 == 0;
}

