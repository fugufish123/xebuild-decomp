
undefined4 __cdecl FUN_0040c700(int *param_1,int *param_2)

{
  int iVar1;
  
  if (DAT_0046f188 == 0) {
    return 0;
  }
  if (DAT_0046f180 == 0) {
    return 0;
  }
  FUN_00420ad0((uint *)(DAT_0046f188 + 0xc));
  FUN_00420ab0((undefined1 *)(DAT_0046f188 + 2));
  FUN_00433690(1,"extracted SUPD/xboxupd.bin/%c%c_%d.bin (0x%x bytes)\n");
  iVar1 = DAT_0046f188;
  DAT_0046f188 = 0;
  *param_1 = iVar1;
  *param_2 = DAT_0046f180;
  return 1;
}

