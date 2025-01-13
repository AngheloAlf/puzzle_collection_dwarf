/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\bitmap.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0003AB70 -> 0x0003BD70
*/
static struct_bitmap_c_16 * gpBitmapLast; // size: 0x4, address: 0x1810
// Range: 0x3AB70 -> 0x3ACFC
static int bitmapLoadRLE(struct_bitmap_c_16 * pBitmap /* r1+0x8 */, struct {
    // total size: 0x10
    int iFile; // offset 0x0, size 0x4
    int nSize; // offset 0x4, size 0x4
    int nBase; // offset 0x8, size 0x4
    int nOffset; // offset 0xC, size 0x4
} * pFile /* r27 */) {
    // Local variables
    int nSize; // r31
    int iTarget; // r30
    int iSourceSet; // r1+0x8
    int iTargetSet; // r7
    unsigned char nCode; // r1+0x19
    unsigned char nData; // r1+0x18
    int nSet; // r8
    int nSizeSet; // r29
    int nCountSet; // r25
    int nSizeData; // r1+0x8
    unsigned char * pTarget; // r28
    unsigned char * pBuffer; // r4
}

// Range: 0x3ACFC -> 0x3B31C
int bitmapLoad(struct_bitmap_c_16 * * ppBitmap /* r31 */, void * pNameOrFile /* r28 */, void * ppHeap /* r30 */, int bDMA /* r27 */) {
    // Local variables
    struct_bitmap_c_17 file; // r1+0x38
    int nSizeOriginalX; // r26
    unsigned int * anColor; // r26
    int nColorCount; // r1+0x34
    int iPixel; // r1+0x8
    int nSize; // r1+0x30
    int bFlip; // r29
    int iColor; // r8
    unsigned int nSizeX; // r1+0x2C
    unsigned int nSizeY; // r1+0x28
    unsigned int nROM; // r1+0x24
    unsigned int nHeader; // r1+0x20
    unsigned int nType; // r1+0x1C
    unsigned int nStride; // r1+0x18
    unsigned char nRed; // r9
    unsigned char nGreen; // r10
    unsigned char nBlue; // r11
    unsigned char nAlpha; // r12

    // References
    // -> static struct [anonymous] * gpBitmapLast;
}

// Range: 0x3B31C -> 0x3B4E8
int bitmapLoadROM(struct_bitmap_c_16 * * ppBitmap /* r27 */, void * pROMData /* r28 */, void * pROMCLUT /* r5 */, int nType /* r29 */, int nSizeX /* r7 */, int nSizeY /* r1+0x1C */, void * ppHeap /* r1+0x20 */) {
    // Local variables
    int nStride; // r1+0x8
    int iColor; // r1+0x8
    int nColorCount; // r30
}

// Range: 0x3B4E8 -> 0x3B594
int bitmapFlip(struct_bitmap_c_16 * pBitmap /* r26 */) {
    // Local variables
    int iScan; // r30
    int nSizeScan; // r29
    unsigned char aPixel[256]; // r1+0xC
    unsigned char * pSourceScan; // r28
    unsigned char * pTargetScan; // r27
}

// Range: 0x3B594 -> 0x3B5EC
int bitmapLoadData(struct_bitmap_c_16 * pBitmap /* r3 */, void * pPixel /* r4 */) {}

// Range: 0x3B5EC -> 0x3BD6C
int bitmapLoadTile(struct_bitmap_c_16 * pBitmap /* r1+0x8 */, int bLoad /* r4 */, union {
    struct_bitmap_c_18 words; // offset 0x0, size 0x8
    struct_bitmap_c_19 dma; // offset 0x0, size 0x8
    struct_bitmap_c_20 tri; // offset 0x0, size 0x8
    struct_bitmap_c_21 line; // offset 0x0, size 0x8
    struct_bitmap_c_22 popmtx; // offset 0x0, size 0x8
    struct_bitmap_c_23 segment; // offset 0x0, size 0x8
    struct_bitmap_c_24 setothermodeH; // offset 0x0, size 0x8
    struct_bitmap_c_24 setothermodeL; // offset 0x0, size 0x8
    struct_bitmap_c_25 texture; // offset 0x0, size 0x8
    struct_bitmap_c_26 perspnorm; // offset 0x0, size 0x8
    struct_bitmap_c_27 setimg; // offset 0x0, size 0x8
    struct_bitmap_c_28 setcombine; // offset 0x0, size 0x8
    struct_bitmap_c_29 setcolor; // offset 0x0, size 0x8
    struct_bitmap_c_30 fillrect; // offset 0x0, size 0x8
    struct_bitmap_c_31 settile; // offset 0x0, size 0x8
    struct_bitmap_c_32 loadtile; // offset 0x0, size 0x8
    struct_bitmap_c_32 settilesize; // offset 0x0, size 0x8
    struct_bitmap_c_32 loadtlut; // offset 0x0, size 0x8
    long long force_structure_alignment; // offset 0x0, size 0x8
} * * ppGfx /* r1+0x10 */, struct_bitmap_c_33 * pTile /* r1+0x14 */, int * pnPixels /* r1+0x18 */) {
    // Local variables
    union_pon_gc_c_0 * pGfx; // r4
    int nSizeX; // r8
    int nSizeY; // r9
    int nType; // r10
    int nOffset; // r11
    unsigned char * pPixels; // r21
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r12
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r12
    union_pon_gc_c_0 * _g; // r21
    union_pon_gc_c_0 * _g; // r22
    union_pon_gc_c_0 * _g; // r21
    union_pon_gc_c_0 * _g; // r22
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r12
    union_pon_gc_c_0 * _g; // r21
    union_pon_gc_c_0 * _g; // r22
    union_pon_gc_c_0 * _g; // r21
    union_pon_gc_c_0 * _g; // r22
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r10
    union_pon_gc_c_0 * _g; // r12
    union_pon_gc_c_0 * _g; // r31
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r30
    union_pon_gc_c_0 * _g; // r29
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r10
    union_pon_gc_c_0 * _g; // r12
    union_pon_gc_c_0 * _g; // r29
    union_pon_gc_c_0 * _g; // r11
    union_pon_gc_c_0 * _g; // r30
    union_pon_gc_c_0 * _g; // r31
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r10
    union_pon_gc_c_0 * _g; // r12
    union_pon_gc_c_0 * _g; // r29
    union_pon_gc_c_0 * _g; // r11
    union_pon_gc_c_0 * _g; // r30
    union_pon_gc_c_0 * _g; // r31
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r10
    union_pon_gc_c_0 * _g; // r12
    union_pon_gc_c_0 * _g; // r29
    union_pon_gc_c_0 * _g; // r11
    union_pon_gc_c_0 * _g; // r30
    union_pon_gc_c_0 * _g; // r31
    union_pon_gc_c_0 * _g; // r4

    // References
    // -> static struct [anonymous] * gpBitmapLast;
}

// Range: 0x3BD6C -> 0x3BD70
void bitmapSetup() {}


