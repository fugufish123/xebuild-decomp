0041ad30: PUSH EBX
0041ad31: MOV EAX,dword ptr [ESP + 0x8]
0041ad35: MOV EBX,dword ptr [EAX]
0041ad37: MOV ECX,dword ptr [EAX + 0x4]
0041ad3a: MOV EDX,dword ptr [EAX + 0x8]
0041ad3d: MOV EAX,dword ptr [EAX + 0xc]
0041ad40: MOV dword ptr [0x0044a664],EBX
0041ad46: MOV dword ptr [0x0044a668],ECX
0041ad4c: MOV dword ptr [0x0044a66c],EDX
0041ad52: MOV [0x0044a670],EAX
0041ad57: POP EBX
0041ad58: RET