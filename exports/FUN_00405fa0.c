
undefined4 __cdecl
FUN_00405fa0(int *param_1,char *param_2,int param_3,int param_4,int param_5,char *param_6,
            int param_7)

{
  uint uVar1;
  bool bVar2;
  undefined3 extraout_var;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  
  bVar2 = FUN_004225a0(param_2);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    FUN_00433690(1,"container not found at %s, skipping load\n");
    return 0;
  }
  if (param_7 == 0) {
    pvVar3 = FUN_00422670(param_2,(size_t *)(param_1 + 2));
    *param_1 = (int)pvVar3;
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
  }
  else {
    FUN_00433690(1,"%s found, loading...");
    pvVar3 = FUN_00422670(param_2,(size_t *)(param_1 + 2));
    *param_1 = (int)pvVar3;
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    FUN_00433690(1,"done!\n\tRead 0x%x bytes to memory\nchecking integrity...\n");
    pvVar3 = (void *)*param_1;
  }
  uVar1 = *(uint *)((int)pvVar3 + 0x340);
  param_1[3] = (uVar1 >> 8 & 0xff00) +
               (uVar1 & 0xff00) * 0x100 + uVar1 * 0x1000000 + 0xfff + (uVar1 >> 0x18) & 0xfffff000;
  if (((param_4 == 0) ||
      (uVar1 = *(uint *)((int)pvVar3 + 0x344),
      param_4 ==
      (uVar1 >> 8 & 0xff00) + (uVar1 & 0xff00) * 0x100 + (uVar1 >> 0x18) + uVar1 * 0x1000000)) &&
     ((param_5 == 0 ||
      (uVar1 = *(uint *)((int)pvVar3 + 0x360),
      param_5 ==
      (uVar1 >> 8 & 0xff00) + (uVar1 & 0xff00) * 0x100 + (uVar1 >> 0x18) + uVar1 * 0x1000000)))) {
    uVar1 = *(uint *)((int)pvVar3 + 0x971a);
    iVar5 = (uVar1 >> 0x18) + uVar1 * 0x1000000 + (uVar1 & 0xff00) * 0x100 + (uVar1 >> 8 & 0xff00);
    if ((param_3 == 0) || (param_3 == iVar5)) {
      iVar6 = 0;
      if (iVar5 == 0x53555044) {
        uVar1 = *(uint *)((int)pvVar3 + 0x9722);
        iVar6 = (uVar1 & 0xff00) * 0x100 + (uVar1 >> 0x18) + uVar1 * 0x1000000 +
                (uVar1 >> 8 & 0xff00);
      }
      pvVar4 = malloc(((uint)param_1[2] >> 0xc) * 4 + 4);
      param_1[1] = (int)pvVar4;
      if (pvVar4 != (void *)0x0) {
        if (param_7 != 0) {
          if (iVar6 == 0) {
            FUN_00433690(1,"header seems valid\n");
          }
          else {
            FUN_00433690(1,"header seems valid, version %d.%d.%d.%d\n");
          }
        }
        if ((param_6 != (char *)0x0) && (iVar5 = FUN_004223b0(param_6,0x14), iVar5 == 0)) {
          iVar5 = memcmp((void *)((int)pvVar3 + 0x32c),param_6,0x14);
          if (iVar5 != 0) {
            FUN_00433690(1,"manifest hash does not match container header!\n");
            goto LAB_00406067;
          }
          if (param_7 != 0) {
            FUN_00433690(1,"manifest hash matches container header!\n");
          }
        }
        iVar5 = FUN_00405610(param_1,(int)pvVar3,param_7);
        if (iVar5 != 0) {
          return 1;
        }
      }
    }
  }
LAB_00406067:
  FUN_00433690(1,"checks failed! Container corrupt!\n");
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  *param_1 = 0;
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
  }
  param_1[1] = 0;
  return 0;
}

