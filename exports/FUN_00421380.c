
uint __cdecl FUN_00421380(char *param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  
  uVar3 = 0;
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    if ((byte)(cVar1 + 0x9fU) < 6) {
      bVar2 = cVar1 + 0xa9;
    }
    else {
      bVar2 = cVar1 - 0x30;
      if (9 < bVar2) {
        if (5 < (byte)(cVar1 + 0xbfU)) {
          return param_2;
        }
        bVar2 = cVar1 - 0x37;
      }
    }
    cVar1 = param_1[1];
    if (cVar1 == '\0') {
      return (uint)bVar2;
    }
    if ((byte)(cVar1 + 0x9fU) < 6) {
      bVar4 = cVar1 + 0xa9;
    }
    else {
      bVar4 = cVar1 - 0x30;
      if ((9 < bVar4) && (bVar4 = cVar1 - 0x37, 5 < (byte)(cVar1 + 0xbfU))) {
        return param_2;
      }
    }
    uVar3 = (uint)bVar2 * 0x10 + (uint)bVar4;
    cVar1 = param_1[2];
    if (cVar1 == '\0') {
      return uVar3;
    }
    if ((byte)(cVar1 + 0x9fU) < 6) {
      bVar2 = cVar1 + 0xa9;
    }
    else {
      bVar2 = cVar1 - 0x30;
      if ((9 < bVar2) && (bVar2 = cVar1 - 0x37, 5 < (byte)(cVar1 + 0xbfU))) {
        return param_2;
      }
    }
    uVar3 = uVar3 * 0x10 + (uint)bVar2;
    cVar1 = param_1[3];
    if (cVar1 == '\0') {
      return uVar3;
    }
    if ((byte)(cVar1 + 0x9fU) < 6) {
      bVar2 = cVar1 + 0xa9;
    }
    else {
      bVar2 = cVar1 - 0x30;
      if ((9 < bVar2) && (bVar2 = cVar1 - 0x37, 5 < (byte)(cVar1 + 0xbfU))) {
        return param_2;
      }
    }
    uVar3 = uVar3 * 0x10 + (uint)bVar2;
    cVar1 = param_1[4];
    if (cVar1 == '\0') {
      return uVar3;
    }
    if ((byte)(cVar1 + 0x9fU) < 6) {
      bVar2 = cVar1 + 0xa9;
    }
    else {
      bVar2 = cVar1 - 0x30;
      if ((9 < bVar2) && (bVar2 = cVar1 - 0x37, 5 < (byte)(cVar1 + 0xbfU))) {
        return param_2;
      }
    }
    uVar3 = uVar3 * 0x10 + (uint)bVar2;
    cVar1 = param_1[5];
    if (cVar1 == '\0') {
      return uVar3;
    }
    if ((byte)(cVar1 + 0x9fU) < 6) {
      bVar2 = cVar1 + 0xa9;
    }
    else {
      bVar2 = cVar1 - 0x30;
      if ((9 < bVar2) && (bVar2 = cVar1 - 0x37, 5 < (byte)(cVar1 + 0xbfU))) {
        return param_2;
      }
    }
    uVar3 = uVar3 * 0x10 + (uint)bVar2;
    cVar1 = param_1[6];
    if (cVar1 == '\0') {
      return uVar3;
    }
    if ((byte)(cVar1 + 0x9fU) < 6) {
      bVar2 = cVar1 + 0xa9;
    }
    else {
      bVar2 = cVar1 - 0x30;
      if ((9 < bVar2) && (bVar2 = cVar1 - 0x37, 5 < (byte)(cVar1 + 0xbfU))) {
        return param_2;
      }
    }
    uVar3 = uVar3 * 0x10 + (uint)bVar2;
    cVar1 = param_1[7];
    if (cVar1 == '\0') {
      return uVar3;
    }
    if ((byte)(cVar1 + 0x9fU) < 6) {
      bVar2 = cVar1 + 0xa9;
    }
    else {
      bVar2 = cVar1 - 0x30;
      if ((9 < bVar2) && (bVar2 = cVar1 - 0x37, 5 < (byte)(cVar1 + 0xbfU))) {
        return param_2;
      }
    }
    uVar3 = uVar3 * 0x10 + (uint)bVar2;
    cVar1 = param_1[8];
    if (cVar1 == '\0') {
      return uVar3;
    }
    if ((byte)(cVar1 + 0x9fU) < 6) {
      bVar2 = cVar1 + 0xa9;
    }
    else {
      bVar2 = cVar1 - 0x30;
      if ((9 < bVar2) && (bVar2 = cVar1 - 0x37, 5 < (byte)(cVar1 + 0xbfU))) {
        return param_2;
      }
    }
    uVar3 = uVar3 * 0x10 + (uint)bVar2;
    cVar1 = param_1[9];
    if (cVar1 == '\0') {
      return uVar3;
    }
    if ((byte)(cVar1 + 0x9fU) < 6) {
      bVar2 = cVar1 + 0xa9;
    }
    else {
      bVar2 = cVar1 - 0x30;
      if ((9 < bVar2) && (bVar2 = cVar1 - 0x37, 5 < (byte)(cVar1 + 0xbfU))) {
        return param_2;
      }
    }
    uVar3 = uVar3 * 0x10 + (uint)bVar2;
    cVar1 = param_1[10];
    if (cVar1 == '\0') {
      return uVar3;
    }
    if ((byte)(cVar1 + 0x9fU) < 6) {
      bVar2 = cVar1 + 0xa9;
    }
    else {
      bVar2 = cVar1 - 0x30;
      if ((9 < bVar2) && (bVar2 = cVar1 - 0x37, 5 < (byte)(cVar1 + 0xbfU))) {
        return param_2;
      }
    }
    uVar3 = uVar3 * 0x10 + (uint)bVar2;
    cVar1 = param_1[0xb];
    if (cVar1 == '\0') {
      return uVar3;
    }
    if ((byte)(cVar1 + 0x9fU) < 6) {
      bVar2 = cVar1 + 0xa9;
    }
    else {
      bVar2 = cVar1 - 0x30;
      if ((9 < bVar2) && (bVar2 = cVar1 - 0x37, 5 < (byte)(cVar1 + 0xbfU))) {
        return param_2;
      }
    }
    uVar3 = uVar3 * 0x10 + (uint)bVar2;
    cVar1 = param_1[0xc];
    if (cVar1 == '\0') {
      return uVar3;
    }
    if ((byte)(cVar1 + 0x9fU) < 6) {
      bVar2 = cVar1 + 0xa9;
    }
    else {
      bVar2 = cVar1 - 0x30;
      if ((9 < bVar2) && (bVar2 = cVar1 - 0x37, 5 < (byte)(cVar1 + 0xbfU))) {
        return param_2;
      }
    }
    uVar3 = uVar3 * 0x10 + (uint)bVar2;
    cVar1 = param_1[0xd];
    if (cVar1 == '\0') {
      return uVar3;
    }
    if ((byte)(cVar1 + 0x9fU) < 6) {
      bVar2 = cVar1 + 0xa9;
    }
    else {
      bVar2 = cVar1 - 0x30;
      if ((9 < bVar2) && (bVar2 = cVar1 - 0x37, 5 < (byte)(cVar1 + 0xbfU))) {
        return param_2;
      }
    }
    uVar3 = uVar3 * 0x10 + (uint)bVar2;
    cVar1 = param_1[0xe];
    if (cVar1 == '\0') {
      return uVar3;
    }
    if ((byte)(cVar1 + 0x9fU) < 6) {
      bVar2 = cVar1 + 0xa9;
    }
    else {
      bVar2 = cVar1 - 0x30;
      if ((9 < bVar2) && (bVar2 = cVar1 - 0x37, 5 < (byte)(cVar1 + 0xbfU))) {
        return param_2;
      }
    }
    uVar3 = uVar3 * 0x10 + (uint)bVar2;
    cVar1 = param_1[0xf];
    if (cVar1 != '\0') {
      if ((byte)(cVar1 + 0x9fU) < 6) {
        bVar2 = cVar1 + 0xa9;
      }
      else {
        bVar2 = cVar1 - 0x30;
        if ((9 < bVar2) && (bVar2 = cVar1 - 0x37, 5 < (byte)(cVar1 + 0xbfU))) {
          return param_2;
        }
      }
      uVar3 = uVar3 * 0x10 + (uint)bVar2;
    }
  }
  return uVar3;
}

