
undefined4 __cdecl FUN_00427ab0(char *param_1,int param_2,void *param_3)

{
  FILE *pFVar1;
  size_t _ElementSize;
  void *_DstBuf;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  bool bVar6;
  uint local_41c [259];
  
  if (DAT_0047ad4c != '\0') {
    strcpy((char *)local_41c,&DAT_0047ad4c);
    strcat((char *)local_41c,param_1);
    pFVar1 = fopen((char *)local_41c,"rb");
    if (pFVar1 != (FILE *)0x0) {
      if (*(void **)(param_2 + 0x40c) != (void *)0x0) {
        free(*(void **)(param_2 + 0x40c));
      }
      _ElementSize = FUN_00422420(pFVar1);
      if (_ElementSize != 0) {
        *(size_t *)(param_2 + 0x410) = _ElementSize;
        FUN_00433690(1,"reading %s (0x%x bytes)");
        _DstBuf = calloc(*(int *)(param_2 + 0x410) + 0x10000,1);
        *(void **)(param_2 + 0x40c) = _DstBuf;
        if (_DstBuf != (void *)0x0) {
          fread(_DstBuf,_ElementSize,1,pFVar1);
          fclose(pFVar1);
          FUN_00433690(1,"\n");
          puVar5 = local_41c;
          if (param_3 != (void *)0x0) {
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
                            ".meta",6);
            pFVar1 = fopen((char *)local_41c,"rb");
            if (pFVar1 != (FILE *)0x0) {
              fread(param_3,4,1,pFVar1);
              fclose(pFVar1);
              FUN_00433690(1,"**** %s metadata found, not using system time *****\n\n");
            }
          }
          return 0;
        }
        return 0xfffffffe;
      }
      fclose(pFVar1);
      FUN_00433690(0,"\n******WARNING: \'%s\' is a 0 byte file, loading skipped!\n");
      return 1;
    }
  }
  return 0xffffffff;
}

