/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\sign.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00080C24 -> 0x0008373C
*/
signed char winwordShake[40]; // size: 0x28, address: 0xB6A28
signed char losewordShake[3]; // size: 0x3, address: 0xB6A50
signed char pushkeyShake[30]; // size: 0x1E, address: 0xB6A54
char * gc_pause1; // size: 0x4, address: 0x16C
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
    uObjSprite word; // offset 0x0, size 0x18
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
    uObjBg sign[4]; // offset 0x10, size 0xA0
    uObjBg alpha[4]; // offset 0xB0, size 0xA0
    uObjTxtr signLUT; // offset 0x150, size 0x18
};
struct Game {
    // total size: 0x21C08
    struct tetWell tetrisWell[4]; // offset 0x0, size 0x15F00
    struct cursor_t cursorBlock[4]; // offset 0x15F00, size 0x440
    struct gamepad_t controller[4]; // offset 0x16340, size 0x40
    struct flic_t flic[340]; // offset 0x16380, size 0x2A80
    struct action_t action[40]; // offset 0x18E00, size 0x1E0
    uObjTxtr gLUT[40]; // offset 0x18FE0, size 0x3C0
    uObjBg gBG[200]; // offset 0x193A0, size 0x1F40
    uObjTxtr gTEXT[80]; // offset 0x1B2E0, size 0x780
    uObjSprite gSPRITE[160]; // offset 0x1BA60, size 0xF00
    int currentText; // offset 0x1C960, size 0x4
    struct text_t drawText[70]; // offset 0x1C968, size 0x8C0
    uObjBg frame; // offset 0x1D228, size 0x28
    uObjTxtr frameLUT; // offset 0x1D250, size 0x18
    uObjSprite shadeBOX[4]; // offset 0x1D268, size 0x60
    uObjBg bkground; // offset 0x1D2C8, size 0x28
    uObjTxtr bkgroundLUT; // offset 0x1D2F0, size 0x18
    uObjBg sign[8]; // offset 0x1D308, size 0x140
    uObjBg alpha[4]; // offset 0x1D448, size 0xA0
    uObjTxtr signLUT; // offset 0x1D4E8, size 0x18
    int miscToggle; // offset 0x1D500, size 0x4
    uObjBg misc[4]; // offset 0x1D508, size 0xA0
    uObjTxtr miscLUT[4]; // offset 0x1D5A8, size 0x60
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
// Range: 0x80C24 -> 0x80F04
void InitPause() {
    // Local variables
    int count; // r30
    uObjBg * bg; // r3
    uObjTxtr * txtr; // r12
    uObjSprite * sp; // r25
    char * currSegment; // r29

    // References
    // -> struct Game gTheGame;
    // -> int gSelection;
    // -> char * gc_pause1;
}

char * endSegment; // size: 0x4, address: 0xF4560
char * nextSegment; // size: 0x4, address: 0xF4E90
char * gc_ending1; // size: 0x4, address: 0x170
char * gc_ending2; // size: 0x4, address: 0x174
char * gc_ending3; // size: 0x4, address: 0x178
char * gc_ending4; // size: 0x4, address: 0x17C
// Range: 0x80F04 -> 0x80FE8
void InitGameOver() {
    // References
    // -> char * gc_ending4;
    // -> char * endSegment;
    // -> char * gc_ending3;
    // -> char * gc_ending2;
    // -> char * gc_ending1;
    // -> struct Game gTheGame;
    // -> char * nextSegment;
}

unsigned char alphaR[4]; // size: 0x4, address: 0x17E0
unsigned char alphaG[4]; // size: 0x4, address: 0x17DC
unsigned char alphaB[4]; // size: 0x4, address: 0x17D8
unsigned char tex_ranking_1st[2400]; // size: 0x960, address: 0xBF0
unsigned char tex_ranking_1st_S[1200]; // size: 0x4B0, address: 0x1550
unsigned char tlu_ranking[512]; // size: 0x200, address: 0x4D90
unsigned char tex_ranking_2nd[2400]; // size: 0x960, address: 0x1A00
unsigned char tex_ranking_2nd_S[1200]; // size: 0x4B0, address: 0x2360
unsigned char tex_ranking_3rd[2400]; // size: 0x960, address: 0x2810
unsigned char tex_ranking_3rd_S[1200]; // size: 0x4B0, address: 0x3170
unsigned char tex_ranking_4th[2400]; // size: 0x960, address: 0x3620
unsigned char tex_ranking_4th_S[1200]; // size: 0x4B0, address: 0x3F80
unsigned char tex_pushanykey[2400]; // size: 0x960, address: 0x4430
int gWorld; // size: 0x4, address: 0xF4E98
unsigned int FlicTable[340]; // size: 0x550, address: 0x50894
// Range: 0x80FE8 -> 0x81F24
void LoadGameOver2D() {
    // Local variables
    int count; // r30
    int total; // r29
    int posX1; // r3
    int height1; // r5
    int offset1; // r26
    int posX2; // r5
    int height2; // r1+0x8
    int offset2; // r24
    int a_offset1; // r14
    int a_offset2; // r26
    int push; // r25
    struct cursor_t * cursor1; // r6
    struct cursor_t * cursor2; // r8
    uObjBg * bg; // r1+0x8
    uObjTxtr * txtr; // r4
    int posX[4]; // r1+0x78
    int height[4]; // r1+0x68
    int wide[4]; // r1+0x58
    int offset[4]; // r1+0x48
    int a_offset[4]; // r1+0x38
    int num; // r1+0x8
    void * texPtr[4]; // r1+0x28
    void * texSPtr[4]; // r1+0x18
    void * tluPtr; // r22

    // References
    // -> unsigned int FlicTable[340];
    // -> struct Game gTheGame;
    // -> int gWorld;
    // -> int gSelection;
    // -> unsigned char tex_pushanykey[2400];
    // -> unsigned char alphaB[4];
    // -> unsigned char alphaG[4];
    // -> unsigned char alphaR[4];
    // -> unsigned char tlu_ranking[512];
    // -> unsigned char tex_ranking_4th_S[1200];
    // -> unsigned char tex_ranking_4th[2400];
    // -> unsigned char tex_ranking_3rd_S[1200];
    // -> unsigned char tex_ranking_3rd[2400];
    // -> unsigned char tex_ranking_2nd_S[1200];
    // -> unsigned char tex_ranking_2nd[2400];
    // -> unsigned char tex_ranking_1st_S[1200];
    // -> unsigned char tex_ranking_1st[2400];
    // -> char * endSegment;
}

// Range: 0x81F24 -> 0x828A8
void LoadGameOver3D() {
    // Local variables
    int count; // r8
    int total; // r1+0x8
    int posX1; // r7
    int height1; // r12
    int offset1; // r9
    int posX2; // r4
    int height2; // r29
    int offset2; // r28
    int a_offset1; // r10
    int a_offset2; // r27
    int push; // r11
    struct cursor_t * cursor1; // r5
    struct cursor_t * cursor2; // r8
    uObjBg * bg; // r12
    uObjTxtr * txtr; // r11

    // References
    // -> char * endSegment;
    // -> struct Game gTheGame;
    // -> unsigned char alphaB[4];
    // -> unsigned char alphaG[4];
    // -> unsigned char alphaR[4];
    // -> int gSelection;
}

int gMain; // size: 0x4, address: 0xDF59C
// Range: 0x828A8 -> 0x828E0
void DrawPauseOver(struct_pon_gc_draw_c_2466 * dynamicp /* r3 */) {
    // References
    // -> int gMain;
}

int gCounter; // size: 0x4, address: 0xF4E80
// Range: 0x828E0 -> 0x82A80
void AnimateGameOver2D(struct tetWell * well /* r1+0x8 */) {
    // Local variables
    int base; // r5
    unsigned short * ptr; // r6
    unsigned short array[10]; // r1+0xC

    // References
    // -> char * endSegment;
    // -> int gCounter;
}

// Range: 0x82A80 -> 0x82AD4
void AnimateGameOver3D(struct tetWell * well /* r1+0x0 */) {
    // References
    // -> int gCounter;
}

// Range: 0x82AD4 -> 0x82C6C
void AnimateWin2D(struct tetWell * well /* r1+0x8 */, uObjBg * bg /* r1+0xC */, uObjBg * alpha /* r1+0x10 */) {
    // Local variables
    int diff; // r8
    int base; // r9
    unsigned short * ptr; // r8
    unsigned short array[8]; // r1+0x14

    // References
    // -> char * endSegment;
    // -> int gCounter;
    // -> signed char winwordShake[40];
}

// Range: 0x82C6C -> 0x82D24
void AnimateWin3D(struct tetWell * well /* r1+0x0 */, uObjBg * bg /* r1+0x4 */, uObjBg * alpha /* r1+0x8 */) {
    // Local variables
    int diff; // r8

    // References
    // -> int gCounter;
    // -> signed char winwordShake[40];
}

// Range: 0x82D24 -> 0x82EBC
void AnimateLose2D(struct tetWell * well /* r1+0x8 */, uObjBg * bg /* r1+0xC */, uObjBg * alpha /* r1+0x10 */) {
    // Local variables
    int diff; // r8
    int base; // r9
    unsigned short * ptr; // r8
    unsigned short array[8]; // r1+0x14

    // References
    // -> char * endSegment;
    // -> int gCounter;
    // -> signed char losewordShake[3];
}

// Range: 0x82EBC -> 0x82F74
void AnimateLose3D(struct tetWell * well /* r1+0x0 */, uObjBg * bg /* r1+0x4 */, uObjBg * alpha /* r1+0x8 */) {
    // Local variables
    int diff; // r8

    // References
    // -> int gCounter;
    // -> signed char losewordShake[3];
}

// Range: 0x82F74 -> 0x830F0
void AnimateDraw2D(struct tetWell * well /* r1+0x8 */, uObjBg * bg /* r1+0xC */, uObjBg * alpha /* r1+0x10 */) {
    // Local variables
    int diff; // r8
    int base; // r8
    unsigned short * ptr; // r7
    unsigned short array[8]; // r1+0x14

    // References
    // -> char * endSegment;
    // -> int gCounter;
    // -> signed char losewordShake[3];
}

// Range: 0x830F0 -> 0x831A8
void AnimateDraw3D(struct tetWell * well /* r1+0x0 */, uObjBg * bg /* r1+0x4 */, uObjBg * alpha /* r1+0x8 */) {
    // Local variables
    int diff; // r8

    // References
    // -> int gCounter;
    // -> signed char losewordShake[3];
}

// Range: 0x831A8 -> 0x8323C
void AnimatePauseKey(uObjBg * bg /* r1+0x0 */) {
    // References
    // -> signed char pushkeyShake[30];
    // -> struct Game gTheGame;
}

int gWhatever; // size: 0x4, address: 0xF4EB0
// Range: 0x8323C -> 0x8329C
void AnimatePushKey(uObjBg * bg /* r1+0x0 */) {
    // References
    // -> int gWhatever;
    // -> signed char pushkeyShake[30];
}

// Range: 0x8329C -> 0x8373C
void pon_Animate2DRanking4p(struct tetWell * well /* r1+0x8 */, uObjBg * bg /* r1+0xC */, uObjBg * alpha /* r1+0x10 */, int ranking /* r1+0x14 */, int VSAttackFlag /* r1+0x18 */) {
    // Local variables
    int diff; // r1+0x8
    int base; // r4
    unsigned short * ptr; // r1+0x8
    int * pRaise; // r9
    int * pColor; // r3
    unsigned short rank1_color[8]; // r1+0x4C
    unsigned short rank2_color[8]; // r1+0x3C
    unsigned short rank3_color[8]; // r1+0x2C
    unsigned short rank4_color[8]; // r1+0x1C

    // References
    // -> unsigned char tlu_ranking[512];
    // -> int gCounter;
    // -> signed char losewordShake[3];
    // -> signed char winwordShake[40];
}


