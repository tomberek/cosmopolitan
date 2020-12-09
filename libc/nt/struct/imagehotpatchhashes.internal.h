#ifndef COSMOPOLITAN_LIBC_NT_STRUCT_IMAGEHOTPATCHHASHES_H_
#define COSMOPOLITAN_LIBC_NT_STRUCT_IMAGEHOTPATCHHASHES_H_
#if !(__ASSEMBLER__ + __LINKER__ + 0)

struct NtImageHotPatchHashes {
  uint8_t SHA256[32];
  uint8_t SHA1[20];
};

#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_NT_STRUCT_IMAGEHOTPATCHHASHES_H_ */