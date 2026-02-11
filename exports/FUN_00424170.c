
/* WARNING: Type propagation algorithm not settling */

undefined4 __cdecl FUN_00424170(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  bool bVar9;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return 0;
  }
  iVar2 = _stricmp(param_1,"xenon");
  if (iVar2 == 0) {
    DAT_00479ea4 = DAT_00479ea4 | 1;
    puVar6 = &DAT_0047a94c;
    do {
      puVar7 = puVar6;
      uVar3 = *puVar7 + 0xfefefeff & ~*puVar7;
      uVar5 = uVar3 & 0x80808080;
      puVar6 = puVar7 + 1;
    } while (uVar5 == 0);
    bVar9 = (uVar3 & 0x8080) == 0;
    if (bVar9) {
      uVar5 = uVar5 >> 0x10;
    }
    if (bVar9) {
      puVar6 = (uint *)((int)puVar7 + 6);
    }
    iVar2 = -(uint)CARRY1((byte)uVar5,(byte)uVar5);
    *(undefined4 *)((int)puVar6 + iVar2 + -3) = 0x6f6e6578;
    *(undefined2 *)((int)puVar6 + iVar2 + 1) = 0x6e;
    return 1;
  }
  iVar2 = _stricmp(param_1,"zephyr");
  if (iVar2 == 0) {
    DAT_00479ea4 = DAT_00479ea4 | 2;
    puVar6 = &DAT_0047a94c;
    do {
      puVar7 = puVar6;
      uVar3 = *puVar7 + 0xfefefeff & ~*puVar7;
      uVar5 = uVar3 & 0x80808080;
      puVar6 = puVar7 + 1;
    } while (uVar5 == 0);
    bVar9 = (uVar3 & 0x8080) == 0;
    if (bVar9) {
      uVar5 = uVar5 >> 0x10;
    }
    if (bVar9) {
      puVar6 = (uint *)((int)puVar7 + 6);
    }
    iVar2 = -(uint)CARRY1((byte)uVar5,(byte)uVar5);
    *(undefined4 *)((int)puVar6 + iVar2 + -3) = 0x6870657a;
    *(undefined2 *)((int)puVar6 + iVar2 + 1) = 0x7279;
    *(undefined1 *)((int)puVar6 + iVar2 + 3) = 0;
    return 1;
  }
  iVar2 = _stricmp(param_1,"falcon");
  if (iVar2 == 0) {
    DAT_00479ea4 = DAT_00479ea4 | 3;
    puVar6 = &DAT_0047a94c;
    do {
      puVar7 = puVar6;
      uVar3 = *puVar7 + 0xfefefeff & ~*puVar7;
      uVar5 = uVar3 & 0x80808080;
      puVar6 = puVar7 + 1;
    } while (uVar5 == 0);
    bVar9 = (uVar3 & 0x8080) == 0;
    if (bVar9) {
      uVar5 = uVar5 >> 0x10;
    }
    if (bVar9) {
      puVar6 = (uint *)((int)puVar7 + 6);
    }
    iVar2 = -(uint)CARRY1((byte)uVar5,(byte)uVar5);
    *(undefined4 *)((int)puVar6 + iVar2 + -3) = 0x636c6166;
    *(undefined2 *)((int)puVar6 + iVar2 + 1) = 0x6e6f;
    *(undefined1 *)((int)puVar6 + iVar2 + 3) = 0;
    return 1;
  }
  iVar2 = _stricmp(param_1,"jasper");
  if ((iVar2 == 0) || (iVar2 = _stricmp(param_1,"jasperbc"), iVar2 == 0)) {
    DAT_00479ea4 = DAT_00479ea4 | 0x80000004;
    puVar6 = &DAT_0047a94c;
    do {
      uVar5 = *puVar6;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 + 0xfefefeff & ~uVar5 & 0x80808080;
    } while (uVar5 == 0);
  }
  else {
    iVar2 = _stricmp(param_1,"jaspersb");
    if (iVar2 != 0) {
      iVar2 = _stricmp(param_1,"jasperbb");
      if (iVar2 == 0) {
        DAT_00479ea4 = DAT_00479ea4 | 0x40000004;
        puVar6 = &DAT_0047a94c;
        do {
          puVar7 = puVar6;
          uVar3 = *puVar7 + 0xfefefeff & ~*puVar7;
          uVar5 = uVar3 & 0x80808080;
          puVar6 = puVar7 + 1;
        } while (uVar5 == 0);
        bVar9 = (uVar3 & 0x8080) == 0;
        if (bVar9) {
          uVar5 = uVar5 >> 0x10;
        }
        if (bVar9) {
          puVar6 = (uint *)((int)puVar7 + 6);
        }
        iVar2 = (int)puVar6 + (-0x47a94f - (uint)CARRY1((byte)uVar5,(byte)uVar5));
        *(undefined4 *)(iVar2 + 0x47a94c) = 0x7073616a;
        *(undefined4 *)(iVar2 + 0x47a950) = 0x62627265;
        (&DAT_0047a954)[iVar2] = 0;
        return 1;
      }
      iVar2 = _stricmp(param_1,"jasper256");
      if (iVar2 == 0) {
        DAT_00479ea4 = DAT_00479ea4 | 0x40000004;
        puVar6 = &DAT_0047a94c;
        do {
          puVar7 = puVar6;
          uVar3 = *puVar7 + 0xfefefeff & ~*puVar7;
          uVar5 = uVar3 & 0x80808080;
          puVar6 = puVar7 + 1;
        } while (uVar5 == 0);
        bVar9 = (uVar3 & 0x8080) == 0;
        if (bVar9) {
          uVar5 = uVar5 >> 0x10;
        }
        if (bVar9) {
          puVar6 = (uint *)((int)puVar7 + 6);
        }
        iVar2 = (int)puVar6 + (-0x47a94f - (uint)CARRY1((byte)uVar5,(byte)uVar5));
        *(undefined2 *)(&DAT_0047a954 + iVar2) = 0x36;
        *(undefined4 *)(iVar2 + 0x47a94c) = 0x7073616a;
        *(undefined4 *)(iVar2 + 0x47a950) = 0x35327265;
        return 1;
      }
      iVar2 = _stricmp(param_1,"jasper512");
      if (iVar2 == 0) {
        DAT_00479ea4 = DAT_00479ea4 | 0x40000004;
        puVar6 = &DAT_0047a94c;
        do {
          puVar7 = puVar6;
          uVar3 = *puVar7 + 0xfefefeff & ~*puVar7;
          uVar5 = uVar3 & 0x80808080;
          puVar6 = puVar7 + 1;
        } while (uVar5 == 0);
        bVar9 = (uVar3 & 0x8080) == 0;
        if (bVar9) {
          uVar5 = uVar5 >> 0x10;
        }
        if (bVar9) {
          puVar6 = (uint *)((int)puVar7 + 6);
        }
        iVar2 = (int)puVar6 + (-0x47a94f - (uint)CARRY1((byte)uVar5,(byte)uVar5));
        *(undefined4 *)(iVar2 + 0x47a94c) = 0x7073616a;
        *(undefined4 *)(iVar2 + 0x47a950) = 0x31357265;
        *(undefined2 *)(&DAT_0047a954 + iVar2) = 0x32;
        return 1;
      }
      iVar2 = _stricmp(param_1,"jasperbigffs");
      if (iVar2 == 0) {
        DAT_00479ea4 = DAT_00479ea4 | 0x60000004;
        puVar6 = &DAT_0047a94c;
        do {
          puVar7 = puVar6;
          uVar3 = *puVar7 + 0xfefefeff & ~*puVar7;
          uVar5 = uVar3 & 0x80808080;
          puVar6 = puVar7 + 1;
        } while (uVar5 == 0);
        bVar9 = (uVar3 & 0x8080) == 0;
        if (bVar9) {
          uVar5 = uVar5 >> 0x10;
        }
        if (bVar9) {
          puVar6 = (uint *)((int)puVar7 + 6);
        }
        iVar2 = (int)puVar6 + (-0x47a94f - (uint)CARRY1((byte)uVar5,(byte)uVar5));
        *(undefined4 *)(iVar2 + 0x47a94c) = 0x7073616a;
        *(undefined4 *)(iVar2 + 0x47a950) = 0x69627265;
        *(undefined4 *)(&DAT_0047a954 + iVar2) = 0x73666667;
        (&DAT_0047a958)[iVar2] = 0;
        return 1;
      }
      iVar2 = _stricmp(param_1,"trinity");
      if (iVar2 == 0) {
        DAT_00479ea4 = DAT_00479ea4 | 0x80000005;
        uVar5 = 0xffffffff;
        pcVar8 = (char *)&DAT_0047a94c;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        *(undefined4 *)(&DAT_0047a94b + ~uVar5) = 0x6e697274;
        *(undefined4 *)((int)&DAT_0047a94c + ~uVar5 + 3) = 0x797469;
        return 1;
      }
      iVar2 = _stricmp(param_1,"trinitybb");
      if (iVar2 == 0) {
        DAT_00479ea4 = DAT_00479ea4 | 0x40000005;
        uVar5 = 0xffffffff;
        pcVar8 = (char *)&DAT_0047a94c;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pcVar8 = "trinitybb";
        pcVar4 = &DAT_0047a94b + ~uVar5;
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pcVar4 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar4 = pcVar4 + 1;
        }
        return 1;
      }
      iVar2 = _stricmp(param_1,"trinitybigffs");
      if (iVar2 == 0) {
        DAT_00479ea4 = DAT_00479ea4 | 0x60000005;
        uVar5 = 0xffffffff;
        pcVar8 = (char *)&DAT_0047a94c;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pcVar8 = "trinitybigffs";
        pcVar4 = &DAT_0047a94b + ~uVar5;
        for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pcVar4 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar4 = pcVar4 + 1;
        }
        return 1;
      }
      iVar2 = _stricmp(param_1,"corona");
      if (iVar2 == 0) {
        DAT_00479ea4 = DAT_00479ea4 | 0x80000006;
        uVar5 = 0xffffffff;
        pcVar8 = (char *)&DAT_0047a94c;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pcVar8 = "corona";
        pcVar4 = &DAT_0047a94b + ~uVar5;
        for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pcVar4 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar4 = pcVar4 + 1;
        }
        return 1;
      }
      iVar2 = _stricmp(param_1,"coronabb");
      if (iVar2 == 0) {
        DAT_00479ea4 = DAT_00479ea4 | 0x40000006;
        uVar5 = 0xffffffff;
        pcVar8 = "coronabb";
        pcVar4 = (char *)&DAT_0047a94c;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
LAB_00424837:
        pcVar4 = &DAT_0047a94b + ~uVar5;
        for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pcVar4 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar4 = pcVar4 + 1;
        }
        return 1;
      }
      iVar2 = _stricmp(param_1,"coronabigffs");
      if (iVar2 == 0) {
        DAT_00479ea4 = DAT_00479ea4 | 0x60000006;
        uVar5 = 0xffffffff;
        pcVar8 = "coronabigffs";
        pcVar4 = (char *)&DAT_0047a94c;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        pcVar4 = &DAT_0047a94b + ~uVar5;
      }
      else {
        iVar2 = _stricmp(param_1,"corona4g");
        if (iVar2 == 0) {
          DAT_00479ea4 = DAT_00479ea4 | 0x90000006;
          uVar5 = 0xffffffff;
          pcVar8 = "corona4g";
          pcVar4 = (char *)&DAT_0047a94c;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          goto LAB_00424837;
        }
        iVar2 = _stricmp(param_1,"winchester");
        if (iVar2 == 0) {
          DAT_00479ea4 = DAT_00479ea4 | 0x80000007;
          uVar5 = 0xffffffff;
          pcVar8 = (char *)&DAT_0047a94c;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          pcVar8 = "winchester";
          pcVar4 = &DAT_0047a94b + ~uVar5;
          for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pcVar4 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar4 = pcVar4 + 1;
          }
          return 1;
        }
        iVar2 = _stricmp(param_1,"winchester4g");
        if (iVar2 == 0) {
          DAT_00479ea4 = DAT_00479ea4 | 0x90000007;
          uVar5 = 0xffffffff;
          pcVar8 = "winchester4g";
          pcVar4 = (char *)&DAT_0047a94c;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          pcVar4 = &DAT_0047a94b + ~uVar5;
        }
        else {
          iVar2 = _stricmp(param_1,"winchesterbb");
          if (iVar2 != 0) {
            iVar2 = _stricmp(param_1,"winchesterbigffs");
            if (iVar2 != 0) {
              return 0;
            }
            DAT_00479ea4 = DAT_00479ea4 | 0x60000007;
            uVar5 = 0xffffffff;
            pcVar8 = (char *)&DAT_0047a94c;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            pcVar8 = "winchesterbigffs";
            pcVar4 = &DAT_0047a94b + ~uVar5;
            for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
              *pcVar4 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar4 = pcVar4 + 1;
            }
            return 1;
          }
          DAT_00479ea4 = DAT_00479ea4 | 0x40000007;
          uVar5 = 0xffffffff;
          pcVar8 = "winchesterbb";
          pcVar4 = (char *)&DAT_0047a94c;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          pcVar4 = &DAT_0047a94b + ~uVar5;
        }
      }
      for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pcVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar4 = pcVar4 + 1;
      }
      return 1;
    }
    DAT_00479ea4 = DAT_00479ea4 | 4;
    puVar6 = &DAT_0047a94c;
    do {
      uVar5 = *puVar6;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 + 0xfefefeff & ~uVar5 & 0x80808080;
    } while (uVar5 == 0);
  }
  bVar9 = (uVar5 & 0x8080) == 0;
  if (bVar9) {
    uVar5 = uVar5 >> 0x10;
  }
  if (bVar9) {
    puVar6 = (uint *)((int)puVar6 + 2);
  }
  iVar2 = -(uint)CARRY1((byte)uVar5,(byte)uVar5);
  *(undefined4 *)((int)puVar6 + iVar2 + -3) = 0x7073616a;
  *(undefined2 *)((int)puVar6 + iVar2 + 1) = 0x7265;
  *(undefined1 *)((int)puVar6 + iVar2 + 3) = 0;
  return 1;
}

