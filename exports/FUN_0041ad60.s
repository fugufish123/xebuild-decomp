0041ad60: PUSH EBX
0041ad61: MOV EAX,dword ptr [ESP + 0x8]
0041ad65: MOV EBX,dword ptr [EAX]
0041ad67: MOV ECX,dword ptr [EAX + 0x4]
0041ad6a: MOV EDX,dword ptr [EAX + 0x8]
0041ad6d: MOV EAX,dword ptr [EAX + 0xc]
0041ad70: MOV dword ptr [0x0044a654],EBX
0041ad76: MOV dword ptr [0x0044a658],ECX
0041ad7c: MOV dword ptr [0x0044a65c],EDX
0041ad82: MOV [0x0044a660],EAX
0041ad87: POP EBX
0041ad88: RET