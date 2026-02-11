
bool __cdecl FUN_004225d0(char *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  FILE *_File;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  bool bVar6;
  char acStack_40f [3];
  uint local_40c [258];
  
  strcpy((char *)local_40c,param_1);
  puVar4 = local_40c;
  do {
    puVar3 = puVar4;
    uVar1 = *puVar3 + 0xfefefeff & ~*puVar3;
    uVar2 = uVar1 & 0x80808080;
    puVar4 = puVar3 + 1;
  } while (uVar2 == 0);
  bVar6 = (uVar1 & 0x8080) == 0;
  if (bVar6) {
    uVar2 = uVar2 >> 0x10;
  }
  if (bVar6) {
    puVar4 = (uint *)((int)puVar3 + 6);
  }
  pcVar5 = (char *)((int)puVar4 + ((-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2)) - (int)local_40c));
  *(char *)((int)local_40c + (int)pcVar5) = '/';
  strcpy(acStack_40f + (int)(pcVar5 + 4),param_2);
  _File = fopen((char *)local_40c,"rb");
  if (_File != (FILE *)0x0) {
    fclose(_File);
  }
  return _File != (FILE *)0x0;
}

