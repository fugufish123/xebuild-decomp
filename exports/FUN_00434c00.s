00434c00: PUSH EBP
00434c01: PUSH EDI
00434c02: XOR EAX,EAX
00434c04: PUSH ESI
00434c05: PUSH EBX
00434c06: SUB ESP,0xbc
00434c0c: MOV EBX,dword ptr [ESP + 0xdc]
00434c13: MOV EDI,dword ptr [ESP + 0xe0]
00434c1a: MOV dword ptr [ESP + EAX*0x1 + 0x30],0x0
00434c22: ADD EAX,0x4
00434c25: CMP EAX,0x20
00434c28: JC 0x00434c1a
00434c2a: MOV ECX,dword ptr [ESP + 0xd4]
00434c31: SHR ECX,0x3
00434c34: TEST ECX,ECX
00434c36: JZ 0x00434c48
00434c38: MOV EDX,dword ptr [ESP + 0xd0]
00434c3f: LEA EAX,[ESP + 0x30]
00434c43: CALL 0x00433840
00434c48: MOV ECX,EBX
00434c4a: SHR ECX,0x3
00434c4d: TEST ECX,ECX
00434c4f: JNZ 0x00434e70
00434c55: LEA ESI,[ESP + 0x50]
00434c59: MOV dword ptr [ESP],ESI
00434c5c: CALL 0x00442b00
00434c61: MOV dword ptr [ESP],0x20
00434c68: CALL 0x00449108
00434c6d: MOV EDX,dword ptr [ESP + 0x30]
00434c71: MOV EBP,EAX
00434c73: MOV dword ptr [EAX],EDX
00434c75: MOV EDX,dword ptr [ESP + 0x34]
00434c79: MOV dword ptr [EAX + 0x4],EDX
00434c7c: MOV EDX,dword ptr [ESP + 0x38]
00434c80: MOV dword ptr [EAX + 0x8],EDX
00434c83: MOV EDX,dword ptr [ESP + 0x3c]
00434c87: MOV dword ptr [EAX + 0xc],EDX
00434c8a: MOV EDX,dword ptr [ESP + 0x40]
00434c8e: MOV dword ptr [EAX + 0x10],EDX
00434c91: MOV EDX,dword ptr [ESP + 0x44]
00434c95: MOV dword ptr [EAX + 0x14],EDX
00434c98: MOV EDX,dword ptr [ESP + 0x48]
00434c9c: MOV dword ptr [EAX + 0x18],EDX
00434c9f: MOV EDX,dword ptr [ESP + 0x4c]
00434ca3: MOV dword ptr [EAX + 0x1c],EDX
00434ca6: MOV dword ptr [ESP + 0x4],EAX
00434caa: MOV dword ptr [ESP + 0x8],0x20
00434cb2: MOV dword ptr [ESP],ESI
00434cb5: CALL 0x004448d0
00434cba: MOV dword ptr [ESP],EBP
00434cbd: CALL 0x00449140
00434cc2: MOV dword ptr [ESP],0x20
00434cc9: CALL 0x00449108
00434cce: MOV EDX,dword ptr [ESP + 0x30]
00434cd2: MOV EBP,EAX
00434cd4: MOV dword ptr [EAX],EDX
00434cd6: MOV EDX,dword ptr [ESP + 0x34]
00434cda: MOV dword ptr [EAX + 0x4],EDX
00434cdd: MOV EDX,dword ptr [ESP + 0x38]
00434ce1: MOV dword ptr [EAX + 0x8],EDX
00434ce4: MOV EDX,dword ptr [ESP + 0x3c]
00434ce8: MOV dword ptr [EAX + 0xc],EDX
00434ceb: MOV EDX,dword ptr [ESP + 0x40]
00434cef: MOV dword ptr [EAX + 0x10],EDX
00434cf2: MOV EDX,dword ptr [ESP + 0x44]
00434cf6: MOV dword ptr [EAX + 0x14],EDX
00434cf9: MOV EDX,dword ptr [ESP + 0x48]
00434cfd: MOV dword ptr [EAX + 0x18],EDX
00434d00: MOV EDX,dword ptr [ESP + 0x4c]
00434d04: MOV dword ptr [EAX + 0x1c],EDX
00434d07: MOV dword ptr [ESP + 0x4],EAX
00434d0b: MOV dword ptr [ESP + 0x8],0x20
00434d13: MOV dword ptr [ESP],ESI
00434d16: CALL 0x004448d0
00434d1b: MOV dword ptr [ESP],EBP
00434d1e: CALL 0x00449140
00434d23: MOV EAX,dword ptr [ESP + 0xd4]
00434d2a: TEST EAX,EAX
00434d2c: JNZ 0x00434ec3
00434d32: TEST EBX,EBX
00434d34: JNZ 0x00434e85
00434d3a: MOV dword ptr [ESP],0x20
00434d41: NOT dword ptr [ESP + 0x30]
00434d45: NOT dword ptr [ESP + 0x34]
00434d49: NOT dword ptr [ESP + 0x38]
00434d4d: NOT dword ptr [ESP + 0x3c]
00434d51: NOT dword ptr [ESP + 0x40]
00434d55: NOT dword ptr [ESP + 0x44]
00434d59: NOT dword ptr [ESP + 0x48]
00434d5d: NOT dword ptr [ESP + 0x4c]
00434d61: CALL 0x00449108
00434d66: MOV EBX,EAX
00434d68: MOV EAX,dword ptr [ESP + 0x30]
00434d6c: MOV dword ptr [EBX],EAX
00434d6e: MOV EAX,dword ptr [ESP + 0x34]
00434d72: MOV dword ptr [EBX + 0x4],EAX
00434d75: MOV EAX,dword ptr [ESP + 0x38]
00434d79: MOV dword ptr [EBX + 0x8],EAX
00434d7c: MOV EAX,dword ptr [ESP + 0x3c]
00434d80: MOV dword ptr [EBX + 0xc],EAX
00434d83: MOV EAX,dword ptr [ESP + 0x40]
00434d87: MOV dword ptr [EBX + 0x10],EAX
00434d8a: MOV EAX,dword ptr [ESP + 0x44]
00434d8e: MOV dword ptr [EBX + 0x14],EAX
00434d91: MOV EAX,dword ptr [ESP + 0x48]
00434d95: MOV dword ptr [EBX + 0x18],EAX
00434d98: MOV EAX,dword ptr [ESP + 0x4c]
00434d9c: MOV dword ptr [EBX + 0x1c],EAX
00434d9f: MOV dword ptr [ESP + 0x4],EBX
00434da3: MOV dword ptr [ESP + 0x8],0x20
00434dab: MOV dword ptr [ESP],ESI
00434dae: CALL 0x004448d0
00434db3: MOV dword ptr [ESP],EBX
00434db6: CALL 0x00449140
00434dbb: MOV dword ptr [ESP],0x20
00434dc2: CALL 0x00449108
00434dc7: MOV EBX,EAX
00434dc9: MOV EAX,dword ptr [ESP + 0x30]
00434dcd: MOV dword ptr [EBX],EAX
00434dcf: MOV EAX,dword ptr [ESP + 0x34]
00434dd3: MOV dword ptr [EBX + 0x4],EAX
00434dd6: MOV EAX,dword ptr [ESP + 0x38]
00434dda: MOV dword ptr [EBX + 0x8],EAX
00434ddd: MOV EAX,dword ptr [ESP + 0x3c]
00434de1: MOV dword ptr [EBX + 0xc],EAX
00434de4: MOV EAX,dword ptr [ESP + 0x40]
00434de8: MOV dword ptr [EBX + 0x10],EAX
00434deb: MOV EAX,dword ptr [ESP + 0x44]
00434def: MOV dword ptr [EBX + 0x14],EAX
00434df2: MOV EAX,dword ptr [ESP + 0x48]
00434df6: MOV dword ptr [EBX + 0x18],EAX
00434df9: MOV EAX,dword ptr [ESP + 0x4c]
00434dfd: MOV dword ptr [EBX + 0x1c],EAX
00434e00: MOV dword ptr [ESP + 0x4],EBX
00434e04: MOV dword ptr [ESP + 0x8],0x20
00434e0c: MOV dword ptr [ESP],ESI
00434e0f: CALL 0x004448d0
00434e14: MOV dword ptr [ESP],EBX
00434e17: LEA EBX,[ESP + 0x1c]
00434e1b: CALL 0x00449140
00434e20: MOV dword ptr [ESP + 0x4],ESI
00434e24: MOV dword ptr [ESP],EBX
00434e27: CALL 0x00444da0
00434e2c: CMP dword ptr [ESP + 0xe4],0x14
00434e34: JBE 0x00434f20
00434e3a: MOV EAX,dword ptr [ESP + 0x1c]
00434e3e: MOV dword ptr [EDI],EAX
00434e40: MOV EAX,dword ptr [ESP + 0x20]
00434e44: MOV dword ptr [EDI + 0x4],EAX
00434e47: MOV EAX,dword ptr [ESP + 0x24]
00434e4b: MOV dword ptr [EDI + 0x8],EAX
00434e4e: MOV EAX,dword ptr [ESP + 0x28]
00434e52: MOV dword ptr [EDI + 0xc],EAX
00434e55: MOV EAX,dword ptr [ESP + 0x2c]
00434e59: MOV dword ptr [EDI + 0x10],EAX
00434e5c: ADD ESP,0xbc
00434e62: POP EBX
00434e63: POP ESI
00434e64: POP EDI
00434e65: POP EBP
00434e66: RET
00434e70: MOV EDX,dword ptr [ESP + 0xd8]
00434e77: LEA EAX,[ESP + 0x30]
00434e7b: CALL 0x00433840
00434e80: JMP 0x00434c55
00434e85: MOV dword ptr [ESP],EBX
00434e88: CALL 0x00449108
00434e8d: MOV EBP,EAX
00434e8f: MOV EAX,dword ptr [ESP + 0xd8]
00434e96: MOV dword ptr [ESP + 0x8],EBX
00434e9a: MOV dword ptr [ESP],EBP
00434e9d: MOV dword ptr [ESP + 0x4],EAX
00434ea1: CALL 0x004490f8
00434ea6: MOV dword ptr [ESP + 0x8],EBX
00434eaa: MOV dword ptr [ESP + 0x4],EBP
00434eae: MOV dword ptr [ESP],ESI
00434eb1: CALL 0x004448d0
00434eb6: MOV dword ptr [ESP],EBP
00434eb9: CALL 0x00449140
00434ebe: JMP 0x00434d3a
00434ec3: MOV EAX,dword ptr [ESP + 0xd4]
00434eca: MOV dword ptr [ESP],EAX
00434ecd: CALL 0x00449108
00434ed2: MOV EBP,EAX
00434ed4: MOV EAX,dword ptr [ESP + 0xd4]
00434edb: MOV dword ptr [ESP],EBP
00434ede: MOV dword ptr [ESP + 0x8],EAX
00434ee2: MOV EAX,dword ptr [ESP + 0xd0]
00434ee9: MOV dword ptr [ESP + 0x4],EAX
00434eed: CALL 0x004490f8
00434ef2: MOV EAX,dword ptr [ESP + 0xd4]
00434ef9: MOV dword ptr [ESP + 0x4],EBP
00434efd: MOV dword ptr [ESP],ESI
00434f00: MOV dword ptr [ESP + 0x8],EAX
00434f04: CALL 0x004448d0
00434f09: MOV dword ptr [ESP],EBP
00434f0c: CALL 0x00449140
00434f11: JMP 0x00434d32
00434f20: MOV EAX,dword ptr [ESP + 0xe4]
00434f27: MOV dword ptr [ESP + 0x4],EBX
00434f2b: MOV dword ptr [ESP],EDI
00434f2e: MOV dword ptr [ESP + 0x8],EAX
00434f32: CALL 0x004490f8
00434f37: ADD ESP,0xbc
00434f3d: POP EBX
00434f3e: POP ESI
00434f3f: POP EDI
00434f40: POP EBP
00434f41: RET