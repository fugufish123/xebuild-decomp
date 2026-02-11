
undefined4 __cdecl
FUN_00438e20(uint *param_1,uint *param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_20;
  
  if ((param_3 & 0xf) == 0) {
    iVar5 = (int)param_3 >> 4;
    local_20 = 0;
    if ((((uint)param_4 | (uint)param_2) & 3) == 0) {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar1 = param_1[1];
        uVar2 = param_1[2];
        uVar3 = param_1[3];
        uVar4 = *param_1;
        iVar6 = FUN_0043aca0(param_1,(undefined1 *)param_2,param_5);
        if (iVar6 != 0) goto LAB_00438ed0;
        *param_2 = *param_2 ^ *param_4;
        param_1 = param_1 + 4;
        param_2[1] = param_2[1] ^ param_4[1];
        param_2[2] = param_2[2] ^ param_4[2];
        param_2[3] = param_2[3] ^ param_4[3];
        param_2 = param_2 + 4;
        *param_4 = uVar4;
        param_4[1] = uVar1;
        param_4[2] = uVar2;
        param_4[3] = uVar3;
      }
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar1 = param_1[1];
        uVar2 = param_1[2];
        uVar3 = param_1[3];
        uVar4 = *param_1;
        iVar6 = FUN_0043aca0(param_1,(undefined1 *)param_2,param_5);
        if (iVar6 != 0) goto LAB_00438ed0;
        param_1 = param_1 + 4;
        *(byte *)param_2 = (byte)*param_2 ^ (byte)*param_4;
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_2 + 1) ^ *(byte *)((int)param_4 + 1);
        *(byte *)((int)param_2 + 2) = *(byte *)((int)param_2 + 2) ^ *(byte *)((int)param_4 + 2);
        *(byte *)((int)param_2 + 3) = *(byte *)((int)param_2 + 3) ^ *(byte *)((int)param_4 + 3);
        *(byte *)(param_2 + 1) = (byte)param_2[1] ^ (byte)param_4[1];
        *(byte *)((int)param_2 + 5) = *(byte *)((int)param_2 + 5) ^ *(byte *)((int)param_4 + 5);
        *(byte *)((int)param_2 + 6) = *(byte *)((int)param_2 + 6) ^ *(byte *)((int)param_4 + 6);
        *(byte *)((int)param_2 + 7) = *(byte *)((int)param_2 + 7) ^ *(byte *)((int)param_4 + 7);
        *(byte *)(param_2 + 2) = (byte)param_2[2] ^ (byte)param_4[2];
        *(byte *)((int)param_2 + 9) = *(byte *)((int)param_2 + 9) ^ *(byte *)((int)param_4 + 9);
        *(byte *)((int)param_2 + 10) = *(byte *)((int)param_2 + 10) ^ *(byte *)((int)param_4 + 10);
        *(byte *)((int)param_2 + 0xb) =
             *(byte *)((int)param_2 + 0xb) ^ *(byte *)((int)param_4 + 0xb);
        *(byte *)(param_2 + 3) = (byte)param_2[3] ^ (byte)param_4[3];
        *(byte *)((int)param_2 + 0xd) =
             *(byte *)((int)param_2 + 0xd) ^ *(byte *)((int)param_4 + 0xd);
        *(byte *)((int)param_2 + 0xe) =
             *(byte *)((int)param_2 + 0xe) ^ *(byte *)((int)param_4 + 0xe);
        *(byte *)((int)param_2 + 0xf) =
             *(byte *)((int)param_2 + 0xf) ^ *(byte *)((int)param_4 + 0xf);
        param_2 = param_2 + 4;
        *param_4 = uVar4;
        param_4[1] = uVar1;
        param_4[2] = uVar2;
        param_4[3] = uVar3;
      }
    }
  }
  else {
LAB_00438ed0:
    local_20 = 1;
  }
  return local_20;
}

