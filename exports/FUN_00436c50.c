
void __cdecl FUN_00436c50(uint param_1,uint param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((uint)param_3 & 7) != 0) {
    *(char *)((int)param_3 + 7) = (char)param_1;
    *(char *)((int)param_3 + 3) = (char)param_2;
    *(char *)((int)param_3 + 6) = (char)(param_1 >> 8);
    *(char *)((int)param_3 + 5) = (char)(param_1 >> 0x10);
    *(char *)(param_3 + 1) = (char)(param_1 >> 0x18);
    *(char *)((int)param_3 + 2) = (char)(param_2 >> 8);
    *(char *)((int)param_3 + 1) = (char)(param_2 >> 0x10);
    *(char *)param_3 = (char)(param_2 >> 0x18);
    return;
  }
  uVar2 = param_2 * 0x1000000 + (param_2 >> 0x18);
  uVar3 = (param_2 & 0xff00) * 0x100;
  uVar1 = uVar3 + uVar2;
  uVar4 = param_2 >> 8 & 0xff00;
  *param_3 = uVar1 + uVar4;
  param_3[1] = (param_1 & 0xff00) * 0x100 + param_1 * 0x1000000 + (param_1 >> 8 & 0xff00) +
               (param_1 >> 0x18) + (uint)CARRY4(param_2 * 0x1000000,param_2 >> 0x18) +
               (uint)CARRY4(uVar3,uVar2) + (uint)CARRY4(uVar1,uVar4);
  return;
}

