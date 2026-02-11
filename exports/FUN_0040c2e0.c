
void FUN_0040c2e0(void)

{
  byte *pbVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint _Size;
  undefined3 extraout_var;
  void *_Memory;
  undefined1 *local_4c;
  int local_48;
  char local_44 [8];
  undefined1 auStack_3c [7];
  undefined4 local_35;
  
  if (DAT_0046f190 == 0) {
LAB_0040c2f0:
    FUN_00433690(0,"***** ERROR: xboxupd.bin not found in SU container!\n");
LAB_0040c30f:
    DAT_0046f184 = 0;
    DAT_0046f180 = 0;
    _Memory = DAT_0046f188;
    if (DAT_0046f18c == (byte *)0x0) goto LAB_0040c339;
  }
  else {
    iVar4 = FUN_00405d50((int *)&DAT_0046f194,"xboxupd.bin",&local_4c,&local_48);
    if (iVar4 == 0) {
      builtin_strncpy(local_44,"$fla",4);
      uVar5 = 0;
      do {
        *(undefined4 *)(auStack_3c + uVar5) = 0;
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x20);
      builtin_strncpy(local_44 + 4,"sh_x",4);
      auStack_3c._0_3_ = 0x786f62;
      auStack_3c._3_4_ = 0x2e647075;
      local_35 = 0x6e6962;
      iVar4 = FUN_00405d50((int *)&DAT_0046f194,local_44,&local_4c,&local_48);
      if (iVar4 == 0) goto LAB_0040c2f0;
    }
    FUN_00433690(1,"extracted SUPD/xboxupd.bin (0x%x bytes)\n");
    sVar3 = FUN_00420ab0(local_4c);
    FUN_00420ab0(local_4c + 2);
    uVar5 = FUN_00420ad0((uint *)(local_4c + 0xc));
    DAT_0046f184 = uVar5 + 0xf & 0xfffffff0;
    if (sVar3 != 0x4346) goto LAB_0040c30f;
    DAT_0046f18c = (byte *)calloc(DAT_0046f184,1);
    if (DAT_0046f18c == (byte *)0x0) {
      DAT_0046f184 = 0;
      DAT_0046f180 = 0;
      _Memory = DAT_0046f188;
      goto LAB_0040c339;
    }
    FUN_00433690(1,"decrypting SUPD/xboxupd.bin/%c%c_%d.bin (0x%x bytes)...");
    pbVar1 = DAT_0046f18c;
    memcpy(DAT_0046f18c,local_4c,uVar5);
    iVar4 = FUN_00401ce0(pbVar1,uVar5);
    if (iVar4 == 0) {
LAB_0040c560:
      FUN_00433690(1,"failed!\n");
      goto LAB_0040c30f;
    }
    FUN_00433690(1,"done!\n");
    sVar3 = FUN_00420ab0(local_4c + uVar5);
    FUN_00420ab0(local_4c + uVar5 + 2);
    _Size = FUN_00420ad0((uint *)(local_4c + uVar5 + 0xc));
    DAT_0046f180 = _Size + 0xf & 0xfffffff0;
    if (sVar3 != 0x4347) goto LAB_0040c30f;
    DAT_0046f188 = calloc(DAT_0046f180,1);
    if (DAT_0046f188 != (void *)0x0) {
      memcpy(DAT_0046f188,local_4c + uVar5,_Size);
      FUN_00433690(1,"decrypting SUPD/xboxupd.bin/%c%c_%d.bin (0x%x bytes)...");
      bVar2 = FUN_00401dc0((int)DAT_0046f188,(uint *)(DAT_0046f18c + 0x330));
      if (CONCAT31(extraout_var,bVar2) != 0) {
        FUN_00433690(1,"done!\n");
        return;
      }
      goto LAB_0040c560;
    }
    _Memory = (void *)0x0;
    if (DAT_0046f18c == (byte *)0x0) {
      DAT_0046f180 = 0;
      DAT_0046f184 = 0;
      return;
    }
  }
  DAT_0046f184 = 0;
  DAT_0046f180 = 0;
  free(DAT_0046f18c);
  DAT_0046f18c = (byte *)0x0;
LAB_0040c339:
  if (_Memory != (void *)0x0) {
    free(_Memory);
    DAT_0046f188 = (void *)0x0;
  }
  return;
}

