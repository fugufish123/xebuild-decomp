
bool __cdecl FUN_00433440(char *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_004225d0(param_1,"index");
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_00433690(0,"\n\n***** WARNING: compatibility data skipped, unable to find index!\n");
    return false;
  }
  FUN_00433690(0,"formatting compatibility partition...");
  iVar2 = FUN_00420670();
  if (iVar2 != 0) {
    FUN_00433690(0,"success!\n");
    iVar2 = FUN_0041faf0(&DAT_0045c496,"\\Device\\Harddisk0\\SystemPartition");
    if (iVar2 != 0) {
      iVar2 = FUN_00433130(param_1,"XCOM:");
      if (iVar2 == 0) {
        FUN_00433690(0,"\n\n***** ERROR: Sending files to compatibility partition failed!\n");
      }
      else {
        FUN_00433690(0,"sent files to partition OK!\n");
      }
      FUN_0041fc30(&DAT_0045c496);
      return iVar2 != 0;
    }
    FUN_00433690(0,"\n\n***** ERROR: unable to mount compatibility partition!\n");
    return false;
  }
  FUN_00433690(0,"\n\n***** ERROR: unable to format compatibility partition!\n");
  return false;
}

