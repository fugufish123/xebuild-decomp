
void FUN_004031d0(void) // print usage and exit

{
    const char *usage_separator = "---------------------------------------------\n";
    FUN_00433690(0,usage_separator);
    FUN_00433690(0,"Usage   :\n   %s update <switch> [<option>]\n\n");
    FUN_00433690(0,"Examples:\n");
    FUN_00433690(0,"   %s update -f 16197 -a nofcrt\n");
    FUN_00433690(0,"   %s update -f 16203 -d myflash -ip 192.168.2.100\n");
    FUN_00433690(0,"\nSwitches:\n");
    FUN_00433690(0,"   -f <dir> : use different data dir and file lists\n");
    FUN_00433690(0,"   -d <dir> : dumps NAND and other data to <dir> before flashing\n");
    FUN_00433690(0,"   -a <name>: append patches\n");
    FUN_00433690(0,"   -ip <add>: force attempt to connect to addr\n");
    FUN_00433690(0,"   -i <ext> : adds _<ext> into firmware ini and patches file names\n");
    FUN_00433690(0,"   -r <ext> : adds _<ext> into ini bl section name and patches file names\n");
    FUN_00433690(0,"   -nowrite : will not write anything to console flash or HDD\n");
    FUN_00433690(0,"              without -d results of update are not kept anywhere\n");
    FUN_00433690(0,"   -noava   : will not send avatar data if available and HDD present\n");
    FUN_00433690(0,
                 "   -clean   : secdata, extended and statistics will not be retrieved from console\n"
    );
    FUN_00433690(0,"   -noreeb  : do not automatically reboot console after writes are completed\n");
    FUN_00433690(0,"   -noenter : suppresses prompt for enter key when finished\n");
    FUN_00433690(0,"   -v       : shows more info during update process\n");
    FUN_00433690(0,"   -?       : shows this help\n\n");
    FUN_00433690(0,"legend:\n");
    FUN_00433690(0,"<name>      = name.bin contents will be appended to hv/kernel patches\n\n");
    FUN_00433690(0,
                 "<dir>       = path, absolute or relative, to a directory - do not terminate with \\\n"
    );
    FUN_00433690(0,
                 "<ext>       = using this option would cause the builder to look for _glitch_<ext>.ini instead of _glitch.ini\n"
    );
    FUN_00433690(0,"              and patches_jasper_<ext>.bin instead of patches_jasper.bin\n");
    FUN_00433690(0,
                 "<add>       = without this option network will be scanned for server broadcast beacon\n"
    );
    FUN_00433690(0,
                 "              If provided the correct format is an IPv4 address like 192.168.0.100\n"
    );
    FUN_00433690(0,usage_separator);
    FUN_004337a0();
    if (DAT_0044a524 != 0) {
        FUN_00433690(0,"\npress <enter> to quit...\n");
        fgetc(stdin);
    }
    exit(1);
}

