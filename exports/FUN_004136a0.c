
undefined4 __fastcall FUN_004136a0(int *param_1,int *param_2,int *param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  char *in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0x2000;
  iVar5 = 0;
  do {
    if (PTR_DAT_0044a5d8[(iVar5 + 0x100) * 0x20] != '\0') {
      iVar4 = _stricmp(PTR_DAT_0044a5d8 + iVar6,in_EAX);
      puVar3 = PTR_DAT_0044a5d8;
      if (iVar4 == 0) {
        uVar2 = *(uint *)(PTR_DAT_0044a5d8 + iVar5 * 0x20 + 0x2018);
        *param_1 = (uVar2 & 0xff00) * 0x100 + uVar2 * 0x1000000 + (uVar2 >> 0x18) +
                   (uVar2 >> 8 & 0xff00);
        uVar1 = *(ushort *)(puVar3 + iVar5 * 0x20 + 0x2016);
        *param_2 = (uint)(uVar1 >> 8) + (uVar1 & 0xff) * 0x100;
        if (param_3 != (int *)0x0) {
          uVar2 = *(uint *)(puVar3 + iVar5 * 0x20 + 0x201c);
          *param_3 = (uVar2 >> 8 & 0xff00) +
                     (uVar2 & 0xff00) * 0x100 + uVar2 * 0x1000000 + (uVar2 >> 0x18);
        }
        if (param_4 != 0) {
          return 1;
        }
        FUN_00433690(1,"%s found in sector 0x%x size 0x%x...");
        return 1;
      }
    }
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0x20;
    if (iVar5 == 0x100) {
      return 0;
    }
  } while( true );
}

