
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0043c1b0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = *param_1;
  *param_2 = uVar1;
  uVar2 = param_1[1];
  uVar1 = uVar1 ^ _DAT_00461c20;
  param_2[1] = uVar2;
  uVar8 = param_1[2];
  param_2[2] = uVar8;
  uVar5 = param_1[3];
  param_2[3] = uVar5;
  uVar4 = param_1[4];
  param_2[4] = uVar4;
  uVar3 = param_1[5];
  param_2[5] = uVar3;
  uVar7 = param_1[6];
  param_2[6] = uVar7;
  uVar6 = param_1[7];
  param_2[7] = uVar6;
  uVar1 = uVar1 ^ *(uint *)(&DAT_00460420 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_0045fc20 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar6 >> 0x10 & 0xff) * 4);
  param_2[8] = uVar1;
  uVar2 = uVar2 ^ uVar1;
  uVar8 = uVar8 ^ uVar2;
  param_2[9] = uVar2;
  uVar5 = uVar5 ^ uVar8;
  param_2[10] = uVar8;
  param_2[0xb] = uVar5;
  uVar9 = *(uint *)(&DAT_0045fc20 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar5 >> 0x18) * 4) ^ uVar4 ^
          *(uint *)(&DAT_00460020 + (uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460420 + (uVar5 >> 0x10 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar9;
  param_2[0xc] = uVar9;
  uVar7 = uVar7 ^ uVar3;
  param_2[0xd] = uVar3;
  uVar6 = uVar6 ^ uVar7;
  param_2[0xe] = uVar7;
  uVar1 = uVar1 ^ _DAT_00461c24;
  param_2[0xf] = uVar6;
  uVar4 = uVar1 ^ *(uint *)(&DAT_00460420 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_0045fc20 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar6 >> 0x10 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar4;
  param_2[0x10] = uVar4;
  param_2[0x11] = uVar2;
  uVar8 = uVar8 ^ uVar2;
  uVar5 = uVar5 ^ uVar8;
  param_2[0x12] = uVar8;
  uVar1 = *(uint *)(&DAT_0045fc20 + (uVar5 & 0xff) * 4);
  param_2[0x13] = uVar5;
  uVar1 = uVar1 ^ *(uint *)(&DAT_00460820 + (uVar5 >> 0x18) * 4) ^ uVar9 ^
          *(uint *)(&DAT_00460020 + (uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460420 + (uVar5 >> 0x10 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar1;
  param_2[0x14] = uVar1;
  uVar7 = uVar7 ^ uVar3;
  param_2[0x15] = uVar3;
  uVar6 = uVar6 ^ uVar7;
  uVar4 = uVar4 ^ _DAT_00461c28;
  param_2[0x16] = uVar7;
  param_2[0x17] = uVar6;
  uVar4 = uVar4 ^ *(uint *)(&DAT_00460420 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_0045fc20 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar6 >> 0x10 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar4;
  param_2[0x18] = uVar4;
  uVar8 = uVar8 ^ uVar2;
  param_2[0x19] = uVar2;
  uVar5 = uVar5 ^ uVar8;
  param_2[0x1a] = uVar8;
  param_2[0x1b] = uVar5;
  uVar9 = *(uint *)(&DAT_0045fc20 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar5 >> 0x18) * 4) ^ uVar1 ^
          *(uint *)(&DAT_00460020 + (uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460420 + (uVar5 >> 0x10 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar9;
  param_2[0x1c] = uVar9;
  uVar7 = uVar7 ^ uVar3;
  param_2[0x1d] = uVar3;
  uVar6 = uVar6 ^ uVar7;
  uVar4 = uVar4 ^ _DAT_00461c2c;
  param_2[0x1e] = uVar7;
  uVar1 = *(uint *)(&DAT_00460420 + (uVar6 >> 0x18) * 4);
  param_2[0x1f] = uVar6;
  uVar1 = uVar4 ^ uVar1 ^ *(uint *)(&DAT_00460820 + (uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_0045fc20 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar6 >> 0x10 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar1;
  param_2[0x20] = uVar1;
  uVar8 = uVar8 ^ uVar2;
  param_2[0x21] = uVar2;
  uVar5 = uVar5 ^ uVar8;
  param_2[0x22] = uVar8;
  param_2[0x23] = uVar5;
  uVar4 = *(uint *)(&DAT_0045fc20 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar5 >> 0x18) * 4) ^ uVar9 ^
          *(uint *)(&DAT_00460020 + (uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460420 + (uVar5 >> 0x10 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  param_2[0x24] = uVar4;
  param_2[0x25] = uVar3;
  uVar1 = uVar1 ^ _DAT_00461c30;
  uVar7 = uVar7 ^ uVar3;
  param_2[0x26] = uVar7;
  uVar6 = uVar6 ^ uVar7;
  param_2[0x27] = uVar6;
  uVar1 = uVar1 ^ *(uint *)(&DAT_00460420 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_0045fc20 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar6 >> 0x10 & 0xff) * 4);
  param_2[0x28] = uVar1;
  uVar2 = uVar2 ^ uVar1;
  uVar8 = uVar8 ^ uVar2;
  param_2[0x29] = uVar2;
  uVar5 = uVar5 ^ uVar8;
  param_2[0x2a] = uVar8;
  param_2[0x2b] = uVar5;
  uVar4 = *(uint *)(&DAT_00460420 + (uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0045fc20 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar5 >> 0x18) * 4) ^ uVar4 ^
          *(uint *)(&DAT_00460020 + (uVar5 >> 8 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar4;
  param_2[0x2c] = uVar4;
  param_2[0x2d] = uVar3;
  uVar7 = uVar7 ^ uVar3;
  uVar6 = uVar6 ^ uVar7;
  param_2[0x2e] = uVar7;
  param_2[0x2f] = uVar6;
  uVar1 = uVar1 ^ _DAT_00461c34 ^ *(uint *)(&DAT_00460420 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_0045fc20 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar6 >> 0x10 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar1;
  param_2[0x30] = uVar1;
  uVar1 = uVar1 ^ _DAT_00461c38;
  uVar8 = uVar8 ^ uVar2;
  param_2[0x31] = uVar2;
  uVar5 = uVar5 ^ uVar8;
  param_2[0x32] = uVar8;
  param_2[0x33] = uVar5;
  uVar4 = *(uint *)(&DAT_0045fc20 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar5 >> 0x18) * 4) ^ uVar4 ^
          *(uint *)(&DAT_00460020 + (uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460420 + (uVar5 >> 0x10 & 0xff) * 4);
  param_2[0x34] = uVar4;
  uVar4 = uVar4 ^ uVar3;
  param_2[0x35] = uVar4;
  uVar4 = uVar4 ^ uVar7;
  uVar6 = uVar6 ^ uVar4;
  param_2[0x36] = uVar4;
  param_2[0x37] = uVar6;
  uVar1 = uVar1 ^ *(uint *)(&DAT_00460420 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_0045fc20 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar6 >> 0x10 & 0xff) * 4);
  param_2[0x38] = uVar1;
  uVar1 = uVar1 ^ uVar2;
  uVar8 = uVar8 ^ uVar1;
  param_2[0x39] = uVar1;
  param_2[0x3c] = 0;
  param_2[0x3a] = uVar8;
  *(undefined1 *)(param_2 + 0x3c) = 0xe0;
  param_2[0x3b] = uVar5 ^ uVar8;
  return 0;
}

