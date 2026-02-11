
undefined4 __cdecl
FUN_00438ca0(uint *param_1,uint *param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_20;
  
  if ((param_3 & 0xf) == 0) {
    iVar5 = (int)param_3 >> 4;
    local_20 = 0;
    if ((((uint)param_4 | (uint)param_1) & 3) == 0) {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *param_4 = *param_4 ^ *param_1;
        param_4[1] = param_4[1] ^ param_1[1];
        param_4[2] = param_4[2] ^ param_1[2];
        param_4[3] = param_4[3] ^ param_1[3];
        iVar4 = FUN_00439ec0(param_4,(undefined1 *)param_4,param_5);
        if (iVar4 != 0) goto LAB_00438d32;
        uVar1 = param_4[2];
        param_1 = param_1 + 4;
        uVar2 = param_4[3];
        uVar3 = *param_4;
        param_2[1] = param_4[1];
        param_2[2] = uVar1;
        *param_2 = uVar3;
        param_2[3] = uVar2;
        param_2 = param_2 + 4;
      }
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(byte *)param_4 = (byte)*param_4 ^ (byte)*param_1;
        *(byte *)((int)param_4 + 1) = *(byte *)((int)param_4 + 1) ^ *(byte *)((int)param_1 + 1);
        *(byte *)((int)param_4 + 2) = *(byte *)((int)param_4 + 2) ^ *(byte *)((int)param_1 + 2);
        *(byte *)((int)param_4 + 3) = *(byte *)((int)param_4 + 3) ^ *(byte *)((int)param_1 + 3);
        *(byte *)(param_4 + 1) = (byte)param_4[1] ^ (byte)param_1[1];
        *(byte *)((int)param_4 + 5) = *(byte *)((int)param_4 + 5) ^ *(byte *)((int)param_1 + 5);
        *(byte *)((int)param_4 + 6) = *(byte *)((int)param_4 + 6) ^ *(byte *)((int)param_1 + 6);
        *(byte *)((int)param_4 + 7) = *(byte *)((int)param_4 + 7) ^ *(byte *)((int)param_1 + 7);
        *(byte *)(param_4 + 2) = (byte)param_4[2] ^ (byte)param_1[2];
        *(byte *)((int)param_4 + 9) = *(byte *)((int)param_4 + 9) ^ *(byte *)((int)param_1 + 9);
        *(byte *)((int)param_4 + 10) = *(byte *)((int)param_4 + 10) ^ *(byte *)((int)param_1 + 10);
        *(byte *)((int)param_4 + 0xb) =
             *(byte *)((int)param_4 + 0xb) ^ *(byte *)((int)param_1 + 0xb);
        *(byte *)(param_4 + 3) = (byte)param_4[3] ^ (byte)param_1[3];
        *(byte *)((int)param_4 + 0xd) =
             *(byte *)((int)param_4 + 0xd) ^ *(byte *)((int)param_1 + 0xd);
        *(byte *)((int)param_4 + 0xe) =
             *(byte *)((int)param_4 + 0xe) ^ *(byte *)((int)param_1 + 0xe);
        *(byte *)((int)param_4 + 0xf) =
             *(byte *)((int)param_4 + 0xf) ^ *(byte *)((int)param_1 + 0xf);
        iVar4 = FUN_00439ec0(param_4,(undefined1 *)param_4,param_5);
        if (iVar4 != 0) goto LAB_00438d32;
        uVar1 = param_4[2];
        param_1 = param_1 + 4;
        uVar2 = param_4[3];
        uVar3 = *param_4;
        param_2[1] = param_4[1];
        param_2[2] = uVar1;
        *param_2 = uVar3;
        param_2[3] = uVar2;
        param_2 = param_2 + 4;
      }
    }
  }
  else {
LAB_00438d32:
    local_20 = 1;
  }
  return local_20;
}

