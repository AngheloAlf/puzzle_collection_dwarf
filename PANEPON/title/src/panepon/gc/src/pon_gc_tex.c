/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\pon_gc_tex.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x000083EC -> 0x0000A5D4
*/
union_pon_gc_c_173 copy_texture_init_dl[14]; // size: 0x70, address: 0xA18
union_pon_gc_c_173 alpha_texture_init_dl[13]; // size: 0x68, address: 0xA88
union_pon_gc_c_173 normal_texture_init_dl[14]; // size: 0x70, address: 0xAF0
static union_pon_gc_c_173 init_dl$136[4]; // size: 0x20, address: 0xB60
static union_pon_gc_c_173 init_dl$152[5]; // size: 0x28, address: 0xB80
struct SCopyTexBlock {
    // total size: 0x28
    union_pon_gc_c_173 * * gpp; // offset 0x0, size 0x4
    void * tex; // offset 0x4, size 0x4
    int x; // offset 0x8, size 0x4
    int y; // offset 0xC, size 0x4
    int w; // offset 0x10, size 0x4
    int h; // offset 0x14, size 0x4
    void (* func)(struct SCopyTexBlock *); // offset 0x18, size 0x4
    int step; // offset 0x1C, size 0x4
    int top; // offset 0x20, size 0x4
    int bottom; // offset 0x24, size 0x4
};
struct SStretchTexBlock {
    // total size: 0x6C
    union_pon_gc_c_173 * * gpp; // offset 0x0, size 0x4
    union_pon_gc_tex_c_1219 * * vpp; // offset 0x4, size 0x4
    int texW; // offset 0x8, size 0x4
    int texH; // offset 0xC, size 0x4
    void * colorTex; // offset 0x10, size 0x4
    int colorTexW; // offset 0x14, size 0x4
    void * alphaTex; // offset 0x18, size 0x4
    int alphaTexW; // offset 0x1C, size 0x4
    int x; // offset 0x20, size 0x4
    int y; // offset 0x24, size 0x4
    int w; // offset 0x28, size 0x4
    int h; // offset 0x2C, size 0x4
    void (* colorFunc)(struct SStretchTexBlock *); // offset 0x30, size 0x4
    void (* alphaFunc)(struct SStretchTexBlock *); // offset 0x34, size 0x4
    int step; // offset 0x38, size 0x4
    void (* rectFunc)(struct SStretchTexBlock *); // offset 0x3C, size 0x4
    int top; // offset 0x40, size 0x4
    int bottom; // offset 0x44, size 0x4
    int loadH; // offset 0x48, size 0x4
    int rect[8]; // offset 0x4C, size 0x20
};
struct SStretchTexTile {
    // total size: 0x78
    union_pon_gc_c_173 * * gpp; // offset 0x0, size 0x4
    union_pon_gc_tex_c_1219 * * vpp; // offset 0x4, size 0x4
    int texW; // offset 0x8, size 0x4
    int texH; // offset 0xC, size 0x4
    void * colorTex; // offset 0x10, size 0x4
    int colorTexW; // offset 0x14, size 0x4
    void * alphaTex; // offset 0x18, size 0x4
    int alphaTexW; // offset 0x1C, size 0x4
    int lx; // offset 0x20, size 0x4
    int ly; // offset 0x24, size 0x4
    int lw; // offset 0x28, size 0x4
    int lh; // offset 0x2C, size 0x4
    int x; // offset 0x30, size 0x4
    int y; // offset 0x34, size 0x4
    int w; // offset 0x38, size 0x4
    int h; // offset 0x3C, size 0x4
    void (* colorFunc)(struct SStretchTexTile *); // offset 0x40, size 0x4
    void (* alphaFunc)(struct SStretchTexTile *); // offset 0x44, size 0x4
    int step; // offset 0x48, size 0x4
    void (* rectFunc)(struct SStretchTexTile *); // offset 0x4C, size 0x4
    int top; // offset 0x50, size 0x4
    int bottom; // offset 0x54, size 0x4
    int rect[8]; // offset 0x58, size 0x20
};
// Range: 0x83EC -> 0x857C
static void StretchTexBlock4ia_LoadTex(struct SStretchTexBlock * st /* r1+0x0 */) {
    // Local variables
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
}

// Range: 0x857C -> 0x8650
void StretchTexBlock4ia(union_pon_gc_c_173 * * gpp /* r1+0x8 */, int texW /* r1+0xC */, int texH /* r1+0x10 */, void * tex /* r1+0x14 */, float x /* r1+0x18 */, float y /* r1+0x1C */, float w /* r1+0x20 */, float h /* r1+0x24 */) {
    // Local variables
    struct SStretchTexBlock st[1]; // r1+0x28
}

// Range: 0x8650 -> 0x87D8
static void StretchTexBlock32_LoadTex(struct SStretchTexBlock * st /* r1+0x0 */) {
    // Local variables
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
}

// Range: 0x87D8 -> 0x88BC
void StretchTexBlock32(union_pon_gc_c_173 * * gpp /* r1+0x8 */, int texW /* r1+0xC */, int texH /* r1+0x10 */, void * tex /* r1+0x14 */, float x /* r1+0x18 */, float y /* r1+0x1C */, float w /* r1+0x20 */, float h /* r1+0x24 */) {
    // Local variables
    struct SStretchTexBlock st[1]; // r1+0x28
}

// Range: 0x88BC -> 0x8A44
static void StretchTexBlock16ia_LoadTex(struct SStretchTexBlock * st /* r1+0x0 */) {
    // Local variables
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
}

// Range: 0x8A44 -> 0x8B18
static void StretchTexBlock16ia(union_pon_gc_c_173 * * gpp /* r1+0x8 */, int texW /* r1+0xC */, int texH /* r1+0x10 */, void * tex /* r1+0x14 */, float x /* r1+0x18 */, float y /* r1+0x1C */, float w /* r1+0x20 */, float h /* r1+0x24 */) {
    // Local variables
    struct SStretchTexBlock st[1]; // r1+0x28
}

// Range: 0x8B18 -> 0x8C9C
static void StretchTexBlock8ia_LoadTex(struct SStretchTexBlock * st /* r1+0x0 */) {
    // Local variables
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
}

// Range: 0x8C9C -> 0x8D70
void StretchTexBlock8ia(union_pon_gc_c_173 * * gpp /* r1+0x8 */, int texW /* r1+0xC */, int texH /* r1+0x10 */, void * tex /* r1+0x14 */, float x /* r1+0x18 */, float y /* r1+0x1C */, float w /* r1+0x20 */, float h /* r1+0x24 */) {
    // Local variables
    struct SStretchTexBlock st[1]; // r1+0x28
}

// Range: 0x8D70 -> 0x8D74
static void pon_gSPObjError() {}

// Range: 0x8D74 -> 0x9720
static int pon_texture(union_pon_gc_c_173 * * glp /* r21 */, union_pon_gc_tex_c_7116 * bg /* r26 */, unsigned long CycleType /* r5 */) {
    // Local variables
    int err; // r25
    int x; // r24
    int y; // r23
    unsigned short texW; // r4
    unsigned short texH; // r5
    int sprW; // r29
    int sprH; // r31
    unsigned long long * image; // r22
    union_pon_gc_c_173 * pgfx; // r1+0x14
}

static union_pon_gc_tex_c_7332 * txBlock; // size: 0x4, address: 0x188
// Range: 0x9720 -> 0x9890
void pon_gSPObjLoadTxtr(union_pon_gc_c_173 * * glp /* r1+0x0 */, union_pon_gc_tex_c_7332 * tx /* r1+0x4 */) {
    // Local variables
    union_pon_gc_c_173 * pgfx; // r5
    union_pon_gc_c_173 * _g; // r6
    union_pon_gc_c_173 * _g; // r7
    union_pon_gc_c_173 * _g; // r8
    union_pon_gc_c_173 * _g; // r7
    union_pon_gc_c_173 * _g; // r8
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r6
    union_pon_gc_c_173 * _g; // r7
    union_pon_gc_c_173 * _g; // r8
    union_pon_gc_c_173 * _g; // r7
    union_pon_gc_c_173 * _g; // r8
    union_pon_gc_c_173 * _g; // r5

    // References
    // -> static union [anonymous] * txBlock;
}

// Range: 0x9890 -> 0xA300
void pon_gSPObjRectangle(union_pon_gc_c_173 * * glp /* r30 */, union_pon_gc_c_222 * sp /* r4 */) {
    // Local variables
    union_pon_gc_c_173 * pgfx; // r31
    unsigned long iW; // r9
    unsigned long iH; // r10
    unsigned long sW; // r3
    unsigned long sH; // r1+0x8
    union_pon_gc_c_173 * _g; // r11
    union_pon_gc_c_173 * _g; // r12
    union_pon_gc_c_173 * _g; // r24
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r11
    union_pon_gc_c_173 * _g; // r26
    union_pon_gc_c_173 * _g; // r11
    union_pon_gc_c_173 * _g; // r10
    union_pon_gc_c_173 * _g; // r12
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r8
    union_pon_gc_c_173 * _g; // r11
    union_pon_gc_c_173 * _g; // r12
    union_pon_gc_c_173 * _g; // r24
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r11
    union_pon_gc_c_173 * _g; // r25
    union_pon_gc_c_173 * _g; // r11
    union_pon_gc_c_173 * _g; // r10
    union_pon_gc_c_173 * _g; // r12
    union_pon_gc_c_173 * _g; // r29
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r8
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r11
    union_pon_gc_c_173 * _g; // r12
    union_pon_gc_c_173 * _g; // r24
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r11
    union_pon_gc_c_173 * _g; // r24
    union_pon_gc_c_173 * _g; // r11
    union_pon_gc_c_173 * _g; // r10
    union_pon_gc_c_173 * _g; // r12
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r8

    // References
    // -> static union [anonymous] * txBlock;
}

// Range: 0xA300 -> 0xA36C
void pon_guS2DEmuBgRect1Cyc(union_pon_gc_c_173 * * glp /* r30 */, union_pon_gc_tex_c_7116 * bg /* r31 */) {
    // Local variables
    union_pon_gc_c_173 * pgfx; // r1+0x10
}

// Range: 0xA36C -> 0xA370
void pon_guS2DEmuSetScissor() {}

// Range: 0xA370 -> 0xA420
void pon_gSPBgRect1Cyc(union_pon_gc_c_173 * * glp /* r30 */, union_pon_gc_tex_c_7116 * bg /* r31 */) {
    // Local variables
    union_pon_gc_c_173 * pgfx; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
}

// Range: 0xA420 -> 0xA4E4
void pon_gSPBgRectCopy(union_pon_gc_c_173 * * glp /* r30 */, union_pon_gc_tex_c_7116 * bg /* r31 */) {
    // Local variables
    union_pon_gc_c_173 * pgfx; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
}

// Range: 0xA4E4 -> 0xA5D4
void pon_guS2DInitBg(union_pon_gc_tex_c_7116 * bg /* r1+0x0 */) {
    // Local variables
    unsigned short tmemUse; // r6
    unsigned short shift; // r4
    unsigned long tsize; // r4
}


