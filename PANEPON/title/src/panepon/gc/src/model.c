/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\model.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0007BBD4 -> 0x0007CCE4
*/
// Range: 0x7BBD4 -> 0x7CBB4
int modelLoad(struct_model_c_45 * * ppModel /* r1+0x154 */, char * szName /* r1+0xC */, void * ppHeap /* r15 */) {
    // Local variables
    union_pon_gc_tex_c_4 * pVtx; // r31
    union_pon_gc_c_0 * pGfx; // r31
    struct_bitmap_c_17 file; // r1+0x144
    struct_model_c_46 * pMesh; // r1+0x8
    struct_image_c_39 * pImage; // r4
    int nTag; // r1+0x140
    int nType; // r24
    struct_bitmap_c_16 * pBitmap; // r3
    int nSizeX; // r30
    int nSizeY; // r29
    char acName[256]; // r1+0x40
    struct_model_c_47 * pMaterial; // r25
    int iVertex; // r27
    int nVertexCount; // r1+0x3C
    int nVtxCount; // r1+0x8
    int nGfxCount; // r3
    int nLoad; // r1+0x38
    int iFace; // r1+0x15C
    int nFaceCount; // r1+0x34
    int nLoadCount; // r1+0x30
    signed short nSize; // r1+0x2E
    signed short nX; // r1+0x2C
    signed short nY; // r1+0x2A
    signed short nZ; // r1+0x28
    signed short nU; // r1+0x26
    signed short nV; // r1+0x24
    signed short iVertex0; // r1+0x22
    signed short iVertex1; // r1+0x20
    signed short iVertex2; // r1+0x1E
    signed short nNormalX; // r1+0x1C
    signed short nNormalY; // r1+0x1A
    signed short nNormalZ; // r1+0x18
    int iMaterial; // r1+0x14
    int iImage; // r27
    int iMesh; // r1+0x158
    int nCount; // r4
    union_pon_gc_c_0 * _g; // r3
    union_pon_gc_c_0 * _g; // r3
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r8
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r8
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r3
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r3
    union_pon_gc_c_0 * _g; // r3
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r3
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r3
    union_pon_gc_c_0 * _g; // r3
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r3
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r3
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r3
}

// Range: 0x7CBB4 -> 0x7CCE4
int modelDrawMesh(struct_model_c_45 * pModel /* r1+0x0 */, int iMesh /* r1+0x4 */, union {
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
} * * ppGfx /* r1+0x8 */) {
    // Local variables
    union_pon_gc_c_0 * pGfx; // r8
    struct_model_c_46 * pMesh; // r9
    union_pon_gc_c_0 * _g; // r8
    union_pon_gc_c_0 * _g; // r10
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r8
    union_pon_gc_c_0 * _g; // r3
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r3
    union_pon_gc_c_0 * _g; // r4
}


