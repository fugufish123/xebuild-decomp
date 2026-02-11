
undefined4 __cdecl FUN_00405d50(int *param_1,char *param_2,undefined4 *param_3,int *param_4)

{
  uint uVar1;
  uint3 uVar2;
  uint3 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int local_2c;
  uint local_24;
  uint local_20;
  
  iVar4 = param_1[4];
  iVar11 = 1;
  do {
    iVar9 = (iVar11 + 0x3ffffff) * 0x40;
    iVar4 = FUN_004223b0((char *)(iVar4 + iVar9),0x40);
    if (iVar4 != 0) {
      return 0;
    }
    iVar5 = _stricmp(param_2,(char *)(param_1[4] + iVar9));
    iVar4 = param_1[4];
    if (iVar5 == 0) {
      iVar9 = iVar4 + iVar9;
      if ((*(byte *)(iVar9 + 0x28) & 0x40) == 0) {
        FUN_00433690(0,
                     "\n\n***** WARNING !!! file %s is not contiguous and contents are being skipped!\n\n"
                    );
        iVar4 = param_1[4];
      }
      else {
        uVar1 = *(uint *)(iVar9 + 0x34);
        local_24 = (uVar1 & 0xff00) << 8;
        local_20 = uVar1 >> 8 & 0xff00;
        local_2c = (uVar1 >> 0x18) + uVar1 * 0x1000000;
        puVar6 = (undefined4 *)malloc(local_2c + 0xfff + (local_24 | local_20) & 0xfffff000);
        if (puVar6 != (undefined4 *)0x0) {
          uVar3 = *(uint3 *)(iVar9 + 0x2c);
          uVar2 = *(uint3 *)(iVar9 + 0x2f);
          if (uVar3 != 0) {
            iVar4 = *param_1;
            iVar11 = param_1[1];
            piVar8 = (int *)(iVar11 + (uint)uVar2 * 4);
            puVar10 = puVar6;
            do {
              iVar5 = *piVar8;
              piVar8 = piVar8 + 1;
              puVar12 = (undefined4 *)(iVar5 + iVar4);
              puVar13 = puVar10;
              for (iVar7 = 0x400; iVar7 != 0; iVar7 = iVar7 + -1) {
                *puVar13 = *puVar12;
                puVar12 = puVar12 + 1;
                puVar13 = puVar13 + 1;
              }
              puVar10 = puVar10 + 0x400;
            } while ((int *)(iVar11 + ((uint)uVar2 + (uint)uVar3) * 4) != piVar8);
            uVar1 = *(uint *)(iVar9 + 0x34);
            local_24 = (uVar1 & 0xff00) << 8;
            local_20 = uVar1 >> 8 & 0xff00;
            local_2c = uVar1 * 0x1000000 + (uVar1 >> 0x18);
          }
          *param_3 = puVar6;
          *param_4 = local_24 + local_20 + local_2c;
          return 1;
        }
      }
    }
    iVar11 = iVar11 + 1;
  } while( true );
}

