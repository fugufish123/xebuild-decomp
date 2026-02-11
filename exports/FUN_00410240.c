
void __cdecl FUN_00410240(ushort param_1)

{
  *(ushort *)(DAT_00479ed8 + 2) = param_1 << 8 | param_1 >> 8;
  FUN_00433690(1,"flash header build version set to v.%d\n");
  return;
}

