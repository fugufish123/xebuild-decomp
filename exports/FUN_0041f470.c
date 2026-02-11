
/* WARNING: Removing unreachable block (ram,0x0041f4df) */
/* WARNING: Removing unreachable block (ram,0x0041f6ca) */
/* WARNING: Removing unreachable block (ram,0x0041f6cd) */

undefined4 FUN_0041f470(void)

{
  int iVar1;
  
  iVar1 = send(DAT_0044a6c0,"GTIN\n",5,0);
  if (iVar1 == 5) {
    FUN_0041e800();
  }
  FUN_00433690(0,"failed!\n");
  return 0;
}

