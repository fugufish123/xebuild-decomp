
undefined4 __cdecl
FUN_00440e20(void *param_1,void *param_2,void *param_3,undefined4 param_4,uint *param_5,
            undefined4 param_6,int param_7)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uStack_18;
  uint uStack_14;
  
  if ((param_1 == param_2) || (param_1 == param_3)) {
    FUN_00448760((byte *)"w != u && w != v",
                 (byte *)"H:/x360sdk/__NAND/nandbuild_trin/XeCrypt/bign/mpMultiply.c",0x11);
  }
  FUN_004410e0(param_1,param_7 * 2);
  if (param_7 != 0) {
    iVar4 = 0;
    do {
      while (uVar2 = *(uint *)((int)param_3 + iVar4 * 4), uVar2 != 0) {
        iVar3 = 0;
        FUN_00442050((int *)&uStack_18,*param_5,uVar2);
        while( true ) {
          puVar1 = (uint *)((int)param_1 + iVar3 * 4);
          bVar5 = CARRY4(uStack_18,*puVar1);
          uStack_18 = uStack_18 + *puVar1;
          if (bVar5) {
            uStack_14 = uStack_14 + 1;
          }
          uVar2 = uStack_14;
          *(uint *)((int)param_1 + iVar3 * 4) = uStack_18;
          iVar3 = iVar3 + 1;
          if (param_7 == iVar3) break;
          FUN_00442050((int *)&uStack_18,param_5[iVar3],*(uint *)((int)param_3 + iVar4 * 4));
          bVar5 = CARRY4(uVar2,uStack_18);
          uStack_18 = uVar2 + uStack_18;
          if (bVar5) {
            uStack_14 = uStack_14 + 1;
          }
        }
        iVar4 = iVar4 + 1;
        *(uint *)((int)param_1 + param_7 * 4) = uStack_14;
        param_1 = (void *)((int)param_1 + 4);
        if (param_7 == iVar4) {
          return 0;
        }
      }
      iVar4 = iVar4 + 1;
      *(undefined4 *)((int)param_1 + param_7 * 4) = 0;
      param_1 = (void *)((int)param_1 + 4);
    } while (param_7 != iVar4);
  }
  return 0;
}

