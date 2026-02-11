
undefined4 __cdecl FUN_0042c900(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0x11:
    FUN_00433690(1,"    - console power button is being used to %s \n");
    uVar1 = 0;
    break;
  case 0x12:
    FUN_00433690(1,"    - console DVD eject button is being used to %s \n");
    uVar1 = 0;
    break;
  default:
    uVar1 = 1;
    break;
  case 0x20:
    FUN_00433690(1,"    - IR remote power button is being used to %s \n");
    uVar1 = 0;
    break;
  case 0x22:
    FUN_00433690(1,"    - IR remote guide/X button is being used to %s \n");
    uVar1 = 0;
    break;
  case 0x24:
    FUN_00433690(1,"    - IR remote windows button is being used to %s \n");
    uVar1 = 0;
    break;
  case 0x41:
    FUN_00433690(1,"    - KIOSK debug pin is being used to %s \n");
    uVar1 = 0;
    break;
  case 0x55:
    FUN_00433690(1,"    - wireless controller powering on console is being used to %s \n");
    uVar1 = 0;
    break;
  case 0x56:
    if ((DAT_00479ea4 & 7) < 5) {
      FUN_00433690(1,"wired controller (front top usb port) is being used to %s \n");
      uVar1 = 0;
    }
    else {
      FUN_00433690(1,"wired controller (front left usb port) is being used to %s \n");
      uVar1 = 0;
    }
    break;
  case 0x57:
    if ((DAT_00479ea4 & 7) < 5) {
      FUN_00433690(1,"wired controller (front bottom usb port) is being used to %s \n");
      uVar1 = 0;
    }
    else {
      FUN_00433690(1,"wired controller (front right usb port) is being used to %s \n");
      uVar1 = 0;
    }
    break;
  case 0x58:
    if (4 < (DAT_00479ea4 & 7)) {
      FUN_00433690(1,"wired controller (rear middle usb port) is being used to %s \n");
      return 0;
    }
    goto LAB_0042cb20;
  case 0x59:
    if (4 < (DAT_00479ea4 & 7)) {
      FUN_00433690(1,"wired controller (rear top usb port) is being used to %s \n");
      return 0;
    }
LAB_0042cb20:
    FUN_00433690(1,"wired controller (INVALID FOR FATS!!) is being used to %s \n");
    uVar1 = 0;
    break;
  case 0x5a:
    if ((DAT_00479ea4 & 7) < 5) {
      FUN_00433690(1,"wired controller (rear usb port) is being used to %s \n");
      uVar1 = 0;
    }
    else {
      FUN_00433690(1,"wired controller (rear bottom usb port) is being used to %s \n");
      uVar1 = 0;
    }
  }
  return uVar1;
}

