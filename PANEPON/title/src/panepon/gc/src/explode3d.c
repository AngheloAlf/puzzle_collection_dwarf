/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\explode3d.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0005B804 -> 0x0005BED8
*/
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
    uObjSprite block_rect[12][6]; // offset 0x3F10, size 0x6C0
    uObjSprite new_block_rect[6]; // offset 0x45D0, size 0x90
    uObjSprite left2D; // offset 0x4660, size 0x18
    uObjSprite right2D; // offset 0x4678, size 0x18
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
// Range: 0x5B804 -> 0x5B96C
void Start3DExplosion(struct tetWell * well /* r25 */, int num /* r26 */, int row /* r27 */, int col /* r28 */, int type /* r29 */) {
    // Local variables
    int i; // r31
    int count; // r4
    int total; // r30
    struct explode_t * explode; // r20
}

// Range: 0x5B96C -> 0x5BA48
void Start3DExBlosion(struct tetWell * well /* r3 */, int num /* r1+0x4 */, int x /* r1+0x8 */, int y /* r1+0xC */) {
    // Local variables
    int i; // r10
    int count; // r9
    struct explode_t * explode; // r11
}

// Range: 0x5BA48 -> 0x5BB2C
void Start3DIconSplash(struct tetWell * well /* r28 */, int num /* r29 */, int row /* r30 */, int col /* r31 */) {
    // Local variables
    int i; // r24
    int count; // r4
    struct explode_t * explode; // r23
}

signed char Explosion1[20][12]; // size: 0xF0, address: 0xB0250
// Range: 0x5BB2C -> 0x5BBBC
void Update3DExplode1(struct explode_t * explode /* r1+0x0 */, int distance /* r1+0x4 */) {
    // Local variables
    signed char * ptr; // r1+0x0
    int position; // r1+0x0
    int first; // r1+0x0
    uObjSprite_t * s; // r8

    // References
    // -> signed char Explosion1[20][12];
}

signed char Explosion2[20][16]; // size: 0x140, address: 0xB0340
signed char Explosion3[24][24]; // size: 0x240, address: 0xB0480
signed char Explosion4[24][32]; // size: 0x300, address: 0xB06C0
// Range: 0x5BBBC -> 0x5BD74
void Update3DExplode2(struct explode_t * explode /* r1+0x0 */, int distance /* r1+0x4 */) {
    // Local variables
    signed char * ptr; // r7
    int position; // r1+0x0
    int first; // r1+0x0
    int max; // r9
    uObjSprite_t * s; // r5

    // References
    // -> signed char Explosion4[24][32];
    // -> signed char Explosion3[24][24];
    // -> signed char Explosion2[20][16];
}

signed char IconSplash[40][12]; // size: 0x1E0, address: 0xB09C0
// Erased
static void Update3DIconSplash(struct explode_t * explode /* r1+0x0 */, int distance /* r1+0x4 */) {
    // Local variables
    signed char * ptr; // r5
    int position; // r7
    uObjSprite_t * s; // r8

    // References
    // -> signed char IconSplash[40][12];
}

// Range: 0x5BD74 -> 0x5BED8
void Update3DExplosion(struct tetWell * well /* r3 */) {
    // Local variables
    int count; // r29
    int temp; // r1+0x10
    int distance; // r28
    struct explode_t * explode; // r27

    // References
    // -> signed char IconSplash[40][12];
}


