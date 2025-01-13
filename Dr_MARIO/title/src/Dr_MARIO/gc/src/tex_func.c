/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\tex_func.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x000052F4 -> 0x000056E0
*/
union_drmario_gc_c_202 copy_texture_init_dl[14]; // size: 0x70, address: 0x4130
union_drmario_gc_c_202 alpha_texture_init_dl[13]; // size: 0x68, address: 0x41A0
union_drmario_gc_c_202 normal_texture_init_dl[14]; // size: 0x70, address: 0x4208
static int _modes$96[4]; // size: 0x10, address: 0x120
static union_drmario_gc_c_202 init_dl$155[5]; // size: 0x28, address: 0x4278
struct SCopyTexBlock {
    // total size: 0x28
    union_drmario_gc_c_202 * * gpp; // offset 0x0, size 0x4
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
    union_drmario_gc_c_202 * * gpp; // offset 0x0, size 0x4
    union_tex_func_c_1051 * * vpp; // offset 0x4, size 0x4
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
    union_drmario_gc_c_202 * * gpp; // offset 0x0, size 0x4
    union_tex_func_c_1051 * * vpp; // offset 0x4, size 0x4
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
// Range: 0x52F4 -> 0x53D4
struct_tex_func_c_1287 * tiLoadTexData(void * hpp /* r30 */, void * romStart /* r3 */, void * romEnd /* r5 */) {
    // Local variables
    void * hp; // r31
    struct_tex_func_c_1287 * texInfo; // r3
    int texSize; // r1+0x8
}

static unsigned char _pnts$871[9][8]; // size: 0x48, address: 0x148
// Range: 0x53D4 -> 0x56E0
void drawCursorPattern(union_drmario_gc_c_202 * * gpp /* r1+0x8 */, int frmW /* r1+0x14 */, int frmH /* r1+0x18 */, int posX /* r1+0x1C */, int posY /* r1+0x20 */, int posW /* r1+0x24 */, int posH /* r8 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r5
    int px[4]; // r1+0x60
    int py[4]; // r1+0x50
    int tx[3]; // r1+0x44
    int ty[3]; // r1+0x38
    int dx[3]; // r1+0x2C
    int i; // r1+0x8
    unsigned char * pnts; // r1+0x8
    union_drmario_gc_c_202 * _g; // r12
    union_drmario_gc_c_202 * _g; // r31
    union_drmario_gc_c_202 * _g; // r5

    // References
    // -> static unsigned char _pnts$871[9][8];
}


