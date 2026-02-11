
/* WARNING: Removing unreachable block (ram,0x004338ed) */
/* WARNING: Removing unreachable block (ram,0x00433924) */

void __fastcall FUN_00433840(int param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint *in_EAX;
  longlong lVar3;
  ulonglong uVar4;
  int local_54;
  longlong local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  int local_34;
  
  local_44 = FUN_00436b00(in_EAX);
  local_4c = FUN_00436b00(in_EAX + 2);
  local_3c = FUN_00436b00(in_EAX + 4);
  lVar3 = FUN_00436b00(in_EAX + 6);
  if (param_1 != 0) {
    local_34 = 0;
    do {
      uVar4 = FUN_00436b00(param_2);
      uVar1 = uVar4 + local_4c;
      uVar2 = lVar3 - uVar4;
      local_54 = (int)uVar2;
      local_44 = CONCAT44(local_44._4_4_ + (uint)CARRY4((uint)local_44,(uint)(uVar1 < uVar4)),
                          (uint)local_44 + (uVar1 < uVar4));
      local_4c = CONCAT44((int)(uVar1 >> 3),(int)uVar1 << 0x1d | (uint)((uVar1 >> 3) >> 0x20));
      local_3c = CONCAT44(local_3c._4_4_ - (uint)((uint)local_3c < (uVar4 < uVar2)),
                          (uint)local_3c - (uVar4 < uVar2));
      param_2 = param_2 + 2;
      local_34 = local_34 + 1;
      lVar3 = CONCAT44((int)(uVar2 >> 1),local_54 << 0x1f | (uint)((uVar2 >> 1) >> 0x20));
    } while (local_34 != param_1);
  }
  FUN_00436c50((uint)local_44,(uint)((ulonglong)local_44 >> 0x20),(int *)in_EAX);
  FUN_00436c50((uint)local_4c,(uint)((ulonglong)local_4c >> 0x20),(int *)(in_EAX + 2));
  FUN_00436c50((uint)local_3c,(uint)((ulonglong)local_3c >> 0x20),(int *)(in_EAX + 4));
  FUN_00436c50((uint)lVar3,(uint)((ulonglong)lVar3 >> 0x20),(int *)(in_EAX + 6));
  return;
}

