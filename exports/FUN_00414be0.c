
void FUN_00414be0(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint local_24;
  short local_20;
  byte local_1d;
  
  iVar3 = DAT_00479f4c;
  if (DAT_00479f60 == 0) {
    local_24 = DAT_00479f5c - 0x480;
    local_1d = 0x30;
  }
  else {
    local_24 = DAT_00479f5c - 0x2400;
    local_1d = 0x2c;
  }
  FUN_00433690(2,s__________________________________0044a4e0);
  FUN_00433690(2,"Showing all pages with mobile info:\n");
  FUN_00433690(2,s__________________________________0044a4e0);
  uVar5 = *(uint *)(iVar3 + 100);
  uVar2 = (uVar5 >> 8 & 0xff00) + (uVar5 & 0xff00) * 0x100 + (uVar5 >> 0x18) + uVar5 * 0x1000000 >>
          9;
  uVar5 = (uVar2 & 0xffffffe0) + 0x20;
  if ((uVar2 & 0x1f) == 0) {
    uVar5 = uVar2;
  }
  FUN_00433690(2,"starting mobile scan at page 0x%x (offset 0x%x) of 0x%x pages (0x%x total)\n");
  if (uVar5 < local_24) {
    iVar3 = uVar5 << 4;
    do {
      bVar1 = *(byte *)(DAT_00479f50 + iVar3 + 0xc) & 0x3f;
      if (local_1d == bVar1) {
        local_20 = 0x4000;
LAB_00414d23:
        FUN_00433690(2,
                     "mobile%c.dat ver %02d offset 0x%08x (dump:0x%08x) count 0x%02x len 0x%04x page 0x%08x "
                    );
        iVar4 = iVar3;
        do {
          iVar4 = iVar4 + 1;
          FUN_00433690(2,"%02x ");
        } while (iVar4 != iVar3 + 0x10);
        if (local_20 < 0) {
          FUN_00433690(2,"(DELETE)\n");
        }
        else {
          FUN_00433690(2,"\n");
        }
      }
      else if ((byte)(bVar1 - 0x31) < 9) {
        local_20 = *(short *)(DAT_00479f50 + iVar3 + 7);
        goto LAB_00414d23;
      }
      iVar3 = iVar3 + 0x10;
      uVar5 = uVar5 + 1;
    } while (local_24 != uVar5);
  }
  FUN_00433690(2,s__________________________________0044a4e0);
  return;
}

