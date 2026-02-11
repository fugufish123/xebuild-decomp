00401e60: PUSH EBP
00401e61: PUSH EDI
00401e62: PUSH ESI
00401e63: PUSH EBX
00401e64: SUB ESP,0x6c
00401e67: MOV ESI,dword ptr [ESP + 0x80]
00401e6e: LEA EAX,[ESP + 0x40]
00401e72: MOV dword ptr [ESP + 0x24],0x10
00401e7a: MOV dword ptr [ESP + 0x1c],0x0
00401e82: MOV dword ptr [ESP + 0x18],0x0
00401e8a: LEA EDI,[ESP + 0x50]
00401e8e: MOV dword ptr [ESP + 0x20],EAX
00401e92: MOV dword ptr [ESP + 0x14],0x0
00401e9a: MOV dword ptr [ESP + 0x8],ESI
00401e9e: MOV dword ptr [ESP + 0x10],0x0
00401ea6: LEA EBP,[ESI + 0x10]
00401ea9: MOV dword ptr [ESP + 0xc],0x10
00401eb1: MOV dword ptr [ESP + 0x4],0x10
00401eb9: MOV dword ptr [ESP],0x47a11c
00401ec0: MOV dword ptr [ESP + 0x3c],EAX
00401ec4: MOV dword ptr [ESP + 0x50],0x0
00401ecc: MOV dword ptr [ESP + 0x54],0x0
00401ed4: MOV dword ptr [ESP + 0x58],0x0
00401edc: MOV dword ptr [ESP + 0x5c],0x0
00401ee4: CALL 0x00434110
00401ee9: MOV EAX,dword ptr [ESP + 0x84]
00401ef0: MOV dword ptr [ESP + 0x8],EBP
00401ef4: MOV dword ptr [ESP + 0x4],0x10
00401efc: LEA EBX,[EAX + -0x10]
00401eff: MOV EAX,dword ptr [ESP + 0x3c]
00401f03: MOV dword ptr [ESP + 0xc],EBX
00401f07: MOV dword ptr [ESP],EAX
00401f0a: CALL 0x004345b0
00401f0f: MOV dword ptr [ESP + 0x20],EDI
00401f13: MOV dword ptr [ESP + 0xc],EBX
00401f17: MOV dword ptr [ESP + 0x8],EBP
00401f1b: MOV dword ptr [ESP + 0x24],0x10
00401f23: MOV dword ptr [ESP + 0x1c],0x0
00401f2b: MOV dword ptr [ESP + 0x18],0x0
00401f33: MOV dword ptr [ESP + 0x14],0x0
00401f3b: MOV dword ptr [ESP + 0x10],0x0
00401f43: MOV dword ptr [ESP + 0x4],0x10
00401f4b: MOV dword ptr [ESP],0x47a11c
00401f52: CALL 0x00434110
00401f57: MOV dword ptr [ESP + 0x4],EDI
00401f5b: MOV dword ptr [ESP],ESI
00401f5e: MOV dword ptr [ESP + 0x8],0x10
00401f66: CALL 0x00449100
00401f6b: TEST EAX,EAX
00401f6d: SETZ AL
00401f70: ADD ESP,0x6c
00401f73: POP EBX
00401f74: MOVZX EAX,AL
00401f77: POP ESI
00401f78: POP EDI
00401f79: POP EBP
00401f7a: RET