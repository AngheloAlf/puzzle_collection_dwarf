/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\ai.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00011C54 -> 0x00021450
*/
int gSelection; // size: 0x4, address: 0xF4E94
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
    } rect; // offset 0xE8, size 0x18
    enum pStateEnum pstate; // offset 0x100, size 0x4
    int GameEnd_Value; // offset 0x104, size 0x4
    int AttackWhomLockOnto; // offset 0x108, size 0x4
};
struct command_t {
    // total size: 0xC
    int function; // offset 0x0, size 0x4
    int para1; // offset 0x4, size 0x4
    int para2; // offset 0x8, size 0x4
};
struct ai_t {
    // total size: 0x128
    int cursor_x; // offset 0x0, size 0x4
    int cursor_y; // offset 0x4, size 0x4
    int think; // offset 0x8, size 0x4
    int speed; // offset 0xC, size 0x4
    int delay; // offset 0x10, size 0x4
    unsigned char character; // offset 0x14, size 0x1
    signed char choice; // offset 0x15, size 0x1
    int step; // offset 0x18, size 0x4
    int chain; // offset 0x1C, size 0x4
    int garbage; // offset 0x20, size 0x4
    int t; // offset 0x24, size 0x4
    int b; // offset 0x28, size 0x4
    int l; // offset 0x2C, size 0x4
    int r; // offset 0x30, size 0x4
    int direction; // offset 0x34, size 0x4
    int where; // offset 0x38, size 0x4
    int from; // offset 0x3C, size 0x4
    int to; // offset 0x40, size 0x4
    struct command_t command[15]; // offset 0x44, size 0xB4
    int com_head; // offset 0xF8, size 0x4
    int com_tail; // offset 0xFC, size 0x4
    int total_command; // offset 0x100, size 0x4
    char move[25]; // offset 0x104, size 0x19
    int move_head; // offset 0x120, size 0x4
    int move_tail; // offset 0x124, size 0x4
};
// Range: 0x11C54 -> 0x11E18
void InitAI(struct tetWell * well /* r28 */, struct cursor_t * cursor /* r29 */, struct ai_t * brain /* r30 */) {
    // Local variables
    int count; // r4

    // References
    // -> int gSelection;
}

// Range: 0x11E18 -> 0x11F20
void AISetSHard(struct ai_t * brain /* r30 */, int stage /* r31 */) {
    // Local variables
    unsigned char characteristic[15]; // r1+0x10
}

// Range: 0x11F20 -> 0x11FE8
void AISetUltra(struct ai_t * brain /* r30 */, int stage /* r31 */) {
    // Local variables
    unsigned char characteristic[15]; // r1+0x10
}

// Range: 0x11FE8 -> 0x120C8
void AISetCharacter(struct ai_t * brain /* r1+0x0 */, int stage /* r1+0x4 */) {}

// Range: 0x120C8 -> 0x122A4
void AISetLevel(struct ai_t * brain /* r30 */, int game /* r1+0xC */, int stage /* r31 */) {}

// Range: 0x122A4 -> 0x122B8
void AISetCursor(struct cursor_t * cursor /* r1+0x4 */, struct ai_t * brain /* r1+0x8 */) {}

// Range: 0x122B8 -> 0x12358
void AIChangeVision(struct ai_t * brain /* r31 */) {
    // Local variables
    int temp; // r1+0x8
}

// Range: 0x12358 -> 0x12478
void AISetGarbage(struct tetWell * well /* r28 */, struct cursor_t * cursor /* r29 */, struct ai_t * brain /* r30 */) {
    // Local variables
    int lowest; // r4
}

// Range: 0x12478 -> 0x12524
void AIAddCommand(struct ai_t * brain /* r28 */, int func /* r29 */, int para1 /* r30 */, int para2 /* r31 */) {
    // Local variables
    struct command_t * command; // r3
}

// Range: 0x12524 -> 0x125A0
void AISetMove(struct ai_t * brain /* r30 */, int move /* r31 */) {}

// Range: 0x125A0 -> 0x12600
void AIFinishMove(struct ai_t * brain /* r31 */) {}

// Range: 0x12600 -> 0x126A0
void AIClearCommand(struct ai_t * brain /* r30 */) {}

// Range: 0x126A0 -> 0x12914
int AIRowPack(struct ai_t * brain /* r29 */, int pos1 /* r25 */, int pos2 /* r28 */) {
    // Local variables
    int count; // r1+0x8
    int left; // r1+0x8
    int right; // r1+0x8
    int temp; // r26
    int move; // r1+0x8
}

// Range: 0x12914 -> 0x12A3C
int AIVertMove(struct ai_t * brain /* r27 */, int row /* r28 */) {
    // Local variables
    int temp; // r28
    int count; // r1+0x8
}

struct gamepad_t {
    // total size: 0x10
    int position; // offset 0x0, size 0x4
    unsigned short touch_button; // offset 0x4, size 0x2
    unsigned short hold_button; // offset 0x6, size 0x2
    int hold; // offset 0x8, size 0x4
    unsigned short cont_button; // offset 0xC, size 0x2
    unsigned short button; // offset 0xE, size 0x2
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
struct action_t {
    // total size: 0xC
    int current_flic; // offset 0x0, size 0x4
    int posX; // offset 0x4, size 0x4
    int posY; // offset 0x8, size 0x4
};
struct text_t {
    // total size: 0x20
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
    } word; // offset 0x0, size 0x18
    int texture; // offset 0x18, size 0x4
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
    union {
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short tmemW; // offset 0x1C, size 0x2
            unsigned short tmemH; // offset 0x1E, size 0x2
            unsigned short tmemLoadSH; // offset 0x20, size 0x2
            unsigned short tmemLoadTH; // offset 0x22, size 0x2
            unsigned short tmemSizeW; // offset 0x24, size 0x2
            unsigned short tmemSize; // offset 0x26, size 0x2
        } b; // offset 0x0, size 0x28
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short scaleW; // offset 0x1C, size 0x2
            unsigned short scaleH; // offset 0x1E, size 0x2
            long imageYorig; // offset 0x20, size 0x4
            unsigned char padding[4]; // offset 0x24, size 0x4
        } s; // offset 0x0, size 0x28
        long long force_structure_alignment; // offset 0x0, size 0x8
    } sign[4]; // offset 0x10, size 0xA0
    union {
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short tmemW; // offset 0x1C, size 0x2
            unsigned short tmemH; // offset 0x1E, size 0x2
            unsigned short tmemLoadSH; // offset 0x20, size 0x2
            unsigned short tmemLoadTH; // offset 0x22, size 0x2
            unsigned short tmemSizeW; // offset 0x24, size 0x2
            unsigned short tmemSize; // offset 0x26, size 0x2
        } b; // offset 0x0, size 0x28
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short scaleW; // offset 0x1C, size 0x2
            unsigned short scaleH; // offset 0x1E, size 0x2
            long imageYorig; // offset 0x20, size 0x4
            unsigned char padding[4]; // offset 0x24, size 0x4
        } s; // offset 0x0, size 0x28
        long long force_structure_alignment; // offset 0x0, size 0x8
    } alpha[4]; // offset 0xB0, size 0xA0
    union {
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short tsize; // offset 0xA, size 0x2
            unsigned short tline; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } block; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short twidth; // offset 0xA, size 0x2
            unsigned short theight; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tile; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short phead; // offset 0x8, size 0x2
            unsigned short pnum; // offset 0xA, size 0x2
            unsigned short zero; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tlut; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } signLUT; // offset 0x150, size 0x18
};
struct Game {
    // total size: 0x21C08
    struct tetWell tetrisWell[4]; // offset 0x0, size 0x15F00
    struct cursor_t cursorBlock[4]; // offset 0x15F00, size 0x440
    struct gamepad_t controller[4]; // offset 0x16340, size 0x40
    struct flic_t flic[340]; // offset 0x16380, size 0x2A80
    struct action_t action[40]; // offset 0x18E00, size 0x1E0
    union {
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short tsize; // offset 0xA, size 0x2
            unsigned short tline; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } block; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short twidth; // offset 0xA, size 0x2
            unsigned short theight; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tile; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short phead; // offset 0x8, size 0x2
            unsigned short pnum; // offset 0xA, size 0x2
            unsigned short zero; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tlut; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } gLUT[40]; // offset 0x18FE0, size 0x3C0
    union {
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short tmemW; // offset 0x1C, size 0x2
            unsigned short tmemH; // offset 0x1E, size 0x2
            unsigned short tmemLoadSH; // offset 0x20, size 0x2
            unsigned short tmemLoadTH; // offset 0x22, size 0x2
            unsigned short tmemSizeW; // offset 0x24, size 0x2
            unsigned short tmemSize; // offset 0x26, size 0x2
        } b; // offset 0x0, size 0x28
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short scaleW; // offset 0x1C, size 0x2
            unsigned short scaleH; // offset 0x1E, size 0x2
            long imageYorig; // offset 0x20, size 0x4
            unsigned char padding[4]; // offset 0x24, size 0x4
        } s; // offset 0x0, size 0x28
        long long force_structure_alignment; // offset 0x0, size 0x8
    } gBG[200]; // offset 0x193A0, size 0x1F40
    union {
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short tsize; // offset 0xA, size 0x2
            unsigned short tline; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } block; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short twidth; // offset 0xA, size 0x2
            unsigned short theight; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tile; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short phead; // offset 0x8, size 0x2
            unsigned short pnum; // offset 0xA, size 0x2
            unsigned short zero; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tlut; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } gTEXT[80]; // offset 0x1B2E0, size 0x780
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
    } gSPRITE[160]; // offset 0x1BA60, size 0xF00
    int currentText; // offset 0x1C960, size 0x4
    struct text_t drawText[70]; // offset 0x1C968, size 0x8C0
    union {
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short tmemW; // offset 0x1C, size 0x2
            unsigned short tmemH; // offset 0x1E, size 0x2
            unsigned short tmemLoadSH; // offset 0x20, size 0x2
            unsigned short tmemLoadTH; // offset 0x22, size 0x2
            unsigned short tmemSizeW; // offset 0x24, size 0x2
            unsigned short tmemSize; // offset 0x26, size 0x2
        } b; // offset 0x0, size 0x28
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short scaleW; // offset 0x1C, size 0x2
            unsigned short scaleH; // offset 0x1E, size 0x2
            long imageYorig; // offset 0x20, size 0x4
            unsigned char padding[4]; // offset 0x24, size 0x4
        } s; // offset 0x0, size 0x28
        long long force_structure_alignment; // offset 0x0, size 0x8
    } frame; // offset 0x1D228, size 0x28
    union {
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short tsize; // offset 0xA, size 0x2
            unsigned short tline; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } block; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short twidth; // offset 0xA, size 0x2
            unsigned short theight; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tile; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short phead; // offset 0x8, size 0x2
            unsigned short pnum; // offset 0xA, size 0x2
            unsigned short zero; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tlut; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } frameLUT; // offset 0x1D250, size 0x18
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
    } shadeBOX[4]; // offset 0x1D268, size 0x60
    union {
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short tmemW; // offset 0x1C, size 0x2
            unsigned short tmemH; // offset 0x1E, size 0x2
            unsigned short tmemLoadSH; // offset 0x20, size 0x2
            unsigned short tmemLoadTH; // offset 0x22, size 0x2
            unsigned short tmemSizeW; // offset 0x24, size 0x2
            unsigned short tmemSize; // offset 0x26, size 0x2
        } b; // offset 0x0, size 0x28
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short scaleW; // offset 0x1C, size 0x2
            unsigned short scaleH; // offset 0x1E, size 0x2
            long imageYorig; // offset 0x20, size 0x4
            unsigned char padding[4]; // offset 0x24, size 0x4
        } s; // offset 0x0, size 0x28
        long long force_structure_alignment; // offset 0x0, size 0x8
    } bkground; // offset 0x1D2C8, size 0x28
    union {
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short tsize; // offset 0xA, size 0x2
            unsigned short tline; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } block; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short twidth; // offset 0xA, size 0x2
            unsigned short theight; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tile; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short phead; // offset 0x8, size 0x2
            unsigned short pnum; // offset 0xA, size 0x2
            unsigned short zero; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tlut; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } bkgroundLUT; // offset 0x1D2F0, size 0x18
    union {
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short tmemW; // offset 0x1C, size 0x2
            unsigned short tmemH; // offset 0x1E, size 0x2
            unsigned short tmemLoadSH; // offset 0x20, size 0x2
            unsigned short tmemLoadTH; // offset 0x22, size 0x2
            unsigned short tmemSizeW; // offset 0x24, size 0x2
            unsigned short tmemSize; // offset 0x26, size 0x2
        } b; // offset 0x0, size 0x28
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short scaleW; // offset 0x1C, size 0x2
            unsigned short scaleH; // offset 0x1E, size 0x2
            long imageYorig; // offset 0x20, size 0x4
            unsigned char padding[4]; // offset 0x24, size 0x4
        } s; // offset 0x0, size 0x28
        long long force_structure_alignment; // offset 0x0, size 0x8
    } sign[8]; // offset 0x1D308, size 0x140
    union {
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short tmemW; // offset 0x1C, size 0x2
            unsigned short tmemH; // offset 0x1E, size 0x2
            unsigned short tmemLoadSH; // offset 0x20, size 0x2
            unsigned short tmemLoadTH; // offset 0x22, size 0x2
            unsigned short tmemSizeW; // offset 0x24, size 0x2
            unsigned short tmemSize; // offset 0x26, size 0x2
        } b; // offset 0x0, size 0x28
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short scaleW; // offset 0x1C, size 0x2
            unsigned short scaleH; // offset 0x1E, size 0x2
            long imageYorig; // offset 0x20, size 0x4
            unsigned char padding[4]; // offset 0x24, size 0x4
        } s; // offset 0x0, size 0x28
        long long force_structure_alignment; // offset 0x0, size 0x8
    } alpha[4]; // offset 0x1D448, size 0xA0
    union {
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short tsize; // offset 0xA, size 0x2
            unsigned short tline; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } block; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short twidth; // offset 0xA, size 0x2
            unsigned short theight; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tile; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short phead; // offset 0x8, size 0x2
            unsigned short pnum; // offset 0xA, size 0x2
            unsigned short zero; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tlut; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } signLUT; // offset 0x1D4E8, size 0x18
    int miscToggle; // offset 0x1D500, size 0x4
    union {
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short tmemW; // offset 0x1C, size 0x2
            unsigned short tmemH; // offset 0x1E, size 0x2
            unsigned short tmemLoadSH; // offset 0x20, size 0x2
            unsigned short tmemLoadTH; // offset 0x22, size 0x2
            unsigned short tmemSizeW; // offset 0x24, size 0x2
            unsigned short tmemSize; // offset 0x26, size 0x2
        } b; // offset 0x0, size 0x28
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short scaleW; // offset 0x1C, size 0x2
            unsigned short scaleH; // offset 0x1E, size 0x2
            long imageYorig; // offset 0x20, size 0x4
            unsigned char padding[4]; // offset 0x24, size 0x4
        } s; // offset 0x0, size 0x28
        long long force_structure_alignment; // offset 0x0, size 0x8
    } misc[4]; // offset 0x1D508, size 0xA0
    union {
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short tsize; // offset 0xA, size 0x2
            unsigned short tline; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } block; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short twidth; // offset 0xA, size 0x2
            unsigned short theight; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tile; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short phead; // offset 0x8, size 0x2
            unsigned short pnum; // offset 0xA, size 0x2
            unsigned short zero; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tlut; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } miscLUT[4]; // offset 0x1D5A8, size 0x60
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
// Range: 0x12A3C -> 0x12B98
int AIHoriMove(struct ai_t * brain /* r31 */, int column /* r27 */) {
    // Local variables
    int temp; // r27
    int count; // r1+0x8

    // References
    // -> struct Game gTheGame;
}

// Range: 0x12B98 -> 0x12D9C
int AIHoriMoveBlock(struct ai_t * brain /* r29 */, int from /* r26 */, int to /* r25 */) {
    // Local variables
    int temp; // r1+0x8
    int move1; // r27
    int count1; // r26
    int move2; // r25
    int count2; // r30
}

// Range: 0x12D9C -> 0x13214
int AIHoriMoveCheckCheck(struct tetWell * well /* r29 */, struct ai_t * brain /* r30 */, int from /* r27 */, int to /* r28 */) {
    // Local variables
    int row; // r1+0x8
    int col; // r3
    int count; // r7
    int total; // r8
    int type; // r1+0x8
}

// Range: 0x13214 -> 0x13398
int AIMoveAcross(struct tetWell * well /* r29 */, int row /* r27 */, int from /* r28 */, int to /* r30 */) {
    // Local variables
    int flag; // r31
    int below; // r1+0x8
    int col; // r6
}

// Range: 0x13398 -> 0x13538
int AIShortestD(struct tetWell * well /* r27 */, struct ai_t * brain /* r28 */, int from /* r25 */, int to /* r29 */) {
    // Local variables
    int col; // r7
    int left; // r31
    int right; // r30
    int type; // r1+0x8
}

// Range: 0x13538 -> 0x136F8
void AISortRows(int row /* r28 */, int total /* r29 */, int * array /* r30 */) {
    // Local variables
    int index[12]; // r1+0x18
    int dist; // r6
    int temp; // r1+0x8
    int save; // r31
    int i; // r7
    int j; // r8
}

int AItotCheck[7]; // size: 0x1C, address: 0x15F8
// Range: 0x136F8 -> 0x13BF4
int AILowerRow(struct tetWell * well /* r24 */, struct ai_t * brain /* r25 */, int row /* r26 */, int col /* r27 */) {
    // Local variables
    int below; // r28
    int empty; // r29

    // References
    // -> int AItotCheck[7];
}

int AIrowCheck[7][5]; // size: 0x8C, address: 0x1614
int AIcolCheck[7][5]; // size: 0x8C, address: 0x16A0
int AIdistance[8]; // size: 0x20, address: 0x172C
// Range: 0x13BF4 -> 0x13DE4
void AIBoundaryCheck(struct tetWell * well /* r29 */, struct ai_t * brain /* r30 */) {
    // Local variables
    int i; // r9
    int j; // r25
    int row; // r10
    int col; // r11
    int limit; // r1+0x8
    int index; // r8
    int * total; // r1+0x8
    int type; // r1+0x8

    // References
    // -> int AIcolCheck[7][5];
    // -> int AIrowCheck[7][5];
    // -> int AItotCheck[7];
}

int gCounter; // size: 0x4, address: 0xF4E80
// Range: 0x13DE4 -> 0x14114
int AIPossibleRow(struct tetWell * well /* r30 */, struct ai_t * brain /* r28 */, int row /* r29 */) {
    // Local variables
    int count; // r6
    int pos; // r7
    int first; // r31
    int second; // r30
    int third; // r29
    int type; // r8

    // References
    // -> int gCounter;
}

// Range: 0x14114 -> 0x14D78
int AIPossibleCol(struct tetWell * well /* r23 */, struct ai_t * brain /* r24 */) {
    // Local variables
    int row; // r17
    int col; // r15
    int left; // r31
    int right; // r30
    int index; // r29
    int from; // r28
    int to; // r27
    int count; // r26
    int total; // r25
    int type; // r1+0x8

    // References
    // -> int AIrowCheck[7][5];
    // -> int AIcolCheck[7][5];
}

// Range: 0x14D78 -> 0x151E4
void AIComboCheck(struct tetWell * well /* r27 */, struct ai_t * brain /* r28 */) {
    // Local variables
    int shortest; // r14
    int from; // r16
    int to; // r1+0x8
    int at; // r1+0x8
    int count; // r4
    int total; // r1+0x8
    int type; // r22
    int temp; // r3
    int array[12]; // r1+0x20

    // References
    // -> int AIdistance[8];
    // -> int AIcolCheck[7][5];
    // -> int AIrowCheck[7][5];
    // -> int AItotCheck[7];
}

// Range: 0x151E4 -> 0x153AC
int AICombo3a(struct ai_t * brain /* r25 */) {
    // Local variables
    int row; // r1+0x8
    int col; // r26
    int from; // r1+0x8
    int temp; // r1+0x8
    int type; // r1+0x8
    int array[12]; // r1+0xC

    // References
    // -> int AIcolCheck[7][5];
    // -> int AIrowCheck[7][5];
    // -> int AItotCheck[7];
    // -> int AIdistance[8];
}

// Range: 0x153AC -> 0x1557C
int AICombo3b(struct ai_t * brain /* r25 */) {
    // Local variables
    int row; // r1+0x8
    int col; // r27
    int temp; // r26
    int type; // r4
    int array[12]; // r1+0x14

    // References
    // -> int AIcolCheck[7][5];
    // -> int AIrowCheck[7][5];
    // -> int AItotCheck[7];
}

// Range: 0x1557C -> 0x15974
int AICombo45(struct ai_t * brain /* r30 */, int combo /* r31 */) {
    // Local variables
    int row; // r1+0x8
    int col; // r21
    int temp; // r6
    int type; // r21
    int array[12]; // r1+0x14

    // References
    // -> int AIrowCheck[7][5];
    // -> int AIcolCheck[7][5];
    // -> int AItotCheck[7];
}

// Range: 0x15974 -> 0x15B20
int AIComboX(struct ai_t * brain /* r26 */) {
    // Local variables
    int row; // r1+0x8
    int col; // r28
    int temp; // r27
    int array[12]; // r1+0x14

    // References
    // -> int AIcolCheck[7][5];
    // -> int AIrowCheck[7][5];
    // -> int AItotCheck[7];
}

// Range: 0x15B20 -> 0x15D4C
int AIFlashCheck(struct tetWell * well /* r27 */, struct ai_t * brain /* r28 */) {
    // Local variables
    int temp1; // r31
    int temp2; // r30
    int row; // r6
    int col; // r29
}

// Range: 0x15D4C -> 0x15ECC
int AIScrollCheck(struct tetWell * well /* r27 */, struct ai_t * brain /* r28 */, signed char * array /* r29 */) {
    // Local variables
    int row; // r1+0x8
    int col; // r8
    int count; // r9
    int total; // r31
    int highest; // r30
    struct block_t * block; // r10
}

// Range: 0x15ECC -> 0x168E0
int AIVolumeCheck(struct tetWell * well /* r25 */, struct cursor_t * cursor /* r29 */, struct ai_t * brain /* r26 */, int exit /* r27 */) {
    // Local variables
    signed char column[6]; // r1+0x18
    int row; // r28
    int col; // r1+0x8
    int highest; // r4
    int count; // r1+0x8
    int left; // r30
    int right; // r27
    int total; // r1+0x8
}

int chain_check[4]; // size: 0x10, address: 0x1750
// Range: 0x168E0 -> 0x16F2C
int AIChainVert1(struct tetWell * well /* r26 */, struct ai_t * brain /* r31 */) {
    // Local variables
    int row; // r24
    int col; // r1+0x8
    int index; // r4
    int from; // r17
    int to; // r23
    int count; // r16
    int temp; // r6
    int top; // r21
    int * total; // r1+0x8
    int slide; // r18
    int array[4]; // r1+0x10
    int type; // r25

    // References
    // -> int AIcolCheck[7][5];
    // -> int AIrowCheck[7][5];
    // -> int AItotCheck[7];
}

// Range: 0x16F2C -> 0x1746C
int AIChainVert2(struct tetWell * well /* r24 */, struct ai_t * brain /* r31 */) {
    // Local variables
    int row; // r29
    int col; // r30
    int from; // r1+0x28
    int to; // r21
    int left; // r22
    int right; // r23
    int top; // r14
    int temp; // r23
    int type; // r24
    int array[5]; // r1+0x10

    // References
    // -> int AIrowCheck[7][5];
    // -> int AIcolCheck[7][5];
    // -> int AItotCheck[7];
}

// Range: 0x1746C -> 0x17894
int AIChainVert3(struct tetWell * well /* r23 */, struct ai_t * brain /* r24 */, int type /* r25 */, int slide /* r22 */) {
    // Local variables
    int row; // r28
    int col; // r22
    int temp; // r27
    int stop; // r26
}

// Range: 0x17894 -> 0x18A60
int AIChainVert4(struct tetWell * well /* r24 */, struct ai_t * brain /* r25 */) {
    // Local variables
    int row; // r1+0x8
    int col; // r1+0x8
    int left; // r28
    int right; // r27
    int index; // r3
    int count; // r26
    int type; // r1+0x8
    int * total; // r1+0x8

    // References
    // -> int AIcolCheck[7][5];
    // -> int AIrowCheck[7][5];
    // -> int AItotCheck[7];
}

// Range: 0x18A60 -> 0x19F3C
int AIChainVert5(struct tetWell * well /* r27 */, struct ai_t * brain /* r28 */) {
    // Local variables
    int row; // r5
    int col; // r1+0x8
    int left; // r31
    int right; // r30
    int index; // r3
    int count; // r29
    int type; // r1+0x8
    int * total; // r1+0x8

    // References
    // -> int AIcolCheck[7][5];
    // -> int AIrowCheck[7][5];
    // -> int AItotCheck[7];
}

// Range: 0x19F3C -> 0x1A4DC
int AIChainHori1(struct tetWell * well /* r23 */, struct ai_t * brain /* r31 */) {
    // Local variables
    int row; // r10
    int col; // r11
    int from; // r7
    int to; // r8
    int index; // r10
    int count; // r9
    int temp; // r6
    int * total; // r1+0x8
    int array[4]; // r1+0x10
    int type; // r1+0x8

    // References
    // -> int AIcolCheck[7][5];
    // -> int AIrowCheck[7][5];
    // -> int AItotCheck[7];
}

// Range: 0x1A4DC -> 0x1B33C
int AIChainHori2(struct tetWell * well /* r28 */, struct ai_t * brain /* r29 */) {
    // Local variables
    int row; // r1+0x8
    int col; // r12
    int temp; // r7
    int left; // r5
    int right; // r6
    int top; // r31
    int target; // r7
    int flag; // r30
    int type; // r21
    signed char same[6]; // r1+0x20
    int array[4]; // r1+0x10

    // References
    // -> int AIrowCheck[7][5];
    // -> int AIcolCheck[7][5];
    // -> int AItotCheck[7];
}

// Range: 0x1B33C -> 0x1C440
int AIChainHori3(struct tetWell * well /* r27 */, struct ai_t * brain /* r25 */) {
    // Local variables
    int row; // r29
    int col; // r7
    int type; // r5
    int left; // r28
    int right; // r27
    int empty; // r9
    int only; // r26
}

// Range: 0x1C440 -> 0x1D268
int AIChainHori4(struct tetWell * well /* r24 */, struct ai_t * brain /* r25 */) {
    // Local variables
    int row; // r1+0x8
    int col; // r6
    int count; // r9
    int alone; // r29
    int up; // r28
    int left; // r27
    int right; // r26
    int type; // r1+0x8
    int array[18]; // r1+0x20
}

// Range: 0x1D268 -> 0x1DECC
int AIChainHori5(struct tetWell * well /* r27 */, struct ai_t * brain /* r28 */) {
    // Local variables
    int row; // r1+0x8
    int col; // r6
    int count; // r21
    int type; // r4
    int left; // r5
    int right; // r6
    int l; // r31
    int r; // r30
    int up; // r29
    int array[18]; // r1+0x10

    // References
    // -> int AIcolCheck[7][5];
    // -> int AIrowCheck[7][5];
    // -> int AItotCheck[7];
}

// Range: 0x1DECC -> 0x1E510
int AIClearGarbage(struct tetWell * well /* r30 */, struct cursor_t * cursor /* r16 */, struct ai_t * brain /* r31 */) {
    // Local variables
    int row; // r16
    int col; // r1+0x8
    int index; // r4
    int count; // r17
    int temp; // r16
    struct block_t * block; // r1+0x8
    int type; // r1+0x8
    int * total; // r1+0x8
    int array[3]; // r1+0x1C

    // References
    // -> int AIrowCheck[7][5];
    // -> int AIcolCheck[7][5];
    // -> int AItotCheck[7];
}

// Range: 0x1E510 -> 0x1E94C
int AIClearPosition(struct tetWell * well /* r30 */, struct ai_t * brain /* r27 */, int row /* r28 */, int col /* r29 */) {
    // Local variables
    int check; // r30
}

// Range: 0x1E94C -> 0x1ED20
int AIChainPack(struct tetWell * well /* r28 */, struct cursor_t * cursor /* r24 */, struct ai_t * brain /* r29 */) {
    // Local variables
    int row; // r6
    int col; // r7
    int start; // r5
    int top; // r30
    int type; // r25

    // References
    // -> int AItotCheck[7];
}

// Range: 0x1ED20 -> 0x1F490
int AIChainGarbage1(struct tetWell * well /* r25 */, struct cursor_t * cursor /* r16 */, struct ai_t * brain /* r21 */) {
    // Local variables
    int row; // r3
    int col; // r8
    int total; // r4
    int align; // r18
    int check; // r31
    int temp; // r1+0x8
    int type; // r1+0x8
    int array[2]; // r1+0x18
    int top; // r14

    // References
    // -> int AIrowCheck[7][5];
    // -> int AItotCheck[7];
    // -> int AIcolCheck[7][5];
}

// Range: 0x1F490 -> 0x1F6F8
int AIChainGarbage2(struct tetWell * well /* r27 */, struct ai_t * brain /* r28 */, int below /* r25 */, int col /* r29 */) {
    // Local variables
    int type; // r1+0x8
    int row; // r1+0x8
    int temp; // r6

    // References
    // -> int AIcolCheck[7][5];
    // -> int AIrowCheck[7][5];
    // -> int AItotCheck[7];
}

// Range: 0x1F6F8 -> 0x1FB04
int AIStupidMove(struct tetWell * well /* r28 */, struct ai_t * brain /* r30 */) {
    // Local variables
    int y; // r29
    int row; // r1+0x8
    int highest; // r4
}

// Range: 0x1FB04 -> 0x208F0
void UpdateAI(struct tetWell * well /* r31 */, struct cursor_t * cursor /* r28 */, struct ai_t * brain /* r25 */, int num /* r24 */) {
    // Local variables
    int temp; // r27
    int limit; // r26
    struct command_t * command; // r1+0x8
    struct command_t * next_command; // r1+0x8
    int flash; // r1+0x8
    int chain; // r26
    int pass; // r27

    // References
    // -> int AIdistance[8];
    // -> int AItotCheck[7];
    // -> int AIcolCheck[7][5];
    // -> int AIrowCheck[7][5];
    // -> int chain_check[4];
}

int gMain; // size: 0x4, address: 0xDF59C
unsigned short gGameStatus; // size: 0x2, address: 0xF4E9C
long last_song_handle; // size: 0x4, address: 0xF46E8
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
// Range: 0x208F0 -> 0x20C54
void AIMove(struct tetWell * well /* r26 */, struct cursor_t * cursor /* r27 */, struct ai_t * brain /* r28 */, int num /* r29 */) {
    // References
    // -> struct Game gTheGame;
    // -> int gMain;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> long last_song_handle;
    // -> unsigned short gGameStatus;
    // -> int gSelection;
}

// Range: 0x20C54 -> 0x210A0
void AI2DMove(struct tetWell * well /* r27 */, struct cursor_t * cursor /* r25 */, struct ai_t * brain /* r31 */, int num /* r28 */) {
    // Local variables
    int sound; // r30
    int flag; // r29

    // References
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> struct Game gTheGame;
}

// Range: 0x210A0 -> 0x21370
void AI3DMove(struct tetWell * well /* r27 */, struct cursor_t * cursor /* r25 */, struct ai_t * brain /* r28 */, int num /* r29 */) {
    // Local variables
    int sound; // r31
    int flag; // r30

    // References
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> struct Game gTheGame;
}

// Range: 0x21370 -> 0x21450
void AISpeedUpMove(struct ai_t * brain /* r31 */) {
    // Local variables
    int count; // r4
    char * move; // r1+0x8
}


