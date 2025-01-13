/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\end.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00052EF0 -> 0x0005AE6C
*/
signed char gameoverShake[90]; // size: 0x5A, address: 0xAFFB8
signed char clearroundShake[81]; // size: 0x51, address: 0xB0014
signed char winwallShake[51]; // size: 0x33, address: 0xB0068
signed char losewallShake[97]; // size: 0x61, address: 0xB009C
signed char wallsdownShake[55]; // size: 0x37, address: 0xB0100
signed char dead1Shake[38]; // size: 0x26, address: 0xB0138
signed char dead2Shake[40]; // size: 0x28, address: 0xB0160
int gMax; // size: 0x4, address: 0xF4EA0
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
// Range: 0x52EF0 -> 0x52FB4
void GameOverSmoke(struct tetWell * well /* r3 */) {
    // Local variables
    int col; // r7
    struct explode_t * explode; // r8

    // References
    // -> int gMax;
}

int gSelection; // size: 0x4, address: 0xF4E94
// Range: 0x52FB4 -> 0x53208
void DeadBlocksShakeOne2D(struct tetWell * well /* r3 */) {
    // Local variables
    int row; // r1+0x0
    int diff; // r1+0x0
    struct_pon_gc_tex_c_9927 * s; // r10

    // References
    // -> int gSelection;
    // -> signed char dead1Shake[38];
}

int gMain; // size: 0x4, address: 0xDF59C
// Range: 0x53208 -> 0x5340C
void AllDeadBlocks(struct tetWell * well /* r3 */) {
    // Local variables
    int row; // r8
    int col; // r9
    struct block_t * block; // r4

    // References
    // -> int gMax;
    // -> int gMain;
}

// Range: 0x5340C -> 0x535E0
void AllDeadFaces(struct tetWell * well /* r3 */) {
    // Local variables
    int row; // r8
    int col; // r9
    struct block_t * block; // r10

    // References
    // -> int gMax;
    // -> int gMain;
}

// Range: 0x535E0 -> 0x5379C
void KillRow2D(struct tetWell * well /* r3 */) {
    // Local variables
    int row; // r1+0x0
    int col; // r1+0x0
    int done; // r1+0x0
    union_pon_gc_c_222 * rect; // r6
    int dist; // r4

    // References
    // -> int gMain;
}

// Range: 0x5379C -> 0x5396C
void KillRow3D(struct tetWell * well /* r30 */) {
    // Local variables
    int row; // r26
    int col; // r25
    struct block_t * bot_block; // r4
    struct block_t * top_block; // r28
    int done; // r31

    // References
    // -> int gMain;
}

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
    union_pon_gc_c_222 rect; // offset 0xE8, size 0x18
    enum pStateEnum pstate; // offset 0x100, size 0x4
    int GameEnd_Value; // offset 0x104, size 0x4
    int AttackWhomLockOnto; // offset 0x108, size 0x4
};
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
    union_pon_gc_c_222 word; // offset 0x0, size 0x18
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
    union_pon_gc_tex_c_17914 sign[4]; // offset 0x10, size 0xA0
    union_pon_gc_tex_c_17914 alpha[4]; // offset 0xB0, size 0xA0
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
    union_pon_gc_tex_c_17914 gBG[200]; // offset 0x193A0, size 0x1F40
    union_pon_gc_tex_c_7332 gTEXT[80]; // offset 0x1B2E0, size 0x780
    union_pon_gc_c_222 gSPRITE[160]; // offset 0x1BA60, size 0xF00
    int currentText; // offset 0x1C960, size 0x4
    struct text_t drawText[70]; // offset 0x1C968, size 0x8C0
    union_pon_gc_tex_c_17914 frame; // offset 0x1D228, size 0x28
    union_pon_gc_tex_c_7332 frameLUT; // offset 0x1D250, size 0x18
    union_pon_gc_c_222 shadeBOX[4]; // offset 0x1D268, size 0x60
    union_pon_gc_tex_c_17914 bkground; // offset 0x1D2C8, size 0x28
    union_pon_gc_tex_c_7332 bkgroundLUT; // offset 0x1D2F0, size 0x18
    union_pon_gc_tex_c_17914 sign[8]; // offset 0x1D308, size 0x140
    union_pon_gc_tex_c_17914 alpha[4]; // offset 0x1D448, size 0xA0
    union_pon_gc_tex_c_7332 signLUT; // offset 0x1D4E8, size 0x18
    int miscToggle; // offset 0x1D500, size 0x4
    union_pon_gc_tex_c_17914 misc[4]; // offset 0x1D508, size 0xA0
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
// Range: 0x5396C -> 0x53B88
void GameOverSign(struct tetWell * well /* r30 */, struct cursor_t * cursor /* r1+0xC */) {
    // Local variables
    int diff; // r31
    int temp; // r1+0x8

    // References
    // -> struct Game gTheGame;
    // -> int gMain;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> signed char gameoverShake[90];
    // -> signed char clearroundShake[81];
    // -> int gSelection;
}

int gWhatever; // size: 0x4, address: 0xF4EB0
// Range: 0x53B88 -> 0x53E4C
int EndingExplosion(struct tetWell * well /* r30 */) {
    // Local variables
    int index; // r4
    int done; // r4
    int stage; // r31
    unsigned char explode_pos[18][2]; // r1+0xC

    // References
    // -> int gWhatever;
    // -> int gSelection;
    // -> struct Game gTheGame;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
}

// Range: 0x53E4C -> 0x540C0
void DeadBlocksShakeTwo2D(struct tetWell * well /* r3 */, int num /* r1+0x4 */) {
    // Local variables
    int row; // r1+0x0
    int diff; // r1+0x0
    int temp; // r7
    struct_pon_gc_tex_c_9927 * s; // r11

    // References
    // -> int gMain;
    // -> struct Game gTheGame;
    // -> signed char dead2Shake[40];
}

// Range: 0x540C0 -> 0x542A4
void ChangeDeadFace(struct tetWell * well /* r3 */) {
    // Local variables
    int row; // r8
    int col; // r9
    int flag; // r10

    // References
    // -> int gMax;
}

// Range: 0x542A4 -> 0x54608
void WinWallUp2D(struct tetWell * well /* r30 */, int num /* r31 */) {
    // Local variables
    int row; // r1+0x8
    int diff; // r1+0x8
    int temp; // r1+0x8
    struct_pon_gc_tex_c_9927 * s; // r9
    int WinWall_Y_Max; // r5

    // References
    // -> struct Game gTheGame;
    // -> int gMain;
    // -> signed char winwallShake[51];
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
}

// Range: 0x54608 -> 0x54964
void LoseWallUp2D(struct tetWell * well /* r30 */, int num /* r31 */) {
    // Local variables
    int row; // r1+0x8
    int diff; // r1+0x8
    struct_pon_gc_tex_c_9927 * s; // r10

    // References
    // -> struct Game gTheGame;
    // -> signed char winwallShake[51];
    // -> int gMain;
    // -> signed char losewallShake[97];
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
}

// Range: 0x54964 -> 0x54A68
void WallsDown2D(struct tetWell * well /* r30 */, int num /* r31 */) {
    // Local variables
    int diff; // r5

    // References
    // -> int gMain;
    // -> struct Game gTheGame;
    // -> signed char wallsdownShake[55];
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
}

// Range: 0x54A68 -> 0x54C5C
void SmallStars() {
    // Local variables
    int i; // r5
    int j; // r12
    int y; // r9
    int total; // r6
    struct_pon_gc_tex_c_9927 * s; // r31
    unsigned char stars_TMEM[4][4]; // r1+0x8

    // References
    // -> struct Game gTheGame;
}

// Range: 0x54C5C -> 0x54E48
void pon_SmallStars4p(struct tetWell * well /* r3 */) {
    // Local variables
    int i; // r5
    int j; // r12
    int y; // r9
    int total; // r6
    struct_pon_gc_tex_c_9927 * s; // r31
    unsigned char stars_TMEM[4][4]; // r1+0xC
}

// Range: 0x54E48 -> 0x550C8
int CircleStars() {
    // Local variables
    int i; // r10
    int j; // r1+0x8
    float y; // r1+0x8
    int total; // r11
    struct tetWell * well; // r1+0x8
    struct_pon_gc_tex_c_9927 * s; // r12
    unsigned char stars_TMEM[4][4]; // r1+0x128
    float gSinTable[36]; // r1+0x98
    float gCosTable[36]; // r1+0x8

    // References
    // -> struct Game gTheGame;
}

long last_song_handle; // size: 0x4, address: 0xF46E8
char * endSegment; // size: 0x4, address: 0xF4560
// Range: 0x550C8 -> 0x55434
int DoGameOverTryAgain() {
    // Local variables
    int * pos; // r31
    unsigned short button; // r1+0x8
    union_pon_gc_tex_c_17914 * bg; // r3

    // References
    // -> struct Game gTheGame;
    // -> char * endSegment;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> long last_song_handle;
}

static int g_winnerNo; // size: 0x4, address: 0x4D030
static int SelectCursorPos; // size: 0x4, address: 0x4D034
// Range: 0x55434 -> 0x55534
int DoGameOverTryNextStage() {
    // Local variables
    unsigned short button; // r1+0x8

    // References
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> long last_song_handle;
    // -> static int SelectCursorPos;
    // -> static int g_winnerNo;
    // -> struct Game gTheGame;
}

static int SelectCursorSaveYesNo; // size: 0x4, address: 0x4D038
static int g_MatchEnd; // size: 0x4, address: 0x4D03C
// Range: 0x55534 -> 0x55674
int DoGameOverSaveYesNo() {
    // Local variables
    unsigned short button; // r1+0x8

    // References
    // -> int gMain;
    // -> struct Game gTheGame;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int SelectCursorSaveYesNo;
    // -> long last_song_handle;
    // -> static int g_winnerNo;
}

unsigned short gGameStatus; // size: 0x2, address: 0xF4E9C
unsigned char st_Combo2[90]; // size: 0x5A, address: 0xF478C
unsigned char st_Chain2[90]; // size: 0x5A, address: 0xF471C
// Range: 0x55674 -> 0x557B8
void EditGameOverStat() {
    // Local variables
    int count; // r6
    int actual; // r7

    // References
    // -> unsigned char st_Chain2[90];
    // -> unsigned char st_Combo2[90];
    // -> unsigned short gGameStatus;
}

unsigned short st_Combo1[7]; // size: 0xE, address: 0xF47C8
unsigned short st_Chain1[9]; // size: 0x12, address: 0xF4778
// Range: 0x557B8 -> 0x55D64
int DoGameOverStat(struct tetWell * well /* r25 */) {
    // Local variables
    int count; // r18
    int which; // r31
    int total; // r30
    int posY; // r29
    char buf[5]; // r1+0xC
    int * pos; // r28
    unsigned short h_button; // r27
    unsigned short t_button; // r26
    struct icon_t * icon; // r19
    union_pon_gc_c_222 * sp; // r8

    // References
    // -> int gMain;
    // -> struct Game gTheGame;
    // -> unsigned short gGameStatus;
    // -> unsigned char st_Chain2[90];
    // -> unsigned short st_Chain1[9];
    // -> unsigned char st_Combo2[90];
    // -> unsigned short st_Combo1[7];
}

int gReset; // size: 0x4, address: 0xDF598
struct player_t * gPlayer[4]; // size: 0x10, address: 0x116F78
int gWorld; // size: 0x4, address: 0xF4E98
// Range: 0x55D64 -> 0x56924
int DoGameOverInput() {
    // Local variables
    int flag; // r1+0x8
    int end; // r31
    struct help_t * help; // r27
    struct tetWell * well; // r1+0x8
    struct cursor_t * cursor; // r1+0x8

    // References
    // -> int gReset;
    // -> int gMain;
    // -> struct Game gTheGame;
    // -> int gSelection;
    // -> unsigned short gGameStatus;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> long last_song_handle;
    // -> static int SelectCursorPos;
    // -> static int g_MatchEnd;
    // -> int gWorld;
    // -> struct player_t * gPlayer[4];
    // -> static int SelectCursorSaveYesNo;
}

union_pon_gc_c_173 * glistp; // size: 0x4, address: 0x50F48
unsigned char tlu_SaveYesNo_1[32]; // size: 0x20, address: 0xABFC8
unsigned char tex_SaveYesNo_1[3072]; // size: 0xC00, address: 0xAB3C8
unsigned char tlu_SaveYesNo_Cursor1[512]; // size: 0x200, address: 0xACFE8
unsigned char tex_SaveYesNo_Cursor1[4096]; // size: 0x1000, address: 0xABFE8
// Range: 0x56924 -> 0x56AE4
void DrawNextStage() {
    // Local variables
    int window_posX; // r29
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> union [anonymous] * glistp;
    // -> static int SelectCursorPos;
    // -> unsigned char tex_SaveYesNo_Cursor1[4096];
    // -> unsigned char tlu_SaveYesNo_Cursor1[512];
    // -> unsigned char tex_SaveYesNo_1[3072];
    // -> unsigned char tlu_SaveYesNo_1[32];
    // -> static int g_winnerNo;
    // -> int gSelection;
}

unsigned char tlu_SaveYesNo_2[32]; // size: 0x20, address: 0xADDE8
unsigned char tex_SaveYesNo_2[3072]; // size: 0xC00, address: 0xAD1E8
unsigned char tlu_SaveYesNo_Cursor2[512]; // size: 0x200, address: 0xAE408
unsigned char tex_SaveYesNo_Cursor2[1536]; // size: 0x600, address: 0xADE08
// Range: 0x56AE4 -> 0x56C8C
void DrawSaveYesNo() {
    // Local variables
    int window_posX; // r29
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> union [anonymous] * glistp;
    // -> static int SelectCursorSaveYesNo;
    // -> unsigned char tex_SaveYesNo_Cursor2[1536];
    // -> unsigned char tlu_SaveYesNo_Cursor2[512];
    // -> unsigned char tex_SaveYesNo_2[3072];
    // -> unsigned char tlu_SaveYesNo_2[32];
    // -> static int g_winnerNo;
    // -> int gSelection;
}

union_pon_gc_tex_c_7332 numberLUT[]; // size: 0x0, address: 0xD0870
union_pon_gc_tex_c_7332 arrowTexture[]; // size: 0x0, address: 0xD4F60
unsigned char alphaG[4]; // size: 0x4, address: 0x17DC
unsigned char alphaR[4]; // size: 0x4, address: 0x17E0
unsigned char alphaB[4]; // size: 0x4, address: 0x17D8
// Range: 0x56C8C -> 0x57288
void Draw2DGameOver(struct_pon_gc_draw_c_2466 * dynamicp /* r30 */) {
    // Local variables
    int count; // r23
    int num; // r23
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
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
    // -> static int g_MatchEnd;
    // -> int gSelection;
    // -> struct Game gTheGame;
    // -> unsigned char alphaB[4];
    // -> unsigned char alphaR[4];
    // -> unsigned char alphaG[4];
    // -> union [anonymous] arrowTexture[];
    // -> union [anonymous] numberLUT[];
}

// Range: 0x57288 -> 0x577C4
void Draw3DGameOver(struct_pon_gc_draw_c_2466 * dynamicp /* r25 */) {
    // Local variables
    int count; // r24
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
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
    // -> static int g_MatchEnd;
    // -> int gSelection;
    // -> struct Game gTheGame;
    // -> union [anonymous] * glistp;
    // -> unsigned char alphaB[4];
    // -> unsigned char alphaR[4];
    // -> unsigned char alphaG[4];
}

// Range: 0x577C4 -> 0x57804
void DrawGameOver(struct_pon_gc_draw_c_2466 * dynamicp /* r3 */) {
    // References
    // -> struct Game gTheGame;
}

struct SongInitStruct {
    // total size: 0x4
    unsigned char bankRef; // offset 0x0, size 0x1
    unsigned char vol; // offset 0x1, size 0x1
    unsigned char pan; // offset 0x2, size 0x1
    unsigned char tempo; // offset 0x3, size 0x1
};
struct SongInitStruct BGM_INIT_TABLE[91]; // size: 0x16C, address: 0xAF7F0
int gOverflow; // size: 0x4, address: 0xF4EA4
// Range: 0x57804 -> 0x59840
void DoGameOver2D() {
    // Local variables
    int count; // r6
    int base; // r1+0x8
    int temp; // r3
    int win1; // r22
    int win2; // r23
    int happy; // r28
    struct tetWell * well1; // r31
    struct tetWell * well2; // r27
    struct cursor_t * cursor1; // r26
    struct cursor_t * cursor2; // r25
    int win[4]; // r1+0x34
    struct tetWell * well[4]; // r1+0x24
    struct cursor_t * cursor[4]; // r1+0x14
    int num; // r1+0x8
    int EvenFlag; // r3
    int WinWallUpOKFlag; // r4

    // References
    // -> struct Game gTheGame;
    // -> int gWhatever;
    // -> int gMain;
    // -> long last_song_handle;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> int gOverflow;
    // -> unsigned short gGameStatus;
    // -> int gSelection;
    // -> signed char wallsdownShake[55];
    // -> static int g_MatchEnd;
    // -> static int g_winnerNo;
    // -> struct SongInitStruct BGM_INIT_TABLE[91];
    // -> static int SelectCursorSaveYesNo;
    // -> static int SelectCursorPos;
}

// Range: 0x59840 -> 0x5AD90
void DoGameOver3D() {
    // Local variables
    int count; // r6
    int temp; // r3
    int win1; // r29
    int win2; // r26
    struct tetWell * well1; // r31
    struct tetWell * well2; // r25
    struct cursor_t * cursor1; // r30
    struct cursor_t * cursor2; // r24

    // References
    // -> struct Game gTheGame;
    // -> int gWhatever;
    // -> int gMain;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> unsigned short gGameStatus;
    // -> signed char wallsdownShake[55];
    // -> signed char dead2Shake[40];
    // -> long last_song_handle;
    // -> static int g_MatchEnd;
    // -> static int g_winnerNo;
    // -> struct SongInitStruct BGM_INIT_TABLE[91];
    // -> int gSelection;
    // -> signed char dead1Shake[38];
    // -> static int SelectCursorSaveYesNo;
    // -> static int SelectCursorPos;
}

// Range: 0x5AD90 -> 0x5ADF8
void DoGameOver() {
    // References
    // -> struct Game gTheGame;
}

// Range: 0x5ADF8 -> 0x5AE6C
void SaveRom() {
    // References
    // -> struct player_t * gPlayer[4];
    // -> int gSelection;
    // -> struct Game gTheGame;
}


