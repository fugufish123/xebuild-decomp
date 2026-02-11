
undefined4 __cdecl FUN_00406e50(char *param_1,int *param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint local_3c;
  char local_20 [16];
  
  local_20[0] = -1;
  local_20[1] = -1;
  local_20[2] = -1;
  local_20[3] = -1;
  if (param_3 < 2) {
    iVar2 = FUN_004210b0((int)param_1,*param_2,local_20,4);
    FUN_00433690(0,"checking patch sections for JTAG console\n");
    if (iVar2 != 4) {
      FUN_00433690(0,
                   "\n\n***** ERROR: patches do not contain all segments, counted %d - aborting!\n")
      ;
      return 0;
    }
    return 1;
  }
  FUN_00433690(0,"checking patch sections for glitch console\n");
  iVar2 = FUN_004210b0((int)param_1,*param_2,local_20,4);
  if (iVar2 != 3) {
    FUN_00433690(0,"\n\n***** ERROR: patches do not contain all segments, aborting!\n");
    return 0;
  }
  pcVar3 = FUN_00421000(param_1,*param_2,local_20,4);
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  pcVar3 = FUN_00421000(pcVar3 + 4,(int)(param_1 + (*param_2 - (int)pcVar3)),local_20,4);
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  pcVar7 = pcVar3 + 4;
  pcVar5 = param_1 + (*param_2 - (int)pcVar7);
  if (param_3 == 2) {
    local_3c = 0x10;
    if (pcVar5 != (char *)0x0) goto LAB_00406f43;
  }
  else {
    local_3c = 0;
    if (pcVar5 == (char *)0x0) {
      local_3c = 0;
      goto LAB_00407021;
    }
LAB_00406f43:
    pcVar4 = param_1 + local_3c;
    if ((pcVar4 < pcVar3 + 8 && pcVar7 < param_1 + local_3c + 4 || pcVar5 < (char *)0xa) ||
       ((((uint)pcVar7 | (uint)pcVar4) & 3) != 0)) {
      pcVar7 = (char *)0x0;
      do {
        pcVar4[(int)pcVar7] = pcVar3[(int)(pcVar7 + 4)];
        pcVar7 = pcVar7 + 1;
      } while (pcVar7 < pcVar5);
    }
    else {
      pcVar7 = (char *)0x1;
      if (pcVar5 != (char *)0x0) {
        pcVar7 = pcVar5;
      }
      uVar8 = 0;
      uVar6 = ((uint)(pcVar7 + -4) >> 2) + 1;
      pcVar1 = (char *)(uVar6 * 4);
      do {
        *(undefined4 *)(pcVar4 + uVar8 * 4) = *(undefined4 *)(pcVar3 + uVar8 * 4 + 4);
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar6);
      if (pcVar7 != pcVar1) {
        pcVar4[(int)pcVar1] = pcVar3[(int)(pcVar1 + 4)];
        if (pcVar1 + 1 < pcVar5) {
          param_1[(int)(pcVar1 + 1 + local_3c)] = pcVar3[(int)(pcVar1 + 5)];
          if (pcVar1 + 2 < pcVar5) {
            pcVar4[(int)(pcVar1 + 2)] = pcVar3[(int)(pcVar1 + 6)];
          }
        }
      }
    }
    if (local_3c == 0) goto LAB_00407021;
    if (local_3c < 4) {
      if (local_3c != 0) {
        *param_1 = -1;
      }
      goto LAB_00407021;
    }
  }
  param_1[0] = -1;
  param_1[1] = -1;
  param_1[2] = -1;
  param_1[3] = -1;
  pcVar3 = param_1 + (local_3c - 4);
  pcVar3[0] = -1;
  pcVar3[1] = -1;
  pcVar3[2] = -1;
  pcVar3[3] = -1;
  if (3 < ((uint)(param_1 + (local_3c - ((uint)(param_1 + 4) & 0xfffffffc))) & 0xfffffffc)) {
    uVar6 = 0;
    do {
      *(undefined4 *)(((uint)(param_1 + 4) & 0xfffffffc) + uVar6) = 0xffffffff;
      uVar6 = uVar6 + 4;
    } while (uVar6 < ((uint)(param_1 + (local_3c - ((uint)(param_1 + 4) & 0xfffffffc))) & 0xfffffffc
                     ));
  }
LAB_00407021:
  *param_2 = (int)(pcVar5 + local_3c);
  return 1;
}

