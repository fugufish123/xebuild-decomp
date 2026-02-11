
void FUN_00414300(void)

{
  void *_Src;
  int iVar1;
  size_t _Size;
  short sVar2;
  uint uVar3;
  
  DAT_0047a104 = (void *)0x0;
  sVar2 = FUN_00420ab0((undefined1 *)(DAT_00479f4c + 0x80));
  iVar1 = DAT_00479f4c;
  if (sVar2 == -0x35b6) {
    _Src = (void *)(DAT_00479f4c + 0x80);
    uVar3 = FUN_00420ad0((uint *)(DAT_00479f4c + 0x90));
    DAT_0047a108 = FUN_00420ad0((uint *)(DAT_00479f4c + 0x8c));
    FUN_00433690(1,"netKd info found, size 0x%x\n");
    FUN_00433690(1,"    version : 0x%x\n");
    if (uVar3 == 1) {
      FUN_00433690(1,"    xbox IP : %d.%d.%d.%d\n");
      FUN_00433690(1,"    xbox MAC: %02x:%02x:%02x:%02x:%02x\n");
      FUN_00420ab0((undefined1 *)(iVar1 + 0x9e));
      FUN_00433690(1,"    port    : %d\n");
      FUN_00433690(1,"    host IP : %d.%d.%d.%d\n");
    }
    _Size = DAT_0047a108;
    DAT_0047a104 = malloc(DAT_0047a108);
    if (DAT_0047a104 != (void *)0x0) {
      memcpy(DAT_0047a104,_Src,_Size);
      return;
    }
  }
  return;
}

