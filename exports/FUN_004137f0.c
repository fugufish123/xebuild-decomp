
void FUN_004137f0(void)

{
  undefined4 *puVar1;
  
  DAT_00478d40 = 0;
  if (DAT_00479f50 != (void *)0x0) {
    free(DAT_00479f50);
  }
  if (DAT_00479f4c != (void *)0x0) {
    free(DAT_00479f4c);
  }
  DAT_00479f74 = 0;
  DAT_00479f4c = (void *)0x0;
  puVar1 = &DAT_0047a08c;
  DAT_00479f50 = (void *)0x0;
  DAT_00479f6c = 0;
  DAT_00479f70 = 0;
  do {
    if ((void *)*puVar1 != (void *)0x0) {
      free((void *)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while (puVar1 != &DAT_0047a0e4);
  puVar1 = &DAT_00479ea0;
  do {
    if ((void *)puVar1[0x91] != (void *)0x0) {
      free((void *)puVar1[0x91]);
    }
    puVar1[0x92] = 0;
    puVar1 = puVar1 + 2;
  } while (puVar1 != &DAT_00479ec0);
  if (DAT_0047a104 != (void *)0x0) {
    free(DAT_0047a104);
  }
  return;
}

