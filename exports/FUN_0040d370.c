
void FUN_0040d370(uint param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0x11:
    FUN_00433690(param_1,"power button\n");
    return;
  default:
    FUN_00433690(param_1,"console eject button\n");
    return;
  case 0x20:
    FUN_00433690(param_1,"IR power button\n");
    return;
  case 0x22:
    FUN_00433690(param_1,"IR guide/X button\n");
    return;
  case 0x24:
    FUN_00433690(param_1,"IR windows button\n");
    return;
  case 0x41:
    FUN_00433690(param_1,"KIOSK debug pin\n");
    return;
  case 0x55:
    FUN_00433690(param_1,"wireless controller\n");
    return;
  case 0x56:
    if (4 < (DAT_00479ea4 & 7)) {
      FUN_00433690(param_1,"wired controller (front left usb port)\n");
      return;
    }
    FUN_00433690(param_1,"wired controller (front top usb port)\n");
    return;
  case 0x57:
    if (4 < (DAT_00479ea4 & 7)) {
      FUN_00433690(param_1,"wired controller (front right usb port)\n");
      return;
    }
    FUN_00433690(param_1,"wired controller (front bottom usb port)\n");
    return;
  case 0x58:
    if (4 < (DAT_00479ea4 & 7)) {
      FUN_00433690(param_1,"wired controller (rear middle usb port)\n");
      return;
    }
    break;
  case 0x59:
    if (4 < (DAT_00479ea4 & 7)) {
      FUN_00433690(param_1,"wired controller (rear top usb port)\n");
      return;
    }
    break;
  case 0x5a:
    if (4 < (DAT_00479ea4 & 7)) {
      FUN_00433690(param_1,"wired controller (rear bottom usb port)\n");
      return;
    }
    FUN_00433690(param_1,"wired controller (rear usb port)\n");
    return;
  }
  FUN_00433690(param_1,"wired controller (INVALID FOR FATS!!)\n");
  return;
}

