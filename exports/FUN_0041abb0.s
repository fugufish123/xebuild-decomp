0041abb0: PUSH EBX
0041abb1: MOV EAX,dword ptr [ESP + 0x8]
0041abb5: MOV EDX,dword ptr [EAX + 0x10]
0041abb8: MOV dword ptr [0x0044a620],EDX
0041abbe: MOV EDX,dword ptr [EAX + 0x14]
0041abc1: MOV dword ptr [0x0044a624],EDX
0041abc7: MOV EDX,dword ptr [EAX + 0x18]
0041abca: MOV dword ptr [0x0044a628],EDX
0041abd0: MOV EDX,dword ptr [EAX + 0x1c]
0041abd3: MOV dword ptr [0x0044a62c],EDX
0041abd9: MOV EBX,dword ptr [EAX]
0041abdb: MOV ECX,dword ptr [EAX + 0x4]
0041abde: MOV EDX,dword ptr [EAX + 0x8]
0041abe1: MOV EAX,dword ptr [EAX + 0xc]
0041abe4: MOV dword ptr [0x0044a630],EBX
0041abea: MOV dword ptr [0x0044a634],ECX
0041abf0: MOV dword ptr [0x0044a638],EDX
0041abf6: MOV [0x0044a63c],EAX
0041abfb: POP EBX
0041abfc: RET