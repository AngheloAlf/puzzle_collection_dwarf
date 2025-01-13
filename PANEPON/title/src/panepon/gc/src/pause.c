/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\pause.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0007E61C -> 0x0007FBA0
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
    union_pon_gc_c_1 rect; // offset 0x30, size 0x18
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
    union_pon_gc_c_2 thing; // offset 0x28, size 0x40
};
struct explode_t {
    // total size: 0x30
    int type; // offset 0x0, size 0x4
    int frame; // offset 0x4, size 0x4
    int pos; // offset 0x8, size 0x4
    int x; // offset 0xC, size 0x4
    int y; // offset 0x10, size 0x4
    union_pon_gc_c_1 rect; // offset 0x18, size 0x18
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
    union_pon_gc_c_1 block_rect[12][6]; // offset 0x3F10, size 0x6C0
    union_pon_gc_c_1 new_block_rect[6]; // offset 0x45D0, size 0x90
    union_pon_gc_c_1 left2D; // offset 0x4660, size 0x18
    union_pon_gc_c_1 right2D; // offset 0x4678, size 0x18
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
    union_pon_gc_c_1 rect; // offset 0xE8, size 0x18
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
    union_pon_gc_c_1 word; // offset 0x0, size 0x18
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
    union_pon_gc_tex_c_12 sign[4]; // offset 0x10, size 0xA0
    union_pon_gc_tex_c_12 alpha[4]; // offset 0xB0, size 0xA0
    union_pon_gc_tex_c_7 signLUT; // offset 0x150, size 0x18
};
struct Game {
    // total size: 0x21C08
    struct tetWell tetrisWell[4]; // offset 0x0, size 0x15F00
    struct cursor_t cursorBlock[4]; // offset 0x15F00, size 0x440
    struct gamepad_t controller[4]; // offset 0x16340, size 0x40
    struct flic_t flic[340]; // offset 0x16380, size 0x2A80
    struct action_t action[40]; // offset 0x18E00, size 0x1E0
    union_pon_gc_tex_c_7 gLUT[40]; // offset 0x18FE0, size 0x3C0
    union_pon_gc_tex_c_12 gBG[200]; // offset 0x193A0, size 0x1F40
    union_pon_gc_tex_c_7 gTEXT[80]; // offset 0x1B2E0, size 0x780
    union_pon_gc_c_1 gSPRITE[160]; // offset 0x1BA60, size 0xF00
    int currentText; // offset 0x1C960, size 0x4
    struct text_t drawText[70]; // offset 0x1C968, size 0x8C0
    union_pon_gc_tex_c_12 frame; // offset 0x1D228, size 0x28
    union_pon_gc_tex_c_7 frameLUT; // offset 0x1D250, size 0x18
    union_pon_gc_c_1 shadeBOX[4]; // offset 0x1D268, size 0x60
    union_pon_gc_tex_c_12 bkground; // offset 0x1D2C8, size 0x28
    union_pon_gc_tex_c_7 bkgroundLUT; // offset 0x1D2F0, size 0x18
    union_pon_gc_tex_c_12 sign[8]; // offset 0x1D308, size 0x140
    union_pon_gc_tex_c_12 alpha[4]; // offset 0x1D448, size 0xA0
    union_pon_gc_tex_c_7 signLUT; // offset 0x1D4E8, size 0x18
    int miscToggle; // offset 0x1D500, size 0x4
    union_pon_gc_tex_c_12 misc[4]; // offset 0x1D508, size 0xA0
    union_pon_gc_tex_c_7 miscLUT[4]; // offset 0x1D5A8, size 0x60
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
int gSelection; // size: 0x4, address: 0xF4E94
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
int gMain; // size: 0x4, address: 0xDF59C
long last_song_handle; // size: 0x4, address: 0xF46E8
unsigned short CROSSFADE_VOLUME[2]; // size: 0x4, address: 0xB6EE0
int gReset; // size: 0x4, address: 0xDF598
int gCounter; // size: 0x4, address: 0xF4E80
int gWorld; // size: 0x4, address: 0xF4E98
struct player_t * gPlayer[4]; // size: 0x10, address: 0x116F78
unsigned short gGameStatus; // size: 0x2, address: 0xF4E9C
// Range: 0x7E61C -> 0x7EF08
void Do2DPauseGame(struct gamepad_t * gamepad /* r1+0x8 */, int num /* r26 */, int flag /* r27 */) {
    // Local variables
    int * pos; // r29
    int flic; // r10
    int limit; // r4
    union_pon_gc_c_1 * sp; // r28

    // References
    // -> struct Game gTheGame;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> unsigned short gGameStatus;
    // -> struct player_t * gPlayer[4];
    // -> int gSelection;
    // -> int gMain;
    // -> int gReset;
    // -> int gWorld;
    // -> int gCounter;
    // -> long last_song_handle;
    // -> unsigned short CROSSFADE_VOLUME[2];
}

// Range: 0x7EF08 -> 0x7F444
void Do3DPauseGame(struct gamepad_t * gamepad /* r1+0x8 */, int num /* r27 */, int flag /* r28 */) {
    // Local variables
    int * pos; // r30
    int limit; // r5
    union_pon_gc_c_1 * sp; // r29

    // References
    // -> struct Game gTheGame;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> unsigned short gGameStatus;
    // -> struct player_t * gPlayer[4];
    // -> int gSelection;
    // -> int gMain;
    // -> int gReset;
    // -> int gCounter;
    // -> long last_song_handle;
    // -> unsigned short CROSSFADE_VOLUME[2];
}

// Range: 0x7F444 -> 0x7F484
void DoPauseGame(struct gamepad_t * gamepad /* r3 */, int num /* r4 */, int flag /* r5 */) {
    // References
    // -> struct Game gTheGame;
}

union_pon_gc_c_0 * glistp; // size: 0x4, address: 0x50F48
union_pon_gc_tex_c_7 numberLUT[]; // size: 0x0, address: 0xD0870
union_pon_gc_tex_c_7 arrowTexture[]; // size: 0x0, address: 0xD4F60
// Range: 0x7F484 -> 0x7F72C
static void Draw2DPause() {
    // Local variables
    int count; // r25
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8

    // References
    // -> struct Game gTheGame;
    // -> union [anonymous] * glistp;
    // -> union [anonymous] arrowTexture[];
    // -> union [anonymous] numberLUT[];
}

unsigned short numberTable[]; // size: 0x0, address: 0xD0670
unsigned char arrow[]; // size: 0x0, address: 0xD4D60
// Range: 0x7F72C -> 0x7FB60
static void Draw3DPause() {
    // Local variables
    int count; // r29
    int x; // r7
    int y; // r8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8

    // References
    // -> union [anonymous] * glistp;
    // -> unsigned char arrow[];
    // -> struct Game gTheGame;
    // -> unsigned short numberTable[];
}

// Range: 0x7FB60 -> 0x7FBA0
void DrawPause(struct_pon_gc_draw_c_15 * dynamicp /* r3 */) {
    // References
    // -> struct Game gTheGame;
}


