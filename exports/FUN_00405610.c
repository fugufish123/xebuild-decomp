
undefined4 __cdecl FUN_00405610(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *_Buf2;
  char *_Buf2_00;
  int local_50;
  int local_48;
  char *local_44;
  undefined4 local_30 [8];
  
  FUN_00434a30((void *)(*param_1 + 0x344),param_1[3] - 0x344,(void *)0x0,0,(void *)0x0,0,local_30,
               0x14);
  iVar2 = memcmp((void *)(param_2 + 0x32c),local_30,0x14);
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = param_1[3] + 0x1000;
  _Buf2 = (char *)(param_1[3] + *param_1);
  param_1[4] = *param_1 + iVar2;
  if (param_3 != 0) {
    FUN_00433690(1,"header hash is OK, checking content hashes...\n");
  }
  local_48 = 0x18;
  local_44 = (char *)0x0;
  local_50 = 0;
  do {
    iVar5 = local_50 * 4;
    iVar3 = local_50 + 0xaa;
    do {
      iVar4 = FUN_004223b0(_Buf2,0x18);
      if (iVar4 != 0) {
        bVar1 = false;
        goto LAB_0040570a;
      }
      FUN_00434a30((void *)(*param_1 + iVar2),0x1000,(void *)0x0,0,(void *)0x0,0,local_30,0x14);
      iVar4 = memcmp(local_30,_Buf2,0x14);
      if (iVar4 != 0) {
        return 0;
      }
      local_50 = local_50 + 1;
      _Buf2 = _Buf2 + 0x18;
      *(int *)(param_1[1] + iVar5) = iVar2;
      iVar2 = iVar2 + 0x1000;
      iVar5 = iVar5 + 4;
    } while (local_50 != iVar3);
    bVar1 = true;
LAB_0040570a:
    if ((uint)param_1[2] <= iVar2 + 0x2000U) break;
    _Buf2_00 = (char *)(*param_1 + iVar2);
    if (*(int *)(_Buf2_00 + 0x14) == 0) {
      FUN_00434a30(_Buf2_00,0x1000,(void *)0x0,0,(void *)0x0,0,local_30,0x14);
      iVar5 = memcmp((void *)(param_2 + 0x381),local_30,0x14);
      if (iVar5 != 0) {
        return 0;
      }
      FUN_00434a30((void *)(param_1[3] + *param_1),0x1000,(void *)0x0,0,(void *)0x0,0,local_30,0x14)
      ;
      iVar5 = memcmp(local_30,_Buf2_00,0x14);
      if (iVar5 != 0) {
        return 0;
      }
      iVar2 = iVar2 + 0x1000;
      _Buf2 = (char *)(*param_1 + iVar2);
      local_44 = _Buf2_00;
LAB_00405730:
      FUN_00434a30(_Buf2,0x1000,(void *)0x0,0,(void *)0x0,0,local_30,0x14);
      iVar5 = memcmp(local_30,local_44 + local_48,0x14);
      if (iVar5 != 0) {
        return 0;
      }
    }
    else {
      _Buf2 = _Buf2_00;
      if (local_44 != (char *)0x0) goto LAB_00405730;
    }
    iVar2 = iVar2 + 0x1000;
    local_48 = local_48 + 0x18;
  } while (bVar1);
  if (param_3 != 0) {
    FUN_00433690(1,"content hashes seem OK, everything looks good!\n");
  }
  return 1;
}

