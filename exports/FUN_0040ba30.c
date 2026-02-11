
undefined4 __cdecl FUN_0040ba30(uint param_1,uint param_2,longlong *param_3)

{
  tm *_Tm;
  time_t tVar1;
  int local_34;
  tm local_30;
  
  local_30.tm_isdst = -1;
  local_30.tm_sec = (param_2 & 0x1f) * 2;
  local_30.tm_hour = param_2 >> 0xb & 0x1f;
  local_30.tm_min = param_2 >> 5 & 0x3f;
  local_30.tm_mday = param_1 & 0x1f;
  local_30.tm_year = (param_1 >> 9 & 0x7f) + 0x50;
  local_30.tm_mon = (param_1 >> 5 & 0xf) - 1;
  tVar1 = mktime(&local_30);
  local_34 = (int)tVar1;
  _Tm = gmtime((time_t *)&local_34);
  tVar1 = mktime(_Tm);
  *param_3 = (ulonglong)(uint)(local_34 * 2 - (int)tVar1) * 10000000 + 0x19db1ded53e8000;
  return 1;
}

