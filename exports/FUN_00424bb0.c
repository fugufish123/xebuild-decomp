
undefined4 __cdecl FUN_00424bb0(char *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_2 != (char *)0x0) {
    iVar2 = _stricmp(param_2,"false");
    if (iVar2 == 0) {
      iVar2 = _stricmp(param_1,"nodvd");
      if (iVar2 == 0) {
        DAT_00479f04 = DAT_00479f04 | 2;
        return 1;
      }
      iVar2 = _stricmp(param_1,"olddvd");
      if (iVar2 == 0) {
        DAT_00479f04 = DAT_00479f04 | 6;
        return 1;
      }
      iVar2 = _stricmp(param_1,"cygnos");
      if (iVar2 == 0) {
        DAT_00479f04 = DAT_00479f04 | 1;
        return 1;
      }
      bVar1 = true;
      iVar2 = _stricmp(param_1,"demon");
      if (iVar2 == 0) {
        DAT_00479f04 = DAT_00479f04 | 8;
        return 1;
      }
      goto LAB_00424cd6;
    }
    iVar2 = _stricmp(param_2,"true");
    if (iVar2 != 0) {
      return 0;
    }
  }
  iVar2 = _stricmp(param_1,"nodvd");
  if (iVar2 == 0) {
    DAT_00479f00 = DAT_00479f00 & 0xfffffffb | 2;
    FUN_00433690(1,"Using NODVD (tray status fully open check) option");
    return 1;
  }
  iVar2 = _stricmp(param_1,"olddvd");
  if (iVar2 == 0) {
    DAT_00479f00 = DAT_00479f00 & 0xfffffffb;
    FUN_00433690(1,"Using OLDDVD (tray status not closed check) option");
    return 1;
  }
  iVar2 = _stricmp(param_1,"cygnos");
  if (iVar2 == 0) {
    DAT_00479f00 = DAT_00479f00 | 1;
    FUN_00433690(1,"Using CYGNOS option");
    return 1;
  }
  iVar2 = _stricmp(param_1,"demon");
  if (iVar2 == 0) {
    DAT_00479f00 = DAT_00479f00 | 8;
    FUN_00433690(1,"Using DEMON option");
    return 1;
  }
  bVar1 = false;
LAB_00424cd6:
  iVar2 = _stricmp(param_1,"nomobile");
  if (iVar2 == 0) {
    if (!bVar1) {
      DAT_00479f00 = DAT_00479f00 | 0x20000000;
      FUN_00433690(1,"Using NOMOBILE option");
      return 1;
    }
    DAT_00479f04 = DAT_00479f04 | 0x20000000;
    return 1;
  }
  iVar2 = _stricmp(param_1,"smcnocheck");
  if (iVar2 == 0) {
    if (!bVar1) {
      DAT_00479f00 = DAT_00479f00 | 0x200000;
      FUN_00433690(1,"Using SMCNOCHECK option");
      return 1;
    }
    DAT_00479f04 = DAT_00479f04 | 0x200000;
    return 1;
  }
  iVar2 = _stricmp(param_1,"noremap");
  if (iVar2 == 0) {
    if (!bVar1) {
      DAT_00479f00 = DAT_00479f00 | 0x40000000;
      FUN_00433690(1,"Using NOREMAP option");
      return 1;
    }
    DAT_00479f04 = DAT_00479f04 | 0x40000000;
    return 1;
  }
  iVar2 = _stricmp(param_1,"noecdremap");
  if (iVar2 == 0) {
    if (!bVar1) {
      DAT_00479f00 = DAT_00479f00 | 0x80000000;
      FUN_00433690(1,"Using NOECDREMAP option");
      return 1;
    }
    DAT_00479f04 = DAT_00479f04 | 0x80000000;
    return 1;
  }
  iVar2 = _stricmp(param_1,"nandmu");
  if (iVar2 == 0) {
    if (!bVar1) {
      DAT_00479f00 = DAT_00479f00 | 0x10000000;
      FUN_00433690(1,"Using NANDMU option");
      return 1;
    }
    DAT_00479f04 = DAT_00479f04 | 0x10000000;
    return 1;
  }
  iVar2 = _stricmp(param_1,"nosecurity");
  if (iVar2 == 0) {
    if (!bVar1) {
      DAT_00479f00 = DAT_00479f00 | 0x4000000;
      FUN_00433690(1,"Using NOSECURITY option");
      return 1;
    }
    DAT_00479f04 = DAT_00479f04 | 0x4000000;
    return 1;
  }
  iVar2 = _stricmp(param_1,"nosusecurity");
  if (iVar2 == 0) {
    if (!bVar1) {
      DAT_00479f00 = DAT_00479f00 | 0x1000000;
      FUN_00433690(1,"Using NOSECURITY option");
      return 1;
    }
    DAT_00479f04 = DAT_00479f04 | 0x1000000;
    return 1;
  }
  iVar2 = _stricmp(param_1,"patchsmc");
  if (iVar2 != 0) {
    iVar2 = _stricmp(param_1,"smcnoeject");
    if (iVar2 == 0) {
      if (!bVar1) {
        DAT_00479f00 = DAT_00479f00 | 0x400000;
        FUN_00433690(1,"Using SMCNOEJECT option");
        return 1;
      }
      DAT_00479f04 = DAT_00479f04 | 0x400000;
      return 1;
    }
    iVar2 = _stricmp(param_1,"smcnoblink");
    if (iVar2 != 0) {
      return 0;
    }
    if (!bVar1) {
      DAT_00479f00 = DAT_00479f00 | 0x800000;
      FUN_00433690(1,"Using SMCNOBLINK option");
      return 1;
    }
    DAT_00479f04 = DAT_00479f04 | 0x800000;
    return 1;
  }
  if (!bVar1) {
    DAT_00479f00 = DAT_00479f00 | 0x8000000;
    FUN_00433690(1,"Using PATCHSMC option");
    return 1;
  }
  DAT_00479f04 = DAT_00479f04 | 0x8000000;
  return 1;
}

