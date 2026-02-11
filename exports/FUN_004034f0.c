
void __cdecl FUN_004034f0(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint local_420;
  uint local_41c [259];
  
  iVar7 = 4;
  local_420 = 0;
  uVar1 = FUN_00420ad0(param_3);
  if (uVar1 != 0) {
    do {
      iVar8 = iVar7 + 4;
      uVar1 = FUN_00420ad0((uint *)((int)param_3 + iVar7));
      if (uVar1 == 0) {
LAB_004035b0:
        uVar1 = DAT_004c4f94;
        if (0xf < (int)DAT_004c4f94) {
          FUN_00433690(0,
                       "***** WARNING: exceeded total number of optional patches while processing %s from console!\n"
                      );
          return;
        }
        strcpy((char *)local_41c,(char *)((int)param_3 + iVar8));
        puVar4 = local_41c;
        do {
          puVar3 = puVar4;
          uVar2 = *puVar3 + 0xfefefeff & ~*puVar3;
          uVar6 = uVar2 & 0x80808080;
          puVar4 = puVar3 + 1;
        } while (uVar6 == 0);
        bVar9 = (uVar2 & 0x8080) == 0;
        if (bVar9) {
          uVar6 = uVar6 >> 0x10;
        }
        if (bVar9) {
          puVar4 = (uint *)((int)puVar3 + 6);
        }
        puVar5 = (undefined4 *)((int)puVar4 + (-3 - (uint)CARRY1((byte)uVar6,(byte)uVar6)));
        *puVar5 = 0x6e69622e;
        *(undefined1 *)(puVar5 + 1) = 0;
        if (uVar1 == 0) {
          uVar1 = 0;
        }
        else {
          bVar9 = true;
          uVar1 = 0;
          do {
            while (iVar7 = _stricmp((char *)local_41c,&DAT_004c0c94 + uVar1 * 0x42c), iVar7 == 0) {
              uVar1 = DAT_004c4f94 + 1;
              if (DAT_004c4f94 != 0xffffffff) goto LAB_0040358b;
              bVar9 = false;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < DAT_004c4f94);
          uVar1 = DAT_004c4f94;
          if (!bVar9) goto LAB_0040358b;
        }
        strcpy(&DAT_004c0c94 + uVar1 * 0x42c,(char *)local_41c);
        DAT_004c4f94 = DAT_004c4f94 + 1;
        FUN_00433690(0,"addon patch from console: %s\n");
      }
      else {
        bVar9 = true;
        uVar6 = 0;
        do {
          iVar7 = FUN_00421170(param_1,param_2,(char *)(iVar8 + uVar6 * 8 + (int)param_3),8);
          if (iVar7 == 0) {
            bVar9 = false;
            uVar6 = uVar1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar1);
        iVar8 = iVar8 + uVar1 * 8;
        if (bVar9) goto LAB_004035b0;
      }
LAB_0040358b:
      local_420 = local_420 + 1;
      iVar7 = iVar8 + 0x10;
      uVar1 = FUN_00420ad0(param_3);
    } while (local_420 < uVar1);
  }
  return;
}

