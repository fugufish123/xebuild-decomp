
undefined4 __cdecl
FUN_00427cc0(char *param_1,int param_2,int param_3,uint param_4,undefined1 *param_5)

{
  FILE *pFVar1;
  uint uVar2;
  void *_DstBuf;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  short local_438;
  short local_436;
  uint local_434 [2];
  ushort local_42c [8];
  uint local_41c [259];
  
  strcpy((char *)local_41c,&DAT_0047b54c);
  strcat((char *)local_41c,param_1);
  pFVar1 = fopen((char *)local_41c,"rb");
  if (pFVar1 == (FILE *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (*(void **)(param_2 + 0x40c) != (void *)0x0) {
      free(*(void **)(param_2 + 0x40c));
    }
    uVar2 = FUN_00422420(pFVar1);
    if (uVar2 == 0) {
      fclose(pFVar1);
      FUN_00433690(0,"\n******WARNING: \'%s\' is a 0 byte file, loading skipped!\n");
      return 1;
    }
    *(uint *)(param_2 + 0x410) = uVar2;
    if (((param_3 == 0) || ((uVar2 & 0xf) == 0)) ||
       (uVar4 = uVar2 + 0xf & 0xfffffff0, *(uint *)(param_2 + 0x410) = uVar4, uVar2 == uVar4)) {
      FUN_00433690(1,"reading %s (0x%x bytes)");
    }
    else {
      FUN_00433690(1,"reading %s (0x%x b pad 0x%x b)");
    }
    _DstBuf = calloc(*(int *)(param_2 + 0x410) + 0x10000,1);
    *(void **)(param_2 + 0x40c) = _DstBuf;
    if (_DstBuf == (void *)0x0) {
      uVar3 = 0xfffffffe;
    }
    else {
      fread(_DstBuf,uVar2,1,pFVar1);
      fclose(pFVar1);
      if (param_4 == 0) {
        FUN_00433690(1,"\n");
      }
      else {
        uVar2 = FUN_00433800(*(byte **)(param_2 + 0x40c),uVar2);
        FUN_00433690(1," (crc32: 0x%08x ini: 0x%08x)\n");
        if (param_4 != uVar2) {
          FUN_00433690(0,"\n******WARNING: \'%s\' crc32: 0x%08x expected: 0x%08x\n");
          return 1;
        }
      }
      uVar3 = 0;
      puVar6 = local_41c;
      if (param_5 != (undefined1 *)0x0) {
        do {
          puVar5 = puVar6;
          uVar4 = *puVar5 + 0xfefefeff & ~*puVar5;
          uVar2 = uVar4 & 0x80808080;
          puVar6 = puVar5 + 1;
        } while (uVar2 == 0);
        bVar7 = (uVar4 & 0x8080) == 0;
        if (bVar7) {
          uVar2 = uVar2 >> 0x10;
        }
        if (bVar7) {
          puVar6 = (uint *)((int)puVar5 + 6);
        }
        builtin_strncpy((char *)((int)puVar6 + (-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2))),".meta"
                        ,6);
        pFVar1 = fopen((char *)local_41c,"rb");
        if (pFVar1 == (FILE *)0x0) {
          if (DAT_00479ec4 == 0) {
            FUN_00433690(2,"**** using default time!!! ****\n");
            local_434[1] = 0x1cddadf;
            local_434[0] = 0x717a1200;
          }
          else {
            FUN_0040bae0((short *)local_42c);
            FUN_0040b700(local_42c,(longlong *)local_434);
          }
          FUN_0040b910(local_434,&local_438,&local_436);
          param_5[1] = (char)local_438;
          *param_5 = (char)((ushort)local_438 >> 8);
          param_5[3] = (char)local_436;
          param_5[2] = (char)((ushort)local_436 >> 8);
          return 0;
        }
        fread(param_5,4,1,pFVar1);
        fclose(pFVar1);
        FUN_00433690(1,"**** %s metadata found, not using system time *****\n\n");
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

