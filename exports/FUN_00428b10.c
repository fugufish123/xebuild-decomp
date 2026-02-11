
void __cdecl FUN_00428b10(int param_1)

{
  void *_Dst;
  uint uVar1;
  int iVar2;
  size_t _Size;
  int iVar3;
  char *pcVar4;
  size_t _Size_00;
  int local_20;
  
  _Size_00 = *(int *)(param_1 + 0x410) - 4;
  _Dst = malloc(0x4000);
  memset(_Dst,0xff,0x4000);
  memcpy(_Dst,*(void **)(param_1 + 0x40c),_Size_00);
  if (DAT_004c4f94 < 1) {
    local_20 = 0;
  }
  else {
    pcVar4 = &DAT_004c0c94;
    iVar3 = 0;
    local_20 = 0;
    do {
      iVar2 = FUN_00428780(pcVar4);
      if (iVar2 == 0) {
        if ((*(uint *)(pcVar4 + 0x410) & 3) == 0) {
          uVar1 = FUN_00420ad0((uint *)(*(int *)(pcVar4 + 0x40c) + -4 + *(uint *)(pcVar4 + 0x410)));
          _Size = *(size_t *)(pcVar4 + 0x410);
          if (uVar1 == 0xffffffff) {
            _Size = _Size - 4;
            *(size_t *)(pcVar4 + 0x410) = _Size;
          }
          if (_Size_00 + _Size < 0x4001) {
            memcpy((void *)((int)_Dst + _Size_00),*(void **)(pcVar4 + 0x40c),_Size);
            local_20 = local_20 + *(int *)(pcVar4 + 0x410);
            _Size_00 = _Size_00 + *(int *)(pcVar4 + 0x410);
          }
          else {
            FUN_00433690(0,"\n***** ERROR: could not append %s%s into patches, not enough room!\n\n"
                        );
          }
        }
        else {
          FUN_00433690(0,
                       "\n***** ERROR: could %s%s size 0x%x is not a multiple of 4, discarding patch data!\n\n"
                      );
        }
      }
      else {
        FUN_00433690(0,"\n***** WARNING: could not load addon patch %s%s!\n\n");
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 0x42c;
    } while (iVar3 < DAT_004c4f94);
  }
  *(undefined4 *)((int)_Dst + _Size_00) = 0xffffffff;
  FUN_00420b20(local_20,(undefined1 *)((int)_Dst + _Size_00 + 4));
  if (*(void **)(param_1 + 0x40c) != (void *)0x0) {
    free(*(void **)(param_1 + 0x40c));
  }
  *(void **)(param_1 + 0x40c) = _Dst;
  *(size_t *)(param_1 + 0x410) = _Size_00 + 8;
  if (DAT_004c4f94 != 0) {
    FUN_00433690(1,
                 "added 0x%x bytes to patches via %d external patch files\n    patches now 0x%x bytes total with addon byte count appended\n"
                );
  }
  return;
}

