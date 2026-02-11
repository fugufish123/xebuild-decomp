
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0043d9a0(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  uVar3 = *param_1;
  *param_2 = uVar3;
  uVar10 = param_1[1];
  param_2[1] = uVar10;
  uVar20 = param_1[2];
  param_2[2] = uVar20;
  uVar16 = param_1[3];
  param_2[3] = uVar16;
  uVar19 = param_1[4];
  param_2[4] = *(uint *)(&DAT_0045cc20 + (uVar19 & 0xff) * 4) ^
               *(uint *)(&DAT_0045d820 + (uVar19 >> 0x18) * 4) ^
               *(uint *)(&DAT_0045d020 + (uVar19 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_0045d420 + (uVar19 >> 0x10 & 0xff) * 4);
  uVar5 = param_1[5];
  param_2[5] = *(uint *)(&DAT_0045cc20 + (uVar5 & 0xff) * 4) ^
               *(uint *)(&DAT_0045d820 + (uVar5 >> 0x18) * 4) ^
               *(uint *)(&DAT_0045d020 + (uVar5 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_0045d420 + (uVar5 >> 0x10 & 0xff) * 4);
  uVar6 = param_1[6];
  uVar3 = uVar3 ^ _DAT_00461c20;
  param_2[6] = *(uint *)(&DAT_0045cc20 + (uVar6 & 0xff) * 4) ^
               *(uint *)(&DAT_0045d820 + (uVar6 >> 0x18) * 4) ^
               *(uint *)(&DAT_0045d020 + (uVar6 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_0045d420 + (uVar6 >> 0x10 & 0xff) * 4);
  uVar2 = param_1[7];
  uVar14 = uVar2 >> 8 & 0xff;
  uVar9 = uVar2 >> 0x10 & 0xff;
  uVar15 = *(uint *)(&DAT_00460020 + uVar9 * 4) ^
           uVar3 ^ *(uint *)(&DAT_00460420 + (uVar2 >> 0x18) * 4) ^
           *(uint *)(&DAT_00460820 + (uVar2 & 0xff) * 4) ^ *(uint *)(&DAT_0045fc20 + uVar14 * 4);
  param_2[7] = *(uint *)(&DAT_0045cc20 + (uVar2 & 0xff) * 4) ^
               *(uint *)(&DAT_0045d820 + (uVar2 >> 0x18) * 4) ^
               *(uint *)(&DAT_0045d020 + uVar14 * 4) ^ *(uint *)(&DAT_0045d420 + uVar9 * 4);
  uVar9 = *(uint *)(&DAT_0045cc20 + (uVar15 & 0xff) * 4) ^
          *(uint *)(&DAT_0045d820 + (uVar15 >> 0x18) * 4) ^
          *(uint *)(&DAT_0045d020 + (uVar15 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0045d420 + (uVar15 >> 0x10 & 0xff) * 4);
  param_2[8] = uVar9;
  uVar10 = uVar10 ^ uVar15;
  uVar12 = *(uint *)(&DAT_0045cc20 + (uVar10 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d820 + (uVar10 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar10 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d420 + (uVar10 >> 0x10 & 0xff) * 4);
  param_2[9] = uVar12;
  uVar20 = uVar20 ^ uVar10;
  uVar16 = uVar16 ^ uVar20;
  uVar14 = *(uint *)(&DAT_0045d420 + (uVar20 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_0045cc20 + (uVar20 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d820 + (uVar20 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar20 >> 8 & 0xff) * 4);
  iVar4 = (uVar16 >> 0x10 & 0xff) + 0x200;
  param_2[10] = uVar14;
  iVar1 = (uVar16 >> 8 & 0xff) + 0x100;
  iVar11 = (uVar16 >> 0x18) + 0x300;
  uVar17 = *(uint *)(&DAT_0045cc20 + (uVar16 & 0xff) * 4) ^ *(uint *)(&DAT_0045cc20 + iVar11 * 4) ^
           *(uint *)(&DAT_0045cc20 + iVar1 * 4) ^ *(uint *)(&DAT_0045cc20 + iVar4 * 4);
  param_2[0xb] = uVar17;
  uVar21 = *(uint *)(&DAT_0045fc20 + iVar4 * 4) ^
           *(uint *)(&DAT_0045fc20 + (uVar16 & 0xff) * 4) ^ *(uint *)(&DAT_0045fc20 + iVar11 * 4) ^
           uVar19 ^ *(uint *)(&DAT_0045fc20 + iVar1 * 4);
  uVar5 = uVar5 ^ uVar21;
  uVar13 = *(uint *)(&DAT_0045d420 + (uVar21 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_0045cc20 + (uVar21 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d820 + (uVar21 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar21 >> 8 & 0xff) * 4);
  param_2[0xc] = uVar13;
  uVar18 = *(uint *)(&DAT_0045d420 + (uVar5 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_0045cc20 + (uVar5 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d820 + (uVar5 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar5 >> 8 & 0xff) * 4);
  param_2[0xd] = uVar18;
  uVar6 = uVar6 ^ uVar5;
  uVar7 = *(uint *)(&DAT_0045d420 + (uVar6 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0045cc20 + (uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_0045d820 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_0045d020 + (uVar6 >> 8 & 0xff) * 4);
  uVar2 = uVar2 ^ uVar6;
  param_2[0xe] = uVar7;
  uVar19 = uVar2 >> 8 & 0xff;
  uVar3 = uVar2 >> 0x10 & 0xff;
  uVar8 = *(uint *)(&DAT_0045d420 + uVar3 * 4) ^
          *(uint *)(&DAT_0045cc20 + (uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_0045d820 + (uVar2 >> 0x18) * 4) ^ *(uint *)(&DAT_0045d020 + uVar19 * 4);
  param_2[0xf] = uVar8;
  uVar3 = *(uint *)(&DAT_00460420 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar2 & 0xff) * 4) ^ _DAT_00461c24 ^
          *(uint *)(&DAT_0045fc20 + uVar19 * 4) ^ *(uint *)(&DAT_00460020 + uVar3 * 4);
  uVar19 = *(uint *)(&DAT_0045cc20 + (uVar3 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d820 + (uVar3 >> 0x18) * 4) ^ uVar9 ^
           *(uint *)(&DAT_0045d020 + (uVar3 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d420 + (uVar3 >> 0x10 & 0xff) * 4);
  param_2[0x10] = uVar19;
  uVar12 = uVar12 ^ uVar19;
  param_2[0x11] = uVar12;
  uVar10 = uVar10 ^ uVar15 ^ uVar3;
  uVar20 = uVar20 ^ uVar10;
  uVar14 = uVar14 ^ uVar12;
  param_2[0x12] = uVar14;
  uVar16 = uVar16 ^ uVar20;
  uVar17 = uVar17 ^ uVar14;
  param_2[0x13] = uVar17;
  uVar9 = *(uint *)(&DAT_0045fc20 + (uVar16 & 0xff) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar16 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar16 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460420 + (uVar16 >> 0x10 & 0xff) * 4);
  uVar22 = *(uint *)(&DAT_0045d420 + (uVar9 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_0045cc20 + (uVar9 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d820 + (uVar9 >> 0x18) * 4) ^ uVar13 ^
           *(uint *)(&DAT_0045d020 + (uVar9 >> 8 & 0xff) * 4);
  param_2[0x14] = uVar22;
  uVar5 = uVar5 ^ uVar21 ^ uVar9;
  uVar18 = uVar18 ^ uVar22;
  uVar6 = uVar6 ^ uVar5;
  uVar7 = uVar7 ^ uVar18;
  param_2[0x15] = uVar18;
  param_2[0x16] = uVar7;
  uVar2 = uVar2 ^ uVar6;
  uVar8 = uVar8 ^ uVar7;
  param_2[0x17] = uVar8;
  uVar13 = *(uint *)(&DAT_00460420 + (uVar2 >> 0x18) * 4) ^
           *(uint *)(&DAT_00460820 + (uVar2 & 0xff) * 4) ^ _DAT_00461c28 ^
           *(uint *)(&DAT_0045fc20 + (uVar2 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_00460020 + (uVar2 >> 0x10 & 0xff) * 4);
  uVar15 = uVar15 ^ uVar3 ^ uVar13;
  uVar19 = uVar19 ^ *(uint *)(&DAT_0045cc20 + (uVar13 & 0xff) * 4) ^
                    *(uint *)(&DAT_0045d820 + (uVar13 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar13 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d420 + (uVar13 >> 0x10 & 0xff) * 4);
  uVar10 = uVar10 ^ uVar15;
  uVar12 = uVar12 ^ uVar19;
  uVar20 = uVar20 ^ uVar10;
  param_2[0x18] = uVar19;
  uVar16 = uVar16 ^ uVar20;
  param_2[0x19] = uVar12;
  uVar14 = uVar14 ^ uVar12;
  param_2[0x1a] = uVar14;
  uVar17 = uVar17 ^ uVar14;
  param_2[0x1b] = uVar17;
  uVar3 = *(uint *)(&DAT_0045fc20 + (uVar16 & 0xff) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar16 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar16 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460420 + (uVar16 >> 0x10 & 0xff) * 4);
  uVar13 = uVar21 ^ uVar9 ^ uVar3;
  uVar9 = *(uint *)(&DAT_0045cc20 + (uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_0045d820 + (uVar3 >> 0x18) * 4) ^ uVar22 ^
          *(uint *)(&DAT_0045d020 + (uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0045d420 + (uVar3 >> 0x10 & 0xff) * 4);
  param_2[0x1c] = uVar9;
  uVar18 = uVar18 ^ uVar9;
  uVar5 = uVar5 ^ uVar13;
  param_2[0x1d] = uVar18;
  uVar6 = uVar6 ^ uVar5;
  uVar7 = uVar7 ^ uVar18;
  param_2[0x1e] = uVar7;
  uVar2 = uVar2 ^ uVar6;
  uVar8 = uVar8 ^ uVar7;
  param_2[0x1f] = uVar8;
  uVar3 = *(uint *)(&DAT_00460420 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar2 & 0xff) * 4) ^ _DAT_00461c2c ^
          *(uint *)(&DAT_0045fc20 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar2 >> 0x10 & 0xff) * 4);
  uVar15 = uVar15 ^ uVar3;
  uVar19 = uVar19 ^ *(uint *)(&DAT_0045cc20 + (uVar3 & 0xff) * 4) ^
                    *(uint *)(&DAT_0045d820 + (uVar3 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar3 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d420 + (uVar3 >> 0x10 & 0xff) * 4);
  uVar10 = uVar10 ^ uVar15;
  uVar20 = uVar20 ^ uVar10;
  uVar12 = uVar12 ^ uVar19;
  uVar16 = uVar16 ^ uVar20;
  param_2[0x21] = uVar12;
  uVar14 = uVar14 ^ uVar12;
  param_2[0x20] = uVar19;
  param_2[0x22] = uVar14;
  uVar17 = uVar17 ^ uVar14;
  param_2[0x23] = uVar17;
  uVar3 = *(uint *)(&DAT_0045fc20 + (uVar16 & 0xff) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar16 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar16 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460420 + (uVar16 >> 0x10 & 0xff) * 4);
  uVar13 = uVar13 ^ uVar3;
  uVar22 = *(uint *)(&DAT_0045cc20 + (uVar3 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d820 + (uVar3 >> 0x18) * 4) ^ uVar9 ^
           *(uint *)(&DAT_0045d020 + (uVar3 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d420 + (uVar3 >> 0x10 & 0xff) * 4);
  param_2[0x24] = uVar22;
  uVar18 = uVar18 ^ uVar22;
  uVar5 = uVar5 ^ uVar13;
  param_2[0x25] = uVar18;
  uVar6 = uVar6 ^ uVar5;
  uVar7 = uVar7 ^ uVar18;
  param_2[0x26] = uVar7;
  uVar2 = uVar2 ^ uVar6;
  uVar8 = uVar8 ^ uVar7;
  param_2[0x27] = uVar8;
  uVar3 = *(uint *)(&DAT_00460420 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar2 & 0xff) * 4) ^ _DAT_00461c30 ^
          *(uint *)(&DAT_0045fc20 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar2 >> 0x10 & 0xff) * 4);
  uVar15 = uVar15 ^ uVar3;
  uVar21 = uVar19 ^ *(uint *)(&DAT_0045cc20 + (uVar3 & 0xff) * 4) ^
                    *(uint *)(&DAT_0045d820 + (uVar3 >> 0x18) * 4) ^
           *(uint *)(&DAT_0045d020 + (uVar3 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d420 + (uVar3 >> 0x10 & 0xff) * 4);
  uVar10 = uVar10 ^ uVar15;
  param_2[0x28] = uVar21;
  uVar12 = uVar12 ^ uVar21;
  param_2[0x29] = uVar12;
  uVar20 = uVar20 ^ uVar10;
  uVar16 = uVar16 ^ uVar20;
  uVar14 = uVar14 ^ uVar12;
  uVar17 = uVar17 ^ uVar14;
  param_2[0x2a] = uVar14;
  uVar3 = *(uint *)(&DAT_0045fc20 + (uVar16 & 0xff) * 4);
  uVar19 = *(uint *)(&DAT_00460820 + (uVar16 >> 0x18) * 4);
  uVar9 = *(uint *)(&DAT_00460020 + (uVar16 >> 8 & 0xff) * 4);
  param_2[0x2b] = uVar17;
  uVar3 = uVar3 ^ uVar19 ^ uVar9 ^ *(uint *)(&DAT_00460420 + (uVar16 >> 0x10 & 0xff) * 4);
  uVar19 = *(uint *)(&DAT_0045d420 + (uVar3 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_0045cc20 + (uVar3 & 0xff) * 4) ^
           *(uint *)(&DAT_0045d820 + (uVar3 >> 0x18) * 4) ^ uVar22 ^
           *(uint *)(&DAT_0045d020 + (uVar3 >> 8 & 0xff) * 4);
  param_2[0x2c] = uVar19;
  uVar18 = uVar18 ^ uVar19;
  param_2[0x2d] = uVar18;
  uVar6 = uVar6 ^ uVar5 ^ uVar13 ^ uVar3;
  uVar2 = uVar2 ^ uVar6;
  uVar7 = uVar7 ^ uVar18;
  uVar8 = uVar8 ^ uVar7;
  param_2[0x2e] = uVar7;
  param_2[0x2f] = uVar8;
  uVar3 = *(uint *)(&DAT_00460420 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar2 & 0xff) * 4) ^ _DAT_00461c34 ^
          *(uint *)(&DAT_0045fc20 + (uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar2 >> 0x10 & 0xff) * 4);
  uVar15 = uVar15 ^ uVar3;
  uVar9 = *(uint *)(&DAT_0045cc20 + (uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_0045d820 + (uVar3 >> 0x18) * 4) ^ uVar21 ^
          *(uint *)(&DAT_0045d020 + (uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_0045d420 + (uVar3 >> 0x10 & 0xff) * 4);
  uVar10 = uVar10 ^ uVar15;
  uVar20 = uVar20 ^ uVar10;
  param_2[0x30] = uVar9;
  uVar9 = uVar9 ^ uVar12;
  uVar16 = uVar16 ^ uVar20;
  param_2[0x31] = uVar9;
  uVar9 = uVar9 ^ uVar14;
  param_2[0x32] = uVar9;
  uVar3 = *(uint *)(&DAT_0045fc20 + (uVar16 & 0xff) * 4);
  param_2[0x33] = uVar9 ^ uVar17;
  uVar9 = uVar3 ^ *(uint *)(&DAT_00460820 + (uVar16 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar16 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460420 + (uVar16 >> 0x10 & 0xff) * 4);
  uVar3 = *(uint *)(&DAT_0045d420 + (uVar9 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_0045cc20 + (uVar9 & 0xff) * 4) ^
          *(uint *)(&DAT_0045d820 + (uVar9 >> 0x18) * 4) ^ uVar19 ^
          *(uint *)(&DAT_0045d020 + (uVar9 >> 8 & 0xff) * 4);
  uVar18 = uVar3 ^ uVar18;
  param_2[0x34] = uVar3;
  param_2[0x35] = uVar18;
  uVar18 = uVar18 ^ uVar7;
  param_2[0x36] = uVar18;
  param_2[0x37] = uVar18 ^ uVar8;
  uVar9 = uVar2 ^ uVar6 ^ uVar5 ^ uVar9;
  uVar3 = uVar15 ^ _DAT_00461c38 ^ *(uint *)(&DAT_00460420 + (uVar9 >> 0x18) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar9 & 0xff) * 4) ^
          *(uint *)(&DAT_0045fc20 + (uVar9 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460020 + (uVar9 >> 0x10 & 0xff) * 4);
  param_2[0x38] = uVar3;
  uVar3 = uVar3 ^ uVar10;
  uVar20 = uVar20 ^ uVar3;
  param_2[0x39] = uVar3;
  param_2[0x3a] = uVar20;
  param_2[0x3b] = uVar16 ^ uVar20;
  param_2[0x3c] = 0;
  *(undefined1 *)(param_2 + 0x3c) = 0xe0;
  return 0;
}

