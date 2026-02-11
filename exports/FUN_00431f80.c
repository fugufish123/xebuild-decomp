
void * __cdecl FUN_00431f80(char *param_1,size_t param_2,void *param_3)

{
  void *_Memory;
  int iVar1;
  size_t local_24;
  undefined4 local_20 [6];
  
  if (param_2 == 0) {
    FUN_00433690(1,"FAILED! Input len is 0!\n");
  }
  else {
    _Memory = FUN_00422670(param_1,&local_24);
    if (_Memory == (void *)0x0) {
      FUN_00433690(1,"could not read file!\n");
    }
    else {
      if (local_24 == param_2) {
        FUN_00434a30(_Memory,local_24,(void *)0x0,0,(void *)0x0,0,local_20,0x14);
        iVar1 = memcmp(local_20,param_3,0x14);
        if (iVar1 == 0) {
          FUN_00433690(1,"- OK\n");
          return _Memory;
        }
        FUN_00433690(1,"file corrupt, hash check FAILED!!\n");
      }
      else {
        FUN_00433690(1,"file size FAIL! 0x%x is not 0x%x!\n");
      }
      free(_Memory);
    }
  }
  DAT_00479684 = DAT_00479684 + 1;
  return (void *)0x0;
}

