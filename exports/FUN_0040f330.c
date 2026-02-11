
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0040f330(void)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *_Dst;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  size_t _Size;
  size_t _Size_00;
  undefined4 *puVar10;
  
  if (DAT_00479ea8 == 1) {
    iVar9 = FUN_004276f0(9);
    iVar8 = FUN_004276f0(0x19);
    (&DAT_004bc158)[iVar9 * 0x10b] = (&DAT_004bc158)[iVar8 * 0x10b];
  }
  if ((DAT_00479ea4 & 0x40000000) == 0) {
    if ((DAT_00479ea8 - 6 & 0xfffffffd) == 0) {
      DAT_00479ee4 = 0x1000;
      DAT_00479eec = 0x3dfc000;
      _Size = 0x4000000;
      DAT_00479ef0 = 0;
      DAT_00479efc = 0;
      _Size_00 = 0x200000;
      DAT_00479ef8 = 0xf7c;
      bVar1 = false;
      DAT_00479ee8 = 0x4200000;
    }
    else {
      if ((DAT_00479ea4 & 0x10000000) == 0) {
        DAT_00479ee4 = 0x400;
        DAT_00479eec = 0xf7c000;
        _Size = 0x1000000;
        DAT_00479ef8 = 0x3dc;
        _Size_00 = 0x80000;
        DAT_00479ee8 = 0x1080000;
      }
      else {
        DAT_00479ee4 = 0xc00;
        DAT_00479eec = 0x2ffc000;
        _Size = 0x3000000;
        DAT_00479ef8 = 0xbfa;
        _Size_00 = 0x180000;
        DAT_00479ee8 = 0x3180000;
      }
      DAT_00479efc = 0;
      DAT_00479ef0 = 0;
      bVar1 = false;
    }
  }
  else {
    DAT_00479ee4 = 0x1000;
    DAT_00479eec = 0x3be0000;
    DAT_00479ef0 = 1;
    DAT_00479ecc = 4;
    DAT_00479ece = 0x10;
    if ((DAT_00479ea4 & 0x20000000) == 0) {
      DAT_00479efc = 0xae0;
      DAT_00479ef8 = 0xee0;
      _Size = 0x4000000;
      DAT_00479ecd = 0x20;
      DAT_00479ec8 = 0x15c;
      _Size_00 = 0x200000;
      bVar1 = true;
      DAT_00479ee8 = 0x4200000;
    }
    else {
      DAT_00479efc = 0x2e0;
      DAT_00479ef8 = 0xee0;
      _Size = 0x4000000;
      DAT_00479ecd = 0x60;
      DAT_00479ec8 = 0x5c;
      _Size_00 = 0x200000;
      bVar1 = true;
      DAT_00479ee8 = 0x4200000;
    }
  }
  _DAT_00479ed4 = _Size_00;
  pvVar4 = malloc(_Size_00);
  DAT_00479ed0 = pvVar4;
  DAT_00479edc = _Size;
  _Dst = malloc(_Size);
  DAT_00479ed8 = _Dst;
  if ((_Dst == (void *)0x0) || (pvVar4 == (void *)0x0)) {
    return 0xffffffff;
  }
  memset(pvVar4,0xff,_Size_00);
  memset(_Dst,0xff,_Size);
  puVar10 = &DAT_004c97c0;
  for (iVar9 = 0x800; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  DAT_004cb7c0 = 0;
  _DAT_004cd7bc = 0;
  puVar10 = &DAT_004cb7c4;
  for (iVar9 = 0x7ff; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  puVar10 = &DAT_004cd7c0;
  for (iVar9 = 0x20; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  DAT_004cd7c0 = 0x60074fff;
  puVar10 = &DAT_004c9164;
  for (iVar9 = 0x80; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  if (DAT_00479ea8 == 2) {
    _DAT_004cd7c8 = 0x800000;
    _DAT_004cd820 = 0x400000;
    _DAT_004cd824 = 0x700;
    _DAT_004cd838 = 0x300000;
    DAT_004cd83c = 0x100000;
    if ((DAT_00479ea4 & 7) == 4) {
      if ((int)DAT_00479ea4 < 0) {
        DAT_00479ef4 = 1;
        _DAT_004cd830 = 0x100;
      }
      if (bVar1) {
        _DAT_004cd830 = 0x100;
      }
      _DAT_0044a588 = CONCAT12(0x38,_DAT_0044a588);
    }
    else if ((DAT_00479ea4 & 7) - 1 < 2) {
      _DAT_0044a588 = CONCAT12(0x35,_DAT_0044a588);
      _DAT_004cd820 = 0;
    }
    else {
      _DAT_0044a588 = CONCAT12(0x37,_DAT_0044a588);
    }
  }
  else {
    _DAT_004cd7c8 = (-(uint)(DAT_00479ea8 - 8 < 2) & 0x400000) + 0x800000;
    iVar9 = FUN_00427650(9);
    uVar5 = FUN_00427650(9);
    uVar6 = FUN_00427650(9);
    uVar7 = FUN_00427650(9);
    _DAT_004cd828 = 0x12070200;
    _DAT_004cd82c = 0x400000;
    _DAT_004cd838 = 0x300000;
    DAT_004cd83c = 0x100000;
    DAT_004cd840 = 0x8000;
    _DAT_004cd7cc =
         iVar9 * 0x1000000 + (uVar7 >> 0x18) + (uVar5 & 0xff00) * 0x100 + (uVar6 >> 8 & 0xff00);
    _DAT_004cd820 = (-(uint)(DAT_00479ea8 - 8 < 2) & 0x400000) + 0x400000;
    uVar2 = DAT_0044a588;
    switch(DAT_00479ea4 & 7) {
    case 0:
      break;
    default:
      _DAT_0044a588 = CONCAT12(0x35,_DAT_0044a588);
      _DAT_004cd820 = 0;
      break;
    case 3:
      _DAT_0044a588 = CONCAT12(0x37,_DAT_0044a588);
      break;
    case 4:
      if ((int)DAT_00479ea4 < 0) {
        DAT_00479ef4 = 1;
        _DAT_004cd830 = 0x100;
      }
      if (DAT_00479ef0 != 0) {
        _DAT_004cd830 = 0x200;
      }
      _DAT_0044a588 = CONCAT12(0x39,_DAT_0044a588);
      break;
    case 5:
      DAT_00479ef4 = 1;
      _DAT_004cd830 = 0x100;
      _DAT_0044a588 = CONCAT11(0x31,uVar2);
      _DAT_0044a588 = CONCAT12(0x30,_DAT_0044a588);
      break;
    case 6:
    case 7:
      DAT_00479ef4 = 1;
      _DAT_004cd830 = 0x100;
      _DAT_0044a588 = CONCAT11(0x31,uVar2);
      _DAT_0044a588 = CONCAT12(0x30,_DAT_0044a588);
      DAT_004cd83c = 0x800;
      _DAT_004cd838 = 0x3800;
    }
    uVar3 = _DAT_0044a588;
    _DAT_004cd824 = _DAT_004cd7cc;
    if (5 < DAT_00479ea8) {
      _DAT_0044a588 = CONCAT11(0x31,DAT_0044a588);
      DAT_004cd7c4._0_2_ = 0x80;
      s_Microsoft_Corporation__All_right_0044a58b[0] = SUB41(uVar3,3);
      _DAT_0044a588 = CONCAT12(0x30,_DAT_0044a588);
      _DAT_004cd830 = (-(uint)(DAT_00479ef0 == 0) & 0xffffff00) + 0x200;
      goto LAB_0040f76b;
    }
  }
  DAT_004cd840 = 0x8000;
  _DAT_004cd82c = 0x400000;
  _DAT_004cd828 = 0x12070200;
  _DAT_004cd7cc = _DAT_004cd824;
  iVar9 = FUN_004223b0(&DAT_0047a11c,0x10);
  if ((iVar9 == 0) && (DAT_00479f15 == '\0')) {
    FUN_00433690(0,"***** WARNING: cfldv was not set anywhere, setting it to 1\n");
    if (DAT_00479ea8 != 2) {
      FUN_00433690(0,"      please set it in ini or on command line and rebuild!\n");
    }
    DAT_00479f15 = '\x01';
  }
  _DAT_004cd7d0 = DAT_0044a580;
  _DAT_004cd7d4 = DAT_0044a584;
  _DAT_004cd7d8 = _DAT_0044a588;
  DAT_004cd7dc = s_Microsoft_Corporation__All_right_0044a58b[1];
  DAT_004cd7dc_1._0_1_ = s_Microsoft_Corporation__All_right_0044a58b[2];
  DAT_004cd7dc_1._1_1_ = s_Microsoft_Corporation__All_right_0044a58b[3];
  DAT_004cd7dc_1._2_1_ = s_Microsoft_Corporation__All_right_0044a58b[4];
  DAT_004cd7e0 = s_Microsoft_Corporation__All_right_0044a58b[5];
  DAT_004cd7e0_1._0_1_ = s_Microsoft_Corporation__All_right_0044a58b[6];
  DAT_004cd7e0_1._1_1_ = s_Microsoft_Corporation__All_right_0044a58b[7];
  DAT_004cd7e0_1._2_1_ = s_Microsoft_Corporation__All_right_0044a58b[8];
  DAT_004cd7e4 = s_Microsoft_Corporation__All_right_0044a58b[9];
  DAT_004cd7e4_1._0_1_ = s_Microsoft_Corporation__All_right_0044a58b[10];
  DAT_004cd7e4_1._1_1_ = s_Microsoft_Corporation__All_right_0044a58b[0xb];
  DAT_004cd7e4_1._2_1_ = s_Microsoft_Corporation__All_right_0044a58b[0xc];
  DAT_004cd7e8 = s_Microsoft_Corporation__All_right_0044a58b[0xd];
  DAT_004cd7e8_1._0_1_ = s_Microsoft_Corporation__All_right_0044a58b[0xe];
  DAT_004cd7e8_1._1_1_ = s_Microsoft_Corporation__All_right_0044a58b[0xf];
  DAT_004cd7e8_1._2_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x10];
  DAT_004cd7ec = s_Microsoft_Corporation__All_right_0044a58b[0x11];
  DAT_004cd7ec_1._0_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x12];
  DAT_004cd7ec_1._1_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x13];
  DAT_004cd7ec_1._2_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x14];
  DAT_004cd7f0 = s_Microsoft_Corporation__All_right_0044a58b[0x15];
  DAT_004cd7f0_1._0_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x16];
  DAT_004cd7f0_1._1_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x17];
  DAT_004cd7f0_1._2_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x18];
  DAT_004cd7f4 = s_Microsoft_Corporation__All_right_0044a58b[0x19];
  DAT_004cd7f4_1._0_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x1a];
  DAT_004cd7f4_1._1_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x1b];
  DAT_004cd7f4_1._2_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x1c];
  DAT_004cd7f8 = s_Microsoft_Corporation__All_right_0044a58b[0x1d];
  DAT_004cd7f8_1._0_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x1e];
  DAT_004cd7f8_1._1_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x1f];
  DAT_004cd7f8_1._2_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x20];
  DAT_004cd7fc = s_Microsoft_Corporation__All_right_0044a58b[0x21];
  DAT_004cd7fc_1._0_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x22];
  DAT_004cd7fc_1._1_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x23];
  DAT_004cd7fc_1._2_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x24];
  DAT_004cd800 = s_Microsoft_Corporation__All_right_0044a58b[0x25];
  DAT_004cd800_1._0_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x26];
  DAT_004cd800_1._1_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x27];
  DAT_004cd800_1._2_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x28];
  DAT_004cd804 = s_Microsoft_Corporation__All_right_0044a58b[0x29];
  DAT_004cd804_1._0_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x2a];
  DAT_004cd804_1._1_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x2b];
  DAT_004cd804_1._2_1_ = s_Microsoft_Corporation__All_right_0044a58b[0x2c];
  _DAT_004cd808 = DAT_0044a5b8;
  _DAT_004cd80c = DAT_0044a5bc;
  if (DAT_00479ea8 == 1) {
    uVar5 = FUN_0042e760();
    return uVar5;
  }
LAB_0040f76b:
  pvVar4 = DAT_00479ed8;
  _DAT_004cd7d0 = DAT_0044a580;
  _DAT_004cd7d4 = DAT_0044a584;
  _DAT_004cd7d8 = _DAT_0044a588;
  _DAT_004cd7dc = s_Microsoft_Corporation__All_right_0044a58b._1_4_;
  _DAT_004cd7e0 = s_Microsoft_Corporation__All_right_0044a58b._5_4_;
  _DAT_004cd7e4 = s_Microsoft_Corporation__All_right_0044a58b._9_4_;
  _DAT_004cd7e8 = s_Microsoft_Corporation__All_right_0044a58b._13_4_;
  _DAT_004cd7ec = s_Microsoft_Corporation__All_right_0044a58b._17_4_;
  _DAT_004cd7f0 = s_Microsoft_Corporation__All_right_0044a58b._21_4_;
  _DAT_004cd7f4 = s_Microsoft_Corporation__All_right_0044a58b._25_4_;
  _DAT_004cd7f8 = s_Microsoft_Corporation__All_right_0044a58b._29_4_;
  _DAT_004cd7fc = s_Microsoft_Corporation__All_right_0044a58b._33_4_;
  _DAT_004cd800 = s_Microsoft_Corporation__All_right_0044a58b._37_4_;
  _DAT_004cd804 = s_Microsoft_Corporation__All_right_0044a58b._41_4_;
  _DAT_004cd808 = DAT_0044a5b8;
  _DAT_004cd80c = DAT_0044a5bc;
  *(undefined1 *)((int)DAT_00479ed8 + 0x49) = 0;
  *(undefined1 *)((int)pvVar4 + 0x4a) = 0;
  uVar5 = FUN_0042e760();
  return uVar5;
}

