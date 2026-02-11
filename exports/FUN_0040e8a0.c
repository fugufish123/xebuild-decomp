
void __cdecl
FUN_0040e8a0(uint *param_1,int param_2,uint *param_3,int param_4,undefined4 *param_5,uint *param_6,
            uint *param_7)

{
  short sVar1;
  char *pcVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_00434c00(param_1,0x10,param_1 + 8,param_2 - 0x20,&local_20,0x14);
  *param_5 = local_20;
  param_5[1] = local_1c;
  param_5[2] = local_18;
  param_5[3] = local_14;
  param_5[4] = local_10;
  sVar1 = FUN_00420ab0((undefined1 *)param_3);
  pcVar2 = s_XBOX_ROM_3_0044a54c;
  if (sVar1 == 0x5344) {
    pcVar2 = s_XBOX_ROM_4_0044a540;
  }
  FUN_0040e690(param_3,param_4,param_6,param_7,(uint *)pcVar2);
  return;
}

