
void __cdecl FUN_00442630(uint *param_1,uint param_2,byte *param_3,byte *param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *local_20;
  byte *local_1c;
  uint local_18;
  
  uVar8 = param_2 >> 3;
  uVar7 = *param_1;
  uVar3 = param_1[1];
  if (uVar8 != 0) {
    local_1c = param_4;
    local_20 = param_3;
    local_18 = uVar8;
    do {
      uVar4 = uVar7 + 1 & 0xff;
      uVar5 = uVar4 + 1 & 0xff;
      uVar7 = param_1[uVar4 + 2];
      uVar2 = uVar3 + uVar7 & 0xff;
      uVar3 = param_1[uVar2 + 2];
      param_1[uVar4 + 2] = uVar3;
      param_1[uVar2 + 2] = uVar7;
      *local_1c = (byte)param_1[(uVar7 + uVar3 & 0xff) + 2] ^ *local_20;
      uVar4 = uVar5 + 1 & 0xff;
      uVar7 = param_1[uVar5 + 2];
      uVar2 = uVar2 + uVar7 & 0xff;
      uVar3 = param_1[uVar2 + 2];
      param_1[uVar5 + 2] = uVar3;
      param_1[uVar2 + 2] = uVar7;
      local_1c[1] = (byte)param_1[(uVar7 + uVar3 & 0xff) + 2] ^ local_20[1];
      uVar5 = uVar4 + 1 & 0xff;
      uVar7 = param_1[uVar4 + 2];
      uVar2 = uVar2 + uVar7 & 0xff;
      uVar3 = param_1[uVar2 + 2];
      param_1[uVar4 + 2] = uVar3;
      param_1[uVar2 + 2] = uVar7;
      local_1c[2] = (byte)param_1[(uVar7 + uVar3 & 0xff) + 2] ^ local_20[2];
      uVar4 = uVar5 + 1 & 0xff;
      uVar7 = param_1[uVar5 + 2];
      uVar2 = uVar2 + uVar7 & 0xff;
      uVar3 = param_1[uVar2 + 2];
      param_1[uVar5 + 2] = uVar3;
      param_1[uVar2 + 2] = uVar7;
      local_1c[3] = (byte)param_1[(uVar7 + uVar3 & 0xff) + 2] ^ local_20[3];
      uVar5 = uVar4 + 1 & 0xff;
      uVar7 = param_1[uVar4 + 2];
      uVar2 = uVar2 + uVar7 & 0xff;
      uVar3 = param_1[uVar2 + 2];
      param_1[uVar4 + 2] = uVar3;
      param_1[uVar2 + 2] = uVar7;
      local_1c[4] = (byte)param_1[(uVar7 + uVar3 & 0xff) + 2] ^ local_20[4];
      uVar6 = uVar5 + 1 & 0xff;
      uVar7 = param_1[uVar5 + 2];
      uVar2 = uVar2 + uVar7 & 0xff;
      uVar3 = param_1[uVar2 + 2];
      param_1[uVar5 + 2] = uVar3;
      param_1[uVar2 + 2] = uVar7;
      local_1c[5] = (byte)param_1[(uVar7 + uVar3 & 0xff) + 2] ^ local_20[5];
      uVar7 = uVar6 + 1 & 0xff;
      uVar3 = param_1[uVar6 + 2];
      uVar4 = uVar2 + uVar3 & 0xff;
      uVar2 = param_1[uVar4 + 2];
      param_1[uVar6 + 2] = uVar2;
      param_1[uVar4 + 2] = uVar3;
      local_1c[6] = (byte)param_1[(uVar3 + uVar2 & 0xff) + 2] ^ local_20[6];
      uVar2 = param_1[uVar7 + 2];
      uVar3 = uVar4 + uVar2 & 0xff;
      uVar4 = param_1[uVar3 + 2];
      param_1[uVar7 + 2] = uVar4;
      param_1[uVar3 + 2] = uVar2;
      pbVar1 = local_20 + 7;
      local_20 = local_20 + 8;
      local_1c[7] = (byte)param_1[(uVar2 + uVar4 & 0xff) + 2] ^ *pbVar1;
      local_18 = local_18 - 1;
      local_1c = local_1c + 8;
    } while (local_18 != 0);
    param_3 = param_3 + uVar8 * 8;
    param_4 = param_4 + uVar8 * 8;
  }
  uVar8 = param_2 & 7;
  if (uVar8 != 0) {
    uVar7 = uVar7 + 1 & 0xff;
    uVar2 = param_1[uVar7 + 2];
    uVar3 = uVar3 + uVar2 & 0xff;
    uVar4 = param_1[uVar3 + 2];
    param_1[uVar7 + 2] = uVar4;
    param_1[uVar3 + 2] = uVar2;
    *param_4 = (byte)param_1[(uVar2 + uVar4 & 0xff) + 2] ^ *param_3;
    if (uVar8 != 1) {
      uVar7 = uVar7 + 1 & 0xff;
      uVar2 = param_1[uVar7 + 2];
      uVar3 = uVar3 + uVar2 & 0xff;
      uVar4 = param_1[uVar3 + 2];
      param_1[uVar7 + 2] = uVar4;
      param_1[uVar3 + 2] = uVar2;
      param_4[1] = (byte)param_1[(uVar2 + uVar4 & 0xff) + 2] ^ param_3[1];
      if (uVar8 != 2) {
        uVar7 = uVar7 + 1 & 0xff;
        uVar2 = param_1[uVar7 + 2];
        uVar3 = uVar3 + uVar2 & 0xff;
        uVar4 = param_1[uVar3 + 2];
        param_1[uVar7 + 2] = uVar4;
        param_1[uVar3 + 2] = uVar2;
        param_4[2] = (byte)param_1[(uVar2 + uVar4 & 0xff) + 2] ^ param_3[2];
        if (uVar8 != 3) {
          uVar7 = uVar7 + 1 & 0xff;
          uVar2 = param_1[uVar7 + 2];
          uVar3 = uVar3 + uVar2 & 0xff;
          uVar4 = param_1[uVar3 + 2];
          param_1[uVar7 + 2] = uVar4;
          param_1[uVar3 + 2] = uVar2;
          param_4[3] = (byte)param_1[(uVar2 + uVar4 & 0xff) + 2] ^ param_3[3];
          if (uVar8 != 4) {
            uVar7 = uVar7 + 1 & 0xff;
            uVar2 = param_1[uVar7 + 2];
            uVar3 = uVar3 + uVar2 & 0xff;
            uVar4 = param_1[uVar3 + 2];
            param_1[uVar7 + 2] = uVar4;
            param_1[uVar3 + 2] = uVar2;
            param_4[4] = (byte)param_1[(uVar2 + uVar4 & 0xff) + 2] ^ param_3[4];
            if (uVar8 != 5) {
              uVar7 = uVar7 + 1 & 0xff;
              uVar2 = param_1[uVar7 + 2];
              uVar3 = uVar3 + uVar2 & 0xff;
              uVar4 = param_1[uVar3 + 2];
              param_1[uVar7 + 2] = uVar4;
              param_1[uVar3 + 2] = uVar2;
              param_4[5] = (byte)param_1[(uVar2 + uVar4 & 0xff) + 2] ^ param_3[5];
              if (uVar8 != 6) {
                uVar7 = uVar7 + 1 & 0xff;
                uVar8 = param_1[uVar7 + 2];
                uVar3 = uVar3 + uVar8 & 0xff;
                uVar2 = param_1[uVar3 + 2];
                param_1[uVar7 + 2] = uVar2;
                param_1[uVar3 + 2] = uVar8;
                param_4[6] = (byte)param_1[(uVar8 + uVar2 & 0xff) + 2] ^ param_3[6];
              }
            }
          }
        }
      }
    }
  }
  *param_1 = uVar7;
  param_1[1] = uVar3;
  return;
}

