
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00414050(void)

{
  size_t _Size;
  void *pvVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined4 *puVar7;
  char local_3a [42];
  
  cVar6 = 'B';
  puVar5 = &DAT_0047a08c;
  piVar4 = &DAT_00474a38;
  do {
    if (*piVar4 != 0) {
      pvVar1 = malloc(piVar4[3]);
      *puVar5 = pvVar1;
      if (pvVar1 == (void *)0x0) {
        FUN_00433690(1,"Unable to allocate memory for %s 0x%x bytes\n");
      }
      else {
        s_MobileA_0044a5d0[6] = cVar6;
        sprintf(local_3a,"%s.dat",s_MobileA_0044a5d0);
        FUN_00433690(1,"extracting %s from page 0x%x (offset 0x%x), size %d (0x%x) bytes\n");
        _Size = piVar4[3];
        memcpy((void *)*puVar5,(void *)(piVar4[4] + DAT_00479f4c),_Size);
        puVar5[1] = _Size;
      }
    }
    piVar4 = piVar4 + 6;
    cVar6 = cVar6 + '\x01';
    puVar5 = puVar5 + 2;
  } while (piVar4 != (int *)&DAT_00474b10);
  iVar2 = FUN_00412e90(DAT_00479f60,0,DAT_00479f68,(undefined4 *)0x0,(undefined4 *)0x0);
  iVar3 = FUN_00410070((char *)(DAT_00479f4c + iVar2),0x1000);
  if (iVar3 == 0) {
    FUN_00433690(1,"Statistics.settings found at offset 0x%x, size %d (0x%x) bytes\n");
    _DAT_0047a0d4 = (undefined4 *)malloc(0x1000);
    if (_DAT_0047a0d4 == (undefined4 *)0x0) {
      FUN_00433690(1,"Unable to allocate memory for Statistics.settings 0x%x bytes\n");
    }
    else {
      puVar5 = (undefined4 *)(iVar2 + DAT_00479f4c);
      puVar7 = _DAT_0047a0d4;
      for (iVar3 = 0x400; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      _DAT_0047a0d8 = 0x1000;
    }
  }
  iVar2 = FUN_00412f60(DAT_00479f60,0,DAT_00479f68,(undefined4 *)0x0,(undefined4 *)0x0);
  iVar3 = FUN_00410070((char *)(DAT_00479f4c + iVar2),0x1000);
  if (iVar3 == 0) {
    FUN_00433690(1,"Manufacturing.data found at offset 0x%x, size %d (0x%x) bytes\n");
    _DAT_0047a0dc = (undefined4 *)malloc(0x1000);
    if (_DAT_0047a0dc != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)(iVar2 + DAT_00479f4c);
      puVar7 = _DAT_0047a0dc;
      for (iVar3 = 0x400; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      _DAT_0047a0e0 = 0x1000;
      return;
    }
    FUN_00433690(1,"Unable to allocate memory for Manufacturing.data 0x%x bytes\n");
  }
  return;
}

