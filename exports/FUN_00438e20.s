00438e20: PUSH EBP
00438e21: PUSH EDI
00438e22: PUSH ESI
00438e23: PUSH EBX
00438e24: SUB ESP,0x3c
00438e27: MOV EAX,dword ptr [ESP + 0x58]
00438e2b: MOV ESI,dword ptr [ESP + 0x50]
00438e2f: MOV EDI,dword ptr [ESP + 0x54]
00438e33: MOV EBP,dword ptr [ESP + 0x5c]
00438e37: MOV EDX,EAX
00438e39: AND EDX,0xf
00438e3c: MOV dword ptr [ESP + 0x2c],EDX
00438e40: JNZ 0x00438ed0
00438e46: MOV EBX,EBP
00438e48: SAR EAX,0x4
00438e4b: OR EBX,EDI
00438e4d: AND EBX,0x3
00438e50: JNZ 0x00438ee4
00438e56: TEST EAX,EAX
00438e58: JZ 0x00438ed8
00438e5a: MOV EBX,ESI
00438e5c: MOV dword ptr [ESP + 0x28],EAX
00438e60: MOV ESI,EBP
00438e62: JMP 0x00438e9e
00438e64: MOV EAX,dword ptr [ESI]
00438e66: XOR dword ptr [EDI],EAX
00438e68: ADD EBX,0x10
00438e6b: MOV EAX,dword ptr [ESI + 0x4]
00438e6e: XOR dword ptr [EDI + 0x4],EAX
00438e71: MOV EAX,dword ptr [ESI + 0x8]
00438e74: XOR dword ptr [EDI + 0x8],EAX
00438e77: MOV EAX,dword ptr [ESI + 0xc]
00438e7a: XOR dword ptr [EDI + 0xc],EAX
00438e7d: ADD EDI,0x10
00438e80: SUB dword ptr [ESP + 0x28],0x1
00438e85: MOV EAX,dword ptr [ESP + 0x1c]
00438e89: MOV EDX,dword ptr [ESP + 0x20]
00438e8d: MOV ECX,dword ptr [ESP + 0x24]
00438e91: MOV dword ptr [ESI],EBP
00438e93: MOV dword ptr [ESI + 0x4],EAX
00438e96: MOV dword ptr [ESI + 0x8],EDX
00438e99: MOV dword ptr [ESI + 0xc],ECX
00438e9c: JZ 0x00438ed8
00438e9e: MOV EAX,dword ptr [EBX + 0x4]
00438ea1: MOV EDX,dword ptr [EBX + 0x8]
00438ea4: MOV ECX,dword ptr [EBX + 0xc]
00438ea7: MOV EBP,dword ptr [EBX]
00438ea9: MOV dword ptr [ESP + 0x4],EDI
00438ead: MOV dword ptr [ESP],EBX
00438eb0: MOV dword ptr [ESP + 0x1c],EAX
00438eb4: MOV EAX,dword ptr [ESP + 0x60]
00438eb8: MOV dword ptr [ESP + 0x20],EDX
00438ebc: MOV dword ptr [ESP + 0x24],ECX
00438ec0: MOV dword ptr [ESP + 0x8],EAX
00438ec4: CALL 0x0043aca0
00438ec9: TEST EAX,EAX
00438ecb: JZ 0x00438e64
00438ecd: LEA ESI,[ESI]
00438ed0: MOV dword ptr [ESP + 0x2c],0x1
00438ed8: MOV EAX,dword ptr [ESP + 0x2c]
00438edc: ADD ESP,0x3c
00438edf: POP EBX
00438ee0: POP ESI
00438ee1: POP EDI
00438ee2: POP EBP
00438ee3: RET
00438ee4: TEST EAX,EAX
00438ee6: MOV EBX,ESI
00438ee8: MOV dword ptr [ESP + 0x28],EAX
00438eec: MOV ESI,EBP
00438eee: JNZ 0x00438f96
00438ef4: JMP 0x00438ed8
00438f00: MOVZX EAX,byte ptr [ESI]
00438f03: ADD EBX,0x10
00438f06: XOR byte ptr [EDI],AL
00438f08: MOVZX EAX,byte ptr [ESI + 0x1]
00438f0c: XOR byte ptr [EDI + 0x1],AL
00438f0f: MOVZX EAX,byte ptr [ESI + 0x2]
00438f13: XOR byte ptr [EDI + 0x2],AL
00438f16: MOVZX EAX,byte ptr [ESI + 0x3]
00438f1a: XOR byte ptr [EDI + 0x3],AL
00438f1d: MOVZX EAX,byte ptr [ESI + 0x4]
00438f21: XOR byte ptr [EDI + 0x4],AL
00438f24: MOVZX EAX,byte ptr [ESI + 0x5]
00438f28: XOR byte ptr [EDI + 0x5],AL
00438f2b: MOVZX EAX,byte ptr [ESI + 0x6]
00438f2f: XOR byte ptr [EDI + 0x6],AL
00438f32: MOVZX EAX,byte ptr [ESI + 0x7]
00438f36: XOR byte ptr [EDI + 0x7],AL
00438f39: MOVZX EAX,byte ptr [ESI + 0x8]
00438f3d: XOR byte ptr [EDI + 0x8],AL
00438f40: MOVZX EAX,byte ptr [ESI + 0x9]
00438f44: XOR byte ptr [EDI + 0x9],AL
00438f47: MOVZX EAX,byte ptr [ESI + 0xa]
00438f4b: XOR byte ptr [EDI + 0xa],AL
00438f4e: MOVZX EAX,byte ptr [ESI + 0xb]
00438f52: XOR byte ptr [EDI + 0xb],AL
00438f55: MOVZX EAX,byte ptr [ESI + 0xc]
00438f59: XOR byte ptr [EDI + 0xc],AL
00438f5c: MOVZX EAX,byte ptr [ESI + 0xd]
00438f60: XOR byte ptr [EDI + 0xd],AL
00438f63: MOVZX EAX,byte ptr [ESI + 0xe]
00438f67: XOR byte ptr [EDI + 0xe],AL
00438f6a: MOVZX EAX,byte ptr [ESI + 0xf]
00438f6e: XOR byte ptr [EDI + 0xf],AL
00438f71: ADD EDI,0x10
00438f74: SUB dword ptr [ESP + 0x28],0x1
00438f79: MOV EAX,dword ptr [ESP + 0x1c]
00438f7d: MOV EDX,dword ptr [ESP + 0x20]
00438f81: MOV ECX,dword ptr [ESP + 0x24]
00438f85: MOV dword ptr [ESI],EBP
00438f87: MOV dword ptr [ESI + 0x4],EAX
00438f8a: MOV dword ptr [ESI + 0x8],EDX
00438f8d: MOV dword ptr [ESI + 0xc],ECX
00438f90: JZ 0x00438ed8
00438f96: MOV EAX,dword ptr [EBX + 0x4]
00438f99: MOV EDX,dword ptr [EBX + 0x8]
00438f9c: MOV ECX,dword ptr [EBX + 0xc]
00438f9f: MOV EBP,dword ptr [EBX]
00438fa1: MOV dword ptr [ESP + 0x4],EDI
00438fa5: MOV dword ptr [ESP],EBX
00438fa8: MOV dword ptr [ESP + 0x1c],EAX
00438fac: MOV EAX,dword ptr [ESP + 0x60]
00438fb0: MOV dword ptr [ESP + 0x20],EDX
00438fb4: MOV dword ptr [ESP + 0x24],ECX
00438fb8: MOV dword ptr [ESP + 0x8],EAX
00438fbc: CALL 0x0043aca0
00438fc1: TEST EAX,EAX
00438fc3: JZ 0x00438f00
00438fc9: JMP 0x00438ed0