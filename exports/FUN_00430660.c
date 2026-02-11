
void __cdecl FUN_00430660(undefined4 param_1,undefined4 param_2)

{
  if (DAT_0047957c != (FILE *)0x0) {
    switch(param_2) {
    case 0x11:
      fprintf(DAT_0047957c,"%s = power; console power button\n\n",param_1);
      break;
    default:
      fprintf(DAT_0047957c,"%s = eject; console eject button\n\n",param_1);
      break;
    case 0x20:
      fprintf(DAT_0047957c,"%s = remopower; IR power button\n\n",param_1);
      break;
    case 0x22:
      fprintf(DAT_0047957c,"%s = remox; IR guide/X button\n\n",param_1);
      break;
    case 0x24:
      fprintf(DAT_0047957c,"%s = winbutton; IR windows button\n\n",param_1);
      break;
    case 0x41:
      fprintf(DAT_0047957c,"%s = kiosk; KIOSK debug pin\n\n",param_1);
      break;
    case 0x55:
      fprintf(DAT_0047957c,"%s = wirelessx; wireless controller\n\n",param_1);
      break;
    case 0x56:
      if ((DAT_00479ea4 & 7) < 5) {
        fprintf(DAT_0047957c,"%s = wiredxf1; wired controller (front top usb port)\n\n",param_1);
      }
      else {
        fprintf(DAT_0047957c,"%s = wiredxf1; wired controller (front left usb port)\n\n",param_1);
      }
      break;
    case 0x57:
      if ((DAT_00479ea4 & 7) < 5) {
        fprintf(DAT_0047957c,"%s = wiredxf2; wired controller (front bottom usb port)\n\n",param_1);
      }
      else {
        fprintf(DAT_0047957c,"%s = wiredxf2; wired controller (front right usb port)\n\n",param_1);
      }
      break;
    case 0x58:
      if ((DAT_00479ea4 & 7) < 5) {
        fprintf(DAT_0047957c,"%s = wiredxb2; wired controller (INVALID FOR FATS!!)\n\n",param_1);
      }
      else {
        fprintf(DAT_0047957c,"%s = wiredxb2; wired controller (rear middle usb port)\n\n",param_1);
      }
      break;
    case 0x59:
      if ((DAT_00479ea4 & 7) < 5) {
        fprintf(DAT_0047957c,"%s = wiredxb1; wired controller (INVALID FOR FATS!!)\n\n",param_1);
      }
      else {
        fprintf(DAT_0047957c,"%s = wiredxb1; wired controller (rear top usb port)\n\n",param_1);
      }
      break;
    case 0x5a:
      if ((DAT_00479ea4 & 7) < 5) {
        fprintf(DAT_0047957c,"%s = wiredxb3; wired controller (rear usb port)\n\n",param_1);
      }
      else {
        fprintf(DAT_0047957c,"%s = wiredxb3; wired controller (rear bottom usb port)\n\n",param_1);
      }
    }
  }
  return;
}

