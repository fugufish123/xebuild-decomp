
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_00422b10(uint param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  char local_20;
  
  uVar2 = param_1 >> 0x18;
  FUN_00433690(1,"CB %d seq 0x%08x type: 0x%02x cseq: 0x%02x allow: 0x%04x\n");
  FUN_00433690(1,"\texpected fuses:\n");
  FUN_00433690(1,"\tfuseset 00: C0FFFFFFFFFFFFFF\n");
  if (param_3 == (undefined1 *)0x0) {
    if (uVar2 == 1) {
      FUN_00433690(1,"\tfuseset 01: 0F0F0F0F0F0F0FF0 (retail)\n");
    }
    else if (uVar2 == 0) {
      FUN_00433690(1,"\tfuseset 01: 0F0F0F0F0F0F0F0F (devkit)\n");
    }
    else if (uVar2 == 2) {
      FUN_00433690(1,"\tfuseset 01: 0F0F0F0F0F0FF00F (testkit)\n");
    }
    else {
      if (uVar2 != 3) goto LAB_00422bd0;
      FUN_00433690(1,"\tfuseset 01: 0F0F0F0F0F0FF0F0 (retail slim)\n");
    }
  }
  else {
    param_3[7] = 0xff;
    param_3[6] = 0xff;
    param_3[5] = 0xff;
    param_3[4] = 0xff;
    param_3[3] = 0xff;
    param_3[2] = 0xff;
    param_3[1] = 0xff;
    *param_3 = 0xc0;
    if (uVar2 == 1) {
      FUN_00433690(1,"\tfuseset 01: 0F0F0F0F0F0F0FF0 (retail)\n");
      param_3[0xf] = 0xf0;
      param_3[0xe] = 0xf;
    }
    else if (uVar2 == 0) {
      FUN_00433690(1,"\tfuseset 01: 0F0F0F0F0F0F0F0F (devkit)\n");
      param_3[0xf] = 0xf;
      param_3[0xe] = 0xf;
    }
    else {
      if (uVar2 == 2) {
        FUN_00433690(1,"\tfuseset 01: 0F0F0F0F0F0FF00F (testkit)\n");
        param_3[0xf] = 0xf;
      }
      else {
        if (uVar2 != 3) {
LAB_00422bd0:
          FUN_00433690(1,"\tfuseset 01: ???????????????? never seen console type 0x%02x\n");
          goto LAB_00422be8;
        }
        FUN_00433690(1,"\tfuseset 01: 0F0F0F0F0F0FF0F0 (retail slim)\n");
        param_3[0xf] = 0xf0;
      }
      param_3[0xe] = 0xf0;
    }
    param_3[0xd] = 0xf;
    param_3[0xc] = 0xf;
    param_3[0xb] = 0xf;
    param_3[10] = 0xf;
    param_3[9] = 0xf;
    param_3[8] = 0xf;
  }
LAB_00422be8:
  local_20 = (char)(param_1 >> 0x10);
  if ((local_20 == '\0') && ((short)param_1 == 0)) {
    FUN_00433690(1,"\tfuseset 02: 0000000000000000\n");
    goto LAB_00422c08;
  }
  uVar2 = 0;
  FUN_00433690(1,"\tfuseset 02: %016llX (sequence)\n");
  if ((param_1 & 1) == 0) {
    if ((param_1 & 2) == 0) goto LAB_00422ca9;
LAB_00422eff:
    FUN_00433690(1,"\tfuseset 02: %016llX (allow cseq %d)\n");
    uVar2 = uVar2 | 0xf000000;
    if ((param_1 & 4) != 0) goto LAB_00422f40;
LAB_00422cb5:
    if ((param_1 & 8) == 0) goto LAB_00422cc1;
LAB_00422f81:
    FUN_00433690(1,"\tfuseset 02: %016llX (allow cseq %d)\n");
    uVar2 = uVar2 | 0xf0000;
    if ((param_1 & 0x10) != 0) goto LAB_00422fc2;
LAB_00422ccd:
    if ((param_1 & 0x20) == 0) goto LAB_00422cd9;
LAB_00423001:
    FUN_00433690(1,"\tfuseset 02: %016llX (allow cseq %d)\n");
    uVar2 = uVar2 | 0xf00;
    if ((param_1 & 0x40) != 0) goto LAB_00423040;
LAB_00422ce5:
    if ((param_1 & 0x80) == 0) goto LAB_00422cf1;
LAB_0042307e:
    FUN_00433690(1,"\tfuseset 02: %016llX (allow cseq %d)\n");
    uVar2 = uVar2 | 0xf;
    if ((param_1 & 0x100) != 0) goto LAB_004230bd;
LAB_00422cfd:
    uVar1 = 0;
  }
  else {
    uVar2 = 0xf0000000;
    FUN_00433690(1,"\tfuseset 02: %016llX (allow cseq %d)\n");
    if ((param_1 & 2) != 0) goto LAB_00422eff;
LAB_00422ca9:
    if ((param_1 & 4) == 0) goto LAB_00422cb5;
LAB_00422f40:
    FUN_00433690(1,"\tfuseset 02: %016llX (allow cseq %d)\n");
    uVar2 = uVar2 | 0xf00000;
    if ((param_1 & 8) != 0) goto LAB_00422f81;
LAB_00422cc1:
    if ((param_1 & 0x10) == 0) goto LAB_00422ccd;
LAB_00422fc2:
    FUN_00433690(1,"\tfuseset 02: %016llX (allow cseq %d)\n");
    uVar2 = CONCAT22((short)(uVar2 >> 0x10),0xf000);
    if ((param_1 & 0x20) != 0) goto LAB_00423001;
LAB_00422cd9:
    if ((param_1 & 0x40) == 0) goto LAB_00422ce5;
LAB_00423040:
    FUN_00433690(1,"\tfuseset 02: %016llX (allow cseq %d)\n");
    uVar2 = uVar2 | 0xf0;
    if ((param_1 & 0x80) != 0) goto LAB_0042307e;
LAB_00422cf1:
    if ((param_1 & 0x100) == 0) goto LAB_00422cfd;
LAB_004230bd:
    FUN_00433690(1,"\tfuseset 02: %016llX (allow cseq %d)\n");
    uVar1 = 0xf0000000;
  }
  if ((param_1 & 0x200) != 0) {
    FUN_00433690(1,"\tfuseset 02: %016llX (allow cseq %d)\n");
    uVar1 = uVar1 | 0xf000000;
  }
  if ((param_1 & 0x400) != 0) {
    FUN_00433690(1,"\tfuseset 02: %016llX (allow cseq %d)\n");
    uVar1 = uVar1 | 0xf00000;
  }
  if ((param_1 & 0x800) != 0) {
    FUN_00433690(1,"\tfuseset 02: %016llX (allow cseq %d)\n");
    uVar1 = uVar1 | 0xf0000;
  }
  if ((param_1 & 0x1000) != 0) {
    FUN_00433690(1,"\tfuseset 02: %016llX (allow cseq %d)\n");
    uVar1 = uVar1 | 0xf000;
  }
  if ((param_1 & 0x2000) != 0) {
    FUN_00433690(1,"\tfuseset 02: %016llX (allow cseq %d)\n");
    uVar1 = uVar1 | 0xf00;
  }
  if ((param_1 & 0x4000) != 0) {
    FUN_00433690(1,"\tfuseset 02: %016llX (allow cseq %d)\n");
    uVar1 = uVar1 | 0xf0;
  }
  if ((short)param_1 < 0) {
    FUN_00433690(1,"\tfuseset 02: %016llX (allow cseq %d)\n");
    uVar1 = uVar1 | 0xf;
  }
  if (param_3 == (undefined1 *)0x0) {
    return;
  }
  param_3[0x17] = (char)uVar1;
  param_3[0x13] = (char)uVar2;
  param_3[0x16] = (char)(uVar1 >> 8);
  param_3[0x15] = (char)(uVar1 >> 0x10);
  param_3[0x14] = (char)(uVar1 >> 0x18);
  param_3[0x12] = (char)(uVar2 >> 8);
  param_3[0x11] = (char)(uVar2 >> 0x10);
  param_3[0x10] = (char)(uVar2 >> 0x18);
LAB_00422c08:
  if ((param_3 != (undefined1 *)0x0) && (param_4 != 0)) {
    param_3[0xf] = 0xf;
    param_3[0xe] = 0xf;
    param_3[0xd] = 0xf;
    param_3[0xc] = 0xf;
    param_3[0xb] = 0xf;
    param_3[10] = 0xf;
    param_3[9] = 0xf;
    param_3[8] = 0xf;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)(param_3 + 0x14) = 0;
  }
  return;
}

