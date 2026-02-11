
void FUN_0040e020(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    FUN_00433690(0,"\n\n***** ERROR: unknown option \'%s\' provided on command line!\n");
    break;
  case 2:
    FUN_00433690(0,"\n\n***** ERROR: not enough info provided to carry out command!\n");
    break;
  case 3:
    FUN_00433690(0,"\n\n***** ERROR: option flag %s on command line but no argument provided!\n");
    break;
  case 4:
    FUN_00433690(0,
                 "\n\n***** ERROR: option flag %s on command line not enough arguments provided!\n")
    ;
    break;
  case 5:
    FUN_00433690(0,"\n\n***** ERROR: option flag %s on command line but option was already set!\n");
  }
  FUN_00433690(0,s__________________________________0044a4e0);
  FUN_00433690(0,"Usage   :\n   %s extract <switch> <input NAND image>\n\n");
  FUN_00433690(0,"Examples:\n");
  FUN_00433690(0,"   %s extract -v nanddump.bin\n");
  FUN_00433690(0,"\nSwitches:\n");
  FUN_00433690(0,"   -noenter : suppresses prompt for enter key when finished\n");
  FUN_00433690(0,"   -v       : shows more info during extract process\n");
  FUN_00433690(0,"   -?       : shows this help\n\n");
  FUN_00433690(0,"legend:\n");
  FUN_00433690(0,
               "<dir>       = path, absolute or relative, to a directory - do not terminate with /\n"
              );
  FUN_00433690(0,s__________________________________0044a4e0);
  FUN_004337a0();
  if (DAT_0044a524 != 0) {
    FUN_00433690(0,"\npress <enter> to quit...\n");
    fgetc((FILE *)_iob_exref);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}

