
undefined4 __cdecl FUN_0040fcc0(uint *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint local_24;
  
  puVar1 = param_1 + ((-(uint)(param_2 == 0) & 0xffffff20) + 0x100) * 0x84;
  do {
    iVar2 = 0;
    do {
      if (*(char *)((int)param_1 + iVar2) != -1) goto LAB_0040fd04;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x200);
    if ((((((((char)param_1[0x80] == -1) && (*(char *)((int)param_1 + 0x201) == -1)) &&
           (*(char *)((int)param_1 + 0x202) == -1)) &&
          ((*(char *)((int)param_1 + 0x203) == -1 && ((char)param_1[0x81] == -1)))) &&
         ((*(char *)((int)param_1 + 0x205) == -1 &&
          ((*(char *)((int)param_1 + 0x206) == -1 && (*(char *)((int)param_1 + 0x207) == -1)))))) &&
        ((char)param_1[0x82] == -1)) &&
       (((*(char *)((int)param_1 + 0x209) == -1 && (*(char *)((int)param_1 + 0x20a) == -1)) &&
        (*(char *)((int)param_1 + 0x20b) == -1)))) {
      local_24 = (uint)(byte)param_1[0x83];
      if (((byte)param_1[0x83] != 0xff) || (*(char *)((int)param_1 + 0x20d) != -1))
      goto LAB_0040fd0e;
      local_24 = (uint)*(byte *)((int)param_1 + 0x20e);
      if (*(byte *)((int)param_1 + 0x20e) != 0xff) {
        local_24 = 0xff;
        goto LAB_0040fd0e;
      }
      if (*(char *)((int)param_1 + 0x20f) != -1) goto LAB_0040fd0e;
    }
    else {
LAB_0040fd04:
      local_24 = (uint)(byte)param_1[0x83];
LAB_0040fd0e:
      uVar5 = 0;
      uVar7 = 0;
      uVar4 = 0;
      puVar6 = param_1;
      do {
        if ((uVar5 & 0x1f) == 0) {
          puVar3 = puVar6;
          if (uVar5 == 0x1000) {
            puVar3 = param_1 + 0x80;
          }
          puVar6 = puVar3 + 1;
          uVar4 = ~*puVar3;
        }
        uVar7 = uVar4 & 1 ^ uVar7;
        if ((uVar7 & 1) != 0) {
          uVar7 = uVar7 ^ 0x6954559;
        }
        uVar5 = uVar5 + 1;
        uVar7 = uVar7 >> 1;
        uVar4 = uVar4 >> 1;
      } while (uVar5 != 0x1066);
      uVar7 = ~uVar7;
      if ((((local_24 & 0xc0) != (uVar7 & 3) * 0x40) ||
          (*(char *)((int)param_1 + 0x20d) != (char)(uVar7 >> 2))) ||
         ((*(char *)((int)param_1 + 0x20e) != (char)(uVar7 >> 10) ||
          (*(char *)((int)param_1 + 0x20f) != (char)(uVar7 >> 0x12))))) {
        return 0;
      }
    }
    param_1 = param_1 + 0x84;
    if (puVar1 == param_1) {
      return 1;
    }
  } while( true );
}

