
undefined4 __cdecl FUN_00420200(int param_1,uint param_2,ushort param_3,ushort param_4)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined *_Memory;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  char *len;
  bool bVar9;
  int iStack_30;
  uint local_2c [9];
  
  sprintf((char *)local_2c,"WBLK%04x%04x\n",(uint)param_3,(uint)param_4);
  puVar8 = local_2c;
  do {
    puVar7 = puVar8;
    uVar2 = *puVar7 + 0xfefefeff & ~*puVar7;
    uVar3 = uVar2 & 0x80808080;
    puVar8 = puVar7 + 1;
  } while (uVar3 == 0);
  bVar9 = (uVar2 & 0x8080) == 0;
  if (bVar9) {
    uVar3 = uVar3 >> 0x10;
  }
  if (bVar9) {
    puVar8 = (uint *)((int)puVar7 + 6);
  }
  len = (char *)((int)puVar8 + ((-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)) - (int)local_2c));
  pcVar4 = (char *)send(DAT_0044a6c0,(char *)local_2c,(int)len,0);
  if (len == pcVar4) {
    iVar5 = FUN_00433600();
    iVar5 = FUN_0041f1a0(param_1,param_2,(uint)(iVar5 != 0));
    if ((iVar5 != 0) && (_Memory = FUN_0041e800(), _Memory != (undefined *)0x0)) {
      if ((iStack_30 == 2) && (sVar1 = FUN_00420ab0(_Memory), sVar1 == 0x4f4b)) {
        if (_Memory == &DAT_00479578) {
          return 1;
        }
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
        if (_Memory == &DAT_00479578) {
          return 0;
        }
      }
      free(_Memory);
      return uVar6;
    }
  }
  return 0;
}

