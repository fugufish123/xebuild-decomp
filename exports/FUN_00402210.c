
void FUN_00402210(void *param_1,size_t param_2,int param_3)

{
  void *_Dst;
  uint local_214 [129];
  
  _Dst = malloc(param_2);
  memcpy(_Dst,param_1,param_2);
  local_214[0] = 0;
  local_214[1] = 0;
  local_214[2] = 0;
  local_214[3] = 0;
  if (param_3 == 0) {
    FUN_00434850(local_214 + 4,(uint *)&DAT_0047a12c);
  }
  else {
    FUN_00434850(local_214 + 4,(uint *)&DAT_0047a11c);
  }
  FUN_004348f0(local_214 + 4,(uint *)((int)_Dst + 0x130),param_2 - 0x130,
               (uint *)((int)param_1 + 0x130),local_214,0);
  free(_Dst);
  return;
}

