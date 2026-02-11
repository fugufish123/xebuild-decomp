
void * __cdecl FUN_004481c0(LPCSTR param_1)

{
  void *_Dst;
  int *piVar1;
  DWORD DVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  bool bVar11;
  uint auStack_120 [68];
  
  piVar1 = _errno();
  *piVar1 = 0;
  if (param_1 == (LPCSTR)0x0) {
    piVar1 = _errno();
    *piVar1 = 0xe;
    pvVar5 = (void *)0x0;
  }
  else {
    if (*param_1 == '\0') {
LAB_00448310:
      piVar1 = _errno();
      *piVar1 = 0x14;
      return (void *)0x0;
    }
    DVar2 = GetFileAttributesA(param_1);
    if (DVar2 == 0xffffffff) {
      piVar1 = _errno();
      pvVar5 = (void *)0x0;
      *piVar1 = 2;
    }
    else {
      if ((DVar2 & 0x10) == 0) goto LAB_00448310;
      _fullpath((char *)auStack_120,param_1,0x104);
      puVar8 = auStack_120;
      do {
        puVar7 = puVar8;
        uVar3 = *puVar7 + 0xfefefeff & ~*puVar7;
        uVar4 = uVar3 & 0x80808080;
        puVar8 = puVar7 + 1;
      } while (uVar4 == 0);
      bVar11 = (uVar3 & 0x8080) == 0;
      if (bVar11) {
        uVar4 = uVar4 >> 0x10;
      }
      if (bVar11) {
        puVar8 = (uint *)((int)puVar7 + 6);
      }
      pcVar9 = (char *)((int)puVar8 +
                       ((-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)) - (int)auStack_120));
      pvVar5 = malloc((size_t)(pcVar9 + 0x233));
      if (pvVar5 == (void *)0x0) {
        piVar1 = _errno();
        *piVar1 = 0xc;
      }
      else {
        _Dst = (void *)((int)pvVar5 + 0x22c);
        memcpy(_Dst,auStack_120,(size_t)(pcVar9 + 1));
        if (((*(char *)((int)pvVar5 + 0x22c) != '\0') &&
            (*(char *)((int)pvVar5 + (int)(pcVar9 + 0x22b)) != '/')) &&
           (*(char *)((int)pvVar5 + (int)(pcVar9 + 0x22b)) != '\\')) {
          ((char *)((int)_Dst + (int)pcVar9))[0] = '\\';
          ((char *)((int)_Dst + (int)pcVar9))[1] = '\0';
          pcVar9 = pcVar9 + 1;
        }
        ((char *)((int)_Dst + (int)pcVar9))[0] = '*';
        ((char *)((int)_Dst + (int)pcVar9))[1] = '\0';
        *(undefined2 *)((int)pvVar5 + 0x11c) = 0;
        *(undefined2 *)((int)pvVar5 + 0x11e) = 0;
        *(undefined4 *)((int)pvVar5 + 0x224) = 0xffffffff;
        *(undefined4 *)((int)pvVar5 + 0x228) = 0;
        *(undefined4 *)((int)pvVar5 + 0x118) = 0;
        puVar10 = (undefined4 *)((int)pvVar5 + 0x120);
        for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
      }
    }
  }
  return pvVar5;
}

