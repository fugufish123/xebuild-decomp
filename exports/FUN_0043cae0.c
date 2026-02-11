
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0043cae0(uint *param_1,uint *param_2)

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
  uint uVar10;
  uint uVar11;
  
  uVar7 = *param_1;
  *param_2 = uVar7;
  uVar10 = param_1[1];
  param_2[1] = uVar10;
  uVar1 = param_1[2];
  param_2[2] = uVar1;
  uVar11 = param_1[3];
  param_2[3] = uVar11;
  uVar4 = *(uint *)(&DAT_00460420 + (uVar11 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar11 & 0xff) * 4) ^ _DAT_00461c20 ^
          *(uint *)(&DAT_0045fc20 + (uVar11 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar11 >> 0x10 & 0xff) * 4);
  uVar8 = uVar1 ^ uVar10 ^ uVar7 ^ uVar11 ^ uVar4;
  uVar4 = uVar4 ^ uVar7;
  uVar5 = uVar4 ^ uVar10;
  uVar9 = *(uint *)(&DAT_0045cc20 + (uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_0045d820 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_0045d020 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0045d420 + (uVar4 >> 0x10 & 0xff) * 4);
  uVar7 = *(uint *)(&DAT_0045cc20 + (uVar5 & 0xff) * 4);
  param_2[4] = uVar9;
  uVar4 = uVar5 ^ uVar1;
  uVar2 = uVar7 ^ *(uint *)(&DAT_0045d820 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_0045d020 + (uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0045d420 + (uVar5 >> 0x10 & 0xff) * 4);
  param_2[5] = uVar2;
  uVar6 = uVar4 ^ uVar11;
  uVar3 = *(uint *)(&DAT_0045cc20 + (uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_0045d820 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(&DAT_0045d020 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0045d420 + (uVar4 >> 0x10 & 0xff) * 4);
  uVar7 = *(uint *)(&DAT_0045cc20 + (uVar6 & 0xff) * 4);
  uVar4 = *(uint *)(&DAT_0045d820 + (uVar6 >> 0x18) * 4);
  uVar5 = *(uint *)(&DAT_0045d020 + (uVar6 >> 8 & 0xff) * 4);
  param_2[6] = uVar3;
  uVar4 = uVar7 ^ uVar4 ^ uVar5 ^ *(uint *)(&DAT_0045d420 + (uVar6 >> 0x10 & 0xff) * 4);
  param_2[7] = uVar4;
  uVar7 = *(uint *)(&DAT_00460420 + (uVar8 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar8 & 0xff) * 4) ^ _DAT_00461c24 ^
          *(uint *)(&DAT_0045fc20 + (uVar8 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar8 >> 0x10 & 0xff) * 4);
  uVar5 = uVar10 ^ uVar11 ^ uVar7;
  uVar10 = *(uint *)(&DAT_0045cc20 + (uVar7 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d820 + (uVar7 >> 0x18) * 4) ^ uVar9 ^
           *(uint *)(&DAT_0045d020 + (uVar7 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d420 + (uVar7 >> 0x10 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar10;
  param_2[8] = uVar10;
  uVar3 = uVar3 ^ uVar2;
  param_2[9] = uVar2;
  uVar4 = uVar4 ^ uVar3;
  param_2[10] = uVar3;
  param_2[0xb] = uVar4;
  uVar7 = *(uint *)(&DAT_00460420 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar5 & 0xff) * 4) ^ _DAT_00461c28 ^
          *(uint *)(&DAT_0045fc20 + (uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar5 >> 0x10 & 0xff) * 4);
  uVar6 = uVar1 ^ uVar11 ^ uVar7;
  uVar10 = uVar10 ^ *(uint *)(&DAT_0045cc20 + (uVar7 & 0xff) * 4) ^
                    *(uint *)(&DAT_0045d820 + (uVar7 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar7 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d420 + (uVar7 >> 0x10 & 0xff) * 4);
  uVar7 = *(uint *)(&DAT_00460420 + (uVar6 >> 0x18) * 4);
  uVar2 = uVar2 ^ uVar10;
  param_2[0xc] = uVar10;
  uVar3 = uVar3 ^ uVar2;
  param_2[0xd] = uVar2;
  param_2[0xe] = uVar3;
  uVar4 = uVar4 ^ uVar3;
  param_2[0xf] = uVar4;
  uVar7 = uVar7 ^ *(uint *)(&DAT_00460820 + (uVar6 & 0xff) * 4) ^ _DAT_00461c2c ^
          *(uint *)(&DAT_0045fc20 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar6 >> 0x10 & 0xff) * 4);
  uVar11 = uVar11 ^ uVar7;
  uVar10 = uVar10 ^ *(uint *)(&DAT_0045cc20 + (uVar7 & 0xff) * 4) ^
                    *(uint *)(&DAT_0045d820 + (uVar7 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar7 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d420 + (uVar7 >> 0x10 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar10;
  param_2[0x10] = uVar10;
  uVar3 = uVar3 ^ uVar2;
  param_2[0x11] = uVar2;
  uVar4 = uVar4 ^ uVar3;
  param_2[0x12] = uVar3;
  param_2[0x13] = uVar4;
  uVar7 = *(uint *)(&DAT_00460420 + (uVar11 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar11 & 0xff) * 4) ^ _DAT_00461c30 ^
          *(uint *)(&DAT_0045fc20 + (uVar11 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar11 >> 0x10 & 0xff) * 4);
  uVar8 = uVar8 ^ uVar7;
  uVar10 = uVar10 ^ *(uint *)(&DAT_0045cc20 + (uVar7 & 0xff) * 4) ^
                    *(uint *)(&DAT_0045d820 + (uVar7 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar7 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d420 + (uVar7 >> 0x10 & 0xff) * 4);
  uVar7 = *(uint *)(&DAT_00460420 + (uVar8 >> 0x18) * 4);
  uVar2 = uVar2 ^ uVar10;
  param_2[0x14] = uVar10;
  uVar3 = uVar3 ^ uVar2;
  param_2[0x15] = uVar2;
  uVar4 = uVar4 ^ uVar3;
  param_2[0x16] = uVar3;
  param_2[0x17] = uVar4;
  uVar7 = uVar7 ^ *(uint *)(&DAT_00460820 + (uVar8 & 0xff) * 4) ^ _DAT_00461c34 ^
          *(uint *)(&DAT_0045fc20 + (uVar8 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar8 >> 0x10 & 0xff) * 4);
  uVar5 = uVar5 ^ uVar7;
  uVar10 = uVar10 ^ *(uint *)(&DAT_0045cc20 + (uVar7 & 0xff) * 4) ^
                    *(uint *)(&DAT_0045d820 + (uVar7 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar7 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d420 + (uVar7 >> 0x10 & 0xff) * 4);
  uVar7 = *(uint *)(&DAT_00460420 + (uVar5 >> 0x18) * 4);
  uVar2 = uVar2 ^ uVar10;
  param_2[0x18] = uVar10;
  uVar3 = uVar3 ^ uVar2;
  param_2[0x19] = uVar2;
  uVar4 = uVar4 ^ uVar3;
  param_2[0x1a] = uVar3;
  param_2[0x1b] = uVar4;
  uVar7 = uVar7 ^ *(uint *)(&DAT_00460820 + (uVar5 & 0xff) * 4) ^ _DAT_00461c38 ^
          *(uint *)(&DAT_0045fc20 + (uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar5 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 ^ uVar7;
  uVar10 = uVar10 ^ *(uint *)(&DAT_0045cc20 + (uVar7 & 0xff) * 4) ^
                    *(uint *)(&DAT_0045d820 + (uVar7 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar7 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d420 + (uVar7 >> 0x10 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar10;
  uVar3 = uVar3 ^ uVar2;
  param_2[0x1c] = uVar10;
  param_2[0x1d] = uVar2;
  param_2[0x1e] = uVar3;
  uVar4 = uVar4 ^ uVar3;
  param_2[0x1f] = uVar4;
  uVar7 = *(uint *)(&DAT_00460420 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar6 & 0xff) * 4) ^ _DAT_00461c3c ^
          *(uint *)(&DAT_0045fc20 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar6 >> 0x10 & 0xff) * 4);
  uVar11 = uVar11 ^ uVar7;
  uVar10 = uVar10 ^ *(uint *)(&DAT_0045cc20 + (uVar7 & 0xff) * 4) ^
                    *(uint *)(&DAT_0045d820 + (uVar7 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar7 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d420 + (uVar7 >> 0x10 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar10;
  param_2[0x20] = uVar10;
  uVar3 = uVar3 ^ uVar2;
  param_2[0x21] = uVar2;
  param_2[0x22] = uVar3;
  uVar4 = uVar4 ^ uVar3;
  param_2[0x23] = uVar4;
  uVar7 = *(uint *)(&DAT_00460420 + (uVar11 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar11 & 0xff) * 4) ^ _DAT_00461c40 ^
          *(uint *)(&DAT_0045fc20 + (uVar11 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar11 >> 0x10 & 0xff) * 4);
  uVar8 = uVar8 ^ uVar7;
  uVar7 = uVar10 ^ *(uint *)(&DAT_0045cc20 + (uVar7 & 0xff) * 4) ^
                   *(uint *)(&DAT_0045d820 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(&DAT_0045d020 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0045d420 + (uVar7 >> 0x10 & 0xff) * 4);
  param_2[0x24] = uVar7;
  uVar7 = uVar7 ^ uVar2;
  param_2[0x25] = uVar7;
  uVar7 = uVar7 ^ uVar3;
  param_2[0x26] = uVar7;
  param_2[0x27] = uVar7 ^ uVar4;
  uVar5 = uVar5 ^ _DAT_00461c44;
  uVar7 = *(uint *)(&DAT_00460420 + (uVar8 >> 0x18) * 4);
  uVar10 = *(uint *)(&DAT_00460820 + (uVar8 & 0xff) * 4);
  param_2[0x3c] = 0;
  uVar1 = *(uint *)(&DAT_0045fc20 + (uVar8 >> 8 & 0xff) * 4);
  *(undefined1 *)(param_2 + 0x3c) = 0xa0;
  uVar7 = uVar5 ^ uVar7 ^ uVar10 ^ uVar1 ^ *(uint *)(&DAT_00460020 + (uVar8 >> 0x10 & 0xff) * 4);
  param_2[0x2b] = uVar7;
  param_2[0x29] = uVar11 ^ uVar7;
  param_2[0x2a] = uVar8 ^ uVar7;
  param_2[0x28] = uVar6 ^ uVar11 ^ uVar8 ^ uVar7;
  return 0;
}

