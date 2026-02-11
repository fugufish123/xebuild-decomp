
bool __cdecl FUN_0040e7b0(uint *param_1,int param_2,void *param_3)

{
  int iVar1;
  undefined4 local_20 [7];
  
  FUN_00434c00(param_1,0x10,param_1 + 8,param_2 - 0x20,local_20,0x14);
  iVar1 = memcmp(param_3,local_20,0x14);
  return iVar1 == 0;
}

