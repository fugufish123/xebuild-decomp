
int __cdecl
FUN_00428040(char *param_1,int param_2,int param_3,uint param_4,undefined1 *param_5,int param_6,
            int param_7,int param_8)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  FILE *_File;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  bool bVar10;
  short local_43c;
  short local_43a;
  int local_438;
  undefined8 local_434;
  ushort local_42c [8];
  uint local_41c [259];
  
  pcVar1 = strrchr(param_1,0x2f);
  if ((pcVar1 != (char *)0x0) ||
     (pcVar1 = strrchr(param_1,0x5c), pcVar9 = param_1, pcVar1 != (char *)0x0)) {
    pcVar9 = pcVar1 + 1;
  }
  pcVar1 = strrchr(param_1,0x3a);
  if (pcVar1 == (char *)0x0) {
    strcpy((char *)local_41c,&DAT_0047b14c);
    strcat((char *)local_41c,param_1);
  }
  else {
    strcpy((char *)local_41c,param_1);
  }
  iVar2 = FUN_00427730((char *)local_41c,param_2,1,param_3,param_4);
  if ((param_5 != (undefined1 *)0x0) && (puVar7 = local_41c, iVar2 == 0)) {
    do {
      puVar6 = puVar7;
      uVar4 = *puVar6 + 0xfefefeff & ~*puVar6;
      uVar5 = uVar4 & 0x80808080;
      puVar7 = puVar6 + 1;
    } while (uVar5 == 0);
    bVar10 = (uVar4 & 0x8080) == 0;
    if (bVar10) {
      uVar5 = uVar5 >> 0x10;
    }
    if (bVar10) {
      puVar7 = (uint *)((int)puVar6 + 6);
    }
    puVar8 = (undefined4 *)((int)puVar7 + (-3 - (uint)CARRY1((byte)uVar5,(byte)uVar5)));
    *puVar8 = 0x74656d2e;
    *(undefined2 *)(puVar8 + 1) = 0x61;
    _File = fopen((char *)local_41c,"rb");
    if (_File == (FILE *)0x0) {
      if (DAT_00479ec4 == 0) {
        FUN_00433690(2,"**** using default time!!! ****\n");
        local_434._4_4_ = 0x1cddadf;
        local_434._0_4_ = 0x717a1200;
      }
      else {
        FUN_0040bae0((short *)local_42c);
        FUN_0040b700(local_42c,&local_434);
      }
      FUN_0040b910((uint *)&local_434,&local_43a,(short *)&local_438);
      param_5[1] = (char)local_43a;
      *param_5 = (char)((ushort)local_43a >> 8);
      param_5[3] = (char)(undefined2)local_438;
      param_5[2] = (char)((ushort)(undefined2)local_438 >> 8);
    }
    else {
      fread(param_5,4,1,_File);
      fclose(_File);
      FUN_00433690(1,"**** %s metadata found, not using system time *****\n\n");
    }
  }
  bVar10 = iVar2 != 0;
  if (((param_6 != 0) && (bVar10)) &&
     (iVar3 = FUN_0040c7b0(pcVar9,(undefined4 *)(param_2 + 0x40c),(int *)(param_2 + 0x410)),
     iVar3 != 0)) {
    FUN_00433690(1,"extracted SUPD/%s (0x%x bytes)");
    if (param_4 == 0) {
      FUN_00433690(1,"\n");
    }
    else {
      uVar5 = FUN_00433800(*(byte **)(param_2 + 0x40c),*(int *)(param_2 + 0x410));
      FUN_00433690(1," (crc32: 0x%08x ini: 0x%08x)\n");
      if (param_4 == uVar5) {
        if (param_5 != (undefined1 *)0x0) {
          if (DAT_00479ec4 == 0) {
            FUN_00433690(2,"**** using default time!!! ****\n");
            local_434._4_4_ = 0x1cddadf;
            local_434._0_4_ = 0x717a1200;
          }
          else {
            FUN_0040bae0((short *)local_42c);
            FUN_0040b700(local_42c,&local_434);
          }
          FUN_0040b910((uint *)&local_434,&local_43a,(short *)&local_438);
          param_5[1] = (char)local_43a;
          *param_5 = (char)((ushort)local_43a >> 8);
          param_5[3] = (char)(undefined2)local_438;
          param_5[2] = (char)((ushort)(undefined2)local_438 >> 8);
        }
        return 0;
      }
      FUN_00433690(0,"\n******WARNING: \'%s\' crc32: 0x%08x expected: 0x%08x\n");
    }
  }
  if ((param_7 == 0) || (!bVar10)) {
    bVar10 = param_8 != 0 && bVar10;
    goto LAB_0042810f;
  }
  iVar3 = FUN_00414760(pcVar9,(undefined4 *)(param_2 + 0x40c),(uint *)(param_2 + 0x410),&local_438);
  if (iVar3 == 0) {
    if ((DAT_00479ea0 == 2) &&
       (iVar3 = FUN_00404600(pcVar9,(undefined4 *)(param_2 + 0x40c),(int *)(param_2 + 0x410)),
       iVar3 != 0)) {
      FUN_00433690(1,"extracted USVR/%s (0x%x bytes)");
      if (param_4 == 0) {
        FUN_00433690(1,"\n");
        return 0;
      }
      uVar5 = FUN_00433800(*(byte **)(param_2 + 0x40c),*(int *)(param_2 + 0x410));
      FUN_00433690(1," (crc32: 0x%08x ini: 0x%08x)\n");
      if (param_4 == uVar5) {
        if (param_5 != (undefined1 *)0x0) {
          FUN_004279b0(param_5,(longlong *)0x0);
        }
        return 0;
      }
      goto LAB_00428640;
    }
  }
  else {
    FUN_00433690(1,"extracted nanddump/%s (0x%x bytes)");
    if (param_4 == 0) {
      FUN_00433690(1,"\n");
      bVar10 = param_8 != 0;
      goto LAB_0042810f;
    }
    uVar5 = FUN_00433800(*(byte **)(param_2 + 0x40c),*(int *)(param_2 + 0x410));
    FUN_00433690(1," (crc32: 0x%08x ini: 0x%08x)\n");
    if (param_4 == uVar5) {
      if (param_5 == (undefined1 *)0x0) {
        return 0;
      }
      if (DAT_00479ec4 == 0) {
        FUN_00433690(2,"**** using default time!!! ****\n");
        local_434._4_4_ = 0x1cddadf;
        local_434._0_4_ = 0x717a1200;
      }
      else {
        FUN_0040bae0((short *)local_42c);
        FUN_0040b700(local_42c,&local_434);
      }
      FUN_0040b910((uint *)&local_434,&local_43c,&local_43a);
      param_5[1] = (char)local_43c;
      *param_5 = (char)((ushort)local_43c >> 8);
      param_5[3] = (char)local_43a;
      param_5[2] = (char)((ushort)local_43a >> 8);
      return 0;
    }
LAB_00428640:
    free(*(void **)(param_2 + 0x40c));
    *(undefined4 *)(param_2 + 0x40c) = 0;
    *(undefined4 *)(param_2 + 0x410) = 0;
    FUN_00433690(0,"\n******WARNING: \'%s\' crc32: 0x%08x expected: 0x%08x\n");
  }
  bVar10 = param_8 != 0;
LAB_0042810f:
  if (bVar10) {
    iVar2 = FUN_00427cc0(pcVar9,param_2,param_3,param_4,param_5);
    return iVar2;
  }
  return iVar2;
}

