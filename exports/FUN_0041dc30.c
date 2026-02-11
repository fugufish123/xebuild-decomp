
void FUN_0041dc30(void *param_1,size_t param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *_Dst;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  void *_Buf1;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  uint local_204 [2];
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  
  _Dst = (uint *)malloc(param_2);
  memcpy(_Dst,param_1,param_2);
  sVar4 = param_2 - 0x150;
  pvVar5 = (void *)((int)param_1 + 0x150);
  FUN_00434a30(pvVar5,sVar4,(void *)0x0,0,(void *)0x0,0,local_204,0x14);
  _Buf1 = (void *)((int)param_1 + 0xc);
  iVar3 = memcmp(_Buf1,local_204,0x14);
  if (iVar3 != 0) {
    FUN_00433690(1,"crl appears crypted, attempting to decrypt with CPU key...");
    iVar3 = FUN_00402020(_Dst,param_2,1);
    if (iVar3 == 0) {
      FUN_00433690(1,"failed! Trying alternate key...");
      memcpy(_Dst,param_1,param_2);
      iVar3 = FUN_00402020(_Dst,param_2,0);
      if (iVar3 == 0) {
        FUN_00433690(1,"failed!\n");
        goto LAB_0041dce0;
      }
    }
    FUN_00433690(1,"success!\n");
    memcpy(param_1,_Dst,param_2);
  }
LAB_0041dce0:
  FUN_00434a30(pvVar5,sVar4,(void *)0x0,0,(void *)0x0,0,local_204,0x14);
  iVar3 = memcmp(_Buf1,local_204,0x14);
  if (iVar3 == 0) {
    puVar6 = (uint *)((int)param_1 + 0x140);
    FUN_004223f0((undefined1 *)puVar6,param_3,8);
    local_20c = DAT_0044a638;
    local_210 = DAT_0044a634;
    puVar8 = DAT_0044a624;
    uVar7 = DAT_0044a620;
    local_214 = DAT_0044a630;
    *(undefined4 *)((int)param_1 + 0x124) = DAT_0044a634;
    uVar2 = DAT_0044a630;
    puVar1 = DAT_0044a62c;
    *(undefined4 *)((int)param_1 + 0x128) = DAT_0044a638;
    *(uint *)((int)param_1 + 0x120) = uVar2;
    local_208 = DAT_0044a63c;
    *(undefined4 *)((int)param_1 + 300) = DAT_0044a63c;
    *(undefined1 *)((int)param_1 + 0x14f) = DAT_00479f15;
    memcpy(_Dst,param_1,param_2);
    FUN_00434850(local_204,(uint *)&stack0xfffffddc);
    FUN_004348f0(local_204,_Dst + 0x50,0x10,puVar6,&local_214,1);
    uStack_1fc = *(undefined4 *)((int)param_1 + 0x140);
    uStack_1f8 = *(undefined4 *)((int)param_1 + 0x144);
    uStack_1f4 = *(undefined4 *)((int)param_1 + 0x148);
    uStack_1f0 = *(undefined4 *)((int)param_1 + 0x14c);
    FUN_004348f0(local_204,_Dst + 0x54,uVar7,puVar8,puVar1,1);
    FUN_00434850(local_204,(uint *)&DAT_0047a11c);
    FUN_004348a0(local_204,(uint *)&stack0xfffffddc,(undefined1 *)((int)param_1 + 0x130),1);
  }
  else {
    FUN_00433690(0,
                 "\n******* ERROR: crl data appears to be crypted with the wrong key or damaged!\n")
    ;
  }
  free(_Dst);
  return;
}

