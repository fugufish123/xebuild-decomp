
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0043d150(uint *param_1,uint *param_2)

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
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar7 = *param_1;
  *param_2 = uVar7;
  uVar2 = param_1[1];
  param_2[1] = uVar2;
  uVar4 = param_1[2];
  param_2[2] = uVar4;
  uVar5 = param_1[3];
  param_2[3] = uVar5;
  uVar14 = param_1[4];
  param_2[4] = *(uint *)(&DAT_0045cc20 + (uVar14 & 0xff) * 4) ^
               *(uint *)(&DAT_0045d820 + (uVar14 >> 0x18) * 4) ^
               *(uint *)(&DAT_0045d020 + (uVar14 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_0045d420 + (uVar14 >> 0x10 & 0xff) * 4);
  uVar13 = param_1[5];
  uVar10 = uVar13 >> 8 & 0xff;
  uVar1 = uVar13 >> 0x10 & 0xff;
  uVar7 = uVar7 ^ _DAT_00461c20;
  uVar3 = *(uint *)(&DAT_00460420 + (uVar13 >> 0x18) * 4);
  uVar12 = *(uint *)(&DAT_00460820 + (uVar13 & 0xff) * 4);
  uVar6 = *(uint *)(&DAT_0045fc20 + uVar10 * 4);
  param_2[5] = *(uint *)(&DAT_0045cc20 + (uVar13 & 0xff) * 4) ^
               *(uint *)(&DAT_0045d820 + (uVar13 >> 0x18) * 4) ^
               *(uint *)(&DAT_0045d020 + uVar10 * 4) ^ *(uint *)(&DAT_0045d420 + uVar1 * 4);
  uVar8 = uVar7 ^ uVar3 ^ uVar12 ^ uVar6 ^ *(uint *)(&DAT_00460020 + uVar1 * 4);
  uVar2 = uVar2 ^ uVar8;
  uVar11 = *(uint *)(&DAT_0045cc20 + (uVar8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d820 + (uVar8 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar8 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d420 + (uVar8 >> 0x10 & 0xff) * 4);
  uVar7 = *(uint *)(&DAT_0045cc20 + (uVar2 & 0xff) * 4);
  uVar3 = *(uint *)(&DAT_0045d820 + (uVar2 >> 0x18) * 4);
  uVar12 = *(uint *)(&DAT_0045d020 + (uVar2 >> 8 & 0xff) * 4);
  param_2[6] = uVar11;
  uVar3 = *(uint *)(&DAT_0045d420 + (uVar2 >> 0x10 & 0xff) * 4) ^ uVar7 ^ uVar3 ^ uVar12;
  param_2[7] = uVar3;
  uVar4 = uVar4 ^ uVar2;
  uVar10 = *(uint *)(&DAT_0045cc20 + (uVar4 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d820 + (uVar4 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar4 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d420 + (uVar4 >> 0x10 & 0xff) * 4);
  param_2[8] = uVar10;
  uVar5 = uVar5 ^ uVar4;
  uVar14 = uVar14 ^ uVar5;
  uVar1 = *(uint *)(&DAT_0045cc20 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_0045d820 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(&DAT_0045d020 + (uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0045d420 + (uVar5 >> 0x10 & 0xff) * 4);
  uVar7 = *(uint *)(&DAT_0045cc20 + (uVar14 & 0xff) * 4);
  param_2[9] = uVar1;
  uVar9 = uVar7 ^ *(uint *)(&DAT_0045d820 + (uVar14 >> 0x18) * 4) ^
          *(uint *)(&DAT_0045d020 + (uVar14 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0045d420 + (uVar14 >> 0x10 & 0xff) * 4);
  param_2[10] = uVar9;
  uVar13 = uVar13 ^ uVar14;
  uVar12 = uVar13 >> 0x10 & 0xff;
  uVar7 = *(uint *)(&DAT_0045d420 + uVar12 * 4) ^
          *(uint *)(&DAT_0045cc20 + (uVar13 & 0xff) * 4) ^
          *(uint *)(&DAT_0045d820 + (uVar13 >> 0x18) * 4) ^
          *(uint *)(&DAT_0045d020 + (uVar13 >> 8 & 0xff) * 4);
  param_2[0xb] = uVar7;
  uVar6 = *(uint *)(&DAT_00460420 + (uVar13 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar13 & 0xff) * 4) ^ _DAT_00461c24 ^
          *(uint *)(&DAT_0045fc20 + (uVar13 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + uVar12 * 4);
  uVar12 = *(uint *)(&DAT_0045d420 + (uVar6 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_0045cc20 + (uVar6 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d820 + (uVar6 >> 0x18) * 4) ^ uVar11 ^
           *(uint *)(&DAT_0045d020 + (uVar6 >> 8 & 0xff) * 4);
  uVar3 = uVar3 ^ uVar12;
  param_2[0xc] = uVar12;
  param_2[0xd] = uVar3;
  uVar2 = uVar2 ^ uVar8 ^ uVar6;
  uVar4 = uVar4 ^ uVar2;
  uVar10 = uVar10 ^ uVar3;
  param_2[0xe] = uVar10;
  uVar5 = uVar5 ^ uVar4;
  uVar14 = uVar14 ^ uVar5;
  uVar13 = uVar13 ^ uVar14;
  uVar1 = uVar1 ^ uVar10;
  uVar9 = uVar9 ^ uVar1;
  param_2[0xf] = uVar1;
  uVar7 = uVar7 ^ uVar9;
  param_2[0x11] = uVar7;
  param_2[0x10] = uVar9;
  uVar11 = *(uint *)(&DAT_00460420 + (uVar13 >> 0x18) * 4) ^
           *(uint *)(&DAT_00460820 + (uVar13 & 0xff) * 4) ^ _DAT_00461c28 ^
           *(uint *)(&DAT_0045fc20 + (uVar13 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_00460020 + (uVar13 >> 0x10 & 0xff) * 4);
  uVar6 = uVar8 ^ uVar6 ^ uVar11;
  uVar12 = uVar12 ^ *(uint *)(&DAT_0045cc20 + (uVar11 & 0xff) * 4) ^
                    *(uint *)(&DAT_0045d820 + (uVar11 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar11 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d420 + (uVar11 >> 0x10 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar6;
  uVar3 = uVar3 ^ uVar12;
  param_2[0x12] = uVar12;
  param_2[0x13] = uVar3;
  uVar4 = uVar4 ^ uVar2;
  uVar10 = uVar10 ^ uVar3;
  param_2[0x14] = uVar10;
  uVar5 = uVar5 ^ uVar4;
  uVar1 = uVar1 ^ uVar10;
  uVar9 = uVar9 ^ uVar1;
  param_2[0x15] = uVar1;
  uVar14 = uVar14 ^ uVar5;
  uVar13 = uVar13 ^ uVar14;
  param_2[0x16] = uVar9;
  uVar7 = uVar7 ^ uVar9;
  param_2[0x17] = uVar7;
  uVar8 = *(uint *)(&DAT_00460420 + (uVar13 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar13 & 0xff) * 4) ^ _DAT_00461c2c ^
          *(uint *)(&DAT_0045fc20 + (uVar13 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar13 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 ^ uVar8;
  uVar12 = uVar12 ^ *(uint *)(&DAT_0045cc20 + (uVar8 & 0xff) * 4) ^
                    *(uint *)(&DAT_0045d820 + (uVar8 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar8 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d420 + (uVar8 >> 0x10 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar6;
  uVar3 = uVar3 ^ uVar12;
  param_2[0x18] = uVar12;
  uVar4 = uVar4 ^ uVar2;
  param_2[0x19] = uVar3;
  uVar10 = uVar10 ^ uVar3;
  param_2[0x1a] = uVar10;
  uVar5 = uVar5 ^ uVar4;
  uVar1 = uVar1 ^ uVar10;
  uVar9 = uVar9 ^ uVar1;
  param_2[0x1b] = uVar1;
  uVar14 = uVar14 ^ uVar5;
  param_2[0x1c] = uVar9;
  uVar13 = uVar13 ^ uVar14;
  uVar7 = uVar7 ^ uVar9;
  param_2[0x1d] = uVar7;
  uVar8 = *(uint *)(&DAT_00460420 + (uVar13 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar13 & 0xff) * 4) ^ _DAT_00461c30 ^
          *(uint *)(&DAT_0045fc20 + (uVar13 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar13 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 ^ uVar8;
  uVar2 = uVar2 ^ uVar6;
  uVar12 = uVar12 ^ *(uint *)(&DAT_0045cc20 + (uVar8 & 0xff) * 4) ^
                    *(uint *)(&DAT_0045d820 + (uVar8 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar8 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d420 + (uVar8 >> 0x10 & 0xff) * 4);
  uVar4 = uVar4 ^ uVar2;
  uVar3 = uVar3 ^ uVar12;
  param_2[0x1e] = uVar12;
  uVar10 = uVar10 ^ uVar3;
  param_2[0x1f] = uVar3;
  param_2[0x20] = uVar10;
  uVar5 = uVar5 ^ uVar4;
  uVar1 = uVar1 ^ uVar10;
  param_2[0x21] = uVar1;
  uVar14 = uVar14 ^ uVar5;
  uVar13 = uVar13 ^ uVar14;
  uVar9 = uVar9 ^ uVar1;
  param_2[0x22] = uVar9;
  uVar7 = uVar7 ^ uVar9;
  param_2[0x23] = uVar7;
  uVar8 = *(uint *)(&DAT_00460420 + (uVar13 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar13 & 0xff) * 4) ^ _DAT_00461c34 ^
          *(uint *)(&DAT_0045fc20 + (uVar13 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar13 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 ^ uVar8;
  uVar12 = uVar12 ^ *(uint *)(&DAT_0045cc20 + (uVar8 & 0xff) * 4) ^
                    *(uint *)(&DAT_0045d820 + (uVar8 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar8 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d420 + (uVar8 >> 0x10 & 0xff) * 4);
  param_2[0x24] = uVar12;
  uVar3 = uVar3 ^ uVar12;
  uVar2 = uVar2 ^ uVar6;
  param_2[0x25] = uVar3;
  uVar10 = uVar10 ^ uVar3;
  uVar4 = uVar4 ^ uVar2;
  param_2[0x26] = uVar10;
  uVar1 = uVar1 ^ uVar10;
  uVar5 = uVar5 ^ uVar4;
  param_2[0x27] = uVar1;
  uVar9 = uVar9 ^ uVar1;
  param_2[0x28] = uVar9;
  uVar14 = uVar13 ^ uVar14 ^ uVar5;
  uVar7 = uVar7 ^ uVar9;
  param_2[0x29] = uVar7;
  uVar14 = *(uint *)(&DAT_00460420 + (uVar14 >> 0x18) * 4) ^
           *(uint *)(&DAT_00460820 + (uVar14 & 0xff) * 4) ^ _DAT_00461c38 ^
           *(uint *)(&DAT_0045fc20 + (uVar14 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_00460020 + (uVar14 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 ^ uVar14;
  uVar14 = *(uint *)(&DAT_0045d420 + (uVar14 >> 0x10 & 0xff) * 4) ^
           uVar12 ^ *(uint *)(&DAT_0045cc20 + (uVar14 & 0xff) * 4) ^
                    *(uint *)(&DAT_0045d820 + (uVar14 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar14 >> 8 & 0xff) * 4);
  param_2[0x2a] = uVar14;
  uVar14 = uVar14 ^ uVar3;
  uVar2 = uVar2 ^ uVar6;
  uVar4 = uVar4 ^ uVar2;
  param_2[0x2b] = uVar14;
  uVar14 = uVar14 ^ uVar10;
  param_2[0x2c] = uVar14;
  uVar14 = uVar14 ^ uVar1;
  param_2[0x2d] = uVar14;
  uVar14 = uVar14 ^ uVar9;
  uVar6 = uVar6 ^ _DAT_00461c3c;
  uVar5 = uVar5 ^ uVar4;
  param_2[0x2e] = uVar14;
  param_2[0x3c] = 0;
  *(undefined1 *)(param_2 + 0x3c) = 0xc0;
  uVar13 = uVar13 ^ uVar5;
  param_2[0x2f] = uVar14 ^ uVar7;
  uVar7 = uVar6 ^ *(uint *)(&DAT_00460420 + (uVar13 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar13 & 0xff) * 4) ^
          *(uint *)(&DAT_0045fc20 + (uVar13 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar13 >> 0x10 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar7;
  param_2[0x30] = uVar7;
  uVar4 = uVar4 ^ uVar2;
  param_2[0x31] = uVar2;
  param_2[0x32] = uVar4;
  param_2[0x33] = uVar4 ^ uVar5;
  return 0;
}

