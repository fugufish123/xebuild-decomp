
int __cdecl FUN_00406b60(undefined4 param_1,char *param_2,byte *param_3,size_t param_4,int param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined3 extraout_var_00;
  
  FUN_00433690(0,"checking %s (file ./%s)\n");
  bVar1 = FUN_004225a0(param_2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_00422670(param_2,&param_4);
  }
  iVar2 = FUN_00422ae0(param_3,param_4);
  if (param_5 == iVar2) {
    FUN_00433690(0,"dumping valid %s to file ./%s\n");
    if (param_4 == 0x10) {
      iVar2 = FUN_00420e40("./",param_2,param_3);
    }
    else {
      bVar1 = FUN_00420d80("./",param_2,param_3,param_4);
      iVar2 = CONCAT31(extraout_var_00,bVar1);
    }
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  FUN_00433690(0,
               "\n\n****** ERROR: unable to dump %s to file ./%s, key is not valid or file is inaccessible!\n"
              );
  return 0;
}

