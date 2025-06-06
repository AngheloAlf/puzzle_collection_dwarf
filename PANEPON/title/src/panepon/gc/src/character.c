/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\character.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00040CAC -> 0x00041DD4
*/
char attack_combo4[3]; // size: 0x3, address: 0xAFBB0
char attack_combo5[4]; // size: 0x4, address: 0xAFBB4
char attack_combo6[5]; // size: 0x5, address: 0xAFBB8
char attack_combo7[6]; // size: 0x6, address: 0xAFBC0
char ring_chain3[12]; // size: 0xC, address: 0xAFBC8
char attack_chain3[2][6]; // size: 0xC, address: 0xAFBD4
char attack_chain4[3]; // size: 0x3, address: 0xAFBE0
char attack_chain5[4]; // size: 0x4, address: 0xAFBE4
char attack_chain6[5]; // size: 0x5, address: 0xAFBE8
char attack_chain7[6]; // size: 0x6, address: 0xAFBF0
char attack_chain8[7]; // size: 0x7, address: 0xAFBF8
char attack_chain9[8]; // size: 0x8, address: 0xAFC00
char attack_chain10[9]; // size: 0x9, address: 0xAFC08
char attack_chain11[10]; // size: 0xA, address: 0xAFC14
char attack_chain12[11]; // size: 0xB, address: 0xAFC20
char attack_chain13[12]; // size: 0xC, address: 0xAFC2C
char attackRow1[6]; // size: 0x6, address: 0xAFC38
char attackRow2[6]; // size: 0x6, address: 0xAFC40
char attackRow3[6]; // size: 0x6, address: 0xAFC48
char attackRow4[6]; // size: 0x6, address: 0xAFC50
char attackRow5[6]; // size: 0x6, address: 0xAFC58
char attackRow6[6]; // size: 0x6, address: 0xAFC60
char attackRow7[6]; // size: 0x6, address: 0xAFC68
char attackRow8[6]; // size: 0x6, address: 0xAFC70
char attackRow9[6]; // size: 0x6, address: 0xAFC78
uObjTxtr attackA[6]; // size: 0x90, address: 0x4C828
uObjTxtr attackB[6]; // size: 0x90, address: 0x4C8B8
uObjTxtr brickA[3]; // size: 0x48, address: 0x4C948
uObjTxtr brickB[3]; // size: 0x48, address: 0x4C990
uObjTxtr faceA; // size: 0x18, address: 0x4C9D8
uObjTxtr faceB; // size: 0x18, address: 0x4C9F0
uObjTxtr explodeA; // size: 0x18, address: 0x4CA08
uObjTxtr explodeB; // size: 0x18, address: 0x4CA20
char * gc_charFlower; // size: 0x4, address: 0xBC
char * gc_charFire; // size: 0x4, address: 0xC0
char * gc_charIce; // size: 0x4, address: 0xC4
char * gc_charJewel; // size: 0x4, address: 0xC8
char * gc_charCloud; // size: 0x4, address: 0xCC
char * gc_charGreen; // size: 0x4, address: 0xD0
char * gc_charWater; // size: 0x4, address: 0xD4
char * gc_charMoon; // size: 0x4, address: 0xD8
char * gc_charOcean; // size: 0x4, address: 0xDC
char * gc_charDragon; // size: 0x4, address: 0xE0
char * gc_charJoker; // size: 0x4, address: 0xE4
char * gc_charGoddess; // size: 0x4, address: 0xE8
char * gc_charDevil; // size: 0x4, address: 0xEC
char * gc_charLion; // size: 0x4, address: 0xF0
char * gc_charPrince; // size: 0x4, address: 0xF4
char * gc_charWhale; // size: 0x4, address: 0xF8
char * gc_charWitch; // size: 0x4, address: 0xFC
char * gc_charCombine; // size: 0x4, address: 0xB8
unsigned char * gblockB[6]; // size: 0x18, address: 0x4CA38
unsigned char * gfaceB; // size: 0x4, address: 0x4CA50
unsigned char * explosionA; // size: 0x4, address: 0x4CA54
unsigned short * gbrickB[3]; // size: 0xC, address: 0x4CA58
unsigned char * gblockA[6]; // size: 0x18, address: 0x4CA64
unsigned char * gfaceA; // size: 0x4, address: 0x4CA7C
unsigned char * explosionB; // size: 0x4, address: 0x4CA80
unsigned short * gbrickA[3]; // size: 0xC, address: 0x4CA84
// Range: 0x40CAC -> 0x412A0
void InitCharacter(int left /* r1+0x34 */, int right /* r28 */) {
    // Local variables
    int count; // r1+0x8
    int total; // r1+0x38
    int temp; // r30
    int who; // r29
    char * currSegment; // r3

    // References
    // -> unsigned char * explosionB;
    // -> unsigned char * gfaceA;
    // -> union [anonymous] attackA[6];
    // -> unsigned char * gblockA[6];
    // -> union [anonymous] brickA[3];
    // -> unsigned short * gbrickA[3];
    // -> unsigned char * explosionA;
    // -> unsigned char * gfaceB;
    // -> union [anonymous] attackB[6];
    // -> unsigned char * gblockB[6];
    // -> union [anonymous] brickB[3];
    // -> unsigned short * gbrickB[3];
    // -> char * gc_charFlower;
    // -> char * gc_charCombine;
    // -> char * gc_charWitch;
    // -> char * gc_charWhale;
    // -> char * gc_charPrince;
    // -> char * gc_charLion;
    // -> char * gc_charDevil;
    // -> char * gc_charGoddess;
    // -> char * gc_charJoker;
    // -> char * gc_charDragon;
    // -> char * gc_charOcean;
    // -> char * gc_charMoon;
    // -> char * gc_charWater;
    // -> char * gc_charGreen;
    // -> char * gc_charCloud;
    // -> char * gc_charJewel;
    // -> char * gc_charIce;
    // -> char * gc_charFire;
    // -> union [anonymous] explodeB;
    // -> union [anonymous] explodeA;
    // -> union [anonymous] faceB;
    // -> union [anonymous] faceA;
}

uObjTxtr attackTxtr[4][6]; // size: 0x240, address: 0x4CA90
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
uObjTxtr brickTxtr[4][3]; // size: 0x120, address: 0x4CCD0
uObjTxtr faceTxtr[4]; // size: 0x60, address: 0x4CDF0
uObjTxtr explodeTxtr[4]; // size: 0x60, address: 0x4CE50
unsigned char * gblock[4][6]; // size: 0x60, address: 0x4CEB0
unsigned char * gface[4]; // size: 0x10, address: 0x4CF10
unsigned char * explosion[4]; // size: 0x10, address: 0x4CF20
unsigned short * gbrick[4][3]; // size: 0x30, address: 0x4CF30
// Range: 0x412A0 -> 0x4186C
void pon_InitCharacter4p(int player1 /* r1+0x8 */, int player2 /* r1+0xC */, int player3 /* r1+0x10 */, int player4 /* r1+0x14 */) {
    // Local variables
    int num; // r24
    int who[4]; // r1+0x38
    uObjTxtr * tex; // r1+0x8
    char * currSegment; // r3

    // References
    // -> char * gc_charFlower;
    // -> char * gc_charCombine;
    // -> char * gc_charWitch;
    // -> char * gc_charWhale;
    // -> char * gc_charPrince;
    // -> char * gc_charLion;
    // -> char * gc_charDevil;
    // -> char * gc_charGoddess;
    // -> char * gc_charJoker;
    // -> char * gc_charDragon;
    // -> char * gc_charOcean;
    // -> char * gc_charMoon;
    // -> char * gc_charWater;
    // -> char * gc_charGreen;
    // -> char * gc_charCloud;
    // -> char * gc_charJewel;
    // -> char * gc_charIce;
    // -> char * gc_charFire;
    // -> unsigned short * gbrick[4][3];
    // -> unsigned char * explosion[4];
    // -> unsigned char * gface[4];
    // -> unsigned char * gblock[4][6];
    // -> struct Game gTheGame;
    // -> union [anonymous] explodeTxtr[4];
    // -> union [anonymous] faceTxtr[4];
    // -> union [anonymous] brickTxtr[4][3];
    // -> union [anonymous] attackTxtr[4][6];
}

// Range: 0x4186C -> 0x41C0C
int ReturnAttackTexValue(struct attack_t * attack /* r1+0x0 */, int type /* r4 */, int lev /* r1+0x8 */, int pos /* r6 */) {
    // Local variables
    int value; // r3
    int actual; // r7
    char * ptr; // r10

    // References
    // -> char attackRow9[6];
    // -> char attackRow8[6];
    // -> char attackRow7[6];
    // -> char attackRow6[6];
    // -> char attackRow5[6];
    // -> char attackRow4[6];
    // -> char attackRow3[6];
    // -> char attackRow2[6];
    // -> char attackRow1[6];
    // -> char attack_chain3[2][6];
    // -> char attack_combo7[6];
    // -> char attack_chain13[12];
    // -> char attack_chain12[11];
    // -> char attack_chain11[10];
    // -> char attack_chain10[9];
    // -> char attack_chain9[8];
    // -> char attack_chain8[7];
    // -> char attack_chain7[6];
    // -> char attack_chain6[5];
    // -> char attack_chain5[4];
    // -> char attack_chain4[3];
    // -> char ring_chain3[12];
    // -> char attack_combo6[5];
    // -> char attack_combo5[4];
    // -> char attack_combo4[3];
    // -> struct Game gTheGame;
}

// Range: 0x41C0C -> 0x41DD4
void LoadCharacterProfileOffset(int who /* r1+0x0 */, int * lut /* r1+0x4 */, int * bg /* r1+0x8 */) {}


