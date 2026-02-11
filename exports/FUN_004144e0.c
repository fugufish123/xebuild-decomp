
void __cdecl FUN_004144e0(int param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  size_t _Count;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_00474d20;
  _Count = (&DAT_004c90e8)[param_1];
  iVar4 = param_1 + 0x13c88;
  iVar3 = param_2 * 0x4000 + DAT_00474d20;
  pvVar2 = calloc(_Count,1);
  (&DAT_00479ea0)[iVar4] = pvVar2;
  if (_Count < 0x4001) {
    if (_Count == 0) goto LAB_004145ea;
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    while( true ) {
      pvVar2 = (void *)((int)pvVar2 + iVar5);
      iVar5 = iVar5 + 0x4000;
      memcpy(pvVar2,(void *)(iVar3 + DAT_00479f4c),0x4000);
      param_2 = (uint)*(ushort *)(PTR_DAT_0044a5d8 + param_2 * 2) * 0x100 +
                (uint)(*(ushort *)(PTR_DAT_0044a5d8 + param_2 * 2) >> 8) & 0x1fff;
      iVar3 = param_2 * 0x4000 + iVar1;
      if (iVar5 == (_Count - 0x4001 & 0xffffc000) + 0x4000) break;
      pvVar2 = (void *)(&DAT_00479ea0)[iVar4];
    }
    _Count = (_Count - 0x4000) - (_Count - 0x4001 & 0xffffc000);
  }
  memcpy((void *)((&DAT_00479ea0)[iVar4] + iVar5),(void *)(iVar3 + DAT_00479f4c),_Count);
LAB_004145ea:
  FUN_0040d120(param_1);
  return;
}

