
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0043c6f0(uint *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 == 0x20) {
LAB_0043cac0:
    uVar2 = FUN_0043c1b0(param_1,param_3);
    return uVar2;
  }
  if (param_2 < 0x21) {
    if (param_2 != 0x10) {
      if (param_2 != 0x18) {
        return 1;
      }
      goto LAB_0043c74e;
    }
  }
  else {
    if (param_2 == 0xc0) {
LAB_0043c74e:
      uVar1 = *param_1;
      *param_3 = uVar1;
      uVar6 = param_1[1];
      uVar1 = uVar1 ^ _DAT_00461c20;
      param_3[1] = uVar6;
      uVar4 = param_1[2];
      param_3[2] = uVar4;
      uVar7 = param_1[3];
      param_3[3] = uVar7;
      uVar5 = param_1[4];
      param_3[4] = uVar5;
      uVar3 = param_1[5];
      param_3[5] = uVar3;
      uVar1 = uVar1 ^ *(uint *)(&DAT_00460420 + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&DAT_00460820 + (uVar3 & 0xff) * 4) ^
              *(uint *)(&DAT_0045fc20 + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00460020 + (uVar3 >> 0x10 & 0xff) * 4);
      uVar6 = uVar6 ^ uVar1;
      param_3[6] = uVar1;
      uVar1 = uVar1 ^ _DAT_00461c24;
      uVar4 = uVar4 ^ uVar6;
      param_3[7] = uVar6;
      uVar7 = uVar7 ^ uVar4;
      param_3[8] = uVar4;
      uVar5 = uVar5 ^ uVar7;
      param_3[9] = uVar7;
      uVar3 = uVar3 ^ uVar5;
      param_3[10] = uVar5;
      param_3[0xb] = uVar3;
      uVar1 = uVar1 ^ *(uint *)(&DAT_00460420 + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&DAT_00460820 + (uVar3 & 0xff) * 4) ^
              *(uint *)(&DAT_0045fc20 + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00460020 + (uVar3 >> 0x10 & 0xff) * 4);
      uVar6 = uVar6 ^ uVar1;
      param_3[0xc] = uVar1;
      uVar1 = uVar1 ^ _DAT_00461c28;
      uVar4 = uVar4 ^ uVar6;
      param_3[0xd] = uVar6;
      uVar7 = uVar7 ^ uVar4;
      param_3[0xe] = uVar4;
      uVar5 = uVar5 ^ uVar7;
      param_3[0xf] = uVar7;
      uVar3 = uVar3 ^ uVar5;
      param_3[0x10] = uVar5;
      param_3[0x11] = uVar3;
      uVar1 = uVar1 ^ *(uint *)(&DAT_00460420 + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&DAT_00460820 + (uVar3 & 0xff) * 4) ^
              *(uint *)(&DAT_0045fc20 + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00460020 + (uVar3 >> 0x10 & 0xff) * 4);
      uVar6 = uVar6 ^ uVar1;
      param_3[0x12] = uVar1;
      uVar4 = uVar4 ^ uVar6;
      uVar1 = uVar1 ^ _DAT_00461c2c;
      param_3[0x13] = uVar6;
      uVar7 = uVar7 ^ uVar4;
      param_3[0x14] = uVar4;
      uVar5 = uVar5 ^ uVar7;
      param_3[0x15] = uVar7;
      uVar3 = uVar3 ^ uVar5;
      param_3[0x16] = uVar5;
      param_3[0x17] = uVar3;
      uVar1 = uVar1 ^ *(uint *)(&DAT_00460420 + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&DAT_00460820 + (uVar3 & 0xff) * 4) ^
              *(uint *)(&DAT_0045fc20 + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00460020 + (uVar3 >> 0x10 & 0xff) * 4);
      param_3[0x18] = uVar1;
      uVar6 = uVar6 ^ uVar1;
      uVar4 = uVar4 ^ uVar6;
      uVar1 = uVar1 ^ _DAT_00461c30;
      param_3[0x19] = uVar6;
      uVar7 = uVar7 ^ uVar4;
      param_3[0x1a] = uVar4;
      uVar5 = uVar5 ^ uVar7;
      param_3[0x1b] = uVar7;
      uVar3 = uVar3 ^ uVar5;
      param_3[0x1c] = uVar5;
      param_3[0x1d] = uVar3;
      uVar1 = uVar1 ^ *(uint *)(&DAT_00460420 + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&DAT_00460820 + (uVar3 & 0xff) * 4) ^
              *(uint *)(&DAT_0045fc20 + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00460020 + (uVar3 >> 0x10 & 0xff) * 4);
      uVar6 = uVar6 ^ uVar1;
      param_3[0x1e] = uVar1;
      uVar1 = uVar1 ^ _DAT_00461c34;
      uVar4 = uVar4 ^ uVar6;
      param_3[0x1f] = uVar6;
      uVar7 = uVar7 ^ uVar4;
      param_3[0x20] = uVar4;
      uVar5 = uVar5 ^ uVar7;
      param_3[0x21] = uVar7;
      uVar3 = uVar3 ^ uVar5;
      param_3[0x22] = uVar5;
      param_3[0x23] = uVar3;
      uVar1 = uVar1 ^ *(uint *)(&DAT_00460420 + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&DAT_00460820 + (uVar3 & 0xff) * 4) ^
              *(uint *)(&DAT_0045fc20 + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00460020 + (uVar3 >> 0x10 & 0xff) * 4);
      uVar6 = uVar6 ^ uVar1;
      param_3[0x24] = uVar1;
      uVar4 = uVar4 ^ uVar6;
      param_3[0x25] = uVar6;
      uVar7 = uVar7 ^ uVar4;
      param_3[0x26] = uVar4;
      param_3[0x27] = uVar7;
      uVar1 = uVar1 ^ _DAT_00461c38;
      param_3[0x3c] = 0;
      *(undefined1 *)(param_3 + 0x3c) = 0xc0;
      uVar5 = uVar5 ^ uVar7;
      uVar3 = uVar3 ^ uVar5;
      param_3[0x28] = uVar5;
      param_3[0x29] = uVar3;
      uVar1 = uVar1 ^ *(uint *)(&DAT_00460420 + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&DAT_00460820 + (uVar3 & 0xff) * 4) ^
              *(uint *)(&DAT_0045fc20 + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00460020 + (uVar3 >> 0x10 & 0xff) * 4);
      uVar6 = uVar6 ^ uVar1;
      param_3[0x2a] = uVar1;
      uVar1 = uVar1 ^ _DAT_00461c3c;
      uVar4 = uVar4 ^ uVar6;
      param_3[0x2b] = uVar6;
      uVar7 = uVar7 ^ uVar4;
      param_3[0x2c] = uVar4;
      param_3[0x2d] = uVar7;
      uVar3 = uVar3 ^ uVar5 ^ uVar7;
      param_3[0x2e] = uVar5 ^ uVar7;
      param_3[0x2f] = uVar3;
      uVar1 = uVar1 ^ *(uint *)(&DAT_00460420 + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&DAT_00460820 + (uVar3 & 0xff) * 4) ^
              *(uint *)(&DAT_0045fc20 + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00460020 + (uVar3 >> 0x10 & 0xff) * 4);
      uVar6 = uVar6 ^ uVar1;
      param_3[0x30] = uVar1;
      uVar4 = uVar4 ^ uVar6;
      param_3[0x31] = uVar6;
      param_3[0x32] = uVar4;
      param_3[0x33] = uVar7 ^ uVar4;
      return 0;
    }
    if (param_2 == 0x100) goto LAB_0043cac0;
    if (param_2 != 0x80) {
      return 1;
    }
  }
  uVar2 = FUN_0043bae0(param_1,param_3);
  return uVar2;
}

