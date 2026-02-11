
void FUN_0041e180(void *param_1,void *param_2)

{
  char *_Buf1;
  char *_Dst;
  void *_Src;
  void *_Dst_00;
  uint _Size;
  int iVar1;
  void *pvVar2;
  void **ppvVar3;
  char *_Buf2;
  int iVar4;
  void *pvVar5;
  size_t local_50;
  void *pvStack_3c;
  void *pvStack_38;
  void *pvStack_34;
  void *local_30;
  void *pvStack_2c;
  void *pvStack_28;
  undefined4 auStack_24 [3];
  char acStack_18 [8];
  
  _Dst_00 = malloc((size_t)param_2);
  memcpy(_Dst_00,param_1,(size_t)param_2);
  iVar4 = 0;
  pvVar2 = (void *)0x0;
  if (param_2 != (void *)0x0) {
    do {
      _Src = pvStack_38;
      _Dst = (char *)((int)param_1 + (int)pvVar2);
      if ((((*_Dst != 'D') || (*(char *)((int)param_1 + 1 + (int)pvVar2) != 'A')) ||
          (*(char *)((int)param_1 + 2 + (int)pvVar2) != 'E')) ||
         (*(char *)((int)param_1 + 3 + (int)pvVar2) != 'P')) {
        FUN_00433690(0,"\n******* ERROR: dae segment does not have the expected header!\n");
        break;
      }
      ppvVar3 = &local_30;
      _Buf2 = (char *)0x14;
      _Size = (uint)CONCAT11(*(undefined1 *)((int)param_1 + 4 + (int)pvVar2),
                             *(undefined1 *)((int)param_1 + 5 + (int)pvVar2));
      local_50 = _Size - 0x150;
      FUN_00434a30(_Dst + 0x150,local_50,(void *)0x0,0,(void *)0x0,0,ppvVar3,0x14);
      _Buf1 = _Dst + 0xc;
      iVar1 = memcmp(_Buf1,&local_30,0x14);
      if (iVar1 == 0) {
LAB_0041e2d2:
        FUN_0041dfa0(_Dst,(size_t)_Buf2,(int)ppvVar3);
        iVar4 = (int)pvVar2 + 1;
      }
      else {
        if (iVar4 == 0) {
          FUN_00433690(1,"dae appears encrypted, attempting to decrypt with CPU key...");
          memcpy(_Dst,(void *)((int)_Dst_00 + (int)pvVar2),_Size);
          FUN_00402210(_Dst,_Size,1);
          _Size = 0x14;
          pvVar5 = (void *)0x0;
          _Buf2 = (char *)0x0;
          ppvVar3 = (void **)0x0;
          FUN_00434a30(pvVar2,(size_t)((int)_Dst_00 + (int)pvVar2),(void *)0x0,0,(void *)0x0,0,
                       auStack_24,0x14);
          iVar4 = memcmp(pvStack_3c,auStack_24,0x14);
          if (iVar4 == 0) goto LAB_0041e3b3;
          FUN_00433690(1,"failed! Attempting to decrypt with alternate key...\n");
          memcpy(_Dst,pvStack_38,(size_t)_Buf1);
          FUN_00402210(_Dst,(size_t)_Buf1,0);
          local_50 = 0;
          _Size = 0;
          FUN_00434a30(pvStack_34,(size_t)pvStack_38,(void *)0x0,0,(void *)0x0,0,
                       (undefined4 *)acStack_18,0x14);
          iVar4 = 0x14;
          iVar1 = memcmp(local_30,acStack_18,0x14);
          if (iVar1 != 0) {
            FUN_00433690(0,
                         "failed!\n******* ERROR: dae hash incorrect, could not verify decrypted dae!\n"
                        );
            goto LAB_0041e46c;
          }
          _Buf2 = "success!\n";
          FUN_00433690(1,"success!\n");
          pvVar2 = pvStack_28;
          goto LAB_0041e2d2;
        }
        memcpy(_Dst,(void *)((int)_Dst_00 + (int)pvVar2),_Size);
        FUN_00402210(_Dst,_Size,1);
        _Size = 0x14;
        pvVar5 = (void *)0x0;
        _Buf2 = (char *)0x0;
        ppvVar3 = (void **)0x0;
        FUN_00434a30(pvVar2,(size_t)((int)_Dst_00 + (int)pvVar2),(void *)0x0,0,(void *)0x0,0,
                     auStack_24,0x14);
        iVar4 = memcmp(pvStack_3c,auStack_24,0x14);
        if (iVar4 == 0) {
LAB_0041e3b3:
          FUN_00433690(1,"success!\n");
          pvVar2 = pvVar5;
          goto LAB_0041e2d2;
        }
        pvStack_38 = pvStack_34;
        memcpy(_Dst,_Src,(size_t)_Buf1);
        FUN_00402210(_Dst,(size_t)_Buf1,0);
        local_50 = 0;
        _Size = 0;
        FUN_00434a30(pvStack_34,(size_t)pvStack_34,(void *)0x0,0,(void *)0x0,0,
                     (undefined4 *)acStack_18,0x14);
        _Buf2 = acStack_18;
        iVar4 = 0x14;
        iVar1 = memcmp(local_30,_Buf2,0x14);
        pvVar2 = pvStack_2c;
        if (iVar1 == 0) goto LAB_0041e2d2;
LAB_0041e46c:
        local_50 = (int)param_2 + 1;
      }
      pvVar2 = (void *)(local_50 + _Size);
    } while (pvVar2 < param_2);
    if (iVar4 == 2) goto LAB_0041e1f4;
  }
  FUN_00433690(0,
               "\n******* WARNING: dae data appears to be crypted with a different key or damaged! Skipping encryption.\n"
              );
LAB_0041e1f4:
  free(_Dst_00);
  return;
}

