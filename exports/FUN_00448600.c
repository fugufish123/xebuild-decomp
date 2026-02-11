
void __cdecl FUN_00448600(short *param_1,wchar_t *param_2,undefined4 param_3)

{
  wchar_t *_Dest;
  DWORD DVar1;
  int iVar2;
  wchar_t local_226 [267];
  
  _Dest = (wchar_t *)malloc(0x4000);
  if (param_2 == (wchar_t *)0x0) {
    param_2 = L"<unknown>";
  }
  else if (*param_2 == L'\0') {
    param_2 = L"<unknown>";
  }
  if (param_1 == (short *)0x0) {
    param_1 = (short *)&DAT_004634d0;
  }
  else if (*param_1 == 0) {
    param_1 = (short *)&DAT_004634d0;
  }
  DVar1 = GetModuleFileNameW((HMODULE)0x0,local_226,0x104);
  if (DVar1 == 0) {
    wcscpy(local_226,L"<unknown>");
  }
  _snwprintf(_Dest,0x1fff,
             L"Assertion failed!\n\nProgram: %ws\nFile: %ws, Line %u\n\nExpression: %ws",local_226,
             param_2,param_3,param_1);
  if (DAT_00479e38 == 0) {
    fwprintf((FILE *)(_iob_exref + 0x40),L"%ws\n",_Dest);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar2 = MessageBoxW((HWND)0x0,_Dest,L"MinGW Runtime Assertion",0x12012);
  if (iVar2 == 3) {
    raise(0x16);
                    /* WARNING: Subroutine does not return */
    _exit(3);
  }
  if (iVar2 == 5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

