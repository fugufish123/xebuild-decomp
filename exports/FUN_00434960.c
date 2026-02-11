
void __cdecl FUN_00434960(uint *param_1,void *param_2,size_t param_3)

{
  uint *_Dst;
  
  if (param_3 == 0) {
    return;
  }
  _Dst = (uint *)malloc(param_3);
  memcpy(_Dst,param_2,param_3);
  FUN_004448d0(param_1,_Dst,param_3);
  free(_Dst);
  return;
}

