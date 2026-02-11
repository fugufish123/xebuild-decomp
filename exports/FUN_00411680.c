
void FUN_00411680(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar1 = DAT_00479ed8;
  if (DAT_00479ef0 == 0) {
    FUN_0040e950(0x1ffb,0x80);
  }
  else if (0x7f < DAT_00479ee8) {
    *DAT_00479ed8 = DAT_004cd7c0;
    puVar1[0x1f] = DAT_004cd83c;
    iVar2 = (int)puVar1 - (int)((uint)(puVar1 + 1) & 0xfffffffc);
    puVar4 = (undefined4 *)((int)&DAT_004cd7c0 - iVar2);
    puVar1 = (undefined4 *)((uint)(puVar1 + 1) & 0xfffffffc);
    for (uVar3 = iVar2 + 0x80U >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar1 + 1;
    }
    memset(DAT_00479ed8 + 0x20,0,0x3f80);
    iVar2 = 0;
    do {
      while( true ) {
        puVar1 = (undefined4 *)(DAT_00479ed0 + iVar2);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        if (DAT_00479ef0 == 0) break;
        iVar2 = iVar2 + 0x10;
        *(byte *)((int)puVar1 + 2) = *(byte *)((int)puVar1 + 2) & 0xf0;
        *(undefined1 *)puVar1 = 0xff;
        *(undefined1 *)((int)puVar1 + 1) = 0;
        if (iVar2 == 0x200) goto LAB_00411732;
      }
      iVar2 = iVar2 + 0x10;
      *(byte *)((int)puVar1 + 1) = *(byte *)((int)puVar1 + 1) & 0xf0;
      *(undefined1 *)((int)puVar1 + 5) = 0xff;
      *(undefined1 *)puVar1 = 0;
    } while (iVar2 != 0x200);
LAB_00411732:
    DAT_004cd840 = 0x80;
  }
  if ((DAT_0047a104 != (void *)0x0) && (DAT_0047a108 != 0)) {
    FUN_00433690(1,"Inserting netKd data from dump into header\n");
    if (DAT_00479ef0 != 0) {
      FUN_0040eef0(DAT_0047a108,DAT_0047a104,0xf1f1);
      return;
    }
    FUN_0040eef0(DAT_0047a108,DAT_0047a104,0x1ffb);
    return;
  }
  return;
}

