0041db70: PUSH EDI
0041db71: PUSH ESI
0041db72: PUSH EBX
0041db73: SUB ESP,0x40
0041db76: MOV EBX,dword ptr [ESP + 0x50]
0041db7a: MOV EAX,dword ptr [ESP + 0x60]
0041db7e: LEA EDI,[ESP + 0x2c]
0041db82: MOV EDX,dword ptr [ESP + 0x54]
0041db86: MOV dword ptr [ESP + 0x1c],0x14
0041db8e: MOV dword ptr [ESP + 0x18],EDI
0041db92: MOV dword ptr [ESP + 0x14],0x0
0041db9a: MOV dword ptr [ESP + 0x10],0x0
0041dba2: MOV dword ptr [ESP + 0xc],0x0
0041dbaa: SUB EDX,EAX
0041dbac: ADD EAX,EBX
0041dbae: MOV dword ptr [ESP + 0x8],0x0
0041dbb6: MOV dword ptr [ESP + 0x4],EDX
0041dbba: MOV dword ptr [ESP],EAX
0041dbbd: MOV ESI,dword ptr [ESP + 0x64]
0041dbc1: CALL 0x00434a30
0041dbc6: ADD EBX,dword ptr [ESP + 0x58]
0041dbca: MOV EAX,dword ptr [ESP + 0x5c]
0041dbce: MOV dword ptr [ESP + 0x4],EDI
0041dbd2: MOV dword ptr [ESP + 0x8],EAX
0041dbd6: MOV dword ptr [ESP],EBX
0041dbd9: CALL 0x00449100
0041dbde: XOR EDX,EDX
0041dbe0: TEST EAX,EAX
0041dbe2: JNZ 0x0041dc0f
0041dbe4: TEST ESI,ESI
0041dbe6: JZ 0x0041dc20
0041dbe8: MOV EAX,dword ptr [ESP + 0x2c]
0041dbec: MOV EDX,0x1
0041dbf1: MOV dword ptr [ESI],EAX
0041dbf3: MOV EAX,dword ptr [ESP + 0x30]
0041dbf7: MOV dword ptr [ESI + 0x4],EAX
0041dbfa: MOV EAX,dword ptr [ESP + 0x34]
0041dbfe: MOV dword ptr [ESI + 0x8],EAX
0041dc01: MOV EAX,dword ptr [ESP + 0x38]
0041dc05: MOV dword ptr [ESI + 0xc],EAX
0041dc08: MOV EAX,dword ptr [ESP + 0x3c]
0041dc0c: MOV dword ptr [ESI + 0x10],EAX
0041dc0f: ADD ESP,0x40
0041dc12: MOV EAX,EDX
0041dc14: POP EBX
0041dc15: POP ESI
0041dc16: POP EDI
0041dc17: RET
0041dc20: MOV EDX,0x1
0041dc25: JMP 0x0041dc0f