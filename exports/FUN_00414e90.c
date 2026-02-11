
undefined4 FUN_00414e90(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  byte *pbVar7;
  int iVar8;
  ushort local_28;
  char local_25;
  
  iVar8 = DAT_00479f4c;
  if (DAT_00479f60 == 0) {
    uVar1 = DAT_00479f5c - 0x480;
    local_25 = '0';
    iVar2 = FUN_00433600();
  }
  else {
    uVar1 = DAT_00479f5c - 0x2400;
    local_25 = ',';
    iVar2 = FUN_00433600();
  }
  if (iVar2 == 2) {
    FUN_00433690(2,"\n");
    FUN_00414be0();
  }
  uVar3 = *(uint *)(iVar8 + 100);
  uVar3 = (uVar3 >> 8 & 0xff00) + (uVar3 & 0xff00) * 0x100 + (uVar3 >> 0x18) + uVar3 * 0x1000000 >>
          9;
  if ((uVar3 & 0x1f) != 0) {
    uVar3 = (uVar3 & 0xffffffe0) + 0x20;
  }
  do {
    while( true ) {
      if (uVar1 <= uVar3) {
        return DAT_00474a20;
      }
      iVar8 = uVar3 * 0x10;
      pbVar7 = (byte *)(DAT_00479f50 + iVar8);
      cVar6 = (char)(pbVar7[0xc] & 0x3f);
      if (local_25 == cVar6) break;
      if ((byte)(cVar6 - 0x31U) < 9) {
        local_28 = *(ushort *)(pbVar7 + 7);
        iVar2 = (pbVar7[0xc] & 0x3f) - 0x30;
        goto LAB_00414f5b;
      }
LAB_00414ff4:
      uVar3 = uVar3 + 1;
      if ((uVar3 & 0x1f) != 0) {
        uVar3 = (uVar3 & 0xffffffe0) + 0x20;
      }
    }
    iVar2 = 0;
    local_28 = 0x4000;
LAB_00414f5b:
    if (DAT_00479f60 == 0) {
      if (DAT_00479f64 == 0) {
        uVar5 = (uint)pbVar7[2];
      }
      else {
        uVar5 = (uint)*pbVar7;
      }
    }
    else {
      uVar5 = (uint)pbVar7[5];
    }
    uVar5 = (uint)pbVar7[4] << 0x10 | (uint)pbVar7[3] << 8 | (uint)pbVar7[6] << 0x18 | uVar5;
    iVar4 = FUN_00433600();
    if (iVar4 == 2) {
      FUN_00433690(2,
                   "mobile%c.dat ver %02d offset 0x%08x (dump:0x%08x) count 0x%02x len 0x%04x page 0x%08x "
                  );
      iVar4 = iVar8;
      do {
        iVar4 = iVar4 + 1;
        FUN_00433690(2,"%02x ");
      } while (iVar8 + 0x10 != iVar4);
      if ((short)local_28 < 0) {
        FUN_00433690(2,"(DELETE)\n");
      }
      else {
        FUN_00433690(2,"\n");
      }
    }
    if ((uVar5 < (uint)(&DAT_00474a24)[iVar2 * 6]) && ((&DAT_00474a20)[iVar2 * 6] != 0)) {
      if ((short)local_28 < 0) {
        uVar3 = uVar3 + 1;
      }
      else {
        if (local_28 == 0) goto LAB_00414ff4;
LAB_0041504f:
        uVar3 = (uVar3 + (local_28 >> 9) + 1) - (uint)((local_28 & 0x1ff) == 0);
      }
    }
    else {
      if (local_28 == 0) goto LAB_00414ff4;
      if (-1 < (short)local_28) {
        (&DAT_00474a20)[iVar2 * 6] = 1;
        (&DAT_00474a24)[iVar2 * 6] = uVar5;
        (&DAT_00474a34)[iVar2 * 6] = iVar8;
        (&DAT_00474a28)[iVar2 * 6] = uVar3;
        (&DAT_00474a2c)[iVar2 * 6] = (uint)local_28;
        (&DAT_00474a30)[iVar2 * 6] = uVar3 << 9;
        goto LAB_0041504f;
      }
      uVar3 = uVar3 + 1;
      (&DAT_00474a20)[iVar2 * 6] = 0;
    }
    if (DAT_00479f60 != 0) {
      uVar3 = uVar3 + 3 & 0xfffffffc;
    }
  } while( true );
}

