
undefined4 __cdecl FUN_00413510(char *param_1)

{
  if ((DAT_004709ec != 0) && (param_1 != (char *)0x0)) {
    sprintf(param_1,"%c%c/%c%c/20%c%c",(uint)*(byte *)(DAT_004709f0 + 0x9e4),
            (uint)*(byte *)(DAT_004709f0 + 0x9e5),(uint)*(byte *)(DAT_004709f0 + 0x9e7),
            (uint)*(byte *)(DAT_004709f0 + 0x9e8),(uint)*(byte *)(DAT_004709f0 + 0x9ea),
            (uint)*(byte *)(DAT_004709f0 + 0x9eb));
    return 1;
  }
  return 0;
}

