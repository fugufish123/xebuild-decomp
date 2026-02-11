0040c940: MOV EAX,[0x0046f190]
0040c945: TEST EAX,EAX
0040c947: JNZ 0x0040c950
0040c949: RET
0040c950: SUB ESP,0x2c
0040c953: MOV EAX,dword ptr [ESP + 0x34]
0040c957: MOV dword ptr [EAX],0x0
0040c95d: MOV EAX,[0x0046f1a4]
0040c962: MOV dword ptr [ESP + 0x4],0x40
0040c96a: MOV dword ptr [ESP],EAX
0040c96d: CALL 0x004223b0
0040c972: TEST EAX,EAX
0040c974: MOV EAX,dword ptr [ESP + 0x34]
0040c978: JZ 0x0040c990
0040c97a: MOV dword ptr [EAX],0xffffffff
0040c980: XOR EAX,EAX
0040c982: ADD ESP,0x2c
0040c985: RET
0040c990: MOV EAX,dword ptr [EAX]
0040c992: MOV ECX,dword ptr [ESP + 0x30]
0040c996: SHL EAX,0x6
0040c999: ADD EAX,dword ptr [0x0046f1a4]
0040c99f: MOV EDX,dword ptr [EAX]
0040c9a1: MOV dword ptr [ECX],EDX
0040c9a3: MOV EDX,dword ptr [EAX + 0x4]
0040c9a6: MOV dword ptr [ECX + 0x4],EDX
0040c9a9: MOV EDX,dword ptr [EAX + 0x8]
0040c9ac: MOV dword ptr [ECX + 0x8],EDX
0040c9af: MOV EDX,dword ptr [EAX + 0xc]
0040c9b2: MOV dword ptr [ECX + 0xc],EDX
0040c9b5: MOV EDX,dword ptr [EAX + 0x10]
0040c9b8: MOV dword ptr [ECX + 0x10],EDX
0040c9bb: MOV EDX,dword ptr [EAX + 0x14]
0040c9be: MOV dword ptr [ECX + 0x14],EDX
0040c9c1: MOV EDX,dword ptr [EAX + 0x18]
0040c9c4: MOV dword ptr [ECX + 0x18],EDX
0040c9c7: MOV EDX,dword ptr [EAX + 0x1c]
0040c9ca: MOV dword ptr [ECX + 0x1c],EDX
0040c9cd: MOV EDX,dword ptr [EAX + 0x20]
0040c9d0: MOV dword ptr [ECX + 0x20],EDX
0040c9d3: MOV EAX,dword ptr [EAX + 0x24]
0040c9d6: MOV dword ptr [ECX + 0x24],EAX
0040c9d9: MOV EAX,dword ptr [ESP + 0x34]
0040c9dd: MOV EAX,dword ptr [EAX]
0040c9df: MOV dword ptr [ESP + 0x1c],EAX
0040c9e3: SHL EAX,0x6
0040c9e6: ADD EAX,dword ptr [0x0046f1a4]
0040c9ec: MOV EAX,dword ptr [EAX + 0x34]
0040c9ef: MOV EDX,EAX
0040c9f1: MOV ECX,EAX
0040c9f3: SHL EDX,0x18
0040c9f6: SHR ECX,0x18
0040c9f9: ADD ECX,EDX
0040c9fb: MOV EDX,EAX
0040c9fd: SHR EAX,0x8
0040ca00: SHL EDX,0x8
0040ca03: AND EAX,0xff00
0040ca08: AND EDX,0xff0000
0040ca0e: ADD EDX,ECX
0040ca10: MOV ECX,dword ptr [ESP + 0x30]
0040ca14: ADD EAX,EDX
0040ca16: MOV dword ptr [ECX + 0x28],EAX
0040ca19: MOV EAX,dword ptr [ESP + 0x34]
0040ca1d: ADD dword ptr [EAX],0x1
0040ca20: MOV EAX,0x1
0040ca25: JMP 0x0040c982