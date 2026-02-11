
void FUN_00418240(void)

{
  FUN_00433690(0,s__________________________________0044a4e0);
  FUN_00433690(0,"Usage   :\n   %s ini [systeUpdateConPath]\n\n");
  FUN_00433690(0,"Examples:\n");
  FUN_00433690(0,"   %s ini ./16547/\n");
  FUN_00433690(0,"   %s ini c:\\16547\\$SystemUpdate\n");
  FUN_00433690(0,"   %s ini z:\\someWeirdPath\\su20076000_00000000\n");
  FUN_00433690(0,"      when specifying path, either provide relative path or full path\n");
  FUN_00433690(0,"      to either the SU container, a folder with $SystemUpdate folder in it,\n");
  FUN_00433690(0,"      or a folder with flash update named \'su20076000_00000000\' in it.\n");
  FUN_00433690(0,"      Hash data will be output to the folder with the SU in it named _SU.ini\n");
  FUN_00433690(0,s__________________________________0044a4e0);
  if (DAT_0044a524 != 0) {
    FUN_00433690(0,"\npress <enter> to quit...\n");
    fgetc((FILE *)_iob_exref);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}

