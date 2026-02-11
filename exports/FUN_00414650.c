
void FUN_00414650(void)

{
  int iVar1;
  
  if (DAT_00474d24 != 1) {
    return;
  }
  iVar1 = 0;
  do {
    while (PTR_DAT_0044a5d8[(iVar1 + 0x100) * 0x20] == '\0') {
      iVar1 = iVar1 + 1;
      if (iVar1 == 0x100) {
        return;
      }
    }
    iVar1 = iVar1 + 1;
    FUN_00433690(1,"sector: 0x%04x offset: 0x%08x size: 0x%08x timestamp: 0x%08x name: %s\n");
  } while (iVar1 != 0x100);
  return;
}

