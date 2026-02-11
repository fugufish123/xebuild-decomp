
void FUN_00408ec0(void)

{
  void *pvVar1;
  int iVar2;
  char *_Source;
  undefined4 local_840 [9];
  char local_81c [1024];
  char local_41c [1036];
  
  strcpy(local_81c,&DAT_0047ad4c);
  pvVar1 = FUN_004481c0(local_81c);
  if (pvVar1 != (void *)0x0) {
LAB_00408f00:
    iVar2 = FUN_00448360((int)pvVar1);
    if (iVar2 != 0) {
      while( true ) {
        _Source = (char *)(iVar2 + 8);
        strcpy(local_41c,local_81c);
        strcat(local_41c,_Source);
        iVar2 = FUN_00448820(local_41c,local_840);
        if (iVar2 < 0) break;
        iVar2 = _stricmp(_Source,s_smc_bin_0044a340);
        if (iVar2 != 0) {
          iVar2 = _stricmp(_Source,s_kv_bin_0044a360);
          if (iVar2 == 0) {
            strcpy(s_kv_bin_0044a360,_Source);
          }
          else {
            iVar2 = _stricmp(_Source,s_patches__0044a3e0);
            if (iVar2 == 0) {
              strcpy(s_patches__0044a3e0,_Source);
            }
          }
          break;
        }
        strcpy(s_smc_bin_0044a340,_Source);
        iVar2 = FUN_00448360((int)pvVar1);
        if (iVar2 == 0) goto LAB_00408f6f;
      }
      goto LAB_00408f00;
    }
LAB_00408f6f:
    FUN_00448470(pvVar1);
  }
  return;
}

