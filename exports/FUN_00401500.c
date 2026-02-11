
void FUN_00401500(void)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  
  pHVar1 = GetModuleHandleA("libgcc_s_dw2-1.dll");
  if (pHVar1 == (HMODULE)0x0) {
    DAT_0044a004 = (FARPROC)0x0;
    pFVar2 = (FARPROC)0x0;
  }
  else {
    DAT_00479e80 = LoadLibraryA("libgcc_s_dw2-1.dll");
    pFVar2 = GetProcAddress(pHVar1,"__register_frame_info");
    DAT_0044a004 = GetProcAddress(pHVar1,"__deregister_frame_info");
  }
  if (pFVar2 != (FARPROC)0x0) {
    (*pFVar2)(&DAT_004650c8,&DAT_0046f01c);
  }
  if (DAT_0044b6d4 != 0) {
    pHVar1 = GetModuleHandleA("libgcj-16.dll");
    pFVar2 = (FARPROC)0x0;
    if (pHVar1 != (HMODULE)0x0) {
      pFVar2 = GetProcAddress(pHVar1,"_Jv_RegisterClasses");
    }
    if (pFVar2 != (FARPROC)0x0) {
      (*pFVar2)(&DAT_0044b6d4);
    }
  }
  FUN_00446bf0((_onexit_t)&LAB_00401600);
  return;
}

