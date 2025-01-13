/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\pon_gc_draw.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0000CAEC -> 0x0000D17C
*/
static union_pon_gc_MemoryCard_c_1396 _viewMtx$98; // size: 0x40, address: 0x15B0
union_pon_gc_c_173 normal_texture_init_dl[]; // size: 0x0, address: 0xAF0
unsigned char tlu_loading_message[32]; // size: 0x20, address: 0x510
unsigned char tex_loading_message[1152]; // size: 0x480, address: 0x90
// Range: 0xCAEC -> 0xCBDC
void pon_DrawLoadingMessage(union_pon_gc_c_173 * * glp /* r31 */) {
    // Local variables
    union_pon_gc_c_173 * pgfx; // r1+0xC
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> unsigned char tex_loading_message[1152];
    // -> unsigned char tlu_loading_message[32];
    // -> union [anonymous] normal_texture_init_dl[];
    // -> static union [anonymous] _viewMtx$98;
}

static int drawbuffer$104; // size: 0x4, address: 0x15F0
static char * staticSegment$105; // size: 0x4, address: 0x15F4
struct block_t {
    // total size: 0x2C
    int state; // offset 0x0, size 0x4
    int delay; // offset 0x4, size 0x4
    int disappear; // offset 0x8, size 0x4
    int drop; // offset 0xC, size 0x4
    int type; // offset 0x10, size 0x4
    int bomb; // offset 0x14, size 0x4
    int sound; // offset 0x18, size 0x4
    int currRow; // offset 0x1C, size 0x4
    int chain_flag; // offset 0x20, size 0x4
    int frame_n; // offset 0x24, size 0x4
    int frame_d; // offset 0x28, size 0x4
};
struct attack_t {
    // total size: 0x50
    int state; // offset 0x0, size 0x4
    int type; // offset 0x4, size 0x4
    int disappear; // offset 0x8, size 0x4
    int delay; // offset 0xC, size 0x4
    int counter; // offset 0x10, size 0x4
    int level; // offset 0x14, size 0x4
    int start; // offset 0x18, size 0x4
    int end; // offset 0x1C, size 0x4
    int expression; // offset 0x20, size 0x4
    int currRow; // offset 0x24, size 0x4
    int slot; // offset 0x28, size 0x4
    union_pon_gc_c_222 rect; // offset 0x30, size 0x18
    int ChainCriminalPlayerNo; // offset 0x48, size 0x4
    int ComboCriminalPlayerNo; // offset 0x4C, size 0x4
};
struct icon_t {
    // total size: 0x68
    int flag; // offset 0x0, size 0x4
    int type; // offset 0x4, size 0x4
    int total; // offset 0x8, size 0x4
    int from_x; // offset 0xC, size 0x4
    int from_y; // offset 0x10, size 0x4
    int to_x; // offset 0x14, size 0x4
    int to_y; // offset 0x18, size 0x4
    int count; // offset 0x1C, size 0x4
    int distance; // offset 0x20, size 0x4
    union_pon_gc_c_262 thing; // offset 0x28, size 0x40
};
struct explode_t {
    // total size: 0x30
    int type; // offset 0x0, size 0x4
    int frame; // offset 0x4, size 0x4
    int pos; // offset 0x8, size 0x4
    int x; // offset 0xC, size 0x4
    int y; // offset 0x10, size 0x4
    union_pon_gc_c_222 rect; // offset 0x18, size 0x18
};
enum pStateEnum {
    dead = 0,
    no_entry = 1,
    gameclear = 2,
    alive = 3,
    revival = 4,
};
struct cursor_t {
    // total size: 0x110
    int state; // offset 0x0, size 0x4
    int delay; // offset 0x4, size 0x4
    int waiting; // offset 0x8, size 0x4
    int extra_wait; // offset 0xC, size 0x4
    int x; // offset 0x10, size 0x4
    int y; // offset 0x14, size 0x4
    int sx; // offset 0x18, size 0x4
    int sy; // offset 0x1C, size 0x4
    int frame_n; // offset 0x20, size 0x4
    int frame_d; // offset 0x24, size 0x4
    int target[43]; // offset 0x28, size 0xAC
    int store[5]; // offset 0xD4, size 0x14
    union_pon_gc_c_222 rect; // offset 0xE8, size 0x18
    enum pStateEnum pstate; // offset 0x100, size 0x4
    int GameEnd_Value; // offset 0x104, size 0x4
    int AttackWhomLockOnto; // offset 0x108, size 0x4
};
struct flic_t {
    // total size: 0x20
    int duration; // offset 0x0, size 0x4
    int counter; // offset 0x4, size 0x4
    int type; // offset 0x8, size 0x4
    int layer; // offset 0xC, size 0x4
    int palette; // offset 0x10, size 0x4
    int index; // offset 0x14, size 0x4
    int texture; // offset 0x18, size 0x4
    int next_flic; // offset 0x1C, size 0x4
};
struct text_t {
    // total size: 0x20
    union_pon_gc_c_222 word; // offset 0x0, size 0x18
    int texture; // offset 0x18, size 0x4
};
struct_pon_gc_c_674 gInfo[]; // size: 0x0, address: 0x50F68
struct_pon_gc_c_674 * * fb; // size: 0x4, address: 0x50DF8
union_pon_gc_c_173 * glistp; // size: 0x4, address: 0x50F48
unsigned short * nuGfxCfb_ptr; // size: 0x4, address: 0x0
union_pon_gc_c_173 initRDPstart[]; // size: 0x0, address: 0xB0D18
// Range: 0xCBDC -> 0xCE88
void pon_CreateLoadingGfxTask() {
    // Local variables
    struct_pon_gc_draw_c_2466 * dynamicp; // r1+0x8
    struct_pon_gc_c_674 * info; // r1+0xC
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> union [anonymous] * glistp;
    // -> unsigned char tex_loading_message[1152];
    // -> unsigned char tlu_loading_message[32];
    // -> union [anonymous] normal_texture_init_dl[];
    // -> static union [anonymous] _viewMtx$98;
    // -> union [anonymous] initRDPstart[];
    // -> unsigned short * nuGfxCfb_ptr;
    // -> static char * staticSegment$105;
    // -> static int drawbuffer$104;
    // -> struct [anonymous] * * fb;
    // -> struct [anonymous] gInfo[];
}

union_pon_gc_tex_c_1219 tex_vtx[4][4]; // size: 0x100, address: 0xDD0
float xl; // size: 0x4, address: 0xED0
float xr; // size: 0x4, address: 0xED4
float yt; // size: 0x4, address: 0xED8
float yb; // size: 0x4, address: 0xEDC
unsigned char tex_cursor_4p_0[1728]; // size: 0x6C0, address: 0x530
// Range: 0xCE88 -> 0xD17C
void pon_SelectStage4p(union_pon_gc_c_173 * * ppGfx /* r26 */, struct {
    // total size: 0x31B88
    union_pon_gc_c_173 glist[14336]; // offset 0x0, size 0x1C000
    union_pon_gc_MemoryCard_c_1396 projection[4]; // offset 0x1C000, size 0x100
    union_pon_gc_MemoryCard_c_1396 viewing[4]; // offset 0x1C100, size 0x100
    union_pon_gc_MemoryCard_c_1396 trans[4]; // offset 0x1C200, size 0x100
    union_pon_gc_MemoryCard_c_1396 rotate[4]; // offset 0x1C300, size 0x100
    float degree[4]; // offset 0x1C400, size 0x10
    char frontTexture[4][10]; // offset 0x1C410, size 0x28
    char backTexture[4][10]; // offset 0x1C438, size 0x28
    int overflow; // offset 0x1C460, size 0x4
    struct block_t block[4][12][18]; // offset 0x1C464, size 0x9480
    struct attack_t attack[4][40]; // offset 0x258E8, size 0x3200
    struct icon_t icon[4][10]; // offset 0x28AE8, size 0x1040
    struct explode_t explosion[4][50]; // offset 0x29B28, size 0x2580
    struct cursor_t cursorBlock[4]; // offset 0x2C0A8, size 0x440
    union_pon_gc_c_222 block_rect[4][12][6]; // offset 0x2C4E8, size 0x1B00
    union_pon_gc_c_222 new_block_rect[4][6]; // offset 0x2DFE8, size 0x240
    union_pon_gc_c_222 left2D[4]; // offset 0x2E228, size 0x60
    union_pon_gc_c_222 right2D[4]; // offset 0x2E288, size 0x60
    char visible[4][12][18]; // offset 0x2E2E8, size 0x360
    union_pon_gc_MemoryCard_c_1396 left3D[4]; // offset 0x2E648, size 0x100
    union_pon_gc_MemoryCard_c_1396 right3D[4]; // offset 0x2E748, size 0x100
    struct flic_t flic[340]; // offset 0x2E848, size 0x2A80
    struct text_t drawText[70]; // offset 0x312C8, size 0x8C0
} * dynamicp /* r1+0xC */, int x /* r24 */, int y /* r25 */, int num /* r1+0x1C */) {
    // Local variables
    union_pon_gc_c_173 * pGfx; // r27
    union_pon_gc_c_173 * _g; // r4
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r4
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r7
    union_pon_gc_c_173 * _g; // r7
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r6
    union_pon_gc_c_173 * _g; // r6
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r6
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r6
    union_pon_gc_c_173 * _g; // r7
    union_pon_gc_c_173 * _g; // r6
    union_pon_gc_c_173 * _g; // r7
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r4

    // References
    // -> union [anonymous] tex_vtx[4][4];
    // -> unsigned char tex_cursor_4p_0[1728];
    // -> float yb;
    // -> float xl;
    // -> float yt;
    // -> float xr;
}


