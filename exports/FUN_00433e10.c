
void __cdecl FUN_00433e10(uint *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint local_44;
  uint local_3c;
  int local_30;
  uint local_28;
  int local_24;
  
  local_24 = 0;
  if (param_3 != 0) {
    do {
      uVar6 = FUN_00436b00(param_1);
      uVar7 = FUN_00436b00(param_1);
      uVar8 = FUN_00436b00(param_1);
      uVar9 = FUN_00436b00(param_1);
      uVar10 = FUN_00436b00(param_1);
      uVar11 = FUN_00436b00(param_1);
      uVar12 = FUN_00436b00(param_1);
      uVar13 = FUN_00436b00(param_1);
      uVar4 = (uint)((ulonglong)uVar13 >> 0x38);
      local_44 = (uint)uVar8;
      local_3c = (uint)uVar9;
      local_30 = (int)((ulonglong)uVar10 >> 0x20);
      local_28 = (uint)((ulonglong)uVar11 >> 0x20);
      uVar1 = uVar4 + local_30 * 0x1000000;
      uVar3 = (local_28 & 0xff00) * 0x100;
      uVar2 = uVar1 + uVar3;
      uVar5 = (uint)((ulonglong)uVar12 >> 0x28) & 0xff00;
      param_1 = param_1 + 2;
      FUN_00436c50(uVar2 + uVar5,
                   (int)uVar6 * 0x1000000 + ((uint)uVar7 & 0xff00) * 0x100 +
                   (local_44 >> 8 & 0xff00) + (local_3c >> 0x18) +
                   (uint)CARRY4(uVar4,local_30 * 0x1000000) + (uint)CARRY4(uVar1,uVar3) +
                   (uint)CARRY4(uVar2,uVar5),param_2);
      local_24 = local_24 + 1;
      param_2 = param_2 + 2;
    } while (param_3 != local_24);
  }
  return;
}

