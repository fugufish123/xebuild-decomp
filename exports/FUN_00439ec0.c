
undefined4 __cdecl FUN_00439ec0(uint *param_1,undefined1 *param_2,uint *param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *local_1c;
  uint local_18;
  
  bVar2 = (byte)param_3[0x3c];
  if (((bVar2 & 0xbf) != 0xa0) && (bVar2 != 0xc0)) {
    return 1;
  }
  local_1c = param_3;
  local_18 = *param_1 ^ *param_3;
  uVar5 = param_1[2] ^ param_3[2];
  uVar4 = param_1[1] ^ param_3[1];
  uVar3 = param_1[3] ^ param_3[3];
  if (bVar2 == 0xc0) {
LAB_0043a185:
    uVar7 = *(uint *)(&DAT_00460c20 + (local_18 & 0xff) * 4) ^
            *(uint *)(&DAT_00461820 + (uVar3 >> 0x18) * 4) ^ local_1c[4] ^
            *(uint *)(&DAT_00461020 + (uVar4 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00461420 + (uVar5 >> 0x10 & 0xff) * 4);
    uVar6 = *(uint *)(&DAT_00460c20 + (uVar4 & 0xff) * 4) ^
            *(uint *)(&DAT_00461820 + (local_18 >> 0x18) * 4) ^ local_1c[5] ^
            *(uint *)(&DAT_00461020 + (uVar5 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00461420 + (uVar3 >> 0x10 & 0xff) * 4);
    uVar8 = *(uint *)(&DAT_00460c20 + (uVar5 & 0xff) * 4) ^
            *(uint *)(&DAT_00461820 + (uVar4 >> 0x18) * 4) ^ local_1c[6] ^
            *(uint *)(&DAT_00461020 + (uVar3 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00461420 + (local_18 >> 0x10 & 0xff) * 4);
    uVar3 = *(uint *)(&DAT_00460c20 + (uVar3 & 0xff) * 4) ^
            *(uint *)(&DAT_00461820 + (uVar5 >> 0x18) * 4) ^ local_1c[7] ^
            *(uint *)(&DAT_00461020 + (local_18 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00461420 + (uVar4 >> 0x10 & 0xff) * 4);
    local_18 = *(uint *)(&DAT_00460c20 + (uVar7 & 0xff) * 4) ^
               *(uint *)(&DAT_00461820 + (uVar3 >> 0x18) * 4) ^ local_1c[8] ^
               *(uint *)(&DAT_00461020 + (uVar6 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_00461420 + (uVar8 >> 0x10 & 0xff) * 4);
    uVar4 = *(uint *)(&DAT_00460c20 + (uVar6 & 0xff) * 4) ^
            *(uint *)(&DAT_00461820 + (uVar7 >> 0x18) * 4) ^ local_1c[9] ^
            *(uint *)(&DAT_00461020 + (uVar8 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00461420 + (uVar3 >> 0x10 & 0xff) * 4);
    uVar5 = *(uint *)(&DAT_00460c20 + (uVar8 & 0xff) * 4) ^
            *(uint *)(&DAT_00461820 + (uVar6 >> 0x18) * 4) ^ local_1c[10] ^
            *(uint *)(&DAT_00461020 + (uVar3 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00461420 + (uVar7 >> 0x10 & 0xff) * 4);
    puVar1 = local_1c + 0xb;
    local_1c = local_1c + 8;
    uVar3 = *(uint *)(&DAT_00460c20 + (uVar3 & 0xff) * 4) ^
            *(uint *)(&DAT_00461820 + (uVar8 >> 0x18) * 4) ^ *puVar1 ^
            *(uint *)(&DAT_00461020 + (uVar7 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00461420 + (uVar6 >> 0x10 & 0xff) * 4);
  }
  else {
    if (bVar2 == 0xe0) {
      uVar8 = *(uint *)(&DAT_00460c20 + (local_18 & 0xff) * 4) ^
              *(uint *)(&DAT_00461820 + (uVar3 >> 0x18) * 4) ^ param_3[4] ^
              *(uint *)(&DAT_00461020 + (uVar4 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00461420 + (uVar5 >> 0x10 & 0xff) * 4);
      uVar6 = *(uint *)(&DAT_00461420 + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00460c20 + (uVar4 & 0xff) * 4) ^
              *(uint *)(&DAT_00461820 + (local_18 >> 0x18) * 4) ^ param_3[5] ^
              *(uint *)(&DAT_00461020 + (uVar5 >> 8 & 0xff) * 4);
      uVar7 = *(uint *)(&DAT_00461420 + (local_18 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00460c20 + (uVar5 & 0xff) * 4) ^
              *(uint *)(&DAT_00461820 + (uVar4 >> 0x18) * 4) ^ param_3[6] ^
              *(uint *)(&DAT_00461020 + (uVar3 >> 8 & 0xff) * 4);
      uVar3 = *(uint *)(&DAT_00460c20 + (uVar3 & 0xff) * 4) ^
              *(uint *)(&DAT_00461820 + (uVar5 >> 0x18) * 4) ^ param_3[7] ^
              *(uint *)(&DAT_00461020 + (local_18 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00461420 + (uVar4 >> 0x10 & 0xff) * 4);
      local_18 = *(uint *)(&DAT_00460c20 + (uVar8 & 0xff) * 4) ^
                 *(uint *)(&DAT_00461820 + (uVar3 >> 0x18) * 4) ^ param_3[8] ^
                 *(uint *)(&DAT_00461020 + (uVar6 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_00461420 + (uVar7 >> 0x10 & 0xff) * 4);
      uVar4 = *(uint *)(&DAT_00460c20 + (uVar6 & 0xff) * 4) ^
              *(uint *)(&DAT_00461820 + (uVar8 >> 0x18) * 4) ^ param_3[9] ^
              *(uint *)(&DAT_00461020 + (uVar7 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00461420 + (uVar3 >> 0x10 & 0xff) * 4);
      uVar5 = *(uint *)(&DAT_00460c20 + (uVar7 & 0xff) * 4) ^
              *(uint *)(&DAT_00461820 + (uVar6 >> 0x18) * 4) ^ param_3[10] ^
              *(uint *)(&DAT_00461020 + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00461420 + (uVar8 >> 0x10 & 0xff) * 4);
      uVar3 = *(uint *)(&DAT_00460c20 + (uVar3 & 0xff) * 4) ^
              *(uint *)(&DAT_00461820 + (uVar7 >> 0x18) * 4) ^ param_3[0xb] ^
              *(uint *)(&DAT_00461020 + (uVar8 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00461420 + (uVar6 >> 0x10 & 0xff) * 4);
      local_1c = param_3 + 8;
      goto LAB_0043a185;
    }
    if (bVar2 != 0xa0) goto LAB_00439f2c;
  }
  uVar7 = *(uint *)(&DAT_00460c20 + (local_18 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar3 >> 0x18) * 4) ^ local_1c[4] ^
          *(uint *)(&DAT_00461020 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar5 >> 0x10 & 0xff) * 4);
  uVar8 = *(uint *)(&DAT_00460c20 + (uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (local_18 >> 0x18) * 4) ^ local_1c[5] ^
          *(uint *)(&DAT_00461020 + (uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar3 >> 0x10 & 0xff) * 4);
  uVar9 = *(uint *)(&DAT_00460c20 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar4 >> 0x18) * 4) ^ local_1c[6] ^
          *(uint *)(&DAT_00461020 + (uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (local_18 >> 0x10 & 0xff) * 4);
  uVar6 = *(uint *)(&DAT_00461420 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_00460c20 + (uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar5 >> 0x18) * 4) ^ local_1c[7] ^
          *(uint *)(&DAT_00461020 + (local_18 >> 8 & 0xff) * 4);
  uVar4 = *(uint *)(&DAT_00460c20 + (uVar7 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar6 >> 0x18) * 4) ^ local_1c[8] ^
          *(uint *)(&DAT_00461020 + (uVar8 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar9 >> 0x10 & 0xff) * 4);
  uVar5 = *(uint *)(&DAT_00460c20 + (uVar8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar7 >> 0x18) * 4) ^ local_1c[9] ^
          *(uint *)(&DAT_00461020 + (uVar9 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar6 >> 0x10 & 0xff) * 4);
  uVar3 = *(uint *)(&DAT_00460c20 + (uVar9 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar8 >> 0x18) * 4) ^ local_1c[10] ^
          *(uint *)(&DAT_00461020 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar7 >> 0x10 & 0xff) * 4);
  uVar9 = *(uint *)(&DAT_00461420 + (uVar8 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_00460c20 + (uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar9 >> 0x18) * 4) ^ local_1c[0xb] ^
          *(uint *)(&DAT_00461020 + (uVar7 >> 8 & 0xff) * 4);
  uVar6 = *(uint *)(&DAT_00460c20 + (uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar9 >> 0x18) * 4) ^ local_1c[0xc] ^
          *(uint *)(&DAT_00461020 + (uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar3 >> 0x10 & 0xff) * 4);
  uVar7 = *(uint *)(&DAT_00460c20 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar4 >> 0x18) * 4) ^ local_1c[0xd] ^
          *(uint *)(&DAT_00461020 + (uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar9 >> 0x10 & 0xff) * 4);
  uVar8 = *(uint *)(&DAT_00460c20 + (uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar5 >> 0x18) * 4) ^ local_1c[0xe] ^
          *(uint *)(&DAT_00461020 + (uVar9 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar4 >> 0x10 & 0xff) * 4);
  uVar9 = *(uint *)(&DAT_00460c20 + (uVar9 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar3 >> 0x18) * 4) ^ local_1c[0xf] ^
          *(uint *)(&DAT_00461020 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar5 >> 0x10 & 0xff) * 4);
  uVar4 = *(uint *)(&DAT_00460c20 + (uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar9 >> 0x18) * 4) ^ local_1c[0x10] ^
          *(uint *)(&DAT_00461020 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar8 >> 0x10 & 0xff) * 4);
  uVar5 = *(uint *)(&DAT_00460c20 + (uVar7 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar6 >> 0x18) * 4) ^ local_1c[0x11] ^
          *(uint *)(&DAT_00461020 + (uVar8 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar9 >> 0x10 & 0xff) * 4);
  uVar3 = *(uint *)(&DAT_00460c20 + (uVar8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar7 >> 0x18) * 4) ^ local_1c[0x12] ^
          *(uint *)(&DAT_00461020 + (uVar9 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar6 >> 0x10 & 0xff) * 4);
  uVar9 = *(uint *)(&DAT_00460c20 + (uVar9 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar8 >> 0x18) * 4) ^ local_1c[0x13] ^
          *(uint *)(&DAT_00461020 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar7 >> 0x10 & 0xff) * 4);
  uVar6 = *(uint *)(&DAT_00460c20 + (uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar9 >> 0x18) * 4) ^ local_1c[0x14] ^
          *(uint *)(&DAT_00461020 + (uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar3 >> 0x10 & 0xff) * 4);
  uVar7 = *(uint *)(&DAT_00460c20 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar4 >> 0x18) * 4) ^ local_1c[0x15] ^
          *(uint *)(&DAT_00461020 + (uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar9 >> 0x10 & 0xff) * 4);
  uVar8 = *(uint *)(&DAT_00460c20 + (uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar5 >> 0x18) * 4) ^ local_1c[0x16] ^
          *(uint *)(&DAT_00461020 + (uVar9 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar4 >> 0x10 & 0xff) * 4);
  uVar9 = *(uint *)(&DAT_00460c20 + (uVar9 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar3 >> 0x18) * 4) ^ local_1c[0x17] ^
          *(uint *)(&DAT_00461020 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar5 >> 0x10 & 0xff) * 4);
  uVar4 = *(uint *)(&DAT_00460c20 + (uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar9 >> 0x18) * 4) ^ local_1c[0x18] ^
          *(uint *)(&DAT_00461020 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar8 >> 0x10 & 0xff) * 4);
  uVar5 = *(uint *)(&DAT_00460c20 + (uVar7 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar6 >> 0x18) * 4) ^ local_1c[0x19] ^
          *(uint *)(&DAT_00461020 + (uVar8 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar9 >> 0x10 & 0xff) * 4);
  uVar3 = *(uint *)(&DAT_00460c20 + (uVar8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar7 >> 0x18) * 4) ^ local_1c[0x1a] ^
          *(uint *)(&DAT_00461020 + (uVar9 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar6 >> 0x10 & 0xff) * 4);
  uVar7 = *(uint *)(&DAT_00460c20 + (uVar9 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar8 >> 0x18) * 4) ^ local_1c[0x1b] ^
          *(uint *)(&DAT_00461020 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar7 >> 0x10 & 0xff) * 4);
  uVar6 = *(uint *)(&DAT_00460c20 + (uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar7 >> 0x18) * 4) ^ local_1c[0x1c] ^
          *(uint *)(&DAT_00461020 + (uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar3 >> 0x10 & 0xff) * 4);
  uVar8 = *(uint *)(&DAT_00460c20 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar4 >> 0x18) * 4) ^ local_1c[0x1d] ^
          *(uint *)(&DAT_00461020 + (uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar7 >> 0x10 & 0xff) * 4);
  uVar9 = *(uint *)(&DAT_00460c20 + (uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar5 >> 0x18) * 4) ^ local_1c[0x1e] ^
          *(uint *)(&DAT_00461020 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar4 >> 0x10 & 0xff) * 4);
  uVar3 = *(uint *)(&DAT_00460c20 + (uVar7 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar3 >> 0x18) * 4) ^ local_1c[0x1f] ^
          *(uint *)(&DAT_00461020 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar5 >> 0x10 & 0xff) * 4);
  uVar4 = *(uint *)(&DAT_00460c20 + (uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar3 >> 0x18) * 4) ^ local_1c[0x20] ^
          *(uint *)(&DAT_00461020 + (uVar8 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar9 >> 0x10 & 0xff) * 4);
  uVar5 = *(uint *)(&DAT_00460c20 + (uVar8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar6 >> 0x18) * 4) ^ local_1c[0x21] ^
          *(uint *)(&DAT_00461020 + (uVar9 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar3 >> 0x10 & 0xff) * 4);
  uVar7 = *(uint *)(&DAT_00460c20 + (uVar9 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar8 >> 0x18) * 4) ^ local_1c[0x22] ^
          *(uint *)(&DAT_00461020 + (uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar6 >> 0x10 & 0xff) * 4);
  uVar9 = *(uint *)(&DAT_00460c20 + (uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar9 >> 0x18) * 4) ^ local_1c[0x23] ^
          *(uint *)(&DAT_00461020 + (uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar8 >> 0x10 & 0xff) * 4);
  uVar3 = *(uint *)(&DAT_00460c20 + (uVar4 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar9 >> 0x18) * 4) ^ local_1c[0x24] ^
          *(uint *)(&DAT_00461020 + (uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar7 >> 0x10 & 0xff) * 4);
  uVar6 = *(uint *)(&DAT_00460c20 + (uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar4 >> 0x18) * 4) ^ local_1c[0x25] ^
          *(uint *)(&DAT_00461020 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar9 >> 0x10 & 0xff) * 4);
  uVar8 = *(uint *)(&DAT_00460c20 + (uVar7 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar5 >> 0x18) * 4) ^ local_1c[0x26] ^
          *(uint *)(&DAT_00461020 + (uVar9 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar4 >> 0x10 & 0xff) * 4);
  uVar7 = *(uint *)(&DAT_00460c20 + (uVar9 & 0xff) * 4) ^
          *(uint *)(&DAT_00461820 + (uVar7 >> 0x18) * 4) ^ local_1c[0x27] ^
          *(uint *)(&DAT_00461020 + (uVar4 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00461420 + (uVar5 >> 0x10 & 0xff) * 4);
  local_18 = *(uint *)(&DAT_0045fc20 + (uVar3 & 0xff) * 4) ^
             *(uint *)(&DAT_00460820 + (uVar7 >> 0x18) * 4) ^ local_1c[0x28] ^
             *(uint *)(&DAT_00460020 + (uVar6 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_00460420 + (uVar8 >> 0x10 & 0xff) * 4);
  uVar4 = *(uint *)(&DAT_0045fc20 + (uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar3 >> 0x18) * 4) ^ local_1c[0x29] ^
          *(uint *)(&DAT_00460020 + (uVar8 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460420 + (uVar7 >> 0x10 & 0xff) * 4);
  uVar5 = *(uint *)(&DAT_0045fc20 + (uVar8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar6 >> 0x18) * 4) ^ local_1c[0x2a] ^
          *(uint *)(&DAT_00460020 + (uVar7 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460420 + (uVar3 >> 0x10 & 0xff) * 4);
  uVar3 = *(uint *)(&DAT_0045fc20 + (uVar7 & 0xff) * 4) ^
          *(uint *)(&DAT_00460820 + (uVar8 >> 0x18) * 4) ^ local_1c[0x2b] ^
          *(uint *)(&DAT_00460020 + (uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00460420 + (uVar6 >> 0x10 & 0xff) * 4);
LAB_00439f2c:
  param_2[4] = (char)uVar4;
  param_2[8] = (char)uVar5;
  *param_2 = (char)local_18;
  param_2[0xc] = (char)uVar3;
  param_2[1] = (char)(local_18 >> 8);
  param_2[2] = (char)(local_18 >> 0x10);
  param_2[3] = (char)(local_18 >> 0x18);
  param_2[5] = (char)(uVar4 >> 8);
  param_2[7] = (char)(uVar4 >> 0x18);
  param_2[6] = (char)(uVar4 >> 0x10);
  param_2[9] = (char)(uVar5 >> 8);
  param_2[0xb] = (char)(uVar5 >> 0x18);
  param_2[10] = (char)(uVar5 >> 0x10);
  param_2[0xd] = (char)(uVar3 >> 8);
  param_2[0xf] = (char)(uVar3 >> 0x18);
  param_2[0xe] = (char)(uVar3 >> 0x10);
  return 0;
}

