/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\update.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x000A92A8 -> 0x000ADBDC
*/
float rotate_cos[4]; // size: 0x10, address: 0xE0B48
float rotate_sin[4]; // size: 0x10, address: 0xE0B58
float switch_cos[3]; // size: 0xC, address: 0xE0B68
float switch_sin[3]; // size: 0xC, address: 0xE0B74
char TetrisBlockFrame[17]; // size: 0x11, address: 0xE0B80
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
// Range: 0xA92A8 -> 0xA93E0
void pon_SetRanking4p(int * SortScore /* r3 */) {
    // Local variables
    int i; // r11
    int num; // r12
    int Score; // r31
    int ranking; // r30
    int rankingBak; // r29
    int no_entryFlag; // r28

    // References
    // -> struct Game gTheGame;
    // -> int gSelection;
}

// Range: 0xA93E0 -> 0xA9480
void UpdateBlockFrame(struct block_t * block /* r1+0x0 */) {}

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
unsigned char TenSecond; // size: 0x1, address: 0x116FAC
// Range: 0xA9480 -> 0xA96A0
void UpdateTime(int second /* r1+0x8 */) {
    // References
    // -> struct Game gTheGame;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> unsigned char TenSecond;
    // -> int gSelection;
}

unsigned short gGameStatus; // size: 0x2, address: 0xF4E9C
signed char st_kClearStage[31][2]; // size: 0x3E, address: 0xB77B4
char st_Player2State[10][10]; // size: 0x64, address: 0xB7344
int st_AdvanceLevel[]; // size: 0x0, address: 0xB74E8
// Range: 0xA96A0 -> 0xA9AAC
void UpdateNextLevel(struct tetWell * well /* r30 */) {
    // Local variables
    int level; // r31
    int next; // r29

    // References
    // -> char st_Player2State[10][10];
    // -> int gSelection;
    // -> int st_AdvanceLevel[];
    // -> signed char st_kClearStage[31][2];
    // -> unsigned short gGameStatus;
}

unsigned long st_RaiseTimer[]; // size: 0x0, address: 0xB7108
// Range: 0xA9AAC -> 0xA9B1C
void UpdateRaiseTimer(struct tetWell * well /* r1+0x0 */) {
    // Local variables
    int level; // r5

    // References
    // -> unsigned long st_RaiseTimer[];
    // -> unsigned short gGameStatus;
    // -> int gSelection;
}

int st_ComboScore[]; // size: 0x0, address: 0xB6FC4
// Range: 0xA9B1C -> 0xA9BEC
void UpdateComboScore(struct tetWell * well /* r30 */, struct cursor_t * cursor /* r4 */, int combo /* r31 */) {
    // References
    // -> int st_ComboScore[];
    // -> struct Game gTheGame;
    // -> int gSelection;
}

int st_ChainScore[]; // size: 0x0, address: 0xB70D8
// Range: 0xA9BEC -> 0xA9CBC
void UpdateChainScore(struct tetWell * well /* r30 */, struct cursor_t * cursor /* r4 */, int chain /* r31 */) {
    // References
    // -> int st_ChainScore[];
    // -> struct Game gTheGame;
    // -> int gSelection;
}

int st_DangerComboDelay1_combo4[4]; // size: 0x10, address: 0xB7304
int st_DangerComboDelay1_combo9[4]; // size: 0x10, address: 0xB7314
int st_DangerComboDelay1_combo11[4]; // size: 0x10, address: 0xB7324
int st_DangerComboDelay1_combo16[4]; // size: 0x10, address: 0xB7334
int st_NormalComboDelay1[4]; // size: 0x10, address: 0xB72B4
// Range: 0xA9CBC -> 0xA9D84
void UpdateComboDelay1(struct tetWell * well /* r1+0x0 */, struct cursor_t * cursor /* r1+0x4 */, int combo /* r5 */) {
    // Local variables
    int delay; // r3
    int index; // r6

    // References
    // -> int st_NormalComboDelay1[4];
    // -> int st_DangerComboDelay1_combo16[4];
    // -> int st_DangerComboDelay1_combo11[4];
    // -> int st_DangerComboDelay1_combo9[4];
    // -> int st_DangerComboDelay1_combo4[4];
}

int st_DangerChainDelay1_chain2[4]; // size: 0x10, address: 0xB72C4
int st_DangerChainDelay1_chain3[4]; // size: 0x10, address: 0xB72D4
int st_DangerChainDelay1_chain4[4]; // size: 0x10, address: 0xB72E4
int st_DangerChainDelay1_chain5[4]; // size: 0x10, address: 0xB72F4
int st_NormalChainDelay1[4]; // size: 0x10, address: 0xB72A4
// Range: 0xA9D84 -> 0xA9E5C
void UpdateChainDelay1(struct tetWell * well /* r1+0x0 */, struct cursor_t * cursor /* r1+0x4 */, int chain /* r5 */) {
    // Local variables
    int delay; // r3
    int index; // r6

    // References
    // -> int st_NormalChainDelay1[4];
    // -> int st_DangerChainDelay1_chain5[4];
    // -> int st_DangerChainDelay1_chain4[4];
    // -> int st_DangerChainDelay1_chain3[4];
    // -> int st_DangerChainDelay1_chain2[4];
}

int st_DangerComboDelay2B[10]; // size: 0x28, address: 0xB74C0
int st_DangerComboDelay2A[10]; // size: 0x28, address: 0xB7498
int st_NormalComboDelay2A[10]; // size: 0x28, address: 0xB73F8
int st_NormalComboDelay2B[10]; // size: 0x28, address: 0xB7420
// Range: 0xA9E5C -> 0xA9F68
void UpdateComboDelay2(struct tetWell * well /* r1+0x0 */, struct cursor_t * cursor /* r1+0x4 */, int combo /* r5 */) {
    // Local variables
    int delay; // r6
    int index; // r7

    // References
    // -> int st_NormalComboDelay2B[10];
    // -> int st_NormalComboDelay2A[10];
    // -> int st_DangerComboDelay2A[10];
    // -> int st_DangerComboDelay2B[10];
}

int st_DangerChainDelay2B[10]; // size: 0x28, address: 0xB7470
int st_DangerChainDelay2A[10]; // size: 0x28, address: 0xB7448
int st_NormalChainDelay2A[10]; // size: 0x28, address: 0xB73A8
int st_NormalChainDelay2B[10]; // size: 0x28, address: 0xB73D0
// Range: 0xA9F68 -> 0xAA060
void UpdateChainDelay2(struct tetWell * well /* r1+0x0 */, struct cursor_t * cursor /* r1+0x4 */, int chain /* r5 */) {
    // Local variables
    int delay; // r6
    int index; // r7

    // References
    // -> int st_NormalChainDelay2B[10];
    // -> int st_NormalChainDelay2A[10];
    // -> int st_DangerChainDelay2A[10];
    // -> int st_DangerChainDelay2B[10];
}

int st_ClearDangerComboDelay_combo4[7]; // size: 0x1C, address: 0xB7744
int st_ClearDangerComboDelay_combo9[7]; // size: 0x1C, address: 0xB7760
int st_ClearDangerComboDelay_combo11[7]; // size: 0x1C, address: 0xB777C
int st_ClearDangerComboDelay_combo16[7]; // size: 0x1C, address: 0xB7798
int st_ClearNormalComboA[7]; // size: 0x1C, address: 0xB769C
int st_ClearNormalComboB[7]; // size: 0x1C, address: 0xB76B8
// Range: 0xAA060 -> 0xAA150
void UpdateClearComboDelay(struct tetWell * well /* r1+0x0 */, struct cursor_t * cursor /* r1+0x4 */, int combo /* r5 */) {
    // Local variables
    int delay; // r3
    int index; // r6

    // References
    // -> int st_ClearNormalComboB[7];
    // -> int st_ClearNormalComboA[7];
    // -> int st_ClearDangerComboDelay_combo16[7];
    // -> int st_ClearDangerComboDelay_combo11[7];
    // -> int st_ClearDangerComboDelay_combo9[7];
    // -> int st_ClearDangerComboDelay_combo4[7];
}

int st_ClearDangerChainDelay_chain2[7]; // size: 0x1C, address: 0xB76D4
int st_ClearDangerChainDelay_chain3[7]; // size: 0x1C, address: 0xB76F0
int st_ClearDangerChainDelay_chain4[7]; // size: 0x1C, address: 0xB770C
int st_ClearDangerChainDelay_chain5[7]; // size: 0x1C, address: 0xB7728
int st_ClearNormalChainA[7]; // size: 0x1C, address: 0xB7664
int st_ClearNormalChainB[7]; // size: 0x1C, address: 0xB7680
// Range: 0xAA150 -> 0xAA250
void UpdateClearChainDelay(struct tetWell * well /* r1+0x0 */, struct cursor_t * cursor /* r1+0x4 */, int chain /* r5 */) {
    // Local variables
    int delay; // r3
    int index; // r6

    // References
    // -> int st_ClearNormalChainB[7];
    // -> int st_ClearNormalChainA[7];
    // -> int st_ClearDangerChainDelay_chain5[7];
    // -> int st_ClearDangerChainDelay_chain4[7];
    // -> int st_ClearDangerChainDelay_chain3[7];
    // -> int st_ClearDangerChainDelay_chain2[7];
}

struct player_t * gPlayer[4]; // size: 0x10, address: 0x116F78
int gDemo; // size: 0x4, address: 0xF4EAC
// Range: 0xAA250 -> 0xAA4EC
void UpdateRecord2(int left /* r1+0x0 */, int right /* r1+0x4 */) {
    // Local variables
    char id1; // r1+0x0
    char id2; // r9
    char * p1; // r7
    char * p2; // r10

    // References
    // -> int gSelection;
    // -> struct Game gTheGame;
    // -> int gDemo;
    // -> struct player_t * gPlayer[4];
}

// Range: 0xAA4EC -> 0xAA6A0
void pon_UpdateRecord4p(int p1_ranking /* r1+0x8 */, int p2_ranking /* r1+0xC */, int p3_ranking /* r1+0x10 */, int p4_ranking /* r1+0x14 */) {
    // Local variables
    int num; // r29
    int ranking[4]; // r1+0x18

    // References
    // -> struct Game gTheGame;
    // -> int gSelection;
    // -> int gDemo;
}

int gMain; // size: 0x4, address: 0xDF59C
// Range: 0xAA6A0 -> 0xAA80C
void UpdatePlayerPuzzle(struct cursor_t * cursor /* r1+0x0 */, int game /* r1+0x4 */, int stage /* r5 */) {
    // Local variables
    char * ptr; // r6
    char index; // r5
    char bit; // r8

    // References
    // -> struct player_t * gPlayer[4];
    // -> struct Game gTheGame;
    // -> int gMain;
    // -> int gDemo;
}

// Range: 0xAA80C -> 0xAA9C0
int CheckPlayerPuzzleRound(int game /* r1+0x0 */, int stage /* r4 */) {
    // Local variables
    char * ptr; // r6
    int group; // r4

    // References
    // -> struct player_t * gPlayer[4];
    // -> struct Game gTheGame;
}

// Range: 0xAA9C0 -> 0xAAAE0
int PlayPlayerPuzzleEnding(int game /* r1+0x0 */, int stage /* r1+0x4 */) {
    // Local variables
    char * ptr; // r5

    // References
    // -> struct Game gTheGame;
    // -> struct player_t * gPlayer[4];
}

// Range: 0xAAAE0 -> 0xAABF8
void UpdatePlayerStageClear(struct cursor_t * cursor /* r29 */, int round /* r30 */, int stage /* r31 */) {
    // Local variables
    char * ptr; // r5
    char index; // r5
    char bit; // r6

    // References
    // -> struct player_t * gPlayer[4];
    // -> struct Game gTheGame;
    // -> int gMain;
    // -> int gDemo;
}

// Range: 0xAABF8 -> 0xAB228
void UpdatePlayerStageClearTimeScore(struct cursor_t * cursor /* r1+0x8 */, int loadsave /* r1+0xC */, int round /* r1+0x10 */, int stage /* r1+0x14 */) {
    // Local variables
    int * time; // r6
    int * score; // r9
    int * last_score; // r10
    int save; // r11
    int status; // r11
    int index; // r12
    int value; // r29
    int temp; // r29
    int old; // r1+0x8
    int new; // r31

    // References
    // -> struct player_t * gPlayer[4];
    // -> struct Game gTheGame;
    // -> int gDemo;
}

// Range: 0xAB228 -> 0xAB2DC
void UpdatePlayerCPU(int game /* r1+0x0 */, int stage /* r1+0x4 */) {
    // References
    // -> struct player_t * gPlayer[4];
    // -> int gDemo;
}

// Range: 0xAB2DC -> 0xAB3BC
void UpdatePlayerCharacter(int game /* r1+0x0 */, int who /* r1+0x4 */) {
    // References
    // -> struct player_t * gPlayer[4];
}

unsigned short st_Combo1[7]; // size: 0xE, address: 0xF47C8
unsigned char st_Combo2[90]; // size: 0x5A, address: 0xF478C
unsigned short st_Chain1[9]; // size: 0x12, address: 0xF4778
unsigned char st_Chain2[90]; // size: 0x5A, address: 0xF471C
// Range: 0xAB3BC -> 0xAB608
void UpdateComboChainCount(int num /* r1+0x0 */, int combo /* r1+0x4 */, int total /* r4 */) {
    // Local variables
    signed short * combo_count; // r7
    signed short * chain_count; // r9

    // References
    // -> unsigned char st_Chain2[90];
    // -> unsigned short st_Chain1[9];
    // -> struct player_t * gPlayer[4];
    // -> unsigned char st_Combo2[90];
    // -> unsigned short st_Combo1[7];
    // -> struct Game gTheGame;
    // -> int gMain;
    // -> int gSelection;
    // -> int gDemo;
}

int gMax; // size: 0x4, address: 0xF4EA0
int gOverflow; // size: 0x4, address: 0xF4EA4
// Range: 0xAB608 -> 0xABDE8
void UpdateWell(struct tetWell * well /* r30 */, struct cursor_t * cursor /* r29 */, int num /* r19 */, int total /* r1+0x1C */) {
    // Local variables
    int row; // r28
    int col; // r1+0x18
    int type; // r23
    int accum; // r21
    int explode; // r1+0x8
    int wait; // r1+0x28
    int up; // r4
    int down; // r5
    int count; // r1+0x8
    int try; // r20
    int space; // r17
    int check1; // r1+0x24
    int check2; // r1+0x20
    int sound; // r22
    int connect; // r25
    int temp; // r4
    struct block_t * block; // r31
    struct block_t * blk; // r1+0x8

    // References
    // -> int gOverflow;
    // -> int gMax;
    // -> int gSelection;
}

// Range: 0xABDE8 -> 0xABE40
void UpdateCursor(struct tetWell * well /* r3 */, struct cursor_t * cursor /* r4 */) {
    // References
    // -> struct Game gTheGame;
}

// Range: 0xABE40 -> 0xABE80
void UpdateIcon(struct tetWell * well /* r3 */, struct cursor_t * cursor /* r4 */, int num /* r5 */) {
    // References
    // -> struct Game gTheGame;
}

// Range: 0xABE80 -> 0xABEC0
void UpdateDistance(struct tetWell * well /* r3 */, struct cursor_t * cursor /* r4 */) {
    // References
    // -> struct Game gTheGame;
}

int anim_sp; // size: 0x4, address: 0x1764
int gCounter; // size: 0x4, address: 0xF4E80
// Range: 0xABEC0 -> 0xACC88
void UpdateMainState() {
    // Local variables
    int num; // r21
    int row; // r7
    int col; // r1+0x8
    int score1; // r1+0x8
    int score2; // r1+0x8
    int result; // r17
    struct tetWell * well; // r24
    struct cursor_t * cursor; // r31
    int DrawRankingFlag; // r20
    int i; // r7
    int Timer[4]; // r1+0x4C
    int SortTimer[4]; // r1+0x3C
    int Score[4]; // r1+0x2C
    int SortScore[4]; // r1+0x1C

    // References
    // -> struct Game gTheGame;
    // -> int gSelection;
    // -> int gMain;
    // -> int gCounter;
    // -> int gMax;
    // -> int anim_sp;
    // -> int gDemo;
    // -> unsigned short gGameStatus;
}

// Range: 0xACC88 -> 0xACCC8
void UpdateBuffer(struct_pon_gc_c_674 * info /* r3 */) {
    // References
    // -> struct Game gTheGame;
}

// Range: 0xACCC8 -> 0xACFA4
void Update2DBuffer(struct_pon_gc_c_674 * info /* r15 */) {
    // Local variables
    struct_pon_gc_draw_c_2466 * dynamicp; // r1+0x8
    struct tetWell * well; // r30
    struct cursor_t * cursor; // r17
    int num; // r16
    int frame; // r5
    int row; // r1+0x8

    // References
    // -> struct Game gTheGame;
    // -> char TetrisBlockFrame[17];
    // -> int gOverflow;
}

float gTransMtx[4][4]; // size: 0x40, address: 0xB0FD8
float gRotateYMtx[4][4]; // size: 0x40, address: 0xB1018
// Range: 0xACFA4 -> 0xAD6C0
void Update3DBuffer(struct_pon_gc_c_674 * info /* r1+0x1C */) {
    // Local variables
    struct_pon_gc_draw_c_2466 * dynamicp; // r1+0x8
    struct tetWell * well; // r25
    struct cursor_t * cursor; // r27
    int num; // r23
    int frame; // r7
    int row; // r5
    int col; // r6

    // References
    // -> struct Game gTheGame;
    // -> float gRotateYMtx[4][4];
    // -> float switch_sin[3];
    // -> float switch_cos[3];
    // -> float rotate_sin[4];
    // -> float rotate_cos[4];
    // -> float gTransMtx[4][4];
    // -> int gSelection;
    // -> char TetrisBlockFrame[17];
}

unsigned char alphaG[4]; // size: 0x4, address: 0x17DC
unsigned char alphaR[4]; // size: 0x4, address: 0x17E0
unsigned char alphaB[4]; // size: 0x4, address: 0x17D8
union_pon_gc_c_173 * glistp; // size: 0x4, address: 0x50F48
// Range: 0xAD6C0 -> 0xAD990
void pon_Draw2DRanking4pOnTheWay() {
    // Local variables
    int num; // r24
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
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
    // -> unsigned char alphaB[4];
    // -> unsigned char alphaR[4];
    // -> unsigned char alphaG[4];
}

unsigned char tex_ranking_1st[2400]; // size: 0x960, address: 0xBF0
unsigned char tex_ranking_1st_S[1200]; // size: 0x4B0, address: 0x1550
unsigned char tlu_ranking[512]; // size: 0x200, address: 0x4D90
unsigned char tex_ranking_2nd[2400]; // size: 0x960, address: 0x1A00
unsigned char tex_ranking_2nd_S[1200]; // size: 0x4B0, address: 0x2360
unsigned char tex_ranking_3rd[2400]; // size: 0x960, address: 0x2810
unsigned char tex_ranking_3rd_S[1200]; // size: 0x4B0, address: 0x3170
unsigned char tex_ranking_4th[2400]; // size: 0x960, address: 0x3620
unsigned char tex_ranking_4th_S[1200]; // size: 0x4B0, address: 0x3F80
// Range: 0xAD990 -> 0xADBDC
void pon_Init2DRanking4pOnTheWay(int num /* r22 */) {
    // Local variables
    union_pon_gc_tex_c_7116 * bg; // r3
    union_pon_gc_tex_c_7332 * txtr; // r8
    int posX[4]; // r1+0x14
    void * texPtr; // r4
    void * texSPtr; // r24
    void * tluPtr; // r23

    // References
    // -> struct Game gTheGame;
    // -> unsigned char tlu_ranking[512];
    // -> unsigned char tex_ranking_4th_S[1200];
    // -> unsigned char tex_ranking_4th[2400];
    // -> unsigned char tex_ranking_3rd_S[1200];
    // -> unsigned char tex_ranking_3rd[2400];
    // -> unsigned char tex_ranking_2nd_S[1200];
    // -> unsigned char tex_ranking_2nd[2400];
    // -> unsigned char tex_ranking_1st_S[1200];
    // -> unsigned char tex_ranking_1st[2400];
}


