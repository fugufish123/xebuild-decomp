
undefined4 __cdecl
FUN_00446360(uint *param_1,uint *param_2,uint *param_3,uint param_4,uint *param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  bool bVar12;
  uint *local_5c;
  int local_58;
  uint local_54;
  int local_50;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  FUN_004410e0(param_1,param_4);
  FUN_004410e0(param_2,param_4);
  uVar2 = FUN_004417d0((int)param_5,param_6);
  uVar3 = FUN_004417d0((int)param_3,param_4);
  local_58 = uVar3 - uVar2;
  if (uVar2 == 0) {
    return 0xffffffff;
  }
  if (uVar2 == 1) {
    uVar2 = FUN_00441110(param_1,param_3,*param_5,param_4);
    *param_2 = uVar2;
    return 0;
  }
  if (local_58 < 0) {
LAB_004467b1:
    FUN_00446200((int)param_2,(int)param_3,param_4);
  }
  else {
    if (local_58 == 0) {
      iVar7 = FUN_00441800((int)param_3,(int)param_5,uVar2);
      if (iVar7 < 0) goto LAB_004467b1;
      if (iVar7 == 0) {
        FUN_004418a0(param_1,1,param_4);
        return 0;
      }
    }
    uVar8 = 0;
    puVar4 = param_5 + (uVar2 - 1);
    uVar5 = 0x80000000;
    do {
      if ((*puVar4 & uVar5) != 0) break;
      uVar8 = uVar8 + 1;
      uVar5 = uVar5 >> 1;
    } while (uVar8 != 0x20);
    FUN_00441f40(param_5,param_5,uVar8,uVar2);
    uVar5 = FUN_00441f40(param_2,param_3,uVar8,uVar3);
    local_5c = param_2 + uVar3;
    local_50 = local_58 * 4;
    puVar10 = param_2 + local_58;
    do {
      iVar7 = local_58;
      local_2c = local_5c[-1];
      local_28 = uVar5;
      uVar5 = FUN_00446830(&local_34,&local_30,&local_2c,*puVar4);
      if (uVar5 == 0) {
LAB_00446508:
        uVar9 = local_30;
        uVar5 = local_5c[-2];
        FUN_00442050((int *)&local_24,local_34,param_5[uVar2 - 2]);
        if ((uVar9 <= local_20) && ((uVar9 < local_20 || (uVar5 < local_24)))) {
          local_34 = local_34 - 1;
          bVar12 = CARRY4(local_30,*puVar4);
          uVar5 = local_30 + *puVar4;
          local_30 = uVar5;
          if (!bVar12) {
            uVar9 = local_5c[-2];
            FUN_00442050((int *)&local_24,local_34,param_5[uVar2 - 2]);
            if ((uVar5 <= local_20) && ((uVar5 < local_20 || (uVar9 < local_24)))) {
              local_34 = local_34 - 1;
            }
          }
        }
        local_54 = local_28;
        if (local_34 != 0) goto LAB_00446550;
      }
      else {
        local_30 = *puVar4 + local_5c[-1];
        local_34 = 0xffffffff;
        if (!CARRY4(*puVar4,local_5c[-1])) goto LAB_00446508;
LAB_00446550:
        local_54 = local_28;
        uVar5 = local_34;
        uVar9 = 0;
        if (uVar2 != 0) {
          uVar11 = 0;
          do {
            FUN_00442050((int *)&local_24,uVar5,param_5[uVar11]);
            uVar1 = puVar10[uVar11];
            uVar6 = (uVar1 - uVar9) - local_24;
            puVar10[uVar11] = uVar6;
            uVar9 = (~uVar9 < uVar1 - uVar9) + local_20 + (uint)(~local_24 < uVar6);
            uVar11 = uVar11 + 1;
          } while (uVar2 != uVar11);
        }
        local_54 = local_54 - uVar9;
      }
      if (local_54 == 0) {
        *(uint *)((int)param_1 + local_50) = local_34;
        uVar5 = local_5c[-1];
      }
      else {
        *(uint *)((int)param_1 + local_50) = local_34 - 1;
        FUN_004420b0((int)puVar10,(int)puVar10,(int)param_5);
        uVar5 = local_5c[-1];
      }
      local_58 = local_58 + -1;
      local_5c = local_5c + -1;
      local_50 = local_50 + -4;
      puVar10 = puVar10 + -1;
    } while (iVar7 != 0);
    local_2c = uVar5;
    if ((int)uVar2 < (int)uVar3) {
      memset(param_2 + uVar2,0,(uVar3 - uVar2) * 4);
    }
    FUN_00446230((int)param_2,(int)param_2,uVar8,uVar2);
    FUN_00446230((int)param_5,(int)param_5,uVar8,uVar2);
  }
  return 0;
}

