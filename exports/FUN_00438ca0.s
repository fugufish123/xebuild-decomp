00438ca0: PUSH EBP
00438ca1: PUSH EDI
00438ca2: PUSH ESI
00438ca3: PUSH EBX
00438ca4: SUB ESP,0x2c
00438ca7: MOV EBP,dword ptr [ESP + 0x48]
00438cab: MOV ESI,dword ptr [ESP + 0x40]
00438caf: MOV EDI,dword ptr [ESP + 0x44]
00438cb3: MOV EBX,dword ptr [ESP + 0x4c]
00438cb7: MOV EAX,EBP
00438cb9: AND EAX,0xf
00438cbc: MOV dword ptr [ESP + 0x1c],EAX
00438cc0: JNZ 0x00438d32
00438cc2: MOV EAX,EBX
00438cc4: SAR EBP,0x4
00438cc7: OR EAX,ESI
00438cc9: TEST AL,0x3
00438ccb: JNZ 0x00438d50
00438cd1: TEST EBP,EBP
00438cd3: JZ 0x00438d3a
00438cd5: MOV dword ptr [ESP + 0x18],EBP
00438cd9: JMP 0x00438d04
00438ce0: MOV ECX,dword ptr [EBX + 0x4]
00438ce3: MOV EDX,dword ptr [EBX + 0x8]
00438ce6: ADD ESI,0x10
00438ce9: MOV EAX,dword ptr [EBX + 0xc]
00438cec: MOV EBP,dword ptr [EBX]
00438cee: ADD EDI,0x10
00438cf1: MOV dword ptr [EDI + -0xc],ECX
00438cf4: MOV dword ptr [EDI + -0x8],EDX
00438cf7: MOV dword ptr [EDI + -0x10],EBP
00438cfa: MOV dword ptr [EDI + -0x4],EAX
00438cfd: SUB dword ptr [ESP + 0x18],0x1
00438d02: JZ 0x00438d3a
00438d04: MOV EAX,dword ptr [ESI]
00438d06: XOR dword ptr [EBX],EAX
00438d08: MOV EAX,dword ptr [ESI + 0x4]
00438d0b: XOR dword ptr [EBX + 0x4],EAX
00438d0e: MOV EAX,dword ptr [ESI + 0x8]
00438d11: XOR dword ptr [EBX + 0x8],EAX
00438d14: MOV EAX,dword ptr [ESI + 0xc]
00438d17: XOR dword ptr [EBX + 0xc],EAX
00438d1a: MOV EAX,dword ptr [ESP + 0x50]
00438d1e: MOV dword ptr [ESP + 0x4],EBX
00438d22: MOV dword ptr [ESP],EBX
00438d25: MOV dword ptr [ESP + 0x8],EAX
00438d29: CALL 0x00439ec0
00438d2e: TEST EAX,EAX
00438d30: JZ 0x00438ce0
00438d32: MOV dword ptr [ESP + 0x1c],0x1
00438d3a: MOV EAX,dword ptr [ESP + 0x1c]
00438d3e: ADD ESP,0x2c
00438d41: POP EBX
00438d42: POP ESI
00438d43: POP EDI
00438d44: POP EBP
00438d45: RET
00438d50: TEST EBP,EBP
00438d52: JZ 0x00438d3a
00438d54: MOV dword ptr [ESP + 0x18],EBP
00438d58: JMP 0x00438d84
00438d60: MOV ECX,dword ptr [EBX + 0x4]
00438d63: MOV EDX,dword ptr [EBX + 0x8]
00438d66: ADD ESI,0x10
00438d69: MOV EAX,dword ptr [EBX + 0xc]
00438d6c: MOV EBP,dword ptr [EBX]
00438d6e: ADD EDI,0x10
00438d71: MOV dword ptr [EDI + -0xc],ECX
00438d74: MOV dword ptr [EDI + -0x8],EDX
00438d77: MOV dword ptr [EDI + -0x10],EBP
00438d7a: MOV dword ptr [EDI + -0x4],EAX
00438d7d: SUB dword ptr [ESP + 0x18],0x1
00438d82: JZ 0x00438d3a
00438d84: MOVZX EAX,byte ptr [ESI]
00438d87: XOR byte ptr [EBX],AL
00438d89: MOVZX EAX,byte ptr [ESI + 0x1]
00438d8d: XOR byte ptr [EBX + 0x1],AL
00438d90: MOVZX EAX,byte ptr [ESI + 0x2]
00438d94: XOR byte ptr [EBX + 0x2],AL
00438d97: MOVZX EAX,byte ptr [ESI + 0x3]
00438d9b: XOR byte ptr [EBX + 0x3],AL
00438d9e: MOVZX EAX,byte ptr [ESI + 0x4]
00438da2: XOR byte ptr [EBX + 0x4],AL
00438da5: MOVZX EAX,byte ptr [ESI + 0x5]
00438da9: XOR byte ptr [EBX + 0x5],AL
00438dac: MOVZX EAX,byte ptr [ESI + 0x6]
00438db0: XOR byte ptr [EBX + 0x6],AL
00438db3: MOVZX EAX,byte ptr [ESI + 0x7]
00438db7: XOR byte ptr [EBX + 0x7],AL
00438dba: MOVZX EAX,byte ptr [ESI + 0x8]
00438dbe: XOR byte ptr [EBX + 0x8],AL
00438dc1: MOVZX EAX,byte ptr [ESI + 0x9]
00438dc5: XOR byte ptr [EBX + 0x9],AL
00438dc8: MOVZX EAX,byte ptr [ESI + 0xa]
00438dcc: XOR byte ptr [EBX + 0xa],AL
00438dcf: MOVZX EAX,byte ptr [ESI + 0xb]
00438dd3: XOR byte ptr [EBX + 0xb],AL
00438dd6: MOVZX EAX,byte ptr [ESI + 0xc]
00438dda: XOR byte ptr [EBX + 0xc],AL
00438ddd: MOVZX EAX,byte ptr [ESI + 0xd]
00438de1: XOR byte ptr [EBX + 0xd],AL
00438de4: MOVZX EAX,byte ptr [ESI + 0xe]
00438de8: XOR byte ptr [EBX + 0xe],AL
00438deb: MOVZX EAX,byte ptr [ESI + 0xf]
00438def: XOR byte ptr [EBX + 0xf],AL
00438df2: MOV EAX,dword ptr [ESP + 0x50]
00438df6: MOV dword ptr [ESP + 0x4],EBX
00438dfa: MOV dword ptr [ESP],EBX
00438dfd: MOV dword ptr [ESP + 0x8],EAX
00438e01: CALL 0x00439ec0
00438e06: TEST EAX,EAX
00438e08: JZ 0x00438d60
00438e0e: JMP 0x00438d32