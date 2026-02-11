
void __cdecl FUN_0041d6a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  void *_Src;
  char *_Dst;
  int iVar4;
  undefined3 extraout_var;
  size_t sVar5;
  byte *in_stack_00000038;
  
  if (*(int *)(param_1 + 0x410) == 0x4000) {
    _Src = *(void **)(param_1 + 0x40c);
  }
  else {
    if (*(int *)(param_1 + 0x410) == 0) {
      FUN_00433690(1,
                   "******* WARNING: extended.bin was not provided or was invalid! Making up an clean/empty extended.bin!\n"
                  );
    }
    else {
      FUN_00433690(1,
                   "******* WARNING: extended.bin is not the correct size! Making up an clean/empty extended.bin!\n"
                  );
    }
    if (*(void **)(param_1 + 0x40c) != (void *)0x0) {
      free(*(void **)(param_1 + 0x40c));
    }
    *(undefined4 *)(param_1 + 0x410) = 0x4000;
    _Src = calloc(0x4000,1);
    *(void **)(param_1 + 0x40c) = _Src;
  }
  _Dst = (char *)malloc(0x4000);
  memcpy(_Dst,_Src,0x4000);
  iVar4 = FUN_004223b0(_Dst,0x10);
  if (iVar4 == 0) {
    FUN_00434110((uint *)&DAT_0047a11c,0x10,_Dst + 0x10,*(int *)(param_1 + 0x410) - 0x10,
                 &stack0xffffffd2,2,(void *)0x0,0,(undefined4 *)&stack0xffffffd4,0x10);
    iVar4 = memcmp(_Dst,&stack0xffffffd4,0x10);
    if (iVar4 != 0) {
      FUN_00433690(1,"extended.bin appears to be encrypted, attempting to decrypt...");
      memcpy(_Dst,*(void **)(param_1 + 0x40c),*(size_t *)(param_1 + 0x410));
      bVar3 = FUN_00401630(_Dst);
      if (CONCAT31(extraout_var,bVar3) == 0) {
        FUN_00433690(1,"Failed!\nextended.bin could not be decrypted, filling clean/empty data.\n");
        sVar5 = *(size_t *)(param_1 + 0x410);
        memset(_Dst,0,sVar5);
        goto LAB_0041d75b;
      }
      FUN_00433690(1,"Success!\n");
    }
    sVar5 = *(size_t *)(param_1 + 0x410);
  }
  else {
    sVar5 = *(size_t *)(param_1 + 0x410);
  }
LAB_0041d75b:
  memcpy(*(void **)(param_1 + 0x40c),_Dst,sVar5);
  free(_Dst);
  uVar2 = DAT_0044a650;
  puVar1 = *(undefined4 **)(param_1 + 0x40c);
  sVar5 = *(int *)(param_1 + 0x410) - 0x10;
  puVar1[4] = DAT_0044a64c;
  puVar1[5] = uVar2;
  FUN_00434110((uint *)&DAT_0047a11c,0x10,puVar1 + 4,sVar5,&stack0xffffffd2,2,(void *)0x0,0,puVar1,
               0x10);
  FUN_00434110((uint *)&DAT_0047a11c,0x10,puVar1,0x10,(void *)0x0,0,(void *)0x0,0,
               (undefined4 *)&stack0xffffffd4,0x10);
  FUN_004345b0((int)&stack0xffffffd4,0x10,in_stack_00000038,sVar5);
  return;
}

