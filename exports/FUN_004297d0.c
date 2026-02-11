
undefined4 __cdecl FUN_004297d0(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined4 *puVar4;
  undefined3 extraout_var_00;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  if (*(void **)(param_1 + 0x40c) != (void *)0x0) {
    free(*(void **)(param_1 + 0x40c));
  }
  *(undefined4 *)(param_1 + 0x410) = 0x400;
  pvVar2 = malloc(0x400);
  *(void **)(param_1 + 0x40c) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0xfffffffe;
  }
  FUN_00433690(1,"-------------------\n");
  FUN_00433690(1,"checking smc_config\n");
  FUN_00433690(1,"-------------------\n");
  iVar3 = 0;
  uVar7 = 0;
  do {
    uVar8 = uVar7;
    if (param_3 < uVar8 + 0x200) {
      if (iVar3 == 0) {
        iVar3 = 0;
        uVar7 = 0;
        goto LAB_004299c2;
      }
      break;
    }
    bVar1 = FUN_0040c210((byte *)(param_2 + uVar8));
    iVar3 = CONCAT31(extraout_var,bVar1);
    uVar7 = uVar8 + 0x200;
  } while (iVar3 != 1);
  goto LAB_00429883;
  while( true ) {
    bVar1 = FUN_0040c210((byte *)(param_2 + uVar8));
    iVar3 = CONCAT31(extraout_var_00,bVar1);
    uVar7 = uVar8 + 0x210;
    if (iVar3 == 1) break;
LAB_004299c2:
    uVar8 = uVar7;
    if (param_3 < uVar8 + 0x210) {
      if (iVar3 == 0) {
        FUN_00433690(0,"******* ERROR: unable to find SMC config data!\n");
        return 2;
      }
      break;
    }
  }
LAB_00429883:
  iVar3 = FUN_004223b0((char *)(param_2 + 0x20c + uVar8),4);
  if (iVar3 == 0) {
    if (param_3 - uVar8 < 0x4200) {
      FUN_00433690(1,"******* ERROR: extracting config did not work, not enough data to copy!\n");
      return 0xfffffffe;
    }
    FUN_00433690(1,"extracting config raw\n");
    puVar4 = (undefined4 *)(param_2 + uVar8);
    iVar3 = 0;
    do {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x40c) + iVar3);
      iVar3 = iVar3 + 0x200;
      *puVar5 = *puVar4;
      puVar5[0x7f] = puVar4[0x7f];
      iVar6 = (int)puVar5 - (int)((uint)(puVar5 + 1) & 0xfffffffc);
      puVar9 = (undefined4 *)((int)puVar4 - iVar6);
      puVar4 = puVar4 + 0x84;
      puVar5 = (undefined4 *)((uint)(puVar5 + 1) & 0xfffffffc);
      for (uVar7 = iVar6 + 0x200U >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar5 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar5 = puVar5 + 1;
      }
    } while (iVar3 != 0x1000);
  }
  else {
    FUN_00433690(1,"extracting config\n");
    if (0x3ff < param_3 - uVar8) {
      puVar4 = (undefined4 *)(param_2 + uVar8);
      puVar9 = *(undefined4 **)(param_1 + 0x40c);
      *puVar9 = *puVar4;
      puVar9[0xff] = puVar4[0xff];
      iVar3 = (int)puVar9 - (int)((uint)(puVar9 + 1) & 0xfffffffc);
      puVar4 = (undefined4 *)((int)puVar4 - iVar3);
      puVar9 = (undefined4 *)((uint)(puVar9 + 1) & 0xfffffffc);
      for (uVar7 = iVar3 + 0x400U >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar9 = puVar9 + 1;
      }
    }
  }
  if (uVar8 != 0) {
    FUN_00433690(1,"valid SMC config data found at offset 0x%x\n");
  }
  FUN_00433690(1,"------------------\n");
  FUN_00433690(1,"SMC config info:\n");
  FUN_00433690(1,"------------------\n");
  FUN_00428d20(*(int *)(param_1 + 0x40c));
  FUN_00433690(1,"---------------------\n");
  iVar3 = FUN_004291f0(*(int **)(param_1 + 0x40c));
  if (iVar3 != 0) {
    FUN_00433690(1,"SMC patched info:\n");
    FUN_00433690(1,"------------------\n");
    FUN_00428d20(*(int *)(param_1 + 0x40c));
    FUN_00433690(1,"---------------------\n");
  }
  return 0;
}

