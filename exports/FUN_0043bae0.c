
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0043bae0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = *param_1;
  *param_2 = uVar3;
  uVar7 = param_1[1];
  uVar3 = uVar3 ^ _DAT_00461c20;
  param_2[1] = uVar7;
  uVar6 = param_1[2];
  param_2[2] = uVar6;
  uVar5 = param_1[3];
  param_2[3] = uVar5;
  uVar3 = *(uint *)(&DAT_00460020 + (uVar5 >> 0x10 & 0xff) * 4) ^
          uVar3 ^ *(uint *)(&DAT_00460420 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_0045fc20 + (uVar5 >> 8 & 0xff) * 4);
  uVar7 = uVar7 ^ uVar3;
  param_2[4] = uVar3;
  uVar3 = uVar3 ^ _DAT_00461c24;
  uVar6 = uVar6 ^ uVar7;
  param_2[5] = uVar7;
  uVar5 = uVar5 ^ uVar6;
  param_2[6] = uVar6;
  param_2[7] = uVar5;
  uVar3 = *(uint *)(&DAT_00460020 + (uVar5 >> 0x10 & 0xff) * 4) ^
          uVar3 ^ *(uint *)(&DAT_00460420 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_0045fc20 + (uVar5 >> 8 & 0xff) * 4);
  uVar7 = uVar7 ^ uVar3;
  param_2[8] = uVar3;
  uVar6 = uVar6 ^ uVar7;
  param_2[9] = uVar7;
  uVar5 = uVar5 ^ uVar6;
  param_2[10] = uVar6;
  param_2[0xb] = uVar5;
  uVar3 = *(uint *)(&DAT_00460020 + (uVar5 >> 0x10 & 0xff) * 4) ^
          uVar3 ^ _DAT_00461c28 ^ *(uint *)(&DAT_00460420 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_0045fc20 + (uVar5 >> 8 & 0xff) * 4);
  uVar7 = uVar7 ^ uVar3;
  param_2[0xc] = uVar3;
  uVar3 = uVar3 ^ _DAT_00461c2c;
  uVar6 = uVar6 ^ uVar7;
  param_2[0xd] = uVar7;
  uVar5 = uVar5 ^ uVar6;
  param_2[0xe] = uVar6;
  param_2[0xf] = uVar5;
  uVar3 = *(uint *)(&DAT_00460020 + (uVar5 >> 0x10 & 0xff) * 4) ^
          uVar3 ^ *(uint *)(&DAT_00460420 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_0045fc20 + (uVar5 >> 8 & 0xff) * 4);
  uVar7 = uVar7 ^ uVar3;
  param_2[0x10] = uVar3;
  uVar3 = uVar3 ^ _DAT_00461c30;
  uVar6 = uVar6 ^ uVar7;
  param_2[0x11] = uVar7;
  uVar5 = uVar5 ^ uVar6;
  param_2[0x12] = uVar6;
  param_2[0x13] = uVar5;
  uVar3 = *(uint *)(&DAT_00460020 + (uVar5 >> 0x10 & 0xff) * 4) ^
          uVar3 ^ *(uint *)(&DAT_00460420 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_0045fc20 + (uVar5 >> 8 & 0xff) * 4);
  uVar7 = uVar7 ^ uVar3;
  param_2[0x14] = uVar3;
  uVar3 = uVar3 ^ _DAT_00461c34;
  uVar6 = uVar6 ^ uVar7;
  param_2[0x15] = uVar7;
  uVar5 = uVar5 ^ uVar6;
  param_2[0x16] = uVar6;
  param_2[0x17] = uVar5;
  uVar3 = *(uint *)(&DAT_00460020 + (uVar5 >> 0x10 & 0xff) * 4) ^
          uVar3 ^ *(uint *)(&DAT_00460420 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_0045fc20 + (uVar5 >> 8 & 0xff) * 4);
  uVar7 = uVar7 ^ uVar3;
  param_2[0x18] = uVar3;
  uVar3 = uVar3 ^ _DAT_00461c38;
  uVar6 = uVar6 ^ uVar7;
  param_2[0x19] = uVar7;
  uVar5 = uVar5 ^ uVar6;
  param_2[0x1a] = uVar6;
  param_2[0x1b] = uVar5;
  uVar3 = *(uint *)(&DAT_00460020 + (uVar5 >> 0x10 & 0xff) * 4) ^
          uVar3 ^ *(uint *)(&DAT_00460420 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_0045fc20 + (uVar5 >> 8 & 0xff) * 4);
  uVar7 = uVar7 ^ uVar3;
  param_2[0x1c] = uVar3;
  uVar3 = uVar3 ^ _DAT_00461c3c;
  uVar6 = uVar6 ^ uVar7;
  param_2[0x1d] = uVar7;
  uVar5 = uVar5 ^ uVar6;
  param_2[0x1e] = uVar6;
  param_2[0x1f] = uVar5;
  uVar3 = *(uint *)(&DAT_00460020 + (uVar5 >> 0x10 & 0xff) * 4) ^
          uVar3 ^ *(uint *)(&DAT_00460420 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_0045fc20 + (uVar5 >> 8 & 0xff) * 4);
  uVar7 = uVar7 ^ uVar3;
  param_2[0x20] = uVar3;
  uVar3 = uVar3 ^ _DAT_00461c40;
  uVar6 = uVar6 ^ uVar7;
  param_2[0x21] = uVar7;
  uVar5 = uVar5 ^ uVar6;
  param_2[0x22] = uVar6;
  param_2[0x23] = uVar5;
  uVar4 = *(uint *)(&DAT_00460020 + (uVar5 >> 0x10 & 0xff) * 4) ^
          uVar3 ^ *(uint *)(&DAT_00460420 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_0045fc20 + (uVar5 >> 8 & 0xff) * 4);
  uVar7 = uVar7 ^ uVar4;
  param_2[0x24] = uVar4;
  uVar4 = uVar4 ^ _DAT_00461c44;
  uVar6 = uVar6 ^ uVar7;
  param_2[0x25] = uVar7;
  uVar5 = uVar5 ^ uVar6;
  param_2[0x26] = uVar6;
  param_2[0x27] = uVar5;
  uVar3 = *(uint *)(&DAT_00460420 + (uVar5 >> 0x18) * 4);
  uVar1 = *(uint *)(&DAT_00460820 + (uVar5 & 0xff) * 4);
  param_2[0x3c] = 0;
  uVar2 = *(uint *)(&DAT_0045fc20 + (uVar5 >> 8 & 0xff) * 4);
  *(undefined1 *)(param_2 + 0x3c) = 0xa0;
  uVar3 = *(uint *)(&DAT_00460020 + (uVar5 >> 0x10 & 0xff) * 4) ^ uVar4 ^ uVar3 ^ uVar1 ^ uVar2;
  param_2[0x28] = uVar3;
  uVar3 = uVar3 ^ uVar7;
  uVar6 = uVar6 ^ uVar3;
  param_2[0x29] = uVar3;
  param_2[0x2a] = uVar6;
  param_2[0x2b] = uVar5 ^ uVar6;
  return 0;
}

