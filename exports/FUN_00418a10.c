
void FUN_00418a10(void)

{
  FUN_00433690(0,s__________________________________0044a4e0);
  FUN_00433690(0,"Usage    :\n   %s [mode] -t <type> [<switch> [<switch>...]] <out.bin>\n\n");
  FUN_00433690(0,
               "Example  :\n   %s -t retail -c trinity -d files -b 0102...0f -p 0102...0f out.bin\n"
              );
  FUN_00433690(0,"\nSwitches:\n");
  FUN_00433690(0,
               "   -t <type>: retail, jtag, glitch, glitch2, glitch2m, devkit (defaults to retail)\n"
              );
  FUN_00433690(0,"   -p <key> : 32 character CPU hex key (override, can be elsewhere)\n");
  FUN_00433690(0,"   -b <key> : 32 character 1BL hex key (override, can be elsewhere)\n");
  FUN_00433690(0,"   -c <con> : console type\n");
  FUN_00433690(0,"   -d <dir> : per build files directory\n");
  FUN_00433690(0,"   -f <dir> : use different data dir and file lists\n");
  FUN_00433690(0,
               "   -s <file>: outputs SHA-1 of final image to <file>, if <file> is not provided an auto generated name is used\n"
              );
  FUN_00433690(0,"   -o <opt> : set %s options\n");
  FUN_00433690(0,"   -a <name>: append patches\n");
  FUN_00433690(0,"   -i <ext> : adds _<ext> into firmware ini and patches file names\n");
  FUN_00433690(0,"   -r <ext> : adds _<ext> into ini bl section name and patches file names\n");
  FUN_00433690(0,"   -8 <pat> : adds raw patch to NAND just before finalizing\n");
  FUN_00433690(0,"   -v       : shows more info during build process\n");
  FUN_00433690(0,"   -noenter : suppresses prompt for enter key when finished\n");
  FUN_00433690(0,"   -?       : shows this info\n\n");
  FUN_00433690(0,"legend:\n");
  FUN_00433690(0,"[mode]      : build, extract");
  FUN_00433690(0,", client, update");
  FUN_00433690(0," - defaults to build if not present\n");
  FUN_00433690(0,"<con>       = xenon, zephyr, falcon, jasper, jaspersb, jasper256,\n");
  FUN_00433690(0,
               "              jasper512, jasperbb, jasperbigffs, trinity, trinitybb, trinitybigffs\n"
              );
  FUN_00433690(0,"              corona, corona4g, winchester, winchester4g\n");
  FUN_00433690(0,
               "<dir>       = path, absolute or relative, to a directory - do not terminate with /\n"
              );
  FUN_00433690(0,"<key>       = 128 bit key in hexadecimal representation\n");
  FUN_00433690(0,"<name>      = name.bin contents will be appended to hv/kernel patches\n\n");
  FUN_00433690(0,"<out.bin>   = optional, overrides auto built output image name\n");
  FUN_00433690(0,
               "<ext>       = using this option would cause the builder to look for _glitch_<ext>.ini instead of _glitch.ini\n"
              );
  FUN_00433690(0,"              and patches_jasper_<ext>.bin instead of patches_jasper.bin\n");
  FUN_00433690(0,
               "<opt> various options can be specified on the command line, see perbox sample ini for descriptions\n"
              );
  FUN_00433690(0,"      listed below, ALL are available to all image types\n");
  FUN_00433690(0,
               "      the others can be specified but are only used for that specific image type\n")
  ;
  FUN_00433690(0,
               "ALL         = nomobile noremap noecdremap nosecurity nosusecurity nandmu smcnocheck cputemp=\n"
              );
  FUN_00433690(0,
               "ALL         = gputemp= edramtemp= overcputemp= overgputemp= overedramtemp= cpufan= gpufan=\n"
              );
  FUN_00433690(0,"ALL         = avregion= gameregion= dvdregion= macid= cfldv=\n");
  FUN_00433690(0,
               "JTAG/GLITCH = smcnoeject smcnoblink cygnos demon xellbutton= xellbutton2= dvdkey=\n"
              );
  FUN_00433690(0,"JTAG only   = nodvd olddvd dualboot=\n");
  FUN_00433690(0,"GLITCH only = patchsmc\n");
  FUN_00433690(0,"      options noted above with an = are expected to be followed with a value\n");
  FUN_00433690(0,
               "      specifying one of the options without an = is the same as setting TRUE in the ini\n"
              );
  FUN_00433690(0,"         any value assigned to it will be ignored.\n");
  FUN_00433690(0,
               "      note that command line options take precedence over any values set in perbox ini\n"
              );
  FUN_00433690(0,
               "      and that only values preceded with 0x will be interpreted as hex, MAC is the only exception\n"
              );
  FUN_00433690(0,"      example: -o macid=00:22:48:F1:01:02;gameregion=0x00FF;nomobile\n");
  FUN_00433690(0,"      example: -o macid=00:22:48:F1:01:02 -o gameregion=0x00FF -o nomobile\n");
  FUN_00433690(0,"      example: -o macid=002248F10102 -o gameregion=255 -o nomobile\n");
  FUN_00433690(0,"<pat>       = optional, <pat> consists of filename.ext,offset\n");
  FUN_00433690(0,
               "      patches NAND image with file contents just before combining spare and finalizing ecc\n"
              );
  FUN_00433690(0,"      offset is the raw offset without spare data\n");
  FUN_00433690(0,
               "      file will load based from the -f directory, or absolute path if drive letter is found\n"
              );
  FUN_00433690(0,
               "      add 0x to offset to specify hexadecimal, otherwise it will be read as decimal\n"
              );
  FUN_00433690(0,"      example: -8 myfile.bin,0x12345\n");
  FUN_00433690(0,"      example: -8 myfile.bin,0x12345;myotherfile.bin,0x54321\n");
  FUN_00433690(0,s__________________________________0044a4e0);
  if (DAT_0044a524 != 0) {
    FUN_00433690(0,"\npress <enter> to quit...\n");
    fgetc((FILE *)_iob_exref);
  }
                    /* WARNING: Subroutine does not return */
  exit(1);
}

