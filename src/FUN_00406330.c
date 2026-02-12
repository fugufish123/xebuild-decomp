
void FUN_00406330(int error_code)

{
    const char *usage_separator = "---------------------------------------------\n";
    switch(error_code) {
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
    FUN_00433690(0,usage_separator);
    FUN_00433690(0,"Usage   :\n   %s client <switch> [<option>]\n\n");
    FUN_00433690(0,"Examples:\n");
    FUN_00433690(0,"   %s client -r nanddump.bin\n");
    FUN_00433690(0,"   %s client -w nandflash.bin -ip 192.168.2.100\n");
    FUN_00433690(0,"\nSwitches:\n");
    FUN_00433690(0,"   -i             : connects to console and shows some info about it\n");
    FUN_00433690(0,
                 "*  -i <d>         : collects console information into folder <d>, usually enough for build mode\n"
    );
    FUN_00433690(0,"   -r <f>         : dumps system area of NAND to <f>\n");
    FUN_00433690(0,"   -w <f>         : writes system area of NAND from <f>\n");
    FUN_00433690(0,
                 "   -e <d>         : format partition and send avatar/kinect data to HDD from <d>, must match running kernel\n"
    );
    FUN_00433690(0,
                 "   -c <d>         : format partition and send xbox compatibility data to HDD from <d>\n"
    );
    FUN_00433690(0,
                 "   -p             : will attempt to automatically update patches based on running kernel version\n"
    );
    FUN_00433690(0,"   -p <f>         : update patches with <f>\n");
    FUN_00433690(0,"   -rb <f> <b> <l>: read series of blocks starting at <b> for <l>\n");
    FUN_00433690(0,
                 "   -wb <f> <b>    : write series of blocks starting at <b> for the number of blocks in <f>\n"
    );
    FUN_00433690(0,
                 "   -eb <b>        : attempt to erase a single block, even if marked bad on console\n"
    );
    FUN_00433690(0,
                 "   -bp <f> <o>    : binary patch NAND with contents of <f> to logical offset <o>\n")
    ;
    FUN_00433690(0,"*  -keys          : will attempt to dump RSA and 1BL keys from console\n");
    FUN_00433690(0,"   -s             : shutdown console\n");
    FUN_00433690(0,"   -ip <add>      : force attempt to connect to addr (ie: -i 192.168.0.100)\n");
    FUN_00433690(0,"   -noenter       : suppresses prompt for enter key when finished\n");
    FUN_00433690(0,"   -reboot        : causes the console to hard reboot\n");
    FUN_00433690(0,"   -v             : shows more info during client process\n");
    FUN_00433690(0,"   -?             : shows this help\n\n");
    FUN_00433690(0,"legend:\n");
    FUN_00433690(0,
                 "<add>    = without this option network will be scanned for server broadcast beacon\n"
    );
    FUN_00433690(0,"           If provided the correct format is an IPv4 address like 192.168.0.100\n"
    );
    FUN_00433690(0,"<f>      = path, absolute or relative, to a file\n");
    FUN_00433690(0,"<d>      = path, absolute or relative, to a directory - do not terminate with /\n"
    );
    FUN_00433690(0,"<b>      = hexadecimal block number\n");
    FUN_00433690(0,"<l>      = hexadecimal number of blocks\n");
    FUN_00433690(0,"<o>      = hexadecimal logical offset (spare data not considered) in flash\n");
    FUN_00433690(0,"notes:\n");
    FUN_00433690(0,"* functions not fully supported with older patch versions, use with caution.\n");
    FUN_00433690(0,"- client mode tends to operate on a single command basis, stacking commands.\n");
    FUN_00433690(0,"  is not possible with the exception of v, noenter, ip, s and reboot.\n");
    FUN_00433690(0,"- patch update (-p) will retain any addon patches already on the console.\n");
    FUN_00433690(0,usage_separator);
    FUN_004337a0();
    if (DAT_0044a524 != 0) {
        FUN_00433690(0,"\npress <enter> to quit...\n");
        fgetc(stdin);
    }
    exit(1);
}

