
undefined4 __cdecl FUN_00402720(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  size_t sVar6;
  int in_stack_00000030;
  undefined4 local_204;
  uint uStack_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  undefined4 auStack_1f0 [5];
  uint auStack_1dc [115];
  
  uVar2 = FUN_00420ad0(param_1 + 0x44);
  puVar5 = DAT_0047a144;
  if (-1 < (int)uVar2) {
    puVar5 = DAT_0047a140;
  }
  if (puVar5 == (uint *)0x0) {
    FUN_00433690(1,"pub key to verify signature is not available, skipping!\n");
  }
  else {
    FUN_00434110((uint *)&DAT_0047a11c,0x10,param_1 + 0x40,0x40,(void *)0x0,0,(void *)0x0,0,
                 &local_204,0x14);
    bVar1 = FUN_00435b00(&local_204,param_1,puVar5);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      FUN_00433690(1,"\nsignature FAILED!\n");
    }
    else {
      FUN_00433690(1,"sig good! ");
    }
  }
  uStack_200 = param_1[0x40];
  uStack_1fc = param_1[0x41];
  uStack_1f8 = param_1[0x42];
  uStack_1f4 = param_1[0x43];
  if (in_stack_00000030 == 0x4000) {
    uVar2 = FUN_00420ad0(param_1 + 0x47);
    if (0x3fff < uVar2) {
      FUN_00433690(1,"**** ERROR: FCRT decrypt invalid offset!\n");
      return 0;
    }
    puVar5 = (uint *)((int)param_1 + uVar2);
    sVar6 = 0x4000 - uVar2;
    FUN_00434a30(puVar5,sVar6,(void *)0x0,0,(void *)0x0,0,auStack_1f0,0x14);
    iVar4 = memcmp(param_1 + 0x4b,auStack_1f0,0x14);
    if (iVar4 == 0) {
      FUN_00433690(1,"FCRT was already decrypted...");
      uVar3 = 1;
    }
    else {
      FUN_00434850(auStack_1dc,(uint *)&DAT_0047a11c);
      FUN_004348f0(auStack_1dc,puVar5,sVar6,puVar5,&uStack_200,0);
      FUN_00434a30(puVar5,sVar6,(void *)0x0,0,(void *)0x0,0,auStack_1f0,0x14);
      iVar4 = memcmp(param_1 + 0x4b,auStack_1f0,0x14);
      uVar3 = 1;
      if (iVar4 != 0) {
        FUN_00433690(1,"\n******* ERROR: FCRT hash check failed, could not decrypt!\n");
        uVar3 = 0;
      }
    }
  }
  else {
    FUN_00433690(1,"**** ERROR: FCRT decrypt invalid size!\n");
    uVar3 = 0;
  }
  return uVar3;
}

