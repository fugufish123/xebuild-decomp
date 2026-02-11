
size_t __cdecl fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00449148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = fread(_DstBuf,_ElementSize,_Count,_File);
  return sVar1;
}

