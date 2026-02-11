
void __cdecl FUN_00423490(char *param_1,char *param_2,byte *param_3)

{
  FILE *_File;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  size_t sVar6;
  uint *puVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  FILE *pFVar12;
  char local_44c [48];
  uint local_41c [259];
  
  if (*param_1 == '\0') {
    strcpy(param_1,param_2);
    sVar6 = strlen(param_1);
    builtin_strncpy(param_1 + sVar6,".sha1",6);
  }
  _File = fopen(param_1,"wb");
  if (_File == (FILE *)0x0) {
    FUN_00433690(0,"\n\n***** ERROR: could not open %s to write SHA-1! Skipping!");
  }
  else {
    local_41c[0]._0_1_ = 0;
    pbVar9 = param_3;
    do {
      uVar1 = (uint)pbVar9[4];
      pbVar10 = pbVar9 + 5;
      uVar2 = (uint)pbVar9[3];
      uVar3 = (uint)pbVar9[2];
      sprintf(local_44c,"%02x%02x%02x%02x%02x",(uint)*pbVar9,(uint)pbVar9[1],uVar3,uVar2,uVar1);
      strcat((char *)local_41c,local_44c);
      puVar8 = local_41c;
      pbVar9 = pbVar10;
    } while (param_3 + 0x14 != pbVar10);
    do {
      puVar7 = puVar8;
      uVar4 = *puVar7 + 0xfefefeff & ~*puVar7;
      uVar5 = uVar4 & 0x80808080;
      puVar8 = puVar7 + 1;
    } while (uVar5 == 0);
    bVar11 = (uVar4 & 0x8080) == 0;
    if (bVar11) {
      uVar5 = uVar5 >> 0x10;
    }
    if (bVar11) {
      puVar8 = (uint *)((int)puVar7 + 6);
    }
    pFVar12 = _File;
    fwrite(local_41c,
           (size_t)((int)puVar8 + ((-3 - (uint)CARRY1((byte)uVar5,(byte)uVar5)) - (int)local_41c)),1
           ,_File);
    sprintf((char *)local_41c," *%s\n",param_2,pFVar12,uVar3,uVar2,uVar1);
    puVar8 = local_41c;
    do {
      puVar7 = puVar8;
      uVar2 = *puVar7 + 0xfefefeff & ~*puVar7;
      uVar1 = uVar2 & 0x80808080;
      puVar8 = puVar7 + 1;
    } while (uVar1 == 0);
    bVar11 = (uVar2 & 0x8080) == 0;
    if (bVar11) {
      uVar1 = uVar1 >> 0x10;
    }
    if (bVar11) {
      puVar8 = (uint *)((int)puVar7 + 6);
    }
    fwrite(local_41c,
           (size_t)((int)puVar8 + ((-3 - (uint)CARRY1((byte)uVar1,(byte)uVar1)) - (int)local_41c)),1
           ,_File);
    fclose(_File);
  }
  return;
}

