/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\combo3d.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00043604 -> 0x00044554
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
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } rect; // offset 0x30, size 0x18
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
    union {
        union {
            struct {
                // total size: 0x18
                signed short objX; // offset 0x0, size 0x2
                unsigned short scaleW; // offset 0x2, size 0x2
                unsigned short imageW; // offset 0x4, size 0x2
                unsigned short paddingX; // offset 0x6, size 0x2
                signed short objY; // offset 0x8, size 0x2
                unsigned short scaleH; // offset 0xA, size 0x2
                unsigned short imageH; // offset 0xC, size 0x2
                unsigned short paddingY; // offset 0xE, size 0x2
                unsigned short imageStride; // offset 0x10, size 0x2
                unsigned short imageAdrs; // offset 0x12, size 0x2
                unsigned char imageFmt; // offset 0x14, size 0x1
                unsigned char imageSiz; // offset 0x15, size 0x1
                unsigned char imagePal; // offset 0x16, size 0x1
                unsigned char imageFlags; // offset 0x17, size 0x1
            } s; // offset 0x0, size 0x18
            long long force_structure_alignment; // offset 0x0, size 0x8
        } rect; // offset 0x0, size 0x18
        union {
            long m[4][4]; // offset 0x0, size 0x40
            long long force_structure_alignment; // offset 0x0, size 0x8
        } move; // offset 0x0, size 0x40
    } thing; // offset 0x28, size 0x40
};
struct explode_t {
    // total size: 0x30
    int type; // offset 0x0, size 0x4
    int frame; // offset 0x4, size 0x4
    int pos; // offset 0x8, size 0x4
    int x; // offset 0xC, size 0x4
    int y; // offset 0x10, size 0x4
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } rect; // offset 0x18, size 0x18
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
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } block_rect[12][6]; // offset 0x3F10, size 0x6C0
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } new_block_rect[6]; // offset 0x45D0, size 0x90
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } left2D; // offset 0x4660, size 0x18
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } right2D; // offset 0x4678, size 0x18
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
// Range: 0x43604 -> 0x43678
void Compact3DAttackNoWhere(struct tetWell * well /* r29 */) {
    // Local variables
    int count; // r30
}

// Range: 0x43678 -> 0x43F28
void Compact3DAttack(struct tetWell * well /* r31 */, int count /* r1+0xC */) {
    // Local variables
    int lev; // r27
    int row; // r1+0x8
    int col; // r5
    int skip; // r7
    struct block_t * top_block; // r23
    struct block_t * bot_block; // r4
    struct attack_t * attack; // r1+0x8
}

// Range: 0x43F28 -> 0x440A4
void Check3DConnectCombos(struct tetWell * well /* r31 */) {
    // Local variables
    int row; // r29
    int left; // r5
    int right; // r6
    int count; // r7
    int type; // r1+0x8
}

// Range: 0x440A4 -> 0x44500
void Set3DRowConnectState(struct tetWell * well /* r3 */, int row /* r1+0xC */, int left /* r5 */, int right /* r1+0x14 */) {
    // Local variables
    int i; // r1+0x8
    int count; // r1+0x8
    int bomb; // r10
    int sound; // r11
    int kind; // r12
    struct icon_t * icon; // r31
}

// Range: 0x44500 -> 0x44554
int UpdateWell3DRowConnect(struct tetWell * well /* r1+0x0 */, int row /* r1+0x4 */, int * col /* r1+0x8 */) {
    // Local variables
    int temp; // r3
}


