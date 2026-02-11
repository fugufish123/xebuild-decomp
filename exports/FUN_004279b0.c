
void __cdecl FUN_004279b0(undefined1 *param_1,longlong *param_2)

{
  ushort local_38;
  ushort local_36;
  uint local_34 [2];
  ushort local_2c [14];
  
  if (DAT_00479ec4 == 0) {
    FUN_00433690(2,"**** using default time!!! ****\n");
    local_34[1] = 0x1cddadf;
    local_34[0] = 0x717a1200;
  }
  else {
    FUN_0040bae0((short *)local_2c);
    FUN_0040b700(local_2c,(longlong *)local_34);
  }
  FUN_0040b910(local_34,(short *)&local_38,(short *)&local_36);
  if (param_2 != (longlong *)0x0) {
    FUN_0040ba30((uint)local_38,(uint)local_36,param_2);
  }
  param_1[1] = (char)local_38;
  *param_1 = (char)(local_38 >> 8);
  param_1[3] = (char)local_36;
  param_1[2] = (char)(local_36 >> 8);
  return;
}

