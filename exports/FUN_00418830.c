
/* WARNING: Type propagation algorithm not settling */

undefined4 __cdecl FUN_00418830(int param_1,undefined4 *param_2)

{
  char *_Source;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte *pbVar6;
  bool bVar7;
  undefined4 local_40;
  byte local_34 [44];
  
  FUN_00433570(1);
  pbVar6 = local_34;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar6[0] = 0;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
    pbVar6 = pbVar6 + 4;
  }
  iVar3 = FUN_00418ee0(local_34,(char *)0x0,"1blkey.txt");
  if (iVar3 != 0) {
    iVar3 = FUN_0041b740(local_34);
    if (iVar3 == 0) {
      FUN_00433690(0,"\n***** WARNING: 1blkey.txt not found or invalid, cannot proceed.\n\n");
      return 4;
    }
  }
  if (param_1 == 1) {
    iVar3 = FUN_0040cc80((char *)*param_2);
    if (iVar3 == 0) {
      FUN_00433690(0,"Error loading SU!\n");
      local_40 = 4;
    }
    else {
      FUN_00433690(0,"SU loaded successfully!\n");
      _Source = (char *)FUN_0040c260();
      strcpy((char *)&DAT_00478d60,_Source);
      puVar5 = &DAT_00478d60;
      do {
        puVar4 = puVar5;
        uVar1 = *puVar4 + 0xfefefeff & ~*puVar4;
        uVar2 = uVar1 & 0x80808080;
        puVar5 = puVar4 + 1;
      } while (uVar2 == 0);
      bVar7 = (uVar1 & 0x8080) == 0;
      if (bVar7) {
        uVar2 = uVar2 >> 0x10;
      }
      if (bVar7) {
        puVar5 = (uint *)((int)puVar4 + 6);
      }
      iVar3 = -(uint)CARRY1((byte)uVar2,(byte)uVar2);
      *(undefined4 *)((int)puVar5 + iVar3 + -3) = 0x2e55535f;
      *(undefined4 *)((int)puVar5 + iVar3 + 1) = 0x696e69;
      memcpy(&DAT_00479160,&DAT_00478d60,(int)puVar5 + iVar3 + -0x478d5b);
      remove(&DAT_00479160);
      FUN_00433690(0,"output set to file \'%s\'\n");
      iVar3 = FUN_00418680();
      if (iVar3 == 0) {
        FUN_00433690(0,"***** ERROR unable to get CF/CG data from SU!\n");
        return 0;
      }
      iVar3 = FUN_00418450();
      local_40 = 0;
      if (iVar3 != 0) {
        local_40 = 0;
        FUN_00433690(0,"\nCompleted output to %s\n");
      }
    }
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00418240();
}

