/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\attack3d.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x000391D0 -> 0x0003AB70
*/
char st_AttackPosition[4]; // size: 0x4, address: 0xF4718
// Range: 0x391D0 -> 0x39468
void Init3DAttackPosition(struct attack_t * attack /* r3 */, int type /* r1+0xC */, int num /* r1+0x10 */) {
    // Local variables
    char pattern; // r1+0x8
    uObjSprite_t * s; // r6

    // References
    // -> char st_AttackPosition[4];
}

// Range: 0x39468 -> 0x394F0
void Set3DRingPosition(struct attack_t * attack /* r1+0x0 */) {}

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
// Range: 0x394F0 -> 0x395E4
void Upgrade3DBrick(struct tetWell * well /* r1+0x8 */, int slot /* r1+0xC */, int num /* r5 */) {
    // Local variables
    struct attack_t * attack; // r31
}

// Range: 0x395E4 -> 0x39678
void Draw3DChain3_CrossBoundary(struct attack_t * attack /* r1+0x0 */, int * begin /* r1+0x4 */, int * end /* r1+0x8 */, int * pos /* r1+0xC */) {}

int st_Attack3DTopPosition[4][6]; // size: 0x60, address: 0xB75E8
struct SfxInitStruct {
    // total size: 0x10
    unsigned char bankRef; // offset 0x0, size 0x1
    signed short sfxRef; // offset 0x2, size 0x2
    unsigned char vol; // offset 0x4, size 0x1
    unsigned char pan; // offset 0x5, size 0x1
    unsigned char priority; // offset 0x6, size 0x1
    float pitch; // offset 0x8, size 0x4
    unsigned char pan_4p[4]; // offset 0xC, size 0x4
};
struct SfxInitStruct SFX_INIT_TABLE[527]; // size: 0x20F0, address: 0xE0D78
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
// Range: 0x39678 -> 0x39994
void Update3DAttack(struct tetWell * well /* r23 */, struct cursor_t * cursor /* r24 */, int num /* r25 */) {
    // Local variables
    int count; // r7
    int drop; // r27
    int sound; // r1+0x1C
    int upgrade; // r26
    char position[5]; // r1+0x14
    struct attack_t * attack; // r4

    // References
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> int st_Attack3DTopPosition[4][6];
}

// Range: 0x39994 -> 0x39DE8
void Check3DSameAttack(struct tetWell * well /* r28 */, struct cursor_t * cursor /* r29 */, int row /* r5 */, int col /* r25 */, int flag /* r30 */) {
    // Local variables
    int count; // r1+0x8
    int temp; // r3
    int lev; // r24
    int check; // r24
    struct attack_t * attack; // r31
}

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
// Range: 0x39DE8 -> 0x39FE4
void Sync3DAttack(struct tetWell * well /* r26 */, struct cursor_t * cursor /* r4 */) {
    // Local variables
    int i; // r1+0x8
    int j; // r5
    int total; // r27
    int index[43]; // r1+0x60
    struct attack_t temp; // r1+0x10
    struct attack_t * attack1; // r24
    struct attack_t * attack2; // r23
}

// Range: 0x39FE4 -> 0x3AB70
void Change3DAttack(struct tetWell * well /* r29 */, struct cursor_t * cursor /* r23 */, int num /* r17 */, int combo /* r1+0x14 */) {
    // Local variables
    int count; // r1+0x8
    int temp; // r1+0x8
    int lev; // r28
    int row; // r5
    int col; // r30
    int flash; // r8
    int face; // r9
    int explode; // r18
    int wait; // r22
    int total; // r21
    int flag; // r3
    int type; // r1+0x8
    struct block_t * block; // r27
    struct attack_t * attack; // r3
    int out; // r5
    int check[5]; // r1+0x2C
}


