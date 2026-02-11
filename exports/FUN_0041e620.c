
void __cdecl FUN_0041e620(uint *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint local_228;
  uint local_224;
  uint local_220;
  uint local_21c;
  undefined4 local_218 [5];
  uint local_204 [125];
  
  local_228 = param_1[0x40];
  local_224 = param_1[0x41];
  local_220 = param_1[0x42];
  local_21c = param_1[0x43];
  if (param_2 != 0x4000) {
    FUN_00433690(0,"****** ERROR: FCRT encrypt invalid size!\n");
    return;
  }
  uVar2 = FUN_00420ad0(param_1 + 0x47);
  if (uVar2 < 0x4000) {
    puVar1 = (uint *)((int)param_1 + uVar2);
    FUN_00434a30(puVar1,0x4000 - uVar2,(void *)0x0,0,(void *)0x0,0,local_218,0x14);
    iVar3 = memcmp(param_1 + 0x4b,local_218,0x14);
    if (iVar3 != 0) {
      iVar3 = FUN_00402720(param_1);
      if (iVar3 != 1) {
        FUN_00433690(0,
                     "****** WARNING: FCRT data appears to be crypted or damaged!! Skipping encryption.\n"
                    );
        return;
      }
    }
    FUN_00434850(local_204,(uint *)&DAT_0047a11c);
    FUN_004348f0(local_204,puVar1,0x4000 - uVar2,puVar1,&local_228,1);
    return;
  }
  FUN_00433690(1,"**** ERROR: FCRT encrypt invalid offset!\n");
  return;
}

