
bool __cdecl FUN_00402a00(void *param_1)

{
  int iVar1;
  undefined4 local_20 [6];
  
  FUN_00434a30((void *)((int)param_1 + 0x14),0x1ec,(void *)0x0,0,(void *)0x0,0,local_20,0x14);
  iVar1 = memcmp(local_20,param_1,0x14);
  return iVar1 == 0;
}

