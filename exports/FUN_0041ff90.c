
undefined * FUN_0041ff90(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = send(DAT_0044a6c0,"GTBL\n",5,0);
  if (iVar1 != 5) {
    return (undefined *)0x0;
  }
  puVar2 = FUN_0041e800();
  return puVar2;
}

