
void __cdecl FUN_004335a0(undefined1 param_1)

{
  switch(param_1) {
  case 0:
  case 0x20:
  case 0x31:
    DAT_00479aa4 = 1;
    puts("verbose set to level 1");
    return;
  default:
    puts("verbose flag is invalid or default, ignoring");
    return;
  case 0x30:
    return;
  case 0x32:
    DAT_00479aa4 = 2;
    puts("verbose set to level 2");
    return;
  }
}

