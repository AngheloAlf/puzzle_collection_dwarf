/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\mimic.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00077ED4 -> 0x0007BBD4
*/
unsigned char demo_data_combo[679]; // size: 0x2A7, address: 0xB1F60
unsigned char demo_data_chain[892]; // size: 0x37C, address: 0xB2208
unsigned char demo_data_schain[789]; // size: 0x315, address: 0xB2584
unsigned char demo_data_timelag[311]; // size: 0x137, address: 0xB289C
unsigned char play_data_combo[590]; // size: 0x24E, address: 0xB29D4
unsigned char play_data_chain[766]; // size: 0x2FE, address: 0xB2C24
unsigned char play_data_schain[633]; // size: 0x279, address: 0xB2F24
unsigned char play_data_timelag[278]; // size: 0x116, address: 0xB31A0
unsigned char demo_mimic_combo[177]; // size: 0xB1, address: 0xB32B8
unsigned char demo_mimic_chain[162]; // size: 0xA2, address: 0xB336C
unsigned char demo_mimic_schain[645]; // size: 0x285, address: 0xB3410
unsigned char demo_mimic_timelag[57]; // size: 0x39, address: 0xB3698
unsigned char play_mimic_combo[822]; // size: 0x336, address: 0xB36D4
unsigned char play_mimic_chain[474]; // size: 0x1DA, address: 0xB3A0C
unsigned char play_mimic_schain[645]; // size: 0x285, address: 0xB3BE8
unsigned char play_mimic_timelag[57]; // size: 0x39, address: 0xB3E70
char * nextSegment; // size: 0x4, address: 0xF4E90
char * Pon_Image_Heap; // size: 0x4, address: 0x184
unsigned short gGameStatus; // size: 0x2, address: 0xF4E9C
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
    uObjSprite gSPRITE[160]; // offset 0x1BA60, size 0xF00
    int currentText; // offset 0x1C960, size 0x4
    struct text_t drawText[70]; // offset 0x1C968, size 0x8C0
    union_pon_gc_tex_c_7116 frame; // offset 0x1D228, size 0x28
    union_pon_gc_tex_c_7332 frameLUT; // offset 0x1D250, size 0x18
    uObjSprite shadeBOX[4]; // offset 0x1D268, size 0x60
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
struct ai_t brainbrain[4]; // size: 0x4A0, address: 0x116AD0
int gCounter; // size: 0x4, address: 0xF4E80
int gMax; // size: 0x4, address: 0xF4EA0
char * gc_misc; // size: 0x4, address: 0x164
int chain_check[4]; // size: 0x10, address: 0x1750
int anim_bg; // size: 0x4, address: 0x1760
int anim_sp; // size: 0x4, address: 0x1764
// Range: 0x77ED4 -> 0x78294
void LoadMimic1(int kind /* r19 */, int level /* r20 */, int number /* r21 */, int play /* r22 */) {
    // Local variables
    int base; // r1+0x8
    int index; // r20
    struct tetWell * well; // r27
    struct cursor_t * cursor; // r24
    struct ai_t * brain; // r23
    char * pHeap; // r30

    // References
    // -> unsigned char play_data_timelag[278];
    // -> unsigned char play_data_schain[633];
    // -> unsigned char play_data_chain[766];
    // -> unsigned char play_data_combo[590];
    // -> unsigned char demo_data_timelag[311];
    // -> unsigned char demo_data_schain[789];
    // -> unsigned char demo_data_chain[892];
    // -> unsigned char demo_data_combo[679];
    // -> struct Game gTheGame;
    // -> int anim_sp;
    // -> int anim_bg;
    // -> int chain_check[4];
    // -> char * gc_misc;
    // -> char * Pon_Image_Heap;
    // -> int gMax;
    // -> int gCounter;
    // -> struct ai_t brainbrain[4];
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
// Range: 0x78294 -> 0x783F0
void MTMove(struct ai_t * brain /* r30 */, unsigned char * ptr /* r31 */) {
    // Local variables
    int count; // r4
}

int gSelection; // size: 0x4, address: 0xF4E94
unsigned char tutorial_move1[]; // size: 0x0, address: 0xE0084
unsigned char tutorial_move2[]; // size: 0x0, address: 0xE027C
unsigned char tutorial_move3[]; // size: 0x0, address: 0xE0520
unsigned char tutorial_move4[]; // size: 0x0, address: 0xE0754
unsigned char tutorial_move5[]; // size: 0x0, address: 0xE0838
unsigned char tutorial_move6[]; // size: 0x0, address: 0xE0A0C
int gWhatever; // size: 0x4, address: 0xF4EB0
unsigned char tutorial1[]; // size: 0x0, address: 0xDFC18
unsigned char tutorial2[]; // size: 0x0, address: 0xDFC84
unsigned char tutorial4[]; // size: 0x0, address: 0xDFF90
unsigned char tutorial5[]; // size: 0x0, address: 0xE0014
unsigned char tutorial6[]; // size: 0x0, address: 0xE002C
unsigned char tutorial3[]; // size: 0x0, address: 0xDFD84
int gMain; // size: 0x4, address: 0xDF59C
int gReset; // size: 0x4, address: 0xDF598
int gDemo; // size: 0x4, address: 0xF4EAC
long last_song_handle; // size: 0x4, address: 0xF46E8
// Range: 0x783F0 -> 0x78E9C
void UpdateMT(struct tetWell * well /* r28 */, struct cursor_t * cursor /* r26 */, struct ai_t * brain /* r30 */) {
    // Local variables
    int count; // r4
    int num; // r29
    struct command_t * command; // r1+0x8

    // References
    // -> struct Game gTheGame;
    // -> unsigned short gGameStatus;
    // -> int gReset;
    // -> int gMain;
    // -> int gSelection;
    // -> long last_song_handle;
    // -> int gDemo;
    // -> int anim_bg;
    // -> int anim_sp;
    // -> int chain_check[4];
    // -> unsigned char tutorial3[];
    // -> unsigned char tutorial6[];
    // -> unsigned char tutorial5[];
    // -> unsigned char tutorial4[];
    // -> unsigned char tutorial2[];
    // -> unsigned char tutorial1[];
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> int gWhatever;
    // -> unsigned char tutorial_move6[];
    // -> unsigned char tutorial_move5[];
    // -> unsigned char tutorial_move4[];
    // -> unsigned char tutorial_move3[];
    // -> unsigned char tutorial_move2[];
    // -> unsigned char tutorial_move1[];
    // -> unsigned char play_mimic_timelag[57];
    // -> unsigned char play_mimic_schain[645];
    // -> unsigned char play_mimic_chain[474];
    // -> unsigned char play_mimic_combo[822];
    // -> unsigned char demo_mimic_timelag[57];
    // -> unsigned char demo_mimic_schain[645];
    // -> unsigned char demo_mimic_chain[162];
    // -> unsigned char demo_mimic_combo[177];
}

// Range: 0x78E9C -> 0x790D0
void UpdateMTController(struct tetWell * well /* r27 */, struct cursor_t * cursor /* r28 */, int num /* r29 */) {
    // Local variables
    int sound; // r31
    struct gamepad_t * gamepad; // r6
    unsigned short t_button; // r30
    unsigned short h_button; // r7

    // References
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> struct ai_t brainbrain[4];
    // -> struct Game gTheGame;
}

// Range: 0x790D0 -> 0x79434
void DoMT() {
    // Local variables
    struct tetWell * well; // r27
    struct cursor_t * cursor; // r25
    int total; // r24
    int num; // r23
    int count; // r22

    // References
    // -> struct Game gTheGame;
    // -> int gSelection;
    // -> struct ai_t brainbrain[4];
    // -> unsigned short gGameStatus;
    // -> int gMain;
}

// Range: 0x79434 -> 0x7961C
void MimicCheckState(struct tetWell * well /* r30 */, struct cursor_t * cursor /* r31 */) {
    // Local variables
    int result; // r1+0x8

    // References
    // -> int gMain;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> struct ai_t brainbrain[4];
}

union_pon_gc_c_173 * glistp; // size: 0x4, address: 0x50F48
union_pon_gc_tex_c_7332 numberLUT[]; // size: 0x0, address: 0xD0870
union_pon_gc_tex_c_7332 transTexture[]; // size: 0x0, address: 0xD4530
union_pon_gc_tex_c_7332 colorLUT[]; // size: 0x0, address: 0xB79F8
union_pon_gc_tex_c_7332 arrowTexture[]; // size: 0x0, address: 0xD4F60
// Range: 0x7961C -> 0x79E88
void Draw2DMT(struct_pon_gc_draw_c_2466 * dynamicp /* r31 */) {
    // Local variables
    int num; // r29
    int end_attack[4]; // r1+0xC
    int total; // r30
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
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
    // -> int gSelection;
    // -> union [anonymous] * glistp;
    // -> union [anonymous] arrowTexture[];
    // -> union [anonymous] numberLUT[];
    // -> int anim_bg;
    // -> union [anonymous] colorLUT[];
    // -> int gMain;
    // -> int gCounter;
    // -> union [anonymous] transTexture[];
}

unsigned char shade3d[]; // size: 0x0, address: 0xD5FA8
unsigned short colorTable[]; // size: 0x0, address: 0xB77F8
float gTransMtx[4][4]; // size: 0x40, address: 0xB0FD8
union_pon_gc_MemoryCard_c_1396 gIdent; // size: 0x40, address: 0x50F08
// Range: 0x79E88 -> 0x7A5B0
void Draw3DMT(struct_pon_gc_draw_c_2466 * dynamicp /* r31 */) {
    // Local variables
    unsigned short perspNorm; // r1+0x14
    int row; // r26
    int height; // r4
    unsigned char * ptr; // r27
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
    // -> int gSelection;
    // -> int anim_bg;
    // -> struct Game gTheGame;
    // -> union [anonymous] gIdent;
    // -> float gTransMtx[4][4];
    // -> unsigned short colorTable[];
    // -> unsigned char shade3d[];
}

static int gnTickMimic; // size: 0x4, address: 0xF4458
static int giScreenMimic; // size: 0x4, address: 0xF445C
static int gaiCursorX[4]; // size: 0x10, address: 0xF4460
@enum$635mimic_c;
static @enum$635mimic_c geModeMimic; // size: 0x4, address: 0xF4470
static int gnTagTextMimic; // size: 0x4, address: 0xF4474
static int gnTickTextMimic; // size: 0x4, address: 0xF4478
// Range: 0x7A5B0 -> 0x7A6DC
static void mimicTickText(int bSkip /* r30 */) {
    // Local variables
    int nType; // r1+0xC
    int bFlag; // r1+0x8

    // References
    // -> static int gnTickTextMimic;
    // -> static int gnTagTextMimic;
    // -> static int giScreenMimic;
    // -> static int gnTickMimic;
    // -> struct Game gTheGame;
    // -> static @enum$635mimic_c geModeMimic;
}

struct_pon_gc_draw_c_2466 * tut_dynamicp; // size: 0x4, address: 0x116FE8
// Range: 0x7A6DC -> 0x7A778
void DrawMT(struct_pon_gc_draw_c_2466 * dynamicp /* r31 */) {
    // References
    // -> struct Game gTheGame;
    // -> static @enum$635mimic_c geModeMimic;
    // -> int gMain;
    // -> union [anonymous] * glistp;
    // -> struct [anonymous] * tut_dynamicp;
}

// Range: 0x7A778 -> 0x7BA20
void DoMimic() {
    // Local variables
    int nFlag; // r23
    int iScreen; // r27
    int nTagText; // r5
    int nLoad; // r26
    int bBack; // r31
    @enum$635mimic_c eMode; // r30
    int iCursorX; // r1+0x70
    int iCursorY; // r1+0x6C
    int anCommand[4]; // r1+0x5C

    // References
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> unsigned short gGameStatus;
    // -> int gReset;
    // -> int gMain;
    // -> struct ai_t brainbrain[4];
    // -> struct Game gTheGame;
    // -> static @enum$635mimic_c geModeMimic;
    // -> static int giScreenMimic;
    // -> static int gnTagTextMimic;
    // -> static int gnTickTextMimic;
    // -> static int gnTickMimic;
    // -> static int gaiCursorX[4];
}

// Range: 0x7BA20 -> 0x7BBD4
void InitMimic() {
    // Local variables
    void * pHeap; // r1+0xC
    char * szName; // r29

    // References
    // -> static int gnTagTextMimic;
    // -> static int giScreenMimic;
    // -> static int gnTickTextMimic;
    // -> struct Game gTheGame;
    // -> static int gnTickMimic;
    // -> static @enum$635mimic_c geModeMimic;
    // -> char * nextSegment;
    // -> char * Pon_Image_Heap;
    // -> unsigned short gGameStatus;
    // -> static int gaiCursorX[4];
}


