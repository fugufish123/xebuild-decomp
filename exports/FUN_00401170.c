
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00401170(void)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  size_t sVar10;
  void *pvVar11;
  bool bVar12;
  int iVar13;
  undefined4 extraout_EDX;
  DWORD *pDVar14;
  DWORD *pDVar15;
  DWORD *pDVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int unaff_FS_OFFSET;
  undefined1 auStack_8c [20];
  int local_78;
  undefined4 local_74;
  void *local_70;
  undefined4 local_60 [11];
  byte local_34;
  ushort local_30;
  
  puVar7 = local_60;
  for (iVar13 = 0x11; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  uVar6 = FUN_00447c00();
  puVar7 = (undefined4 *)((int)&local_74 + -uVar6 + 3 & 0xfffffff0);
  *puVar7 = 0xcccccccc;
  puVar7[1] = 0xcccccccc;
  puVar7[2] = 0xcccccccc;
  puVar7[3] = 0xcccccccc;
  puVar7[4] = 0xcccccccc;
  puVar7[5] = 0xcccccccc;
  puVar7[6] = 0xcccccccc;
  puVar7[7] = 0xcccccccc;
  pDVar14 = (DWORD *)((uint)(auStack_8c + -uVar6) & 0xfffffff0);
  if (DAT_00479e38 != 0) {
    *pDVar14 = extraout_EDX;
    puVar18 = pDVar14 + -1;
    pDVar14[-1] = 0x401479;
    GetStartupInfoA((LPSTARTUPINFOA)*pDVar14);
    pDVar14 = (DWORD *)((int)puVar18 + -4);
  }
  iVar13 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x18) + 4);
  while( true ) {
    iVar8 = 0;
    LOCK();
    iVar4 = iVar13;
    if (DAT_0050ec90 != 0) {
      iVar8 = DAT_0050ec90;
      iVar4 = DAT_0050ec90;
    }
    DAT_0050ec90 = iVar4;
    UNLOCK();
    if (iVar8 == 0) {
      bVar12 = false;
      goto joined_r0x0040141f;
    }
    if (iVar13 == iVar8) break;
    *pDVar14 = 1000;
    pDVar15 = pDVar14 + -1;
    pDVar14[-1] = 0x401206;
    Sleep(*pDVar14);
    pDVar14 = (DWORD *)((int)pDVar15 + -4);
  }
  bVar12 = true;
joined_r0x0040141f:
  if (DAT_0050ec94 == 1) {
    *pDVar14 = 0x1f;
    pDVar14[-1] = 0x401431;
    _amsg_exit(*pDVar14);
  }
  else if (DAT_0050ec94 == 0) {
    DAT_0050ec94 = 1;
    pDVar14[1] = (DWORD)&DAT_00510018;
    *pDVar14 = (DWORD)&DAT_0051000c;
    pDVar14[-1] = 0x40149f;
    initterm();
  }
  else {
    DAT_0046f004 = 1;
  }
  pcVar3 = (code *)PTR_tls_callback_0_0046328c;
  if (DAT_0050ec94 == 1) {
    pDVar14[1] = (DWORD)&DAT_00510008;
    *pDVar14 = (DWORD)&DAT_00510000;
    pDVar14[-1] = 0x401453;
    initterm();
    DAT_0050ec94 = 2;
    pcVar3 = (code *)PTR_tls_callback_0_0046328c;
  }
  if (!bVar12) {
    LOCK();
    UNLOCK();
    DAT_0050ec90 = 0;
  }
  PTR_tls_callback_0_0046328c = pcVar3;
  if (pcVar3 != (code *)0x0) {
    pDVar14[2] = 0;
    pDVar14[1] = 2;
    *pDVar14 = 0;
    pDVar16 = pDVar14 + -1;
    pDVar14[-1] = 0x401276;
    (*pcVar3)();
    pDVar14 = (DWORD *)((int)pDVar16 + -0xc);
  }
  pDVar14[-1] = 0x40127e;
  FUN_00447180();
  *pDVar14 = 0x447450;
  puVar17 = pDVar14 + -1;
  pDVar14[-1] = 0x40128b;
  DAT_00479e4c = SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)*pDVar14);
  puVar17[-1] = &LAB_00401000;
  puVar17[-2] = 0x40129f;
  FUN_004492b0(puVar17[-1]);
  puVar17[-2] = 0x4012a4;
  FUN_00446fb0();
  iVar13 = DAT_0046f018;
  _DAT_00479e7c = 0x400000;
  pcVar9 = *(char **)_acmdln_exref;
  if (pcVar9 != (char *)0x0) {
    bVar12 = false;
    do {
      cVar1 = *pcVar9;
      if (cVar1 < '!') {
        if ((cVar1 == '\0') || (!bVar12)) goto LAB_004012f0;
        bVar12 = true;
      }
      else if (cVar1 == '\"') {
        bVar12 = (bool)(bVar12 ^ 1);
      }
      pcVar9 = pcVar9 + 1;
    } while( true );
  }
  goto LAB_00401314;
LAB_004012f0:
  _DAT_00479e78 = pcVar9;
  if (cVar1 != '\0') {
    do {
      pcVar9 = pcVar9 + 1;
      _DAT_00479e78 = pcVar9;
      if (*pcVar9 == '\0') break;
    } while (*pcVar9 < '!');
  }
LAB_00401314:
  if (DAT_00479e38 != 0) {
    uVar5 = 10;
    if ((local_34 & 1) != 0) {
      uVar5 = local_30;
    }
    _DAT_0044a000 = (uint)uVar5;
  }
  local_74 = DAT_0046f018;
  local_78 = DAT_0046f018 * 4 + 4;
  puVar17[-1] = local_78;
  puVar17[-2] = 0x401350;
  local_70 = malloc(puVar17[-1]);
  iVar8 = (int)DAT_0046f014;
  if (iVar13 < 1) {
    iVar13 = 0;
  }
  else {
    iVar13 = 0;
    do {
      puVar17[-1] = *(undefined4 *)(iVar8 + iVar13 * 4);
      puVar17[-2] = 0x401370;
      sVar10 = strlen((char *)puVar17[-1]);
      puVar17[-1] = sVar10 + 1;
      puVar17[-2] = 0x40137b;
      pvVar11 = malloc(puVar17[-1]);
      *(void **)((int)local_70 + iVar13 * 4) = pvVar11;
      uVar2 = *(undefined4 *)(iVar8 + iVar13 * 4);
      iVar13 = iVar13 + 1;
      puVar17[1] = sVar10 + 1;
      puVar17[-1] = pvVar11;
      *puVar17 = uVar2;
      puVar17[-2] = 0x401397;
      memcpy((void *)puVar17[-1],(void *)*puVar17,puVar17[1]);
    } while (local_74 != iVar13);
    iVar13 = local_78 + -4;
  }
  *(undefined4 *)((int)local_70 + iVar13) = 0;
  DAT_0046f014 = local_70;
  puVar17[-2] = 0x4013b7;
  FUN_00446c90();
  *(undefined4 *)__initenv_exref = DAT_0046f010;
  puVar17[1] = DAT_0046f010;
  *puVar17 = DAT_0046f014;
  puVar17[-1] = DAT_0046f018;
  puVar17[-2] = 0x4013e3;
  DAT_0046f00c = FUN_004492c0(puVar17[-1],(undefined4 *)*puVar17);
  if (DAT_0046f008 != 0) {
    if (DAT_0046f004 == 0) {
      puVar17[-2] = 0x401405;
      _cexit();
    }
    return DAT_0046f00c;
  }
  puVar17[-1] = DAT_0046f00c;
                    /* WARNING: Subroutine does not return */
  puVar17[-2] = &UNK_004014b3;
  exit(puVar17[-1]);
}

