
void __cdecl FUN_004100b0(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  
  uVar5 = (undefined1)param_2;
  bVar1 = (byte)((uint)param_2 >> 8) & 0xf;
  puVar8 = (uint *)(param_1 + 0x200);
  do {
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    if (param_3 == 0) {
      if (DAT_00479ef4 == 0) {
        *(undefined1 *)((int)puVar8 + 5) = 0xff;
        *(byte *)((int)puVar8 + 1) = *(byte *)((int)puVar8 + 1) & 0xf0 | bVar1;
        *(undefined1 *)puVar8 = uVar5;
      }
      else {
        *(undefined1 *)((int)puVar8 + 5) = 0xff;
        *(byte *)((int)puVar8 + 2) = *(byte *)((int)puVar8 + 2) & 0xf0 | bVar1;
        *(undefined1 *)((int)puVar8 + 1) = uVar5;
      }
    }
    else {
      *(undefined1 *)puVar8 = 0xff;
      *(byte *)((int)puVar8 + 2) = *(byte *)((int)puVar8 + 2) & 0xf0 | bVar1;
      *(undefined1 *)((int)puVar8 + 1) = uVar5;
    }
    puVar6 = puVar8 + -0x80;
    uVar4 = 0;
    uVar7 = 0;
    uVar3 = 0;
    do {
      if ((uVar4 & 0x1f) == 0) {
        puVar2 = puVar6;
        if (uVar4 == 0x1000) {
          puVar2 = puVar8;
        }
        puVar6 = puVar2 + 1;
        uVar3 = ~*puVar2;
      }
      uVar7 = uVar3 & 1 ^ uVar7;
      if ((uVar7 & 1) != 0) {
        uVar7 = uVar7 ^ 0x6954559;
      }
      uVar4 = uVar4 + 1;
      uVar7 = uVar7 >> 1;
      uVar3 = uVar3 >> 1;
    } while (uVar4 != 0x1066);
    uVar7 = ~uVar7;
    puVar6 = puVar8 + 0x84;
    *(byte *)(puVar8 + 3) = ((byte)puVar8[3] & 0x3f) + (char)(uVar7 << 6);
    *(char *)((int)puVar8 + 0xd) = (char)(uVar7 >> 2);
    *(char *)((int)puVar8 + 0xf) = (char)(uVar7 >> 0x12);
    *(char *)((int)puVar8 + 0xe) = (char)(uVar7 >> 10);
    puVar8 = puVar6;
  } while ((uint *)(param_1 + 0x200 + ((-(uint)(param_3 == 0) & 0xffffff20) + 0x100) * 0x210) !=
           puVar6);
  return;
}

