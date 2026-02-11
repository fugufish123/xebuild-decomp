
void __cdecl FUN_004317c0(uint param_1,undefined4 *param_2)

{
  FUN_00433690(param_1,"Console Current Info:\n");
  FUN_00433690(param_1,"running kernel  : %d.%d.%d.%d\n");
  FUN_00420a90((*(uint *)(DAT_00479580 + 0xc) & 0xf) + 1);
  FUN_00433690(param_1,"bootstrap type  : %s\n");
  FUN_00420a90((*(uint *)(DAT_00479580 + 0x10) >> 0x1c) + 1);
  FUN_00433690(param_1,"hardware type   : %s\n");
  FUN_00433690(param_1,"hardware flags  : 0x%08x\n");
  FUN_00433690(param_1,"internal HDD    : %s\n");
  if (((*(byte *)(DAT_00479580 + 0x10) & 0x20) != 0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = 1;
  }
  return;
}

