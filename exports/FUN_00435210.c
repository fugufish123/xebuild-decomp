
void __cdecl
FUN_00435210(int param_1,uint *param_2,uint *param_3,uint *param_4,int param_5,uint *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_24;
  int local_20;
  
  uVar2 = param_4[1];
  uVar3 = (uVar2 >> 8 & 0xff00) + (uVar2 >> 0x18) + uVar2 * 0x1000000 + (uVar2 & 0xff00) * 0x100;
  uVar2 = *param_4;
  iVar1 = (uVar2 >> 0x18) + uVar2 * 0x1000000 + (uVar2 & 0xff00) * 0x100 + (uVar2 >> 8 & 0xff00);
  uVar4 = (param_4[5] >> 0x18) + param_4[5] * 0x1000000;
  uVar2 = (param_4[5] & 0xff00) * 0x100;
  uVar5 = uVar4 + uVar2;
  uVar6 = param_4[5] >> 8 & 0xff00;
  uVar7 = FUN_00437120(uVar6 + uVar5,
                       param_4[4] * 0x1000000 + (param_4[4] & 0xff00) * 0x100 +
                       (param_4[4] >> 8 & 0xff00) + (param_4[4] >> 0x18) +
                       (uint)CARRY4(param_4[5] >> 0x18,param_4[5] * 0x1000000) +
                       (uint)CARRY4(uVar4,uVar2) + (uint)CARRY4(uVar6,uVar5));
  FUN_00436d80(param_1,param_5,iVar1);
  FUN_00436d80(param_5,(int)param_6,iVar1);
  local_24 = (uint)uVar7;
  local_20 = (int)((ulonglong)uVar7 >> 0x20);
  while (uVar3 = uVar3 >> 1, uVar3 != 0) {
    FUN_004372a0(param_6,(int)param_6,(int)param_6,local_24,local_20,(int)(param_4 + 4),iVar1);
  }
  FUN_004372a0(param_6,param_5,param_5,local_24,local_20,(int)(param_4 + 4),iVar1);
  FUN_00435020(param_6,param_2,param_3);
  return;
}

