
undefined * FUN_00420420(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = send(DAT_0044a6c0,"GTBB\n",5,0);
  if (iVar1 != 5) {
    return (undefined *)0x0;
  }
  puVar2 = FUN_0041e800();
  return puVar2;
}

