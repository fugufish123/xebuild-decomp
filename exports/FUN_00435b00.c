
bool __cdecl FUN_00435b00(undefined4 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  size_t _Size;
  int iVar4;
  uint local_41c [5];
  char local_406;
  undefined4 local_21c;
  int local_218;
  
  uVar1 = *param_3;
  iVar3 = (uVar1 & 0xff00) * 0x100 + (uVar1 >> 0x18) + uVar1 * 0x1000000 + (uVar1 >> 8 & 0xff00);
  if (iVar3 - 1U < 0x40) {
    FUN_00433e10(param_2,(int *)local_41c,iVar3);
    uVar1 = *param_3;
    iVar4 = (uVar1 & 0xff00) * 0x100 + (uVar1 >> 0x18) + uVar1 * 0x1000000 + (uVar1 >> 8 & 0xff00);
    if (iVar4 - 1U < 0x40) {
      uVar2 = param_3[1];
      uVar1 = (uVar2 >> 0x18) + uVar2 * 0x1000000 + (uVar2 & 0xff00) * 0x100 + (uVar2 >> 8 & 0xff00)
      ;
      FUN_00436df0(&local_21c,iVar4);
      local_21c = 0;
      local_218 = (uVar2 >> 0x18) * 0x1000000 + (uVar1 >> 0x18) +
                  ((uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00);
      FUN_004380f0(local_41c,(undefined1 *)local_41c,(int)&local_21c,(int)(param_3 + 4),iVar4);
    }
    _Size = iVar3 * 8;
    FUN_00433e10(local_41c,(int *)local_41c,iVar3);
    if (_Size - 0x27 < 0x1da) {
      iVar3 = 0;
      if (local_406 != '\0') {
        iVar3 = (local_406 != '\x1a') + 1;
      }
      FUN_004339d0((undefined1 *)&local_21c,iVar3,_Size);
      iVar3 = memcmp(&local_21c,local_41c,_Size);
      return iVar3 == 0;
    }
  }
  return false;
}

