
void __cdecl FUN_004308d0(uint param_1,uint param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  bool bVar6;
  uint local_5c [19];
  
  uVar3 = (param_2 & 0xf) + 1;
  pcVar1 = FUN_00420a90(uVar3);
  strcpy((char *)local_5c,pcVar1);
  if (3 < uVar3) {
    if (uVar3 < 6) {
      if (param_3 == 0x4200000) {
        puVar5 = local_5c;
        if ((*(char *)(DAT_00479580 + 4) == '\b') || ((*(byte *)(DAT_00479580 + 8) & 8) != 0)) {
          do {
            puVar4 = puVar5;
            uVar2 = *puVar4 + 0xfefefeff & ~*puVar4;
            uVar3 = uVar2 & 0x80808080;
            puVar5 = puVar4 + 1;
          } while (uVar3 == 0);
          bVar6 = (uVar2 & 0x8080) == 0;
          if (bVar6) {
            uVar3 = uVar3 >> 0x10;
          }
          if (bVar6) {
            puVar5 = (uint *)((int)puVar4 + 6);
          }
          builtin_strncpy((char *)((int)puVar5 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3))),
                          "bigffs",7);
        }
        else {
          do {
            puVar4 = puVar5;
            uVar2 = *puVar4 + 0xfefefeff & ~*puVar4;
            uVar3 = uVar2 & 0x80808080;
            puVar5 = puVar4 + 1;
          } while (uVar3 == 0);
          bVar6 = (uVar2 & 0x8080) == 0;
          if (bVar6) {
            uVar3 = uVar3 >> 0x10;
          }
          if (bVar6) {
            puVar5 = (uint *)((int)puVar4 + 6);
          }
          pcVar1 = (char *)((int)puVar5 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)));
          pcVar1[0] = 'b';
          pcVar1[1] = 'b';
          pcVar1[2] = '\0';
        }
      }
    }
    else if ((uVar3 == 6) && (puVar5 = local_5c, param_3 == 0x3000000)) {
      do {
        puVar4 = puVar5;
        uVar2 = *puVar4 + 0xfefefeff & ~*puVar4;
        uVar3 = uVar2 & 0x80808080;
        puVar5 = puVar4 + 1;
      } while (uVar3 == 0);
      bVar6 = (uVar2 & 0x8080) == 0;
      if (bVar6) {
        uVar3 = uVar3 >> 0x10;
      }
      if (bVar6) {
        puVar5 = (uint *)((int)puVar4 + 6);
      }
      pcVar1 = (char *)((int)puVar5 + (-3 - (uint)CARRY1((byte)uVar3,(byte)uVar3)));
      pcVar1[0] = '4';
      pcVar1[1] = 'g';
      pcVar1[2] = '\0';
    }
  }
  FUN_00433690(param_1,"Image Type      : %s (");
  if ((int)param_2 < 0) {
    DAT_00479ea8 = 2;
    FUN_00433690(param_1,"JTAG");
  }
  else {
    DAT_00479ea8 = 3;
    if ((param_2 & 0x20000000) == 0) {
      if ((param_2 & 0x40000000) == 0) {
        if ((param_2 & 0x10000000) != 0) {
          DAT_00479eb4 = 1;
          DAT_00479eb0 = 1;
          FUN_00433690(param_1,"Glitch2M");
        }
      }
      else {
        FUN_00433690(param_1,"Glitch");
        if ((param_2 & 0xf) == 0) {
          FUN_00433690(param_1,"-FAT");
        }
      }
    }
    else {
      DAT_00479eb0 = 1;
      FUN_00433690(param_1,"Glitch2");
    }
  }
  FUN_00433690(param_1,")\n");
  if (DAT_0047957c != (FILE *)0x0) {
    fprintf(DAT_0047957c,"%s = %s;\n\n",&DAT_0045b968,local_5c);
  }
  FUN_00424170((char *)local_5c);
  return;
}

