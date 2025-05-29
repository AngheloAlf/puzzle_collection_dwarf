/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\gfx.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0005EDD4 -> 0x0005F330
*/
static char * staticSegment; // size: 0x4, address: 0x50DE8
static int Maxdl; // size: 0x4, address: 0x50DEC
static int Nowdl; // size: 0x4, address: 0x50DF0
static int Befdl; // size: 0x4, address: 0x50DF4
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
    uObjSprite rect; // offset 0x30, size 0x18
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
    uObjSprite rect; // offset 0x18, size 0x18
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
    uObjSprite rect; // offset 0xE8, size 0x18
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
    uObjSprite word; // offset 0x0, size 0x18
    int texture; // offset 0x18, size 0x4
};
struct_pon_gc_c_674 gInfo[]; // size: 0x0, address: 0x50F68
unsigned short cfb_16_a[]; // size: 0x0, address: 0x27028
unsigned short cfb_16_b[]; // size: 0x0, address: 0x1828
// Range: 0x5EDD4 -> 0x5EE2C
void InitGFX() {
    // References
    // -> unsigned short cfb_16_b[];
    // -> struct [anonymous] gInfo[];
    // -> unsigned short cfb_16_a[];
}

struct_pon_gc_c_674 * * fb; // size: 0x4, address: 0x50DF8
union_pon_gc_c_173 * glistp; // size: 0x4, address: 0x50F48
int gReset; // size: 0x4, address: 0xDF598
union_pon_gc_c_173 initRDPstart[]; // size: 0x0, address: 0xB0D18
int gMain; // size: 0x4, address: 0xDF59C
int gCheck_Save; // size: 0x4, address: 0xF4EC0
// Range: 0x5EE2C -> 0x5F0D4
void CreateMenuGfxTask(struct_pon_gc_c_674 * info /* r1+0x8 */) {
    // Local variables
    struct_pon_gc_draw_c_2466 * dynamicp; // r30
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> union [anonymous] * glistp;
    // -> int gMain;
    // -> int gCheck_Save;
    // -> int gReset;
    // -> union [anonymous] initRDPstart[];
    // -> static char * staticSegment;
    // -> struct [anonymous] * * fb;
}

// Range: 0x5F0D4 -> 0x5F174
void CreateGameGfxTask1(struct_pon_gc_c_674 * info /* r30 */) {
    // Local variables
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> union [anonymous] * glistp;
    // -> static char * staticSegment;
}

// Range: 0x5F174 -> 0x5F1F0
void CreateGameGfxTask2(struct_pon_gc_c_674 * info /* r1+0x8 */) {
    // Local variables
    struct_pon_gc_draw_c_2466 * dynamicp; // r3
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> union [anonymous] * glistp;
    // -> struct [anonymous] * * fb;
}

// Range: 0x5F1F0 -> 0x5F330
void BuildTask(struct_pon_gc_c_674 * info /* r31 */) {
    // Local variables
    struct_pon_gc_draw_c_2466 * dynamicp; // r31

    // References
    // -> static int Nowdl;
    // -> struct [anonymous] gInfo[];
    // -> static int Maxdl;
    // -> union [anonymous] * glistp;
    // -> static int Befdl;
}


