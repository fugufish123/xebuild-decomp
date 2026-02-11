0041ad00: PUSH EBX
0041ad01: MOV EAX,dword ptr [ESP + 0x8]
0041ad05: MOV EBX,dword ptr [EAX]
0041ad07: MOV ECX,dword ptr [EAX + 0x4]
0041ad0a: MOV EDX,dword ptr [EAX + 0x8]
0041ad0d: MOV EAX,dword ptr [EAX + 0xc]
0041ad10: MOV dword ptr [0x0044a674],EBX
0041ad16: MOV dword ptr [0x0044a678],ECX
0041ad1c: MOV dword ptr [0x0044a67c],EDX
0041ad22: MOV [0x0044a680],EAX
0041ad27: POP EBX
0041ad28: RET