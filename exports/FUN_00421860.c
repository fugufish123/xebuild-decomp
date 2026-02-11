
uint __cdecl FUN_00421860(byte *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  size_t sVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  
  bVar1 = *param_1;
  if (bVar1 == 0x30) {
    bVar2 = param_1[1];
    if ((byte)(bVar2 + 0xbf) < 0x19) {
      bVar2 = bVar2 + 0x20;
    }
    if (bVar2 == 0x78) {
      if (param_1 + 2 == (byte *)0x0) {
        return param_2;
      }
      sVar3 = strlen((char *)(param_1 + 2));
      if (param_1[2] == 0) {
        return param_2;
      }
      if (sVar3 == 0) {
        return param_2;
      }
      if (0 < (int)sVar3) {
        pbVar6 = param_1;
        do {
          if ((9 < (byte)(pbVar6[2] - 0x30)) && (5 < (byte)((pbVar6[2] & 0xdf) + 0xbf))) {
            return param_2;
          }
          pbVar6 = pbVar6 + 1;
        } while (pbVar6 != param_1 + sVar3);
      }
      bVar1 = param_1[2];
      if (bVar1 == 0) {
        return 0;
      }
      if ((byte)(bVar1 + 0x9f) < 6) {
        bVar2 = bVar1 + 0xa9;
      }
      else {
        bVar2 = bVar1 - 0x30;
        if ((9 < bVar2) && (bVar2 = bVar1 - 0x37, 5 < (byte)(bVar1 + 0xbf))) {
          return param_2;
        }
      }
      bVar1 = param_1[3];
      if (bVar1 == 0) {
        return (uint)bVar2;
      }
      if ((byte)(bVar1 + 0x9f) < 6) {
        bVar5 = bVar1 + 0xa9;
      }
      else {
        bVar5 = bVar1 - 0x30;
        if ((9 < bVar5) && (bVar5 = bVar1 - 0x37, 5 < (byte)(bVar1 + 0xbf))) {
          return param_2;
        }
      }
      uVar4 = (uint)bVar2 * 0x10 + (uint)bVar5;
      bVar1 = param_1[4];
      if (bVar1 == 0) {
        return uVar4;
      }
      if ((byte)(bVar1 + 0x9f) < 6) {
        bVar2 = bVar1 + 0xa9;
      }
      else {
        bVar2 = bVar1 - 0x30;
        if ((9 < bVar2) && (bVar2 = bVar1 - 0x37, 5 < (byte)(bVar1 + 0xbf))) {
          return param_2;
        }
      }
      uVar4 = (uint)bVar2 + uVar4 * 0x10;
      bVar1 = param_1[5];
      if (bVar1 == 0) {
        return uVar4;
      }
      if ((byte)(bVar1 + 0x9f) < 6) {
        bVar2 = bVar1 + 0xa9;
      }
      else {
        bVar2 = bVar1 - 0x30;
        if ((9 < bVar2) && (bVar2 = bVar1 - 0x37, 5 < (byte)(bVar1 + 0xbf))) {
          return param_2;
        }
      }
      uVar4 = uVar4 * 0x10 + (uint)bVar2;
      bVar1 = param_1[6];
      if (bVar1 == 0) {
        return uVar4;
      }
      if ((byte)(bVar1 + 0x9f) < 6) {
        bVar2 = bVar1 + 0xa9;
      }
      else {
        bVar2 = bVar1 - 0x30;
        if ((9 < bVar2) && (bVar2 = bVar1 - 0x37, 5 < (byte)(bVar1 + 0xbf))) {
          return param_2;
        }
      }
      uVar4 = uVar4 * 0x10 + (uint)bVar2;
      bVar1 = param_1[7];
      if (bVar1 == 0) {
        return uVar4;
      }
      if ((byte)(bVar1 + 0x9f) < 6) {
        bVar2 = bVar1 + 0xa9;
      }
      else {
        bVar2 = bVar1 - 0x30;
        if ((9 < bVar2) && (bVar2 = bVar1 - 0x37, 5 < (byte)(bVar1 + 0xbf))) {
          return param_2;
        }
      }
      uVar4 = uVar4 * 0x10 + (uint)bVar2;
      bVar1 = param_1[8];
      if (bVar1 == 0) {
        return uVar4;
      }
      if ((byte)(bVar1 + 0x9f) < 6) {
        bVar2 = bVar1 + 0xa9;
      }
      else {
        bVar2 = bVar1 - 0x30;
        if ((9 < bVar2) && (bVar2 = bVar1 - 0x37, 5 < (byte)(bVar1 + 0xbf))) {
          return param_2;
        }
      }
      uVar4 = uVar4 * 0x10 + (uint)bVar2;
      bVar1 = param_1[9];
      if (bVar1 == 0) {
        return uVar4;
      }
      if ((byte)(bVar1 + 0x9f) < 6) {
        bVar2 = bVar1 + 0xa9;
      }
      else {
        bVar2 = bVar1 - 0x30;
        if ((9 < bVar2) && (bVar2 = bVar1 - 0x37, 5 < (byte)(bVar1 + 0xbf))) {
          return param_2;
        }
      }
      uVar4 = uVar4 * 0x10 + (uint)bVar2;
      bVar1 = param_1[10];
      if (bVar1 == 0) {
        return uVar4;
      }
      if ((byte)(bVar1 + 0x9f) < 6) {
        bVar2 = bVar1 + 0xa9;
      }
      else {
        bVar2 = bVar1 - 0x30;
        if ((9 < bVar2) && (bVar2 = bVar1 - 0x37, 5 < (byte)(bVar1 + 0xbf))) {
          return param_2;
        }
      }
      uVar4 = uVar4 * 0x10 + (uint)bVar2;
      bVar1 = param_1[0xb];
      if (bVar1 == 0) {
        return uVar4;
      }
      if ((byte)(bVar1 + 0x9f) < 6) {
        bVar2 = bVar1 + 0xa9;
      }
      else {
        bVar2 = bVar1 - 0x30;
        if ((9 < bVar2) && (bVar2 = bVar1 - 0x37, 5 < (byte)(bVar1 + 0xbf))) {
          return param_2;
        }
      }
      uVar4 = uVar4 * 0x10 + (uint)bVar2;
      bVar1 = param_1[0xc];
      if (bVar1 == 0) {
        return uVar4;
      }
      if ((byte)(bVar1 + 0x9f) < 6) {
        bVar2 = bVar1 + 0xa9;
      }
      else {
        bVar2 = bVar1 - 0x30;
        if ((9 < bVar2) && (bVar2 = bVar1 - 0x37, 5 < (byte)(bVar1 + 0xbf))) {
          return param_2;
        }
      }
      uVar4 = uVar4 * 0x10 + (uint)bVar2;
      bVar1 = param_1[0xd];
      if (bVar1 == 0) {
        return uVar4;
      }
      if ((byte)(bVar1 + 0x9f) < 6) {
        bVar2 = bVar1 + 0xa9;
      }
      else {
        bVar2 = bVar1 - 0x30;
        if ((9 < bVar2) && (bVar2 = bVar1 - 0x37, 5 < (byte)(bVar1 + 0xbf))) {
          return param_2;
        }
      }
      uVar4 = uVar4 * 0x10 + (uint)bVar2;
      bVar1 = param_1[0xe];
      if (bVar1 == 0) {
        return uVar4;
      }
      if ((byte)(bVar1 + 0x9f) < 6) {
        bVar2 = bVar1 + 0xa9;
      }
      else {
        bVar2 = bVar1 - 0x30;
        if ((9 < bVar2) && (bVar2 = bVar1 - 0x37, 5 < (byte)(bVar1 + 0xbf))) {
          return param_2;
        }
      }
      uVar4 = uVar4 * 0x10 + (uint)bVar2;
      bVar1 = param_1[0xf];
      if (bVar1 == 0) {
        return uVar4;
      }
      if ((byte)(bVar1 + 0x9f) < 6) {
        bVar2 = bVar1 + 0xa9;
      }
      else {
        bVar2 = bVar1 - 0x30;
        if ((9 < bVar2) && (bVar2 = bVar1 - 0x37, 5 < (byte)(bVar1 + 0xbf))) {
          return param_2;
        }
      }
      uVar4 = uVar4 * 0x10 + (uint)bVar2;
      bVar1 = param_1[0x10];
      if (bVar1 == 0) {
        return uVar4;
      }
      if ((byte)(bVar1 + 0x9f) < 6) {
        bVar2 = bVar1 + 0xa9;
      }
      else {
        bVar2 = bVar1 - 0x30;
        if ((9 < bVar2) && (bVar2 = bVar1 - 0x37, 5 < (byte)(bVar1 + 0xbf))) {
          return param_2;
        }
      }
      uVar4 = uVar4 * 0x10 + (uint)bVar2;
      bVar1 = param_1[0x11];
      if (bVar1 == 0) {
        return uVar4;
      }
      if ((byte)(bVar1 + 0x9f) < 6) {
        bVar2 = bVar1 + 0xa9;
      }
      else {
        bVar2 = bVar1 - 0x30;
        if ((9 < bVar2) && (bVar2 = bVar1 - 0x37, 5 < (byte)(bVar1 + 0xbf))) {
          return param_2;
        }
      }
      return (uint)bVar2 + uVar4 * 0x10;
    }
  }
  sVar3 = strlen((char *)param_1);
  if ((bVar1 == 0) || (sVar3 == 0)) {
    return param_2;
  }
  if (0 < (int)sVar3) {
    pbVar6 = param_1;
    do {
      if ((9 < (byte)(*pbVar6 - 0x30)) && (5 < (byte)((*pbVar6 & 0xdf) + 0xbf))) {
        return param_2;
      }
      pbVar6 = pbVar6 + 1;
    } while (param_1 + sVar3 != pbVar6);
  }
  uVar4 = atoi((char *)param_1);
  return uVar4;
}

