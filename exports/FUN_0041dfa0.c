
void FUN_0041dfa0(void *param_1,size_t param_2,int param_3)

{
  undefined4 uVar1;
  void *_Dst;
  undefined4 local_224 [4];
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  uint *local_208;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  uint auStack_1dc [115];
  
  _Dst = malloc(param_2);
  *(undefined4 *)((int)param_1 + 0x120) = DAT_0044a600;
  uVar1 = DAT_0044a604;
  *(byte *)((int)param_1 + 0x121) = *(byte *)((int)param_1 + 0x121) | 1;
  *(undefined4 *)((int)param_1 + 0x124) = uVar1;
  *(undefined4 *)((int)param_1 + 0x128) = DAT_0044a608;
  *(undefined4 *)((int)param_1 + 300) = DAT_0044a60c;
  *(undefined4 *)((int)param_1 + 0x130) = DAT_0044a610;
  *(undefined4 *)((int)param_1 + 0x134) = DAT_0044a614;
  *(undefined4 *)((int)param_1 + 0x138) = DAT_0044a618;
  *(undefined4 *)((int)param_1 + 0x13c) = DAT_0044a61c;
  FUN_004223f0((undefined1 *)((int)param_1 + 0x130),param_3,8);
  *(undefined1 *)((int)param_1 + 0x13f) = DAT_00479f15;
  memcpy(_Dst,param_1,param_2);
  local_214 = 0;
  local_210 = 0;
  local_20c = 0;
  local_208 = (uint *)0x0;
  FUN_00434110((uint *)&DAT_0047a11c,0x10,(void *)((int)_Dst + 0x120),0x20,(void *)0x0,0,(void *)0x0
               ,0,local_224,0x10);
  *(undefined4 *)((int)param_1 + 0x140) = uStack_1fc;
  *(undefined4 *)((int)param_1 + 0x144) = uStack_1f8;
  *(undefined4 *)((int)param_1 + 0x148) = uStack_1f4;
  *(undefined4 *)((int)param_1 + 0x14c) = uStack_1f0;
  memcpy(_Dst,param_1,param_2);
  FUN_00434850(auStack_1dc,(uint *)&DAT_0047a11c);
  FUN_004348f0(auStack_1dc,(uint *)((int)_Dst + 0x130),param_2 - 0x130,
               (uint *)((int)param_1 + 0x130),local_208,1);
  free(_Dst);
  return;
}

