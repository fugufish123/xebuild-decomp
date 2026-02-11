
bool __cdecl FUN_0041ae40(uint param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  
  if (((uint)param_2 & 3) == 0) {
    local_1c = *param_2;
    local_18 = param_2[1];
    local_14 = param_2[2];
    local_10 = param_2[3] & 0x3ff;
  }
  else {
    local_1c = *param_2;
    local_18 = param_2[1];
    local_14 = param_2[2];
    local_10 = (uint)(*(ushort *)(param_2 + 3) & 0x3ff);
  }
  iVar1 = FUN_00434090((byte *)&local_1c,0x10);
  FUN_00433ff0((int)&local_1c);
  iVar2 = memcmp(param_2,&local_1c,0x10);
  FUN_00433690(param_1," (weight:0x%x %s; ecd: %s)");
  return iVar2 == 0 && iVar1 == 0x35;
}

