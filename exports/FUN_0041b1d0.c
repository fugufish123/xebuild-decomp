
void FUN_0041b1d0(int param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 < 0x11) {
    if (param_2 == 0x10) {
      uVar5 = 0;
      uVar4 = 0;
      uVar1 = 0xffffffff;
      uVar2 = 0xffffffff;
    }
    else if (param_2 == 0) {
      uVar5 = 0;
      uVar4 = 0;
      uVar1 = 0;
      uVar2 = 0;
    }
    else {
      uVar1 = 0;
      uVar2 = 0;
      uVar5 = 0;
      do {
        uVar5 = uVar5 + 1;
        uVar1 = uVar1 >> 4 | uVar2 << 0x1c;
        uVar2 = uVar2 >> 4 | 0xf0000000;
      } while (uVar5 != param_2);
      uVar5 = 0;
      uVar4 = 0;
    }
  }
  else {
    if (param_2 < 0x20) {
      uVar5 = 0;
      uVar4 = 0;
      uVar1 = 0;
      do {
        uVar1 = uVar1 + 1;
        uVar5 = uVar5 >> 4 | uVar4 << 0x1c;
        uVar4 = uVar4 >> 4 | 0xf0000000;
      } while (uVar1 < param_2 - 0x10);
    }
    else {
      uVar5 = 0xffffffff;
      uVar4 = 0xffffffff;
    }
    uVar1 = 0xffffffff;
    uVar2 = 0xffffffff;
  }
  puVar3 = (undefined1 *)(param_1 + 0x38);
  FUN_00420b50(uVar1,uVar2,puVar3);
  FUN_00420b50(uVar5,uVar4,(undefined1 *)(param_1 + 0x40));
  FUN_00433690(1,"Fuse CF LDV set to : 0x");
  do {
    puVar3 = puVar3 + 1;
    FUN_00433690(1,"%02X");
  } while (puVar3 != (undefined1 *)(param_1 + 0x48));
  FUN_00433690(1,"\n");
  return;
}

