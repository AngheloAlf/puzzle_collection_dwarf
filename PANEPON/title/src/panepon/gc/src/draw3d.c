/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\draw3d.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00048D24 -> 0x00051968
*/
union_pon_gc_c_173 * glistp; // size: 0x4, address: 0x50F48
// Range: 0x48D24 -> 0x48D4C
void Set3DTile() {
    // Local variables
    union_pon_gc_c_173 * _g; // r1+0x0

    // References
    // -> union [anonymous] * glistp;
}

// Range: 0x48D4C -> 0x48F48
void Set3DExplodeTile() {
    // Local variables
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
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> union [anonymous] * glistp;
}

int gMain; // size: 0x4, address: 0xDF59C
unsigned char block1[]; // size: 0x0, address: 0xB8640
unsigned char block2[]; // size: 0x0, address: 0xB8E40
unsigned char block3[]; // size: 0x0, address: 0xB9640
unsigned char block4[]; // size: 0x0, address: 0xB9E40
unsigned char block5[]; // size: 0x0, address: 0xBA640
unsigned char block6[]; // size: 0x0, address: 0xBAE40
unsigned char block7[]; // size: 0x0, address: 0xBB640
unsigned char block8[]; // size: 0x0, address: 0xBBE40
unsigned char block9[]; // size: 0x0, address: 0xBC640
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
// Range: 0x48F48 -> 0x49644
void Draw3DFrontTetrisWell(struct_pon_gc_draw_c_2466 * dynamicp /* r1+0x1C */, int num /* r1+0x20 */) {
    // Local variables
    int row; // r27
    int col; // r29
    int which; // r24
    int total; // r1+0x30
    int temp; // r4
    unsigned char order[10]; // r1+0x10
    unsigned char * tex; // r25
    struct cursor_t * cursor; // r1+0x2C
    char (* ptr)[12][18]; // r1+0x28
    struct block_t (* array)[12][18]; // r1+0x24
    struct block_t * block; // r1+0x8
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
    // -> int gMain;
    // -> union [anonymous] * glistp;
    // -> unsigned char block9[];
    // -> unsigned char block8[];
    // -> unsigned char block7[];
    // -> unsigned char block6[];
    // -> unsigned char block5[];
    // -> unsigned char block4[];
    // -> unsigned char block3[];
    // -> unsigned char block2[];
    // -> unsigned char block1[];
}

// Range: 0x49644 -> 0x49CA8
void Draw3DBackTetrisWell(struct_pon_gc_draw_c_2466 * dynamicp /* r1+0x8 */, int num /* r1+0xC */) {
    // Local variables
    int row; // r27
    int col; // r29
    int which; // r25
    int total; // r1+0x28
    unsigned char order[10]; // r1+0x14
    unsigned char * tex; // r24
    char (* ptr)[12][18]; // r1+0x24
    struct block_t (* array)[12][18]; // r1+0x20
    struct block_t * block; // r1+0x8
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
    // -> unsigned char block9[];
    // -> unsigned char block8[];
    // -> unsigned char block7[];
    // -> unsigned char block6[];
    // -> unsigned char block5[];
    // -> unsigned char block4[];
    // -> unsigned char block3[];
    // -> unsigned char block2[];
    // -> unsigned char block1[];
    // -> int gMain;
}

union_pon_gc_tex_c_1219 * gAllVertex; // size: 0x4, address: 0xF4EA8
// Range: 0x49CA8 -> 0x49E18
void Draw3DTetrisBlock1(int row /* r1+0x8 */, int col /* r1+0xC */, int type /* r1+0x10 */) {
    // Local variables
    int tileoffset[8]; // r1+0x14
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> union [anonymous] * glistp;
    // -> union [anonymous] * gAllVertex;
}

// Range: 0x49E18 -> 0x4A018
void Draw3DTetrisBlock2(int col /* r1+0x8 */, int type /* r1+0xC */) {
    // Local variables
    int tileoffset[8]; // r1+0x10
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
    // -> unsigned char block3[];
}

// Range: 0x4A018 -> 0x4A2B0
void Draw3DTetrisBlockSide(int row /* r1+0x0 */, int col /* r1+0x4 */, int type /* r1+0x8 */, int flag /* r1+0xC */) {
    // Local variables
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0
    union_pon_gc_c_173 * _g; // r1+0x0

    // References
    // -> union [anonymous] * glistp;
    // -> union [anonymous] * gAllVertex;
}

// Range: 0x4A2B0 -> 0x4A628
void Draw3DTetrisSwitch(struct_pon_gc_draw_c_2466 * dynamicp /* r1+0x8 */, int num /* r1+0xC */, struct block_t * left /* r1+0x10 */, struct block_t * right /* r1+0x14 */) {
    // Local variables
    int index; // r9
    int tileoffset[8]; // r1+0x18
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
    // -> union [anonymous] * gAllVertex;
    // -> unsigned char block1[];
}

unsigned char blockn[]; // size: 0x0, address: 0xBCE40
struct chain_t {
    // total size: 0x8
    int x_num; // offset 0x0, size 0x4
    int old_chain; // offset 0x4, size 0x4
};
struct state_t {
    // total size: 0x38
    int comboFlash; // offset 0x0, size 0x4
    int comboFace; // offset 0x4, size 0x4
    int comboExplode; // offset 0x8, size 0x4
    int blockDropDelay; // offset 0xC, size 0x4
    int attackDropDelay; // offset 0x10, size 0x4
    int nextLevel; // offset 0x14, size 0x4
    int currLevel; // offset 0x18, size 0x4
    int rand; // offset 0x1C, size 0x4
    int newBlock; // offset 0x20, size 0x4
    unsigned long timer; // offset 0x24, size 0x4
    unsigned long speed; // offset 0x28, size 0x4
    int death; // offset 0x2C, size 0x4
    int current_raise; // offset 0x30, size 0x4
    int raise; // offset 0x34, size 0x4
};
struct extra_t {
    // total size: 0x1C
    int level; // offset 0x0, size 0x4
    int win; // offset 0x4, size 0x4
    int maxGarbage; // offset 0x8, size 0x4
    int clearGarbage; // offset 0xC, size 0x4
    int matchGarbage; // offset 0x10, size 0x4
    int queueGarbage; // offset 0x14, size 0x4
    int wellGarbage; // offset 0x18, size 0x4
};
struct menu_t {
    // total size: 0x18
    int game; // offset 0x0, size 0x4
    int stage; // offset 0x4, size 0x4
    int speed; // offset 0x8, size 0x4
    int misc; // offset 0xC, size 0x4
    int ai; // offset 0x10, size 0x4
    int player; // offset 0x14, size 0x4
};
struct tetWell {
    // total size: 0x57C0
    struct block_t block[12][18]; // offset 0x0, size 0x2520
    struct attack_t attack[40]; // offset 0x2520, size 0xC80
    struct icon_t icon[10]; // offset 0x31A0, size 0x410
    struct explode_t explosion[50]; // offset 0x35B0, size 0x960
    union_pon_gc_c_222 block_rect[12][6]; // offset 0x3F10, size 0x6C0
    union_pon_gc_c_222 new_block_rect[6]; // offset 0x45D0, size 0x90
    union_pon_gc_c_222 left2D; // offset 0x4660, size 0x18
    union_pon_gc_c_222 right2D; // offset 0x4678, size 0x18
    char visible[12][18]; // offset 0x4690, size 0xD8
    float translation; // offset 0x4768, size 0x4
    struct block_t new_block[18]; // offset 0x476C, size 0x318
    struct chain_t reaction; // offset 0x4A84, size 0x8
    int score; // offset 0x4A8C, size 0x4
    int raise; // offset 0x4A90, size 0x4
    int danger; // offset 0x4A94, size 0x4
    int alert; // offset 0x4A98, size 0x4
    int defrost; // offset 0x4A9C, size 0x4
    int chain_garbage; // offset 0x4AA0, size 0x4
    int collision; // offset 0x4AA4, size 0x4
    struct state_t state; // offset 0x4AA8, size 0x38
    struct extra_t extra; // offset 0x4AE0, size 0x1C
    int bot_height; // offset 0x4AFC, size 0x4
    struct menu_t menu; // offset 0x4B00, size 0x18
    struct attack_t attack4p[40]; // offset 0x4B18, size 0xC80
    int LastChainType; // offset 0x5798, size 0x4
    int LastComboType; // offset 0x579C, size 0x4
    int LastEXComboType; // offset 0x57A0, size 0x4
    int ChainAttackWhom; // offset 0x57A4, size 0x4
    int ComboAttackWhom; // offset 0x57A8, size 0x4
    int LastAttackWhom; // offset 0x57AC, size 0x4
    int RankingSignRaise; // offset 0x57B0, size 0x4
    int RankingSignColor; // offset 0x57B4, size 0x4
    int EntryNo; // offset 0x57B8, size 0x4
};
// Range: 0x4A628 -> 0x4A980
void Draw3DTetrisNewBlock(struct tetWell * well /* r1+0xC */) {
    // Local variables
    int col; // r1+0x8
    unsigned char * tex; // r22
    int tileoffset[8]; // r1+0x14
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
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> union [anonymous] * glistp;
    // -> union [anonymous] * gAllVertex;
    // -> unsigned char blockn[];
    // -> unsigned char block9[];
    // -> unsigned char block8[];
    // -> unsigned char block7[];
    // -> unsigned char block6[];
    // -> int gMain;
}

unsigned short big_c[]; // size: 0x0, address: 0xDC858
unsigned short small_c[]; // size: 0x0, address: 0xDD3D8
struct gamepad_t {
    // total size: 0x10
    int position; // offset 0x0, size 0x4
    unsigned short touch_button; // offset 0x4, size 0x2
    unsigned short hold_button; // offset 0x6, size 0x2
    int hold; // offset 0x8, size 0x4
    unsigned short cont_button; // offset 0xC, size 0x2
    unsigned short button; // offset 0xE, size 0x2
};
struct action_t {
    // total size: 0xC
    int current_flic; // offset 0x0, size 0x4
    int posX; // offset 0x4, size 0x4
    int posY; // offset 0x8, size 0x4
};
struct help_t {
    // total size: 0x8
    int selection; // offset 0x0, size 0x4
    int current_pos; // offset 0x4, size 0x4
};
struct player_t {
    // total size: 0x880
    char id; // offset 0x0, size 0x1
    signed short name[7]; // offset 0x2, size 0xE
    int kPLAYER1E_2Dscore; // offset 0x10, size 0x4
    int kPLAYER1E_3Dscore; // offset 0x14, size 0x4
    int kPLAYER1T_2Dscore; // offset 0x18, size 0x4
    int kPLAYER1T_3Dscore; // offset 0x1C, size 0x4
    int kPLAYER1C_2Dscore; // offset 0x20, size 0x4
    int kPLAYER1C_2Dlastscore; // offset 0x24, size 0x4
    int kPLAYER1C_3Dscore; // offset 0x28, size 0x4
    int kPLAYER1C_3Dlastscore; // offset 0x2C, size 0x4
    char kPLAYER1C_2Dhour; // offset 0x30, size 0x1
    char kPLAYER1C_2Dminute; // offset 0x31, size 0x1
    char kPLAYER1C_2Dsecond; // offset 0x32, size 0x1
    char kPLAYER1C_2Dround[6]; // offset 0x33, size 0x6
    int kPLAYER1C_2Dtime[32]; // offset 0x3C, size 0x80
    char kPLAYER1C_3Dhour; // offset 0xBC, size 0x1
    char kPLAYER1C_3Dminute; // offset 0xBD, size 0x1
    char kPLAYER1C_3Dsecond; // offset 0xBE, size 0x1
    char kPLAYER1C_3Dround[6]; // offset 0xBF, size 0x6
    int kPLAYER1C_3Dtime[32]; // offset 0xC8, size 0x80
    char kPLAYER1P_hour; // offset 0x148, size 0x1
    char kPLAYER1P_minute; // offset 0x149, size 0x1
    char kPLAYER1P_second; // offset 0x14A, size 0x1
    char kPLAYER1P_easy1[6]; // offset 0x14B, size 0x6
    char kPLAYER1P_hard1[6]; // offset 0x151, size 0x6
    char kPLAYER1P_easy2[6]; // offset 0x157, size 0x6
    char kPLAYER1P_hard2[6]; // offset 0x15D, size 0x6
    char kPLAYER1P_special[12]; // offset 0x163, size 0xC
    char kPLAYER1V_kEASY; // offset 0x16F, size 0x1
    char kPLAYER1V_kNORMAL; // offset 0x170, size 0x1
    char kPLAYER1V_kHARD; // offset 0x171, size 0x1
    char kPLAYER1V_kSHARD; // offset 0x172, size 0x1
    char kPLAYER1V_kULTRA; // offset 0x173, size 0x1
    char kPLAYER1V_kEASY_continue; // offset 0x174, size 0x1
    char kPLAYER1V_kNORMAL_continue; // offset 0x175, size 0x1
    char kPLAYER1V_kHARD_continue; // offset 0x176, size 0x1
    char kPLAYER1V_kSHARD_continue; // offset 0x177, size 0x1
    char kPLAYER1V_kULTRA_continue; // offset 0x178, size 0x1
    signed short kPLAYER1V_kEASY_character; // offset 0x17A, size 0x2
    signed short kPLAYER1V_kNORMAL_character; // offset 0x17C, size 0x2
    signed short kPLAYER1V_kHARD_character; // offset 0x17E, size 0x2
    signed short kPLAYER1V_kSHARD_character; // offset 0x180, size 0x2
    signed short kPLAYER1V_kULTRA_character; // offset 0x182, size 0x2
    signed short k2D_combo; // offset 0x184, size 0x2
    signed short k2D_comboMode; // offset 0x186, size 0x2
    signed short k2D_chain; // offset 0x188, size 0x2
    signed short k2D_chainMode; // offset 0x18A, size 0x2
    signed short k3D_combo; // offset 0x18C, size 0x2
    signed short k3D_comboMode; // offset 0x18E, size 0x2
    signed short k3D_chain; // offset 0x190, size 0x2
    signed short k3D_chainMode; // offset 0x192, size 0x2
    char kPLAYER2V_2Dwin[8]; // offset 0x194, size 0x8
    char kPLAYER2V_2Dlose[8]; // offset 0x19C, size 0x8
    char kPLAYER2V_3Dwin[8]; // offset 0x1A4, size 0x8
    char kPLAYER2V_3Dlose[8]; // offset 0x1AC, size 0x8
    char kPLAYER2T_2Dwin[8]; // offset 0x1B4, size 0x8
    char kPLAYER2T_2Dlose[8]; // offset 0x1BC, size 0x8
    char kPLAYER2T_3Dwin[8]; // offset 0x1C4, size 0x8
    char kPLAYER2T_3Dlose[8]; // offset 0x1CC, size 0x8
    char kPLAYER2L_2Dwin[8]; // offset 0x1D4, size 0x8
    char kPLAYER2L_2Dlose[8]; // offset 0x1DC, size 0x8
    char kPLAYER2L_3Dwin[8]; // offset 0x1E4, size 0x8
    char kPLAYER2L_3Dlose[8]; // offset 0x1EC, size 0x8
    unsigned char kPLAYER1PE_editor[1650]; // offset 0x1F4, size 0x672
    signed short menu_setting[12]; // offset 0x866, size 0x18
};
struct MultiModeData_t {
    // total size: 0x168
    int Ranking[4]; // offset 0x0, size 0x10
    union_pon_gc_tex_c_7116 sign[4]; // offset 0x10, size 0xA0
    union_pon_gc_tex_c_7116 alpha[4]; // offset 0xB0, size 0xA0
    union_pon_gc_tex_c_7332 signLUT; // offset 0x150, size 0x18
};
struct Game {
    // total size: 0x21C08
    struct tetWell tetrisWell[4]; // offset 0x0, size 0x15F00
    struct cursor_t cursorBlock[4]; // offset 0x15F00, size 0x440
    struct gamepad_t controller[4]; // offset 0x16340, size 0x40
    struct flic_t flic[340]; // offset 0x16380, size 0x2A80
    struct action_t action[40]; // offset 0x18E00, size 0x1E0
    union_pon_gc_tex_c_7332 gLUT[40]; // offset 0x18FE0, size 0x3C0
    union_pon_gc_tex_c_7116 gBG[200]; // offset 0x193A0, size 0x1F40
    union_pon_gc_tex_c_7332 gTEXT[80]; // offset 0x1B2E0, size 0x780
    union_pon_gc_c_222 gSPRITE[160]; // offset 0x1BA60, size 0xF00
    int currentText; // offset 0x1C960, size 0x4
    struct text_t drawText[70]; // offset 0x1C968, size 0x8C0
    union_pon_gc_tex_c_7116 frame; // offset 0x1D228, size 0x28
    union_pon_gc_tex_c_7332 frameLUT; // offset 0x1D250, size 0x18
    union_pon_gc_c_222 shadeBOX[4]; // offset 0x1D268, size 0x60
    union_pon_gc_tex_c_7116 bkground; // offset 0x1D2C8, size 0x28
    union_pon_gc_tex_c_7332 bkgroundLUT; // offset 0x1D2F0, size 0x18
    union_pon_gc_tex_c_7116 sign[8]; // offset 0x1D308, size 0x140
    union_pon_gc_tex_c_7116 alpha[4]; // offset 0x1D448, size 0xA0
    union_pon_gc_tex_c_7332 signLUT; // offset 0x1D4E8, size 0x18
    int miscToggle; // offset 0x1D500, size 0x4
    union_pon_gc_tex_c_7116 misc[4]; // offset 0x1D508, size 0xA0
    union_pon_gc_tex_c_7332 miscLUT[4]; // offset 0x1D5A8, size 0x60
    int totalPlayer; // offset 0x1D608, size 0x4
    int dimension; // offset 0x1D60C, size 0x4
    int seed; // offset 0x1D610, size 0x4
    int hour; // offset 0x1D614, size 0x4
    int minute; // offset 0x1D618, size 0x4
    int second; // offset 0x1D61C, size 0x4
    struct help_t help; // offset 0x1D620, size 0x8
    struct menu_t menu[4]; // offset 0x1D628, size 0x60
    struct player_t player[8]; // offset 0x1D688, size 0x4400
    int LastAlivePlayer; // offset 0x21A88, size 0x4
    int NoEntryPlayer; // offset 0x21A8C, size 0x4
    struct MultiModeData_t MultiModeData; // offset 0x21A90, size 0x168
    char kPLAYER4VTL_2D1st[4]; // offset 0x21BF8, size 0x4
    char kPLAYER4VTL_2D2nd[4]; // offset 0x21BFC, size 0x4
    char kPLAYER4VTL_2D3rd[4]; // offset 0x21C00, size 0x4
    char kPLAYER4VTL_2D4th[4]; // offset 0x21C04, size 0x4
};
struct Game gTheGame; // size: 0x21C08, address: 0xF4EC8
// Range: 0x4A980 -> 0x4AB68
void Draw3DCursor(struct_pon_gc_draw_c_2466 * dynamicp /* r3 */) {
    // Local variables
    int num; // r5
    int x; // r27
    int y; // r28
    unsigned short * tex; // r10
    struct cursor_t * cursor; // r11
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
    // -> struct Game gTheGame;
    // -> union [anonymous] * glistp;
    // -> unsigned short small_c[];
    // -> unsigned short big_c[];
}

unsigned short gGameStatus; // size: 0x2, address: 0xF4E9C
unsigned char combo01[]; // size: 0x0, address: 0xBD730
unsigned char combo02[]; // size: 0x0, address: 0xBDF30
unsigned char combo03[]; // size: 0x0, address: 0xBE730
unsigned char combo04[]; // size: 0x0, address: 0xBEF30
unsigned char combo05[]; // size: 0x0, address: 0xBF730
unsigned char combo06[]; // size: 0x0, address: 0xBFF30
unsigned char combo07[]; // size: 0x0, address: 0xC0730
unsigned char combo08[]; // size: 0x0, address: 0xC0F30
unsigned char combo09[]; // size: 0x0, address: 0xC1730
unsigned char chain01[]; // size: 0x0, address: 0xC1F30
unsigned char chain02[]; // size: 0x0, address: 0xC2730
unsigned char chain03[]; // size: 0x0, address: 0xC2F30
unsigned char chain04[]; // size: 0x0, address: 0xC3730
unsigned char chain05[]; // size: 0x0, address: 0xC3F30
unsigned char chain06[]; // size: 0x0, address: 0xC4730
unsigned char chain07[]; // size: 0x0, address: 0xC4F30
unsigned char chain08[]; // size: 0x0, address: 0xC5730
unsigned char chain09[]; // size: 0x0, address: 0xC5F30
unsigned char chain010[]; // size: 0x0, address: 0xC6730
unsigned char chain011[]; // size: 0x0, address: 0xC6F30
unsigned char chain012[]; // size: 0x0, address: 0xC7730
unsigned char chain013[]; // size: 0x0, address: 0xC7F30
// Range: 0x4AB68 -> 0x4B448
void Draw3DIcon(struct_pon_gc_draw_c_2466 * dynamicp /* r1+0x8 */, int num /* r1+0xC */) {
    // Local variables
    int i; // r1+0x38
    int pos; // r1+0x8
    int count; // r5
    int total; // r1+0x34
    int index; // r1+0x8
    unsigned char * old_tex; // r1+0x30
    unsigned char * tex; // r29
    struct icon_t * icon; // r1+0x8
    struct icon_t (* icn)[10]; // r5
    int tileoffset[8]; // r1+0x10
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
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> union [anonymous] * glistp;
    // -> unsigned short gGameStatus;
    // -> union [anonymous] * gAllVertex;
    // -> unsigned char combo09[];
    // -> unsigned char chain013[];
    // -> unsigned char chain012[];
    // -> unsigned char chain011[];
    // -> unsigned char chain010[];
    // -> unsigned char chain09[];
    // -> unsigned char chain08[];
    // -> unsigned char chain07[];
    // -> unsigned char chain06[];
    // -> unsigned char chain05[];
    // -> unsigned char chain04[];
    // -> unsigned char chain03[];
    // -> unsigned char chain02[];
    // -> unsigned char chain01[];
    // -> unsigned char combo08[];
    // -> unsigned char combo07[];
    // -> unsigned char combo06[];
    // -> unsigned char combo05[];
    // -> unsigned char combo04[];
    // -> unsigned char combo03[];
    // -> unsigned char combo02[];
    // -> unsigned char combo01[];
    // -> int gMain;
}

unsigned short * gbrickA[3]; // size: 0xC, address: 0x4CA84
unsigned short * gbrickB[3]; // size: 0xC, address: 0x4CA58
unsigned short colorTable[]; // size: 0x0, address: 0xB77F8
unsigned char * explosionB; // size: 0x4, address: 0x4CA80
unsigned char * explosionA; // size: 0x4, address: 0x4CA54
// Range: 0x4B448 -> 0x4BC60
void Draw3DAttackBrick(struct_pon_gc_draw_c_2466 * dynamicp /* r1+0x8 */, int num /* r1+0xC */, int check /* r1+0x10 */) {
    // Local variables
    int count; // r1+0x8
    int x; // r1+0x8
    int y; // r24
    int width; // r30
    int where; // r3
    unsigned char * c_tex; // r1+0x1C
    unsigned short * old_tex; // r22
    unsigned short * s_tex; // r10
    struct_animation_c_1169 * s; // r12
    struct attack_t (* attk)[40]; // r1+0x18
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
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> union [anonymous] * glistp;
    // -> unsigned char * explosionA;
    // -> unsigned char * explosionB;
    // -> unsigned short colorTable[];
    // -> unsigned short * gbrickB[3];
    // -> unsigned short * gbrickA[3];
}

// Range: 0x4BC60 -> 0x4BDC0
void Draw3DAttackBlock(int row /* r1+0x8 */, int col /* r1+0xC */, int type /* r1+0x10 */, int flag /* r1+0x14 */) {
    // Local variables
    int tileoffset[8]; // r1+0x18
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> union [anonymous] * glistp;
    // -> union [anonymous] * gAllVertex;
}

unsigned char gblockx[]; // size: 0x0, address: 0xC8940
unsigned char * gblockA[6]; // size: 0x18, address: 0x4CA64
unsigned char * gblockB[6]; // size: 0x18, address: 0x4CA38
// Range: 0x4BDC0 -> 0x4C9F8
int Draw3DAttack(struct_pon_gc_draw_c_2466 * dynamicp /* r1+0x8 */, int num /* r1+0x24 */, int front /* r29 */) {
    // Local variables
    int lev; // r26
    int row; // r22
    int col; // r1+0x20
    int count; // r1+0x40
    int which; // r23
    int pos; // r1+0x1C
    int from; // r3
    int to; // r1+0x3C
    int check; // r25
    int value; // r1+0x8
    int type; // r1+0x8
    int cross_pos; // r1+0x38
    int cross_start; // r1+0x34
    int cross_end; // r1+0x18
    int save_end; // r27
    struct attack_t * attack; // r30
    unsigned char * old_tex; // r1+0x30
    unsigned char * tex; // r3
    struct block_t (* array)[12][18]; // r1+0x2C
    char (* ptr)[12][18]; // r1+0x28
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
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> union [anonymous] * glistp;
    // -> unsigned char * gblockB[6];
    // -> unsigned char * gblockA[6];
    // -> unsigned char gblockx[];
}

// Range: 0x4C9F8 -> 0x4CD00
void Draw3DExplosion(struct_pon_gc_draw_c_2466 * dynamicp /* r1+0x8 */, int num /* r1+0xC */) {
    // Local variables
    int count; // r1+0x8
    int ss; // r6
    int tt; // r28
    unsigned char * tex; // r8
    struct_animation_c_1169 * s; // r7
    struct explode_t (* exp)[50]; // r29
    int tileoffset[8]; // r1+0x10
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
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> union [anonymous] * glistp;
    // -> unsigned char * explosionB;
    // -> unsigned char * explosionA;
}

unsigned short numberTable[]; // size: 0x0, address: 0xD0670
unsigned char clear[]; // size: 0x0, address: 0xD3918
int gCounter; // size: 0x4, address: 0xF4E80
// Range: 0x4CD00 -> 0x4CFC8
void Draw3DClearLine(int num /* r1+0xC */) {
    // Local variables
    int row; // r1+0x8
    int index; // r5
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
    // -> union [anonymous] * gAllVertex;
    // -> int gCounter;
    // -> unsigned char clear[];
    // -> unsigned short numberTable[];
    // -> struct Game gTheGame;
    // -> int gMain;
}

// Range: 0x4CFC8 -> 0x4D2C0
void Draw3DClearSign(struct_pon_gc_draw_c_2466 * dynamicp /* r1+0x8 */, int num /* r1+0xC */) {
    // Local variables
    int tmem; // r1+0x8
    int x; // r3
    int y; // r12
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
    // -> unsigned char clear[];
    // -> struct Game gTheGame;
    // -> int gMain;
}

unsigned char arrow[]; // size: 0x0, address: 0xD4D60
// Range: 0x4D2C0 -> 0x4DCA8
void Draw3DGameOverStat(struct_pon_gc_draw_c_2466 * dynamicp /* r1+0x8 */) {
    // Local variables
    int count; // r25
    int pos; // r1+0x8
    int x; // r10
    int y; // r28
    unsigned char * tex; // r30
    struct icon_t * icon; // r1+0x8
    int tileoffset[8]; // r1+0xC
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
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> union [anonymous] * glistp;
    // -> unsigned char arrow[];
    // -> struct Game gTheGame;
    // -> unsigned short numberTable[];
    // -> unsigned char combo09[];
    // -> unsigned char chain013[];
    // -> unsigned char chain012[];
    // -> unsigned char chain011[];
    // -> unsigned char chain010[];
    // -> unsigned char chain09[];
    // -> unsigned char chain08[];
    // -> unsigned char chain07[];
    // -> unsigned char chain06[];
    // -> unsigned char chain05[];
    // -> unsigned char chain04[];
    // -> unsigned char chain03[];
    // -> unsigned char chain02[];
    // -> unsigned char chain01[];
    // -> unsigned char combo08[];
    // -> unsigned char combo07[];
    // -> unsigned char combo06[];
    // -> unsigned char combo05[];
    // -> unsigned char combo04[];
    // -> unsigned char combo03[];
    // -> unsigned char combo02[];
    // -> unsigned char combo01[];
    // -> unsigned short colorTable[];
}

unsigned char smokesmoke[]; // size: 0x0, address: 0xC9158
// Range: 0x4DCA8 -> 0x4DFE0
void Draw3DSmoke(struct_pon_gc_draw_c_2466 * dynamicp /* r1+0x8 */, int num /* r1+0xC */) {
    // Local variables
    int col; // r8
    int tile; // r9
    struct_animation_c_1169 * s; // r25
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
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> union [anonymous] * glistp;
    // -> unsigned char smokesmoke[];
}

unsigned short otherTable[]; // size: 0x0, address: 0xC9570
unsigned char w_level7[]; // size: 0x0, address: 0xCFD08
// Range: 0x4DFE0 -> 0x4E350
void Draw3DEmptyStar() {
    // Local variables
    int count; // r7
    int x; // r11
    int y; // r12
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
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> union [anonymous] * glistp;
    // -> unsigned char w_level7[];
    // -> unsigned short otherTable[];
}

unsigned char w_star[]; // size: 0x0, address: 0xCBF88
struct_pon_gc_c_674 * * fb; // size: 0x4, address: 0x50DF8
// Range: 0x4E350 -> 0x4E6D8
void Draw3DGameStar(int which /* r1+0x8 */) {
    // Local variables
    int x; // r8
    int y; // r9
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
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> struct [anonymous] * * fb;
    // -> union [anonymous] * glistp;
    // -> unsigned char w_star[];
    // -> unsigned short otherTable[];
    // -> struct Game gTheGame;
}

unsigned char stars1[]; // size: 0x0, address: 0xD4F78
unsigned char stars2[]; // size: 0x0, address: 0xD5778
// Range: 0x4E6D8 -> 0x4EB70
void Draw3DSmallStars(int layer /* r1+0x8 */) {
    // Local variables
    int i; // r1+0x10
    int j; // r1+0x8
    int x; // r30
    int y; // r8
    int num; // r17
    int total; // r29
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
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> union [anonymous] * glistp;
    // -> int gMain;
    // -> unsigned char stars2[];
    // -> unsigned char stars1[];
    // -> struct Game gTheGame;
    // -> unsigned short numberTable[];
}

int gSelection; // size: 0x4, address: 0xF4E94
union_pon_gc_MemoryCard_c_1396 gIdent; // size: 0x40, address: 0x50F08
// Range: 0x4EB70 -> 0x51968
void Draw3DTetris(struct_pon_gc_draw_c_2466 * dynamicp /* r19 */) {
    // Local variables
    int num; // r30
    int end_attack[4]; // r1+0x168
    unsigned short perspNorm; // r1+0x164
    int draw; // r1+0x17C
    int left; // r1+0x178
    int width; // r8
    int height; // r27
    int line; // r8
    int tmem; // r9
    union_pon_gc_c_222 * sp; // r3
    int i; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    int plt_index[8]; // r1+0x138
    int tex_index[8]; // r1+0x118
    int spr_index[8]; // r1+0xF8
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    int plt_index[3]; // r1+0xEC
    int tex_index[3]; // r1+0xE0
    int spr_index[3]; // r1+0xD4
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    int plt_index[8]; // r1+0xB4
    int tex_index[8]; // r1+0x94
    int spr_index[8]; // r1+0x74
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    int plt_index[8]; // r1+0x54
    int tex_index[8]; // r1+0x34
    int spr_index[8]; // r1+0x14
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10
    union_pon_gc_c_173 * _g; // r1+0x10

    // References
    // -> union [anonymous] * glistp;
    // -> int gMain;
    // -> unsigned short colorTable[];
    // -> int gSelection;
    // -> struct Game gTheGame;
    // -> union [anonymous] gIdent;
    // -> union [anonymous] * gAllVertex;
}


