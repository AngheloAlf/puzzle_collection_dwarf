/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\char_anime.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00029B68 -> 0x0002AB38
*/
struct SAnimeSeq {
    // total size: 0x1C
    unsigned char labelStack[4]; // offset 0x0, size 0x4
    unsigned char countStack[4]; // offset 0x4, size 0x4
    int stackDepth; // offset 0x8, size 0x4
    unsigned char * * seqArray; // offset 0xC, size 0x4
    int animeNo; // offset 0x10, size 0x4
    int seqCount; // offset 0x14, size 0x4
    int textureNo; // offset 0x18, size 0x4
};
// Range: 0x29B68 -> 0x29BA8
void animeSeq_init(struct SAnimeSeq * st /* r3 */, unsigned char * * seqArray /* r1+0xC */, int animeNo /* r1+0x10 */) {}

// Erased
static void animeSeq_set(struct SAnimeSeq * st /* r3 */, int animeNo /* r1+0xC */) {}

// Range: 0x29BA8 -> 0x29D48
void animeSeq_update(struct SAnimeSeq * st /* r28 */, int step /* r29 */) {
    // Local variables
    unsigned char * seqPtr; // r1+0x8
}

// Range: 0x29D48 -> 0x29D70
int animeSeq_isEnd(struct SAnimeSeq * st /* r1+0x0 */) {}

static int _size$122[20]; // size: 0x50, address: 0x12A8
// Range: 0x29D70 -> 0x29D88
int animeState_getDataSize(int charNo /* r1+0x0 */) {
    // References
    // -> static int _size$122[20];
}

static int _addrTbl$124[20]; // size: 0x50, address: 0x12F8
static int _centerTbl$125[20][2]; // size: 0xA0, address: 0x1348
void * _romDataTbl[][2]; // size: 0x0, address: 0x1DB58
struct SAnimeState {
    // total size: 0x40
    struct SAnimeSeq animeSeq[1]; // offset 0x0, size 0x1C
    struct_tex_func_c_1287 * texArray; // offset 0x1C, size 0x4
    unsigned long frameCount; // offset 0x20, size 0x4
    int center[2]; // offset 0x24, size 0x8
    int charNo; // offset 0x2C, size 0x4
    int color[4]; // offset 0x30, size 0x10
};
// Range: 0x29D88 -> 0x29E24
void animeState_load(struct SAnimeState * st /* r30 */, void * hpp /* r4 */, int charNo /* r31 */) {
    // Local variables
    unsigned char * * seqArray; // r1+0x18
    struct_tex_func_c_1287 * texArray; // r1+0x14

    // References
    // -> static int _centerTbl$125[20][2];
    // -> void * _romDataTbl[][2];
    // -> static int _addrTbl$124[20];
}

// Range: 0x29E24 -> 0x29EA8
void animeState_init(struct SAnimeState * st /* r26 */, unsigned char * * seqArray /* r1+0xC */, struct_tex_func_c_1287 * texArray /* r27 */, int cx /* r28 */, int cy /* r29 */, int charNo /* r30 */) {}

// Range: 0x29EA8 -> 0x29EEC
void animeState_set(struct SAnimeState * st /* r3 */, int animeNo /* r1+0xC */) {}

// Range: 0x29EEC -> 0x29F2C
void animeState_update(struct SAnimeState * st /* r31 */) {}

// Erased
static int animeState_isEnd(struct SAnimeState * st /* r1+0x0 */) {}

union_drmario_gc_c_202 normal_texture_init_dl[]; // size: 0x0, address: 0x4208
// Range: 0x29F2C -> 0x29FC4
void animeState_initDL(struct SAnimeState * st /* r1+0x0 */, union_drmario_gc_c_202 * * gpp /* r1+0x4 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r8
    union_drmario_gc_c_202 * _g; // r7
    union_drmario_gc_c_202 * _g; // r6
    union_drmario_gc_c_202 * _g; // r8
    union_drmario_gc_c_202 * _g; // r5

    // References
    // -> union [anonymous] normal_texture_init_dl[];
}

// Range: 0x29FC4 -> 0x2A070
void animeState_initDL2(struct SAnimeState * st /* r1+0x0 */, union_drmario_gc_c_202 * * gpp /* r1+0x4 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r10
    union_drmario_gc_c_202 * _g; // r7
    union_drmario_gc_c_202 * _g; // r6
    union_drmario_gc_c_202 * _g; // r11
    union_drmario_gc_c_202 * _g; // r10
    union_drmario_gc_c_202 * _g; // r5

    // References
    // -> union [anonymous] normal_texture_init_dl[];
}

// Range: 0x2A070 -> 0x2A134
void animeState_initIntensityDL(struct SAnimeState * st /* r1+0x0 */, union_drmario_gc_c_202 * * gpp /* r1+0x4 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r10
    union_drmario_gc_c_202 * _g; // r7
    union_drmario_gc_c_202 * _g; // r6
    union_drmario_gc_c_202 * _g; // r6
    union_drmario_gc_c_202 * _g; // r6
    union_drmario_gc_c_202 * _g; // r11
    union_drmario_gc_c_202 * _g; // r12

    // References
    // -> union [anonymous] normal_texture_init_dl[];
}

// Range: 0x2A134 -> 0x2A3B0
void animeState_draw(struct SAnimeState * st /* r1+0x10 */, union_drmario_gc_c_202 * * gpp /* r31 */, float x /* f1 */, float y /* f2 */, float sx /* f3 */, float sy /* f4 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x28
    struct_tex_func_c_1287 * texC; // r7
    struct_tex_func_c_1287 * pal; // r1+0x10
}

// Erased
static void animeState_drawI(struct SAnimeState * st /* r1+0x8 */, union_drmario_gc_c_202 * * gpp /* r31 */, float x /* f1 */, float y /* f2 */, float sx /* f3 */, float sy /* f4 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x20
    struct_tex_func_c_1287 * texC; // r4
}

struct SAnimeSmog {
    // total size: 0x124
    struct SAnimeState animeState[4]; // offset 0x0, size 0x100
    int pos[4][2]; // offset 0x100, size 0x20
    int frameCount; // offset 0x120, size 0x4
};
// Range: 0x2A3B0 -> 0x2A494
void animeSmog_init(struct SAnimeSmog * st /* r22 */, struct SAnimeState * state /* r23 */) {
    // Local variables
    int i; // r24
}

// Range: 0x2A494 -> 0x2A580
void animeSmog_load(struct SAnimeSmog * st /* r26 */, void * hpp /* r4 */) {
    // Local variables
    struct SAnimeState * state; // r26

    // References
    // -> static int _centerTbl$125[20][2];
    // -> void * _romDataTbl[][2];
    // -> static int _addrTbl$124[20];
}

// Range: 0x2A580 -> 0x2A58C
void animeSmog_start(struct SAnimeSmog * st /* r1+0x0 */) {}

// Range: 0x2A58C -> 0x2A600
void animeSmog_stop(struct SAnimeSmog * st /* r26 */) {
    // Local variables
    int i; // r27
}

// Range: 0x2A600 -> 0x2A738
void animeSmog_update(struct SAnimeSmog * st /* r28 */) {
    // Local variables
    struct SAnimeState * state; // r31
    int i; // r29
}

// Range: 0x2A738 -> 0x2A9AC
void animeSmog_draw(struct SAnimeSmog * st /* r3 */, union_drmario_gc_c_202 * * gpp /* r26 */, float x /* f28 */, float y /* f29 */, float sx /* f30 */, float sy /* f31 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x24
    struct SAnimeState * state; // r3
    int i; // r27
}

// Erased
static void mappingAnimeSeq(unsigned char * * seqArray /* r3 */, int count /* r1+0x4 */, unsigned long segGap /* r1+0x8 */) {
    // Local variables
    int i; // r7
}

// Range: 0x2A9AC -> 0x2AB38
void loadAnimeSeq(void * hpp /* r28 */, struct_tex_func_c_1287 * * texArray /* r29 */, unsigned char * * * seqArray /* r30 */, void * romStart /* r6 */, void * romEnd /* r1+0x18 */) {
    // Local variables
    void * hp; // r31
    unsigned long addr; // r1+0x8
    unsigned long size; // r1+0x8
}


