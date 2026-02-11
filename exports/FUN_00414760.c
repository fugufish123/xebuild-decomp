
undefined4 __cdecl FUN_00414760(char *param_1,undefined4 *param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint _Count;
  size_t _Size;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  void *_Dst;
  
  if (DAT_00474d24 == 1) {
    iVar8 = 0x2000;
    iVar6 = 0;
    do {
      if ((PTR_DAT_0044a5d8[(iVar6 + 0x100) * 0x20] != '\0') &&
         (iVar4 = _stricmp(PTR_DAT_0044a5d8 + iVar8,param_1), iVar3 = DAT_00474d20,
         puVar2 = PTR_DAT_0044a5d8, iVar4 == 0)) {
        uVar1 = *(uint *)(PTR_DAT_0044a5d8 + iVar6 * 0x20 + 0x2018);
        _Count = (uVar1 & 0xff00) * 0x100 + (uVar1 >> 0x18) + uVar1 * 0x1000000 +
                 (uVar1 >> 8 & 0xff00);
        uVar1 = *(uint *)(PTR_DAT_0044a5d8 + iVar6 * 0x20 + 0x201c);
        uVar7 = (*(ushort *)(PTR_DAT_0044a5d8 + iVar6 * 0x20 + 0x2016) & 0xff) * 0x100 +
                (uint)(*(ushort *)(PTR_DAT_0044a5d8 + iVar6 * 0x20 + 0x2016) >> 8);
        iVar8 = uVar7 * 0x4000 + DAT_00474d20;
        pvVar5 = calloc(_Count,1);
        iVar6 = DAT_00479f4c;
        uVar9 = _Count;
        _Dst = pvVar5;
        if (0x4000 < _Count) goto LAB_00414870;
        if (_Count == 0) goto LAB_004148fc;
        iVar6 = 0;
        _Size = _Count;
        goto LAB_004148e2;
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x20;
    } while (iVar6 != 0x100);
  }
  return 0;
LAB_00414870:
  do {
    uVar9 = uVar9 - 0x4000;
    memcpy(_Dst,(void *)(iVar8 + iVar6),0x4000);
    uVar7 = (uint)*(ushort *)(puVar2 + uVar7 * 2) * 0x100 +
            (uint)(*(ushort *)(puVar2 + uVar7 * 2) >> 8) & 0x1fff;
    iVar8 = uVar7 * 0x4000 + iVar3;
    _Dst = (void *)((int)_Dst + 0x4000);
  } while (0x4000 < uVar9);
  uVar9 = _Count - 0x4001 & 0xffffc000;
  iVar6 = uVar9 + 0x4000;
  _Size = (_Count - 0x4000) - uVar9;
LAB_004148e2:
  memcpy((void *)(iVar6 + (int)pvVar5),(void *)(iVar8 + DAT_00479f4c),_Size);
LAB_004148fc:
  *param_2 = pvVar5;
  *param_3 = _Count;
  *param_4 = (uVar1 >> 8 & 0xff00) + (uVar1 >> 0x18) + uVar1 * 0x1000000 + (uVar1 & 0xff00) * 0x100;
  return 1;
}

