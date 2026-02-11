
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x004471eb) */
/* WARNING: Removing unreachable block (ram,0x00447360) */
/* WARNING: Removing unreachable block (ram,0x004471f4) */
/* WARNING: Removing unreachable block (ram,0x00447201) */
/* WARNING: Removing unreachable block (ram,0x0044720a) */
/* WARNING: Removing unreachable block (ram,0x00447365) */
/* WARNING: Removing unreachable block (ram,0x0044736f) */
/* WARNING: Removing unreachable block (ram,0x0044737a) */
/* WARNING: Removing unreachable block (ram,0x0044721c) */
/* WARNING: Removing unreachable block (ram,0x00447221) */
/* WARNING: Removing unreachable block (ram,0x0044722d) */
/* WARNING: Removing unreachable block (ram,0x0044723c) */
/* WARNING: Removing unreachable block (ram,0x0044723f) */
/* WARNING: Removing unreachable block (ram,0x0044737f) */
/* WARNING: Removing unreachable block (ram,0x00447395) */
/* WARNING: Removing unreachable block (ram,0x00447398) */
/* WARNING: Removing unreachable block (ram,0x00447266) */
/* WARNING: Removing unreachable block (ram,0x004473f7) */
/* WARNING: Removing unreachable block (ram,0x0044726f) */
/* WARNING: Removing unreachable block (ram,0x00447278) */
/* WARNING: Removing unreachable block (ram,0x00447288) */
/* WARNING: Removing unreachable block (ram,0x0044728d) */
/* WARNING: Removing unreachable block (ram,0x00447299) */
/* WARNING: Removing unreachable block (ram,0x004472a0) */
/* WARNING: Removing unreachable block (ram,0x004472c9) */
/* WARNING: Removing unreachable block (ram,0x004473d0) */
/* WARNING: Removing unreachable block (ram,0x004473de) */
/* WARNING: Removing unreachable block (ram,0x004473e1) */
/* WARNING: Removing unreachable block (ram,0x004473b4) */
/* WARNING: Removing unreachable block (ram,0x004473c3) */
/* WARNING: Removing unreachable block (ram,0x004472d1) */
/* WARNING: Removing unreachable block (ram,0x004472ef) */
/* WARNING: Removing unreachable block (ram,0x00447306) */
/* WARNING: Removing unreachable block (ram,0x0044740e) */
/* WARNING: Removing unreachable block (ram,0x00447433) */
/* WARNING: Removing unreachable block (ram,0x004474b0) */
/* WARNING: Removing unreachable block (ram,0x004474e0) */
/* WARNING: Removing unreachable block (ram,0x004475a1) */
/* WARNING: Removing unreachable block (ram,0x004474b7) */
/* WARNING: Removing unreachable block (ram,0x004474c2) */
/* WARNING: Removing unreachable block (ram,0x00447463) */
/* WARNING: Removing unreachable block (ram,0x00447520) */
/* WARNING: Removing unreachable block (ram,0x00447539) */
/* WARNING: Removing unreachable block (ram,0x004474fd) */
/* WARNING: Removing unreachable block (ram,0x00447501) */
/* WARNING: Removing unreachable block (ram,0x0044746e) */
/* WARNING: Removing unreachable block (ram,0x00447560) */
/* WARNING: Removing unreachable block (ram,0x0044756b) */
/* WARNING: Removing unreachable block (ram,0x004475e0) */
/* WARNING: Removing unreachable block (ram,0x00447584) */
/* WARNING: Removing unreachable block (ram,0x0044758c) */
/* WARNING: Removing unreachable block (ram,0x00447479) */
/* WARNING: Removing unreachable block (ram,0x004475c0) */
/* WARNING: Removing unreachable block (ram,0x00447496) */
/* WARNING: Removing unreachable block (ram,0x0044749a) */
/* WARNING: Removing unreachable block (ram,0x004474c9) */
/* WARNING: Removing unreachable block (ram,0x004474d2) */
/* WARNING: Removing unreachable block (ram,0x0044750f) */
/* WARNING: Removing unreachable block (ram,0x0044732c) */
/* WARNING: Removing unreachable block (ram,0x004472e0) */
/* WARNING: Removing unreachable block (ram,0x004472d5) */

int * FUN_00447180(void)

{
  int *in_EAX;
  uint uVar1;
  undefined1 auStack_3d [45];
  
  if (DAT_00479e3c == 0) {
    DAT_00479e3c = 1;
    FUN_00447a00();
    uVar1 = FUN_00447c00();
    DAT_00479e40 = 0;
    DAT_00479e44 = (uint)(auStack_3d + -uVar1) & 0xfffffff0;
    in_EAX = (int *)0x0;
  }
  return in_EAX;
}

