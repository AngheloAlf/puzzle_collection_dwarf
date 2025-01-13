/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\story.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0008F774 -> 0x0009F174
*/
static int gbGfxHeap; // size: 0x4, address: 0xF47D8
static union_pon_gc_c_0 * gpGfxHeapLast; // size: 0x4, address: 0xF47DC
static int gnAlphaBack; // size: 0x4, address: 0xF47E0
static int gnTickStory; // size: 0x4, address: 0xF47E4
static int gnTickAnchor; // size: 0x4, address: 0xF47E8
static int gnSkipCount; // size: 0x4, address: 0xF47EC
static int gnFlushCount; // size: 0x4, address: 0xF47F0
static int giLevelStory; // size: 0x4, address: 0xF47F4
static int giScreenStory; // size: 0x4, address: 0xF47F8
static int gnColorBackRed; // size: 0x4, address: 0xF47FC
static int gnColorBackGreen; // size: 0x4, address: 0xF4800
static int gnColorBackBlue; // size: 0x4, address: 0xF4804
static int gnColorBackAlpha; // size: 0x4, address: 0xF4808
@enum$106story_c;
static @enum$106story_c geXtra; // size: 0x4, address: 0xF480C
static @enum$106story_c geXtraNext; // size: 0x4, address: 0xF4810
@enum$105story_c;
static @enum$105story_c geMode; // size: 0x4, address: 0xF4814
static @enum$105story_c geModeNext; // size: 0x4, address: 0xF4818
static @enum$105story_c geModeLast; // size: 0x4, address: 0xF481C
static int gnPickStory; // size: 0x4, address: 0xF4820
static int giMovieStory; // size: 0x4, address: 0xF4824
static int gnOffsetWipe; // size: 0x4, address: 0xF4828
static union_pon_gc_MemoryCard_c_14 gaMtxStory[5][2]; // size: 0x280, address: 0xF4830
static struct_image_c_39 * gpImageDustBits; // size: 0x4, address: 0xF4AB0
static struct_image_c_39 * gpImageDustBall; // size: 0x4, address: 0xF4AB4
static struct_image_c_39 * gpImageDustGlow; // size: 0x4, address: 0xF4AB8
static int gnDustBallCount; // size: 0x4, address: 0xF4ABC
static struct_story_c_53 * gapDustBall[8]; // size: 0x20, address: 0xF4AC0
static unsigned int ganColorDust[8]; // size: 0x20, address: 0xDDF58
@enum$107story_c;
// Range: 0x8F774 -> 0x8FEDC
static int storyMakeDustBall(void * ppHeap /* r21 */, @enum$107story_c eType /* r26 */, int nX /* r1+0x10 */, int nY /* r1+0x14 */, int nDustCount /* r14 */) {
    // Local variables
    int iBall; // r1+0x24
    int nLife; // r4
    float rAngle; // f31
    unsigned char * anUsed; // r29
    int iDust; // r18
    int iUsed; // r4
    int nDeltaX; // r20
    int nDeltaY; // r5
    int iTry; // r5
    struct_story_c_53 * pDustBall; // r1+0x8
    int nCount; // r1+0x8
    int nSeed; // r4
    int nRate; // r24
    int nWait; // r22

    // References
    // -> static struct [anonymous] * gpImageDustGlow;
    // -> static struct [anonymous] * gpImageDustBall;
    // -> static struct [anonymous] * gpImageDustBits;
    // -> static unsigned int ganColorDust[8];
    // -> static int gnDustBallCount;
    // -> static struct [anonymous] * gapDustBall[8];
}

// Range: 0x8FEDC -> 0x900C8
static void storyTickDustBall() {
    // Local variables
    int bFlag; // r1+0x8
    int nCount; // r5
    unsigned int nData; // r30
    int nX; // r30
    int nY; // r31
    int nDeltaX; // r29
    int nDeltaY; // r28
    struct_story_c_53 * pDustBall; // r6
    int iBall; // r7
    int iDust; // r8
    int iTile; // r12
    int nTick; // r28
    int nWait; // r29
    int nLife; // r31

    // References
    // -> static int gnDustBallCount;
    // -> static struct [anonymous] * gapDustBall[8];
}

// Range: 0x900C8 -> 0x90F94
static void storyDrawDustBall(union_pon_gc_c_0 * * ppGfx /* r1+0x8 */, int iBall /* r1+0xC */) {
    // Local variables
    union_pon_gc_c_0 * pGfx; // r8
    int nAlpha; // r5
    struct_bitmap_c_16 * pBitmap; // r30
    int nX; // r6
    int nY; // r7
    int iDust; // r24
    int iBall0; // r1+0x8
    int iBall1; // r1+0x8
    int nSizeX; // r5
    int nSizeY; // r1+0x8
    unsigned int nStep; // r9
    int iTile; // r10
    int iTileX; // r29
    int iTileY; // r31
    unsigned int nRGBA; // r11
    @enum$107story_c eTypeLast; // r12
    struct_story_c_53 * pDustBall; // r1+0x8
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r8
    union_pon_gc_c_0 * _g; // r8
    union_pon_gc_c_0 * _g; // r12
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r31
    union_pon_gc_c_0 * _g; // r12
    union_pon_gc_c_0 * _g; // r10
    union_pon_gc_c_0 * _g; // r12
    union_pon_gc_c_0 * _g; // r10
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r8
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r5

    // References
    // -> static int gnTickStory;
    // -> static struct [anonymous] * gpImageDustGlow;
    // -> static struct [anonymous] * gpImageDustBall;
    // -> static struct [anonymous] * gpImageDustBits;
    // -> static struct [anonymous] * gapDustBall[8];
    // -> static int gnDustBallCount;
}

struct OSThread_s {
    // total size: 0x1B0
    struct OSThread_s * next; // offset 0x0, size 0x4
    long priority; // offset 0x4, size 0x4
    struct OSThread_s * * queue; // offset 0x8, size 0x4
    struct OSThread_s * tlnext; // offset 0xC, size 0x4
    unsigned short state; // offset 0x10, size 0x2
    unsigned short flags; // offset 0x12, size 0x2
    long id; // offset 0x14, size 0x4
    int fp; // offset 0x18, size 0x4
    struct_controller_c_36 * thprof; // offset 0x1C, size 0x4
    struct_controller_c_37 context; // offset 0x20, size 0x190
};
struct OSMesgQueue_s {
    // total size: 0x18
    struct OSThread_s * mtqueue; // offset 0x0, size 0x4
    struct OSThread_s * fullqueue; // offset 0x4, size 0x4
    long validCount; // offset 0x8, size 0x4
    long first; // offset 0xC, size 0x4
    long msgCount; // offset 0x10, size 0x4
    void * msg; // offset 0x14, size 0x4
};
struct OSMesgQueue_s gfxFrameMsgQ; // size: 0x18, address: 0x50F4C
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
// Range: 0x90F94 -> 0x9117C
void storySetupStage() {
    // Local variables
    int iStage; // r1+0x0

    // References
    // -> struct OSMesgQueue_s gfxFrameMsgQ;
    // -> static int gnFlushCount;
    // -> static @enum$106story_c geXtraNext;
    // -> static @enum$105story_c geModeNext;
    // -> static int giLevelStory;
    // -> struct Game gTheGame;
}

static float grFOV; // size: 0x4, address: 0xF4AE0
static float grDistanceCamera; // size: 0x4, address: 0xF4AE4
static int giMtxDraw; // size: 0x4, address: 0xF4AE8
static union_pon_gc_MemoryCard_c_14 gMtxView; // size: 0x40, address: 0xF4AF0
static union_pon_gc_MemoryCard_c_14 gMtxLook; // size: 0x40, address: 0xF4B30
static unsigned short gnNormalize; // size: 0x2, address: 0xF4B70
static float garView[4][4]; // size: 0x40, address: 0xF4B74
static float garLook[4][4]; // size: 0x40, address: 0xF4BB4
static float grCameraSourceX; // size: 0x4, address: 0xF4BF4
static float grCameraSourceY; // size: 0x4, address: 0xF4BF8
static float grCameraSourceZ; // size: 0x4, address: 0xF4BFC
static float grCameraTargetX; // size: 0x4, address: 0xF4C00
static float grCameraTargetY; // size: 0x4, address: 0xF4C04
static float grCameraTargetZ; // size: 0x4, address: 0xF4C08
// Range: 0x9117C -> 0x912D4
static void storySetCamera(float rFOV /* r1+0x10 */, float rSourceX /* r1+0x14 */, float rSourceY /* r1+0x18 */, float rSourceZ /* r1+0x1C */, float rTargetX /* r1+0x20 */, float rTargetY /* r1+0x24 */, float rTargetZ /* r1+0x28 */) {
    // References
    // -> static union [anonymous] gMtxView;
    // -> static float garView[4][4];
    // -> static float grFOV;
    // -> static unsigned short gnNormalize;
    // -> static union [anonymous] gMtxLook;
    // -> static float garLook[4][4];
    // -> static float grCameraTargetZ;
    // -> static float grCameraTargetY;
    // -> static float grCameraTargetX;
    // -> static float grCameraSourceZ;
    // -> static float grCameraSourceY;
    // -> static float grCameraSourceX;
    // -> static float grDistanceCamera;
}

// Range: 0x912D4 -> 0x914CC
static int storyGetScreen(float rX /* f1 */, float rY /* f2 */, float rZ /* f3 */, int * pnScreenX /* r28 */, int * pnScreenY /* r31 */, float * prScale /* r29 */) {
    // Local variables
    float rW; // r1+0x8
    float rWorldX; // r1+0x28
    float rWorldY; // r1+0x24
    float rWorldZ; // r1+0x20

    // References
    // -> static float grDistanceCamera;
    // -> static float garView[4][4];
    // -> static float garLook[4][4];
}

static struct_image_c_39 * gpImageRainbow; // size: 0x4, address: 0xF4C0C
static int gaiPageRainbow[2]; // size: 0x8, address: 0xF4C10
static float garBaseRainbow[2][2]; // size: 0x10, address: 0xF4C18
static union_pon_gc_tex_c_4 * gapVtxRainbow[2][2]; // size: 0x10, address: 0xF4C28
// Range: 0x914CC -> 0x91808
static void storyMakeRainbow(union_pon_gc_tex_c_4 * aVtx /* r20 */, int nOffset /* r21 */, float rBase0 /* f28 */, float rBase1 /* r1+0x14 */, float r0 /* f29 */, float r1 /* r1+0x1C */) {
    // Local variables
    int iTile; // r26
    struct_bitmap_c_16 * pBitmap; // r25
    int nBase0; // r19
    int nBase1; // r24
    int nSize0; // r18
    int nSize1; // r23
    int nWide0; // r17
    int nWide1; // r1+0x8
    float rStep; // f30
    float rAngle; // f27
    int nOffset0; // r22
    int nOffset1; // r3

    // References
    // -> static struct [anonymous] * gpImageRainbow;
    // -> static float garBaseRainbow[2][2];
}

// Range: 0x91808 -> 0x91BDC
static void storyDrawRainbow(union_pon_gc_c_0 * * ppGfx /* r1+0x8 */, int iRainbow /* r1+0xC */, int nAlpha /* r1+0x10 */) {
    // Local variables
    union_pon_gc_c_0 * pGfx; // r9
    union_pon_gc_tex_c_4 * pVtx; // r1+0x8
    struct_bitmap_c_16 * pBitmap; // r5
    int iTile; // r11
    int iPage; // r10
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r11
    union_pon_gc_c_0 * _g; // r30
    union_pon_gc_c_0 * _g; // r31
    union_pon_gc_c_0 * _g; // r30
    union_pon_gc_c_0 * _g; // r31
    union_pon_gc_c_0 * _g; // r29
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r11
    union_pon_gc_c_0 * _g; // r12
    union_pon_gc_c_0 * _g; // r29
    union_pon_gc_c_0 * _g; // r30
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r12
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r12
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r31
    union_pon_gc_c_0 * _g; // r9

    // References
    // -> static union [anonymous] * gapVtxRainbow[2][2];
    // -> static struct [anonymous] * gpImageRainbow;
    // -> static int gaiPageRainbow[2];
}

static int gnMagnitudeShake; // size: 0x4, address: 0xF4C38
static int gnOffsetShakeX; // size: 0x4, address: 0xF4C3C
static int gnOffsetShakeY; // size: 0x4, address: 0xF4C40
@enum$96story_c;
// Range: 0x91BDC -> 0x91F28
int storyLoadPath2(struct_story_c_54 * * ppPath /* r26 */, char * szName /* r4 */, void * ppHeap /* r27 */, @enum$96story_c eMode /* r28 */) {
    // Local variables
    struct_bitmap_c_17 file; // r1+0x30
    void * pHeap; // r1+0x8
    char acNameImage[16]; // r1+0x20
    int iImage; // r29
    int nCountImage; // r1+0x1C
    int nHeader; // r1+0x18
    int iFrame; // r6
    int iSet; // r29
}

// Range: 0x91F28 -> 0x91F4C
int storyHackPath2(int nTick /* r1+0x0 */) {
    // References
    // -> static int gnTickStory;
    // -> static int gnFlushCount;
    // -> static int gnSkipCount;
}

// Range: 0x91F4C -> 0x91F6C
int storySetPathBlur2(struct_story_c_54 * pPath /* r1+0x0 */, int bFlag /* r1+0x4 */) {}

// Range: 0x91F6C -> 0x91FE4
int storySetPathWrap2(struct_story_c_54 * pPath /* r1+0x0 */, int iSet0 /* r1+0x4 */, int iSet1 /* r1+0x8 */) {}

// Range: 0x91FE4 -> 0x91FF0
int storySetPathImage2(struct_story_c_54 * pPath /* r1+0x0 */, int nAlpha /* r1+0x4 */) {}

// Range: 0x91FF0 -> 0x92124
int storyGetPathImage2(struct_story_c_54 * pPath /* r1+0x0 */, int nOffsetFrame /* r1+0x4 */, int iPack /* r1+0x8 */, struct {
    // total size: 0xA0
    int iFrame; // offset 0x0, size 0x4
    int iObject; // offset 0x4, size 0x4
    signed short nSizeScan; // offset 0x8, size 0x2
    int nType; // offset 0xC, size 0x4
    int nTick; // offset 0x10, size 0x4
    int nTranslucent; // offset 0x14, size 0x4
    int nBitmapCount; // offset 0x18, size 0x4
    int * anPositionX; // offset 0x1C, size 0x4
    int * anPositionY; // offset 0x20, size 0x4
    int * anFrameDelay; // offset 0x24, size 0x4
    struct_image_c_40 * aScan; // offset 0x28, size 0x4
    struct_bitmap_c_16 * * apBitmap; // offset 0x2C, size 0x4
    void * apPixel[2]; // offset 0x30, size 0x8
    union_pon_gc_tex_c_12 aObject[2]; // offset 0x38, size 0x50
    int nScaleX; // offset 0x88, size 0x4
    int nScaleY; // offset 0x8C, size 0x4
    unsigned short nScrollX; // offset 0x90, size 0x2
    unsigned short nScrollY; // offset 0x92, size 0x2
    unsigned int nColor0; // offset 0x94, size 0x4
    unsigned int nColor1; // offset 0x98, size 0x4
} * * ppImage /* r1+0xC */, int * piFrame /* r1+0x10 */) {
    // Local variables
    int bSkip; // r1+0x0
    struct_image_c_39 * pImage; // r4
    int iFramePath; // r8
    int iImage; // r1+0x0
    int iFrame; // r5
}

// Range: 0x92124 -> 0x92468
int storyTickPath2(struct_story_c_54 * pPath /* r29 */) {
    // Local variables
    struct_image_c_39 * pImage; // r1+0xC
    int bFlag; // r30
    int iPack; // r7

    // References
    // -> static int gnTickStory;
    // -> static int gnSkipCount;
    // -> static int gnFlushCount;
}

// Range: 0x92468 -> 0x92758
int storyDrawPath2(struct_story_c_54 * pPath /* r24 */, int nDeltaX /* r25 */, int nDeltaY /* r26 */, float rDeltaScale /* f29 */, int * pnX /* r27 */, int * pnY /* r28 */, float * prScale /* r29 */, union {
    struct_bitmap_c_18 words; // offset 0x0, size 0x8
    struct_bitmap_c_19 dma; // offset 0x0, size 0x8
    struct_bitmap_c_20 tri; // offset 0x0, size 0x8
    struct_bitmap_c_21 line; // offset 0x0, size 0x8
    struct_bitmap_c_22 popmtx; // offset 0x0, size 0x8
    struct_bitmap_c_23 segment; // offset 0x0, size 0x8
    struct_bitmap_c_24 setothermodeH; // offset 0x0, size 0x8
    struct_bitmap_c_24 setothermodeL; // offset 0x0, size 0x8
    struct_bitmap_c_25 texture; // offset 0x0, size 0x8
    struct_bitmap_c_26 perspnorm; // offset 0x0, size 0x8
    struct_bitmap_c_27 setimg; // offset 0x0, size 0x8
    struct_bitmap_c_28 setcombine; // offset 0x0, size 0x8
    struct_bitmap_c_29 setcolor; // offset 0x0, size 0x8
    struct_bitmap_c_30 fillrect; // offset 0x0, size 0x8
    struct_bitmap_c_31 settile; // offset 0x0, size 0x8
    struct_bitmap_c_32 loadtile; // offset 0x0, size 0x8
    struct_bitmap_c_32 settilesize; // offset 0x0, size 0x8
    struct_bitmap_c_32 loadtlut; // offset 0x0, size 0x8
    long long force_structure_alignment; // offset 0x0, size 0x8
} * * ppGfx /* r30 */) {
    // Local variables
    int iPack; // r20
    struct_image_c_39 * pImage; // r1+0x34
    int bFlag; // r19
    int bSkip; // r1+0x8
    struct_bitmap_c_16 * pBitmap; // r4
    float rScaleX; // f31
    float rScaleY; // f30
    int nX; // r18
    int nY; // r17
    int nSizeX; // r16
    int nSizeY; // r15
    int nFrame; // r5
    int iFrame; // r1+0x28
    int nOffsetFrame; // r31
}

// Range: 0x92758 -> 0x927D4
int storyDonePath2(struct_story_c_54 * pPath /* r1+0x0 */) {
    // Local variables
    int iPack; // r1+0x0
}

// Range: 0x927D4 -> 0x92968
static int storyTickPath3(struct_story_c_55 * pPath /* r1+0x0 */, int * pnOffset /* r1+0x4 */, int * pnHeight /* r1+0x8 */, int * piFrame /* r1+0xC */) {
    // Local variables
    int iData; // r9
    int bFlag; // r1+0x0

    // References
    // -> static int gnTickStory;
}

// Range: 0x92968 -> 0x92AC0
static int storyLoadPath(struct_story_c_56 * * ppPath /* r30 */, char * szName /* r4 */, void * ppHeap /* r31 */) {
    // Local variables
    struct_bitmap_c_17 file; // r1+0x20
    unsigned int nHeader; // r1+0x18
    unsigned int nCount; // r1+0x14

    // References
    // -> static @enum$106story_c geXtra;
}

// Range: 0x92AC0 -> 0x92BE0
static int storyGetPath(struct_story_c_56 * pPath /* r1+0x8 */, float * prWorldX /* r1+0xC */, float * prWorldY /* r1+0x10 */, float * prWorldZ /* r1+0x14 */, int * pnFrame /* r1+0x18 */) {}

// Range: 0x92BE0 -> 0x93074
static void storyMakeBeam(struct_story_c_57 * * ppBeam /* r23 */, int nCount /* r1+0x2C */, int nX /* r1+0x10 */, int nZ /* r1+0x14 */, void * ppHeap /* r1+0x18 */) {
    // Local variables
    union_pon_gc_tex_c_4 * pVtx; // r3
    int iBeam; // r4
    int iUsed; // r1+0x8
    int iTry; // r30
    int nDeltaX0; // r19
    int nDeltaZ0; // r20
    int nDeltaX1; // r25
    int nDeltaZ1; // r7
    int * anUsed; // r29
    int nWidth; // r28
    int nLowerX; // r1+0x34
    int nLowerZ; // r1+0x30
    int nUpperX; // r15
    int nUpperZ; // r16
    int nTweenX; // r21
    int nTweenZ; // r22
    unsigned short nAngle; // r28
    unsigned short nAngle0; // r25
    unsigned short nAngle1; // r30
}

// Range: 0x93074 -> 0x933C8
static void storyDrawBeam(struct_story_c_57 * pBeam /* r31 */, union {
    struct_bitmap_c_18 words; // offset 0x0, size 0x8
    struct_bitmap_c_19 dma; // offset 0x0, size 0x8
    struct_bitmap_c_20 tri; // offset 0x0, size 0x8
    struct_bitmap_c_21 line; // offset 0x0, size 0x8
    struct_bitmap_c_22 popmtx; // offset 0x0, size 0x8
    struct_bitmap_c_23 segment; // offset 0x0, size 0x8
    struct_bitmap_c_24 setothermodeH; // offset 0x0, size 0x8
    struct_bitmap_c_24 setothermodeL; // offset 0x0, size 0x8
    struct_bitmap_c_25 texture; // offset 0x0, size 0x8
    struct_bitmap_c_26 perspnorm; // offset 0x0, size 0x8
    struct_bitmap_c_27 setimg; // offset 0x0, size 0x8
    struct_bitmap_c_28 setcombine; // offset 0x0, size 0x8
    struct_bitmap_c_29 setcolor; // offset 0x0, size 0x8
    struct_bitmap_c_30 fillrect; // offset 0x0, size 0x8
    struct_bitmap_c_31 settile; // offset 0x0, size 0x8
    struct_bitmap_c_32 loadtile; // offset 0x0, size 0x8
    struct_bitmap_c_32 settilesize; // offset 0x0, size 0x8
    struct_bitmap_c_32 loadtlut; // offset 0x0, size 0x8
    long long force_structure_alignment; // offset 0x0, size 0x8
} * * ppGfx /* r14 */) {
    // Local variables
    union_pon_gc_c_0 * pGfx; // r17
    float rScale; // f1
    int iBeam; // r16
    int iBase; // r15
    int nSize; // r3
    int nAlpha; // r15
    union_pon_gc_c_0 * _g; // r8
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r8
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r3
    union_pon_gc_c_0 * _g; // r3
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r4
}

// Range: 0x933C8 -> 0x93574
static void storyTickBeam(struct_story_c_57 * pBeam /* r31 */) {
    // Local variables
    int iBeam; // r1+0x8
    float rAngle; // f1

    // References
    // -> static int gnTickStory;
}

static int gnAlphaRays; // size: 0x4, address: 0xF4C44
static float grAngleRay; // size: 0x4, address: 0xF4C48
static union_pon_gc_tex_c_4 * gaVtxRay; // size: 0x4, address: 0xF4C4C
static int ganOffsetRayHeight[8]; // size: 0x20, address: 0xDDF9C
static int ganOffsetRayWidth[8]; // size: 0x20, address: 0xDDFBC
// Range: 0x93574 -> 0x938C8
static void storyMakeRays(void * ppHeap /* r1+0x8 */) {
    // Local variables
    int iRay; // r19
    int nHeight; // r30
    float rAngle; // f31

    // References
    // -> static union [anonymous] * gaVtxRay;
    // -> static int ganOffsetRayWidth[8];
    // -> static int ganOffsetRayHeight[8];
    // -> static int gnAlphaRays;
}

// Range: 0x938C8 -> 0x93C70
static void storyDrawRays(union_pon_gc_c_0 * * ppGfx /* r27 */, int bBack /* r1+0xC */, union {
    long m[4][4]; // offset 0x0, size 0x40
    long long force_structure_alignment; // offset 0x0, size 0x8
} * pMtx0 /* r28 */, union_pon_gc_MemoryCard_c_14 * pMtx1 /* r29 */) {
    // Local variables
    union_pon_gc_c_0 * pGfx; // r30
    int iRay; // r22
    int nCount; // r21
    union_pon_gc_c_0 * _g; // r3
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r8
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r8
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r20
    union_pon_gc_c_0 * _g; // r30
    union_pon_gc_c_0 * _g; // r20
    union_pon_gc_c_0 * _g; // r20
    union_pon_gc_c_0 * _g; // r20
    union_pon_gc_c_0 * _g; // r20
    union_pon_gc_c_0 * _g; // r20
    union_pon_gc_c_0 * _g; // r20
    union_pon_gc_c_0 * _g; // r20
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r3

    // References
    // -> static union [anonymous] * gaVtxRay;
    // -> static float grAngleRay;
    // -> static int gnAlphaRays;
}

@enum$1241story_c;
static @enum$1241story_c geHoldStory0; // size: 0x4, address: 0xF4C50
static @enum$1241story_c geHoldStory1; // size: 0x4, address: 0xF4C54
static @enum$1241story_c geHoldStory2; // size: 0x4, address: 0xF4C58
static @enum$1241story_c geHoldStory3; // size: 0x4, address: 0xF4C5C
static @enum$1241story_c geHoldStory4; // size: 0x4, address: 0xF4C60
static @enum$1241story_c geHoldStory5; // size: 0x4, address: 0xF4C64
static @enum$1241story_c geHoldStory6; // size: 0x4, address: 0xF4C68
static @enum$1241story_c geHoldStory7; // size: 0x4, address: 0xF4C6C
static void * gaszNameHold[8]; // size: 0x20, address: 0xDDFDC
static int gbSkipScript; // size: 0x4, address: 0xF4C70
static int gbSkipScriptText; // size: 0x4, address: 0xF4C74
static int gnCountScript; // size: 0x4, address: 0xF4C78
static int giCode; // size: 0x4, address: 0xF4C7C
static int gnCode; // size: 0x4, address: 0xF4C80
static int gnData; // size: 0x4, address: 0xF4C84
static int * ganCode; // size: 0x4, address: 0xF4C88
static unsigned int ganFadeScript[8]; // size: 0x20, address: 0xF4C8C
static void * gaszNameScript; // size: 0x4, address: 0xF4CAC
@enum$1240story_c;
static @enum$1240story_c geModeText; // size: 0x4, address: 0xF4CB0
// Range: 0x93C70 -> 0x93D7C
static void storyTickScriptFade(int nFrame /* r1+0x8 */) {
    // Local variables
    struct_image_c_39 * pImage; // r1+0xC
    int iFade; // r28
    int bDone; // r4
    int nTag; // r4
    int nAlpha; // r27
    int nStep; // r26

    // References
    // -> static int gbSkipScript;
    // -> static int giScreenStory;
    // -> static unsigned int ganFadeScript[8];
}

// Range: 0x93D7C -> 0x93DE8
static void storySetupScript(int * anScriptCode /* r1+0x0 */, void * aszNameScript /* r1+0x4 */) {
    // References
    // -> static unsigned int ganFadeScript[8];
    // -> static int gbSkipScriptText;
    // -> static int gbSkipScript;
    // -> static @enum$1241story_c geHoldStory7;
    // -> static @enum$1241story_c geHoldStory6;
    // -> static @enum$1241story_c geHoldStory5;
    // -> static @enum$1241story_c geHoldStory4;
    // -> static @enum$1241story_c geHoldStory3;
    // -> static @enum$1241story_c geHoldStory2;
    // -> static @enum$1241story_c geHoldStory1;
    // -> static @enum$1241story_c geHoldStory0;
    // -> static void * gaszNameScript;
    // -> static int * ganCode;
    // -> static int giCode;
    // -> static int gnData;
    // -> static int gnCode;
}

static int gnFlagTextStory; // size: 0x4, address: 0xF4CB4
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
int ganCommandOpen[203]; // size: 0x32C, address: 0xDE60C
struct SongInitStruct {
    // total size: 0x4
    unsigned char bankRef; // offset 0x0, size 0x1
    unsigned char vol; // offset 0x1, size 0x1
    unsigned char pan; // offset 0x2, size 0x1
    unsigned char tempo; // offset 0x3, size 0x1
};
struct SongInitStruct BGM_INIT_TABLE[91]; // size: 0x16C, address: 0xAF7F0
long last_song_handle; // size: 0x4, address: 0xF46E8
@enum$94peel_c;
// Range: 0x93DE8 -> 0x9441C
static void storyTickScript(int nFrame /* r3 */, int bSkip /* r1+0xC */) {
    // Local variables
    @enum$94peel_c eType; // r5
    @enum$1241story_c * peHold; // r3
    int iBuffer; // r17
    int nTag; // r17
    int iFade; // r21
    int nFlag; // r1+0x14
    int bFlag; // r1+0x8
    int nFade; // r7
    int nStep; // r8
    int bNext; // r20
    int bLoop; // r19
    int nWait; // r1+0x8
    int nType; // r1+0x10

    // References
    // -> static int gnCountScript;
    // -> static int gnCode;
    // -> static @enum$1240story_c geModeText;
    // -> static void * gaszNameScript;
    // -> static int giScreenStory;
    // -> static int gnData;
    // -> static int giCode;
    // -> static int * ganCode;
    // -> static void * gaszNameHold[8];
    // -> static int gbSkipScript;
    // -> static int gnColorBackBlue;
    // -> static int gnColorBackGreen;
    // -> static int gnColorBackRed;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> long last_song_handle;
    // -> struct SongInitStruct BGM_INIT_TABLE[91];
    // -> static unsigned int ganFadeScript[8];
    // -> static int gbGfxHeap;
    // -> static int gbSkipScriptText;
    // -> static int gnFlagTextStory;
    // -> int ganCommandOpen[203];
}

static float garOffsetIsland[10]; // size: 0x28, address: 0xDE074
static struct_story_c_58 gaLayerIsland[10][5]; // size: 0x190, address: 0xDE210
static int gnOffsetSun; // size: 0x4, address: 0xF4CB8
static int gnOffsetSunMax; // size: 0x4, address: 0xF4CBC
static int gnOffsetCloud; // size: 0x4, address: 0xF4CC0
static int gnOffsetCloudMax; // size: 0x4, address: 0xF4CC4
static int gnHeightGirl; // size: 0x4, address: 0xF4CC8
static int gnJumpGirl; // size: 0x4, address: 0xF4CCC
static int giFrameGirl; // size: 0x4, address: 0xF4CD0
static int gnOffsetGirl; // size: 0x4, address: 0xF4CD4
static struct_image_c_39 * gpImageGirl; // size: 0x4, address: 0xF4CD8
static float garOffsetIsle[3]; // size: 0xC, address: 0xF4CDC
static signed short ganOffsetIsle[3][5]; // size: 0x1E, address: 0xF4CE8
static struct_image_c_39 * gapImageIsle[3][5]; // size: 0x3C, address: 0xF4D08
// Range: 0x9441C -> 0x94668
static void storyLoadIsleIsland(int iImage /* r1+0x8 */, int iIsle /* r23 */, void * ppHeap /* r24 */) {
    // Local variables
    int iLayer; // r25
    struct_image_c_39 * pImage; // r1+0x14
    struct_bitmap_c_16 * pBitmap; // r4

    // References
    // -> static int gnOffsetSun;
    // -> static @enum$106story_c geXtra;
    // -> static int gnOffsetSunMax;
    // -> static signed short ganOffsetIsle[3][5];
    // -> static struct [anonymous] * gapImageIsle[3][5];
    // -> static struct [anonymous] gaLayerIsland[10][5];
}

static float grPercent0; // size: 0x4, address: 0xF4D44
static float grPercentLast0; // size: 0x4, address: 0xF4D48
static float grPercent1; // size: 0x4, address: 0xF4D4C
static float grPercentLast1; // size: 0x4, address: 0xF4D50
static float garHeight[3]; // size: 0xC, address: 0xF4D54
// Range: 0x94668 -> 0x9476C
static void storyTickIsleRainbow() {
    // Local variables
    float r0; // f3
    float r1; // f4
    int iRainbow; // r23
    int iPage; // r1+0x8

    // References
    // -> static float grPercent1;
    // -> static float grPercent0;
    // -> static union [anonymous] * gapVtxRainbow[2][2];
    // -> static float garHeight[3];
    // -> static int gaiPageRainbow[2];
    // -> static float grPercentLast1;
    // -> static float grPercentLast0;
}

static char ganScrollBack[10][2]; // size: 0x14, address: 0xDE3A0
// Range: 0x9476C -> 0x94984
static void storyTickIsleBackground() {
    // Local variables
    float rRatio; // f2
    int nDeltaX; // r30
    int nDeltaY; // r29
    int nColor0; // r1+0x8
    struct_image_c_39 * pImage; // r1+0x18
    struct_image_c_39 * pImage0; // r1+0x14
    struct_image_c_39 * pImage1; // r1+0x10

    // References
    // -> static int giLevelStory;
    // -> static int giScreenStory;
    // -> static char ganScrollBack[10][2];
    // -> static int gnOffsetGirl;
    // -> static int gnOffsetSun;
    // -> static int gnOffsetSunMax;
}

static int gnOffsetTitle; // size: 0x4, address: 0xF4D60
static int gnTagTitle; // size: 0x4, address: 0xF4D64
// Range: 0x94984 -> 0x94B08
static void storyTickIsleTitle() {
    // Local variables
    int bFlag; // r30
    int nSize; // r1+0x10

    // References
    // -> static int gnOffsetTitle;
    // -> static int giScreenStory;
    // -> static int gbGfxHeap;
    // -> static int gnTagTitle;
}

static int giBallGirl; // size: 0x4, address: 0xF4D68
@enum$1588story_c;
static @enum$1588story_c geModeGirl; // size: 0x4, address: 0xF4D6C
static struct_image_c_39 * gpImageBubble; // size: 0x4, address: 0xF4D70
static struct_story_c_54 * gpPathFlower; // size: 0x4, address: 0xF4D74
static struct_story_c_55 * gpPathGirlWait; // size: 0x4, address: 0xF4D78
static struct_story_c_55 * gpPathGirlGlad; // size: 0x4, address: 0xF4D7C
static struct_story_c_55 * gpPathGirlMove; // size: 0x4, address: 0xF4D80
static struct_story_c_55 * gpPathGirlWave; // size: 0x4, address: 0xF4D84
static struct_story_c_54 * gapPathBits[2]; // size: 0x8, address: 0xF4D88
int gMain; // size: 0x4, address: 0xDF59C
int gReset; // size: 0x4, address: 0xDF598
// Range: 0x94B08 -> 0x94D70
static void storyTickIsleGirl(int bSkip /* r1+0xC */) {
    // References
    // -> struct Game gTheGame;
    // -> static int giLevelStory;
    // -> int gReset;
    // -> int gMain;
    // -> static @enum$1588story_c geModeGirl;
    // -> static struct [anonymous] * gapPathBits[2];
    // -> static struct [anonymous] * gpPathFlower;
    // -> static int gnCode;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static struct [anonymous] * gapDustBall[8];
    // -> static int gnDustBallCount;
    // -> static int giBallGirl;
    // -> static int gnColorBackAlpha;
    // -> static int gbGfxHeap;
    // -> static int gnTickStory;
    // -> static int giFrameGirl;
    // -> static int gnJumpGirl;
    // -> static struct [anonymous] * gpPathGirlWave;
    // -> static int gnOffsetGirl;
    // -> static struct [anonymous] * gpPathGirlMove;
    // -> static struct [anonymous] * gpPathGirlGlad;
    // -> static struct [anonymous] * gpPathGirlWait;
}

// Range: 0x94D70 -> 0x9515C
static int storyDrawIsleIsland(int iImage /* r26 */, union_pon_gc_c_0 * * ppGfx /* r24 */, int * pnScreenX /* r25 */, int * pnScreenY /* r23 */) {
    // Local variables
    int iLayer; // r27
    struct_image_c_39 * pImage; // r26
    float rX; // f31
    float rY; // f2
    float rZ; // f30
    struct_bitmap_c_16 * pBitmap; // r25
    int nAlpha; // r25
    int nOffset; // r1+0x8
    float rScale; // r1+0x20
    float rRatio; // f30
    int nDeltaX; // r30
    int nDeltaY; // r31
    int nScreenX; // r1+0x1C
    int nScreenY; // r1+0x18

    // References
    // -> static signed short ganOffsetIsle[3][5];
    // -> static float grCameraTargetY;
    // -> static float garOffsetIsle[3];
    // -> static float garHeight[3];
    // -> static int gnOffsetSun;
    // -> static int gnOffsetSunMax;
    // -> static int giLevelStory;
    // -> static struct [anonymous] * gapImageIsle[3][5];
}

static float grAngleBob; // size: 0x4, address: 0xF4D90
static int gnDeltaX; // size: 0x4, address: 0xF4D94
static int gnDeltaY; // size: 0x4, address: 0xF4D98
// Range: 0x9515C -> 0x956EC
static void storyDrawIsle(union_pon_gc_c_0 * * ppGfx /* r29 */, int nAlphaGirl /* r30 */) {
    // Local variables
    int bFlag; // r3
    float rScale; // r1+0x28
    float rRatio; // f1
    int iRainbow; // r27
    int nScreenX; // r1+0x24
    int nScreenY; // r1+0x20
    int nScreenIsleX; // r1+0x1C
    int nScreenIsleY; // r1+0x18

    // References
    // -> static struct [anonymous] * gapDustBall[8];
    // -> static int gnDustBallCount;
    // -> static int giBallGirl;
    // -> static @enum$1588story_c geModeGirl;
    // -> static struct [anonymous] * gpImageGirl;
    // -> static int giFrameGirl;
    // -> static int gnDeltaY;
    // -> static int gnDeltaX;
    // -> static float grCameraTargetY;
    // -> static int gnOffsetGirl;
    // -> static int gnJumpGirl;
    // -> static int gnHeightGirl;
    // -> static union [anonymous] gMtxView;
    // -> static float garView[4][4];
    // -> static float grFOV;
    // -> static unsigned short gnNormalize;
    // -> static union [anonymous] gMtxLook;
    // -> static float garLook[4][4];
    // -> static float grCameraTargetZ;
    // -> static float grCameraTargetX;
    // -> static float grCameraSourceZ;
    // -> static float grCameraSourceY;
    // -> static float grCameraSourceX;
    // -> static float grDistanceCamera;
    // -> static float grAngleBob;
    // -> static float garBaseRainbow[2][2];
}

static int ganCommandIsle[27]; // size: 0x6C, address: 0xDE3DC
static int ganCommandIsleSun[58]; // size: 0xE8, address: 0xDE448
@enum$1773story_c;
static @enum$1773story_c geModeIsle; // size: 0x4, address: 0xF4D9C
// Range: 0x956EC -> 0x95EE8
static void storyTickIsle(int iFrame /* r29 */, int bSkip /* r30 */) {
    // Local variables
    int nAlpha; // r27
    float rScale; // f31
    struct_image_c_39 * pImage; // r1+0x14
    int iRainbow; // r26
    int iIsland; // r25

    // References
    // -> struct OSMesgQueue_s gfxFrameMsgQ;
    // -> static int gnFlushCount;
    // -> static @enum$106story_c geXtraNext;
    // -> static @enum$105story_c geModeNext;
    // -> static int giLevelStory;
    // -> static @enum$1773story_c geModeIsle;
    // -> static struct [anonymous] * gpPathFlower;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int gnCode;
    // -> static @enum$1241story_c geHoldStory0;
    // -> static int gbGfxHeap;
    // -> static int gnOffsetGirl;
    // -> static int gnTagTitle;
    // -> static int gnTickStory;
    // -> static int gnTickAnchor;
    // -> static int gnOffsetCloud;
    // -> static int gnOffsetSun;
    // -> static int gnOffsetSunMax;
    // -> static int gnOffsetCloudMax;
    // -> static int giScreenStory;
    // -> static @enum$1588story_c geModeGirl;
    // -> static @enum$106story_c geXtra;
    // -> static int gbSkipScriptText;
    // -> static struct [anonymous] * gpPathGirlGlad;
    // -> static float grPercent1;
    // -> static float grPercent0;
    // -> static struct [anonymous] * gapImageIsle[3][5];
    // -> static float grAngleBob;
    // -> struct Game gTheGame;
    // -> int gMain;
    // -> int gReset;
    // -> static @enum$1241story_c geHoldStory1;
    // -> static @enum$1241story_c geHoldStory2;
}

char * Pon_Image_Heap; // size: 0x4, address: 0x184
// Range: 0x95EE8 -> 0x9670C
static void storySetupIsle() {
    // Local variables
    int bGirl; // r25
    void * pHeap; // r1+0x68
    int nScreenX; // r1+0x64
    int nScreenY; // r1+0x60
    int iIsle; // r26
    int iRainbow; // r27
    char * szName; // r24

    // References
    // -> static int gnOffsetCloudMax;
    // -> static int giScreenStory;
    // -> static int gnOffsetCloud;
    // -> static @enum$106story_c geXtra;
    // -> static int giLevelStory;
    // -> static int ganCommandIsleSun[58];
    // -> static int ganCommandIsle[27];
    // -> static float garHeight[3];
    // -> static union [anonymous] * gapVtxRainbow[2][2];
    // -> static int gaiPageRainbow[2];
    // -> static float grPercentLast1;
    // -> static float grPercentLast0;
    // -> static float grPercent1;
    // -> static float grPercent0;
    // -> static struct [anonymous] * gpImageRainbow;
    // -> static float garOffsetIsland[10];
    // -> static float garOffsetIsle[3];
    // -> static struct [anonymous] * gapImageIsle[3][5];
    // -> static @enum$1588story_c geModeGirl;
    // -> static int gnOffsetGirl;
    // -> static @enum$1773story_c geModeIsle;
    // -> static struct [anonymous] * gpImageGirl;
    // -> static struct [anonymous] * gapPathBits[2];
    // -> static struct [anonymous] * gpPathFlower;
    // -> static struct [anonymous] * gpImageBubble;
    // -> static struct [anonymous] * gpPathGirlWave;
    // -> static struct [anonymous] * gpPathGirlMove;
    // -> static int giBallGirl;
    // -> static struct [anonymous] * gapDustBall[8];
    // -> static int gnDustBallCount;
    // -> static struct [anonymous] * gpPathGirlGlad;
    // -> static struct [anonymous] * gpPathGirlWait;
    // -> char * Pon_Image_Heap;
    // -> static int gnOffsetTitle;
    // -> static int gnTagTitle;
    // -> static int gnColorBackAlpha;
    // -> static int gnDeltaY;
    // -> static int gnDeltaX;
    // -> static float grAngleBob;
    // -> static int giFrameGirl;
    // -> static int gnJumpGirl;
}

static void * gaszNameOpen[3]; // size: 0xC, address: 0xDE600
static int giScreenStorm; // size: 0x4, address: 0xF4DA0
// Range: 0x9670C -> 0x96898
static void storyTickOpen(int iFrame /* r3 */, int bSkip /* r4 */) {
    // Local variables
    int nX; // r27
    int nY; // r6

    // References
    // -> static int giScreenStory;
    // -> static int giScreenStorm;
    // -> static @enum$1241story_c geHoldStory0;
    // -> static @enum$1241story_c geHoldStory1;
    // -> struct OSMesgQueue_s gfxFrameMsgQ;
    // -> static int gnFlushCount;
    // -> static @enum$106story_c geXtraNext;
    // -> static @enum$105story_c geModeNext;
    // -> static int giLevelStory;
    // -> static int gnPickStory;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> struct Game gTheGame;
    // -> static int gnCode;
}

static void * gaszNameEnd[3]; // size: 0xC, address: 0xDE95C
static int ganCommandDone[164]; // size: 0x290, address: 0xDE968
static int ganCommandDoneEnd1[11]; // size: 0x2C, address: 0xDEBF8
static int ganCommandDoneEnd2[48]; // size: 0xC0, address: 0xDEC24
static int gnTickWhale; // size: 0x4, address: 0xF4DA4
static float grScaleWitch; // size: 0x4, address: 0xF4DA8
static struct_story_c_54 * gpPathEye1; // size: 0x4, address: 0xF4DAC
static struct_story_c_54 * gpPathEye2; // size: 0x4, address: 0xF4DB0
struct player_t * gPlayer[4]; // size: 0x10, address: 0x116F78
// Range: 0x96898 -> 0x971F4
static void storyTickDone(int iFrame /* r3 */, int bSkip /* r4 */) {
    // Local variables
    struct_image_c_39 * pImage; // r1+0x14
    int nOffsetX; // r27
    int nOffsetY; // r26
    int bFlag; // r30
    int nAlpha; // r26
    int bHags; // r29

    // References
    // -> struct OSMesgQueue_s gfxFrameMsgQ;
    // -> static int gnFlushCount;
    // -> static @enum$106story_c geXtraNext;
    // -> static @enum$105story_c geModeNext;
    // -> struct Game gTheGame;
    // -> int gMain;
    // -> int gReset;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int gnOffsetShakeY;
    // -> static int gnOffsetShakeX;
    // -> static int giScreenStory;
    // -> static float grScaleWitch;
    // -> static int gnTickStory;
    // -> static int gnTickAnchor;
    // -> static @enum$1241story_c geHoldStory0;
    // -> static int gbGfxHeap;
    // -> static int gnMagnitudeShake;
    // -> static int gnCode;
    // -> static struct [anonymous] * gpPathEye2;
    // -> static struct [anonymous] * gpPathEye1;
    // -> static struct [anonymous] * gapPathBits[2];
    // -> static @enum$1241story_c geHoldStory1;
    // -> static int gnTickWhale;
    // -> static void * gaszNameEnd[3];
    // -> static int ganCommandDoneEnd1[11];
    // -> static int ganCommandDoneEnd2[48];
    // -> static int ganCommandDone[164];
    // -> static int * ganCode;
    // -> struct player_t * gPlayer[4];
}

static void * gaszNameHags[1]; // size: 0x4, address: 0xDED30
static int ganCommandHags[70]; // size: 0x118, address: 0xDED34
static void * gaszNameCast[1]; // size: 0x4, address: 0xDEE60
static int ganCommandCast[8]; // size: 0x20, address: 0xDEE64
@enum$2278story_c;
static @enum$2278story_c geTypeCast; // size: 0x4, address: 0xF4DB4
static int gnTagCheat; // size: 0x4, address: 0xF4DB8
static int giBackStory; // size: 0x4, address: 0xF4DBC
static void * gapHeapBack[2]; // size: 0x8, address: 0xF4DC0
static struct_image_c_39 * gapImageBack[6]; // size: 0x18, address: 0xF4DC8
static struct_story_c_59 * gpBitsCast; // size: 0x4, address: 0xF4DE0
static int ganCommandWait[3]; // size: 0xC, address: 0xDEE84
static unsigned int ganColorBits[8]; // size: 0x20, address: 0xDEE90
int gSelection; // size: 0x4, address: 0xF4E94
char * * gaSegmentCharacter[]; // size: 0x0, address: 0xB1ED0
// Range: 0x971F4 -> 0x97ACC
static void storySetupCast() {
    // Local variables
    void * pHeap; // r1+0x34
    int nOffset; // r22
    int nTry; // r28
    int iRainbow; // r5
    int iBits; // r21
    unsigned char anBits[8]; // r1+0x2C
    int iCharacter; // r21
    int nOffsetCLUT; // r1+0x28
    int nOffsetData; // r1+0x24

    // References
    // -> static void * gaszNameCast[1];
    // -> static int ganCommandCast[8];
    // -> static int ganCommandWait[3];
    // -> static int giScreenStory;
    // -> struct Game gTheGame;
    // -> static struct [anonymous] * gapImageBack[6];
    // -> static @enum$2278story_c geTypeCast;
    // -> static struct [anonymous] * gpBitsCast;
    // -> static unsigned int ganColorBits[8];
    // -> static float garHeight[3];
    // -> static union [anonymous] * gapVtxRainbow[2][2];
    // -> static int gaiPageRainbow[2];
    // -> static struct [anonymous] * gpPathGirlMove;
    // -> static @enum$106story_c geXtra;
    // -> static struct [anonymous] * gpImageRainbow;
    // -> static struct [anonymous] * gpImageGirl;
    // -> static float grAngleBob;
    // -> static void * gapHeapBack[2];
    // -> static int giBackStory;
    // -> static int gbGfxHeap;
    // -> char * * gaSegmentCharacter[];
    // -> static int gnTagCheat;
    // -> int gSelection;
    // -> char * Pon_Image_Heap;
}

static int nFlagLast$2447; // size: 0x4, address: 0xF4DE4
// Range: 0x97ACC -> 0x97EC0
static int storyTickCastRainbow(int iFrame /* r27 */) {
    // Local variables
    void * pHeap; // r1+0x24
    struct_image_c_39 * pImage; // r1+0x8
    int iFrame0; // r1+0x20
    int iFrame1; // r1+0x1C
    int nType; // r1+0x18
    int nFlag; // r1+0x14
    int nCount; // r4
    int bDone; // r30
    int bFade; // r29
    char * acName; // r28

    // References
    // -> static @enum$1241story_c geHoldStory1;
    // -> static int gnTickAnchor;
    // -> static int gnTagCheat;
    // -> static int giBackStory;
    // -> static struct [anonymous] * gapImageBack[6];
    // -> static int giScreenStory;
    // -> static @enum$1241story_c geHoldStory0;
    // -> static @enum$2278story_c geTypeCast;
    // -> static void * gapHeapBack[2];
    // -> static int gbGfxHeap;
    // -> static int nFlagLast$2447;
    // -> static struct [anonymous] * gpPathGirlMove;
    // -> static int giFrameGirl;
    // -> static float grAngleBob;
}

static int nFlagLast$2531; // size: 0x4, address: 0xF4DE8
unsigned int ganColorCharacter[]; // size: 0x0, address: 0xB1DC0
// Range: 0x97EC0 -> 0x98250
static int storyTickCastProfile(int iFrame /* r28 */) {
    // Local variables
    void * pHeap; // r1+0x24
    struct_image_c_39 * pImage; // r1+0x20
    int iCharacter; // r30
    int nWait; // r3
    int nType; // r1+0x1C
    int nFlag; // r1+0x18
    int bDone; // r29
    int nOffsetCLUT; // r1+0x14
    int nOffsetData; // r1+0x10

    // References
    // -> static int giScreenStory;
    // -> static @enum$1241story_c geHoldStory1;
    // -> static int gnTickAnchor;
    // -> static int gnTagCheat;
    // -> struct OSMesgQueue_s gfxFrameMsgQ;
    // -> static int gnFlushCount;
    // -> static @enum$106story_c geXtraNext;
    // -> static @enum$105story_c geModeNext;
    // -> struct Game gTheGame;
    // -> int gSelection;
    // -> static @enum$1241story_c geHoldStory0;
    // -> unsigned int ganColorCharacter[];
    // -> static struct [anonymous] * gapImageBack[6];
    // -> char * * gaSegmentCharacter[];
    // -> static void * gapHeapBack[2];
    // -> static int nFlagLast$2531;
}

// Range: 0x98250 -> 0x984D4
static int storyTickCastFaries(int nTick /* r26 */) {
    // Local variables
    int iBits; // r27
    int nTag; // r4
    int iFrame; // r3

    // References
    // -> static int giScreenStory;
    // -> static struct [anonymous] * gpBitsCast;
}

// Range: 0x984D4 -> 0x98674
static void storyTickCast(int iFrame /* r28 */, int bSkip /* r29 */) {
    // Local variables
    int bDone; // r30

    // References
    // -> struct Game gTheGame;
    // -> int gMain;
    // -> int gReset;
    // -> struct OSMesgQueue_s gfxFrameMsgQ;
    // -> static int gnFlushCount;
    // -> static @enum$106story_c geXtraNext;
    // -> static @enum$105story_c geModeNext;
    // -> static int gnPickStory;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int gnCode;
    // -> static @enum$2278story_c geTypeCast;
}

// Range: 0x98674 -> 0x98814
static void storySetupChar() {
    // Local variables
    void * pHeap; // r1+0x8
    int iCursorX; // r5
    int iCursorY; // r6

    // References
    // -> struct Game gTheGame;
    // -> static @enum$105story_c geModeLast;
    // -> static int giScreenStory;
    // -> struct player_t * gPlayer[4];
    // -> static int gnColorBackAlpha;
    // -> static int gnColorBackBlue;
    // -> static int gnColorBackGreen;
    // -> static int gnColorBackRed;
    // -> char * Pon_Image_Heap;
}

// Range: 0x98814 -> 0x98A5C
static void storyTickChar(int bSkip /* r26 */) {
    // Local variables
    signed short nMask; // r27
    struct_image_c_39 * pImage; // r1+0x18
    int iCharacter; // r29
    int nTag; // r28
    int nTagWink; // r27
    int iCursorX; // r1+0x14
    int iCursorY; // r1+0x10

    // References
    // -> long last_song_handle;
    // -> struct Game gTheGame;
    // -> int gMain;
    // -> int gReset;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int giScreenStory;
    // -> struct player_t * gPlayer[4];
}

@enum$2732story_c;
static @enum$2732story_c geModeEnemy; // size: 0x4, address: 0xF4DEC
static struct_story_c_54 * gpPathNote; // size: 0x4, address: 0xF4DF0
static struct_story_c_54 * gpPathBaby; // size: 0x4, address: 0xF4DF4
static struct_story_c_54 * gpPathBat1; // size: 0x4, address: 0xF4DF8
static struct_story_c_54 * gpPathBat2; // size: 0x4, address: 0xF4DFC
static struct_story_c_54 * gpPathBat3; // size: 0x4, address: 0xF4E00
static struct_story_c_54 * gpPathBat4; // size: 0x4, address: 0xF4E04
static struct_story_c_54 * gpPathBat5; // size: 0x4, address: 0xF4E08
static struct_story_c_54 * gpPathBat1X; // size: 0x4, address: 0xF4E0C
static struct_story_c_54 * gpPathBat2X; // size: 0x4, address: 0xF4E10
static struct_story_c_54 * gpPathBat3X; // size: 0x4, address: 0xF4E14
static struct_story_c_54 * gpPathBat4X; // size: 0x4, address: 0xF4E18
static struct_story_c_54 * gpPathBat5X; // size: 0x4, address: 0xF4E1C
static struct_story_c_54 * gpPathMother; // size: 0x4, address: 0xF4E20
static struct_story_c_56 * gapPathNote[3]; // size: 0xC, address: 0xF4E24
static int gnHeightSky; // size: 0x4, address: 0xF4E30
static float grAngleSky; // size: 0x4, address: 0xF4E34
static struct_model_c_45 * gpModelSky; // size: 0x4, address: 0xF4E38
static struct_image_c_39 * gpImageRing; // size: 0x4, address: 0xF4E3C
static struct_image_c_39 * gpImageGlow; // size: 0x4, address: 0xF4E40
static struct_story_c_57 * gpBeamGoddess; // size: 0x4, address: 0xF4E44
static int gnCountZoom; // size: 0x4, address: 0xF4E48
static float grPercentZoom; // size: 0x4, address: 0xF4E4C
static int ganCommandDragonMeet[21]; // size: 0x54, address: 0xDEF1C
static int ganCommandDragonBeat[18]; // size: 0x48, address: 0xDEF70
struct_story_c_54 * gpPathGirl; // size: 0x4, address: 0xF4E50
// Range: 0x98A5C -> 0x990C0
static void storyTickKeysDragon(int iFrame /* r30 */) {
    // Local variables
    struct_image_c_39 * pImage; // r1+0x24
    int iKey; // r4
    int nFrame; // r1+0x20
    int nOffset; // r1+0x8
    int iScreen; // r1+0x1C
    int nAlpha; // r29

    // References
    // -> static struct [anonymous] * gpPathMother;
    // -> static struct [anonymous] * gpPathBaby;
    // -> static int giScreenStory;
    // -> static struct [anonymous] * gpPathBat5X;
    // -> static struct [anonymous] * gpPathBat5;
    // -> static struct [anonymous] * gpPathBat4X;
    // -> static struct [anonymous] * gpPathBat4;
    // -> static struct [anonymous] * gpPathBat3X;
    // -> static struct [anonymous] * gpPathBat3;
    // -> static struct [anonymous] * gpPathBat2X;
    // -> static struct [anonymous] * gpPathBat2;
    // -> static struct [anonymous] * gpPathBat1X;
    // -> static struct [anonymous] * gpPathBat1;
    // -> static struct [anonymous] * gpPathNote;
    // -> struct [anonymous] * gpPathGirl;
    // -> static int gnTickStory;
    // -> static @enum$1241story_c geHoldStory2;
    // -> static @enum$1241story_c geHoldStory1;
    // -> static int gnTickAnchor;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static @enum$1241story_c geHoldStory0;
    // -> static int gnOffsetShakeY;
    // -> static int gnOffsetShakeX;
    // -> struct OSMesgQueue_s gfxFrameMsgQ;
    // -> static int gnFlushCount;
    // -> static @enum$106story_c geXtraNext;
    // -> static @enum$105story_c geModeNext;
    // -> static int gbGfxHeap;
    // -> static int giLevelStory;
    // -> static int gnHeightSky;
    // -> static struct [anonymous] * gpPathFlower;
    // -> static struct [anonymous] * gapPathBits[2];
    // -> static int gnMagnitudeShake;
    // -> static int gnColorBackAlpha;
    // -> static @enum$106story_c geXtra;
}

// Range: 0x990C0 -> 0x99298
static void storyTickKeysNotes(struct_story_c_56 * * apPath /* r3 */, int iFrame /* r1+0xC */) {
    // Local variables
    float rScale; // r1+0x28
    struct_image_c_39 * pImage; // r1+0x24
    float rX; // r1+0x20
    float rY; // r1+0x1C
    float rZ; // r1+0x18
    int iNote; // r27
    int nAlpha; // r1+0x8
    int nScreenX; // r1+0x14
    int nScreenY; // r1+0x10

    // References
    // -> static int giScreenStory;
    // -> static float grPercentZoom;
}

static int ganCommandJokerMeet[30]; // size: 0x78, address: 0xDEFC4
static int ganCommandJokerBeat[11]; // size: 0x2C, address: 0xDF03C
// Range: 0x99298 -> 0x99768
static void storyTickKeysJoker(int iFrame /* r29 */) {
    // Local variables
    struct_image_c_39 * pImage; // r1+0x10
    int nAlpha; // r6
    int nFrame; // r1+0xC
    int bBlur; // r30
    int nOffset0; // r28
    int nOffset1; // r28

    // References
    // -> static int giScreenStory;
    // -> static @enum$1241story_c geHoldStory1;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int gnTickAnchor;
    // -> static @enum$1241story_c geHoldStory0;
    // -> static int gnTickStory;
    // -> static @enum$1241story_c geHoldStory2;
    // -> struct [anonymous] * gpPathGirl;
    // -> struct OSMesgQueue_s gfxFrameMsgQ;
    // -> static int gnFlushCount;
    // -> static @enum$106story_c geXtraNext;
    // -> static @enum$105story_c geModeNext;
    // -> static int gnColorBackAlpha;
    // -> static @enum$1241story_c geHoldStory3;
    // -> static int gbGfxHeap;
    // -> static int giLevelStory;
    // -> static @enum$106story_c geXtra;
}

static int ganCommandDevilMeet[18]; // size: 0x48, address: 0xDF068
static int ganCommandDevilBeat[29]; // size: 0x74, address: 0xDF0B0
// Range: 0x99768 -> 0x9A06C
static void storyTickKeysSanatos(int iFrame /* r28 */) {
    // Local variables
    int nX; // r5
    int nY; // r6
    float rScale; // f4
    struct_image_c_39 * pImage; // r1+0x20
    int iImage; // r3
    int nOffset; // r29
    int nAlpha; // r1+0x8

    // References
    // -> static int giScreenStory;
    // -> static int gnOffsetShakeY;
    // -> static int gnOffsetShakeX;
    // -> static int gnTickAnchor;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int gnTickStory;
    // -> static @enum$1241story_c geHoldStory0;
    // -> static int gnMagnitudeShake;
    // -> static int gnAlphaRays;
    // -> struct [anonymous] * gpPathGirl;
    // -> struct OSMesgQueue_s gfxFrameMsgQ;
    // -> static int gnFlushCount;
    // -> static @enum$106story_c geXtraNext;
    // -> static @enum$105story_c geModeNext;
    // -> static int gnColorBackAlpha;
    // -> static @enum$1241story_c geHoldStory1;
    // -> static int gbGfxHeap;
    // -> static int giLevelStory;
    // -> static @enum$1241story_c geHoldStory5;
    // -> static float grPercentZoom;
    // -> static int gnCountZoom;
    // -> static @enum$1241story_c geHoldStory3;
    // -> static struct [anonymous] * gpPathBat5X;
    // -> static struct [anonymous] * gpPathBat5;
    // -> static struct [anonymous] * gpPathBat4X;
    // -> static struct [anonymous] * gpPathBat4;
    // -> static struct [anonymous] * gpPathBat3X;
    // -> static struct [anonymous] * gpPathBat3;
    // -> static struct [anonymous] * gpPathBat2X;
    // -> static struct [anonymous] * gpPathBat2;
    // -> static struct [anonymous] * gpPathBat1X;
    // -> static struct [anonymous] * gpPathBat1;
    // -> static @enum$1241story_c geHoldStory2;
    // -> static struct [anonymous] * gapPathNote[3];
    // -> static struct [anonymous] * gpPathNote;
    // -> static @enum$1241story_c geHoldStory4;
    // -> static @enum$106story_c geXtra;
    // -> static struct [anonymous] * gapPathBits[2];
}

static signed short gnDataGlow; // size: 0x2, address: 0xF4E54
static unsigned int ganDataRing[4]; // size: 0x10, address: 0xF4E58
// Range: 0x9A06C -> 0x9A7A0
static void storyDrawGoddess(union_pon_gc_c_0 * * ppGfx /* r1+0x8 */) {
    // Local variables
    union_pon_gc_c_0 * pGfx; // r4
    struct_bitmap_c_16 * pBitmap; // r5
    int iRing; // r1+0x8
    int nSize; // r7
    int nStep; // r5
    union_pon_gc_c_0 * _g; // r5
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r6
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r10
    union_pon_gc_c_0 * _g; // r11
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r10
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r10
    union_pon_gc_c_0 * _g; // r8
    union_pon_gc_c_0 * _g; // r28
    union_pon_gc_c_0 * _g; // r29
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r11
    union_pon_gc_c_0 * _g; // r8
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r10
    union_pon_gc_c_0 * _g; // r11
    union_pon_gc_c_0 * _g; // r12
    union_pon_gc_c_0 * _g; // r7
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r4
    union_pon_gc_c_0 * _g; // r11
    union_pon_gc_c_0 * _g; // r9
    union_pon_gc_c_0 * _g; // r4

    // References
    // -> static unsigned int ganDataRing[4];
    // -> static struct [anonymous] * gpImageRing;
    // -> static int gnTickStory;
    // -> static struct [anonymous] * gpImageGlow;
    // -> static signed short gnDataGlow;
}

// Range: 0x9A7A0 -> 0x9A9DC
static void storyTickKeysRings(int iFrame /* r1+0x8 */, int bFlag /* r1+0xC */) {
    // Local variables
    int iRing; // r1+0x8
    int nSize; // r6
    int nColor; // r1+0x8

    // References
    // -> static unsigned int ganDataRing[4];
}

static int ganCommandGoddessMeet[27]; // size: 0x6C, address: 0xDF124
static int ganCommandGoddessBeat[33]; // size: 0x84, address: 0xDF190
// Range: 0x9A9DC -> 0x9B024
static void storyTickKeysGoddess(int iFrame /* r27 */) {
    // Local variables
    float rRatio; // f31
    struct_image_c_39 * pImage; // r1+0xC
    @enum$2732story_c eMode; // r28
    int nFrame; // r1+0x8
    int nAlpha; // r28
    int nSize; // r3

    // References
    // -> static @enum$2732story_c geModeEnemy;
    // -> static int gnTickStory;
    // -> static signed short gnDataGlow;
    // -> static int giScreenStory;
    // -> static int gnColorBackAlpha;
    // -> static @enum$1241story_c geHoldStory0;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> struct [anonymous] * gpPathGirl;
    // -> static struct [anonymous] * gpBeamGoddess;
    // -> struct OSMesgQueue_s gfxFrameMsgQ;
    // -> static int gnFlushCount;
    // -> static @enum$106story_c geXtraNext;
    // -> static @enum$105story_c geModeNext;
    // -> static @enum$1241story_c geHoldStory1;
    // -> static int gbGfxHeap;
    // -> static int giLevelStory;
    // -> static @enum$1241story_c geHoldStory4;
    // -> static @enum$1241story_c geHoldStory2;
    // -> static struct [anonymous] * gpPathBaby;
    // -> static int gnTickAnchor;
    // -> static @enum$106story_c geXtra;
}

static int ganCommandWhaleMeet[34]; // size: 0x88, address: 0xDF230
static int gnTickFlash; // size: 0x4, address: 0xF4E68
static int gnAlphaWhale; // size: 0x4, address: 0xF4E6C
static int gnDeltaWhale; // size: 0x4, address: 0xF4E70
static int * ganWaitRockLarge; // size: 0x4, address: 0xF4E74
static int * ganWaitRockSmall; // size: 0x4, address: 0xF4E78
// Range: 0x9B024 -> 0x9B4F0
static void storyTickKeysWhale(int iFrame /* r26 */) {
    // Local variables
    int nX; // r1+0x2C
    int nY; // r1+0x28
    struct_image_c_39 * pImage; // r1+0x24
    int nSize; // r27
    int iRock; // r28

    // References
    // -> static int gnOffsetShakeY;
    // -> static int gnOffsetShakeX;
    // -> static int giScreenStory;
    // -> static struct [anonymous] * gapPathNote[3];
    // -> static int gnMagnitudeShake;
    // -> static @enum$1241story_c geHoldStory1;
    // -> static int gnTickFlash;
    // -> static int gbGfxHeap;
    // -> static @enum$1241story_c geHoldStory0;
    // -> static int * ganWaitRockLarge;
    // -> static int * ganWaitRockSmall;
    // -> static int gnColorBackAlpha;
    // -> static int gnDeltaWhale;
    // -> static int gnAlphaWhale;
    // -> static struct [anonymous] * gapImageBack[6];
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
}

// Range: 0x9B4F0 -> 0x9B8B4
static void storyTickKeys(int iFrame /* r30 */, int bSkip /* r29 */) {
    // Local variables
    struct_image_c_39 * pImage; // r1+0x10

    // References
    // -> static int gbGfxHeap;
    // -> static float grAngleSky;
    // -> static int giScreenStory;
    // -> static int giLevelStory;
    // -> static struct [anonymous] * gapPathNote[3];
    // -> static @enum$105story_c geModeNext;
    // -> static struct [anonymous] * gpPathBat5;
    // -> static struct [anonymous] * gpPathBat4;
    // -> static struct [anonymous] * gpPathBat3;
    // -> static struct [anonymous] * gpPathBat2;
    // -> static struct [anonymous] * gpPathBat1;
    // -> static int gnOffsetShakeY;
    // -> static int gnOffsetShakeX;
    // -> static int gnMagnitudeShake;
    // -> static float grAngleRay;
    // -> struct Game gTheGame;
    // -> int gMain;
    // -> int gReset;
    // -> struct OSMesgQueue_s gfxFrameMsgQ;
    // -> static int gnFlushCount;
    // -> static @enum$106story_c geXtraNext;
    // -> static @enum$106story_c geXtra;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int gnCode;
}

static char * acNameNote$3660; // size: 0x4, address: 0xDF2C4
char * gc_bg2dwhale2; // size: 0x4, address: 0xB0
// Range: 0x9B8B4 -> 0x9C8CC
static void storySetupKeys() {
    // Local variables
    int nTag; // r24
    void * pHeap; // r1+0x30
    struct_image_c_39 * pImage; // r1+0x2C
    int iObject; // r24
    int bFlag; // r26
    int nMode; // r25
    int nSeed; // r1+0x10

    // References
    // -> static int giScreenStory;
    // -> static union [anonymous] gMtxView;
    // -> static float garView[4][4];
    // -> static float grFOV;
    // -> static unsigned short gnNormalize;
    // -> static union [anonymous] gMtxLook;
    // -> static float garLook[4][4];
    // -> static float grCameraTargetZ;
    // -> static float grCameraTargetY;
    // -> static float grCameraTargetX;
    // -> static float grCameraSourceZ;
    // -> static float grCameraSourceY;
    // -> static float grCameraSourceX;
    // -> static float grDistanceCamera;
    // -> static int giLevelStory;
    // -> static char * acNameNote$3660;
    // -> static struct [anonymous] * gapPathNote[3];
    // -> static int gnTickFlash;
    // -> static int gnColorBackAlpha;
    // -> static int gnColorBackBlue;
    // -> static int gnColorBackGreen;
    // -> static int gnColorBackRed;
    // -> static int * ganWaitRockSmall;
    // -> static int * ganWaitRockLarge;
    // -> static struct [anonymous] * gapImageBack[6];
    // -> char * gc_bg2dwhale2;
    // -> char * Pon_Image_Heap;
    // -> static int gnAlphaWhale;
    // -> static int gnDeltaWhale;
    // -> static int ganCommandWhaleMeet[34];
    // -> struct Game gTheGame;
    // -> static struct [anonymous] * gpPathBaby;
    // -> struct [anonymous] * gpPathGirl;
    // -> static int ganCommandGoddessBeat[33];
    // -> static int ganCommandGoddessMeet[27];
    // -> static @enum$106story_c geXtra;
    // -> static struct [anonymous] * gpImageGlow;
    // -> static struct [anonymous] * gpImageRing;
    // -> static struct [anonymous] * gpBeamGoddess;
    // -> static @enum$2732story_c geModeEnemy;
    // -> static struct [anonymous] * gpPathBat5X;
    // -> static struct [anonymous] * gpPathBat4X;
    // -> static struct [anonymous] * gpPathBat3X;
    // -> static struct [anonymous] * gpPathBat2X;
    // -> static struct [anonymous] * gpPathBat1X;
    // -> static struct [anonymous] * gpPathBat5;
    // -> static struct [anonymous] * gpPathBat4;
    // -> static struct [anonymous] * gpPathBat3;
    // -> static struct [anonymous] * gpPathBat2;
    // -> static struct [anonymous] * gpPathBat1;
    // -> static struct [anonymous] * gpPathNote;
    // -> static int ganCommandDevilBeat[29];
    // -> static struct [anonymous] * gapPathBits[2];
    // -> static int gnCountZoom;
    // -> static int gnAlphaRays;
    // -> static int ganCommandDevilMeet[18];
    // -> static int ganCommandJokerBeat[11];
    // -> static int ganCommandJokerMeet[30];
    // -> static struct [anonymous] * gpPathMother;
    // -> static struct [anonymous] * gpPathFlower;
    // -> static int ganCommandDragonBeat[18];
    // -> static int ganCommandDragonMeet[21];
    // -> static struct [anonymous] * gpImageBubble;
    // -> static int gnHeightSky;
    // -> static struct [anonymous] * gpModelSky;
    // -> static float grPercentZoom;
    // -> static float grAngleSky;
}

// Range: 0x9C8CC -> 0x9CBC0
static void storyTickPick(int bSkip /* r28 */) {
    // Local variables
    @enum$105story_c eMode; // r30
    int iCursorX; // r1+0x58
    int iCursorY; // r1+0x54
    int nLimit; // r29
    unsigned short anText[33]; // r1+0x10

    // References
    // -> struct OSMesgQueue_s gfxFrameMsgQ;
    // -> static int gnFlushCount;
    // -> static @enum$106story_c geXtraNext;
    // -> static @enum$105story_c geModeNext;
    // -> static int giMovieStory;
    // -> static int gbGfxHeap;
    // -> static int gnPickStory;
    // -> static int giLevelStory;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int giScreenStory;
    // -> struct Game gTheGame;
}

// Range: 0x9CBC0 -> 0x9CC5C
void storyPlaySong(int iSong /* r30 */, int bFade /* r31 */) {
    // References
    // -> struct SongInitStruct BGM_INIT_TABLE[91];
}

// Range: 0x9CC5C -> 0x9D248
void DoStory() {
    // Local variables
    int bSkip; // r29
    int bSave; // r29
    int anCommand[4]; // r1+0x18

    // References
    // -> static int gnFlushCount;
    // -> static int gnTickStory;
    // -> struct OSMesgQueue_s gfxFrameMsgQ;
    // -> static @enum$106story_c geXtraNext;
    // -> static @enum$105story_c geModeNext;
    // -> static int gnPickStory;
    // -> static int gnCode;
    // -> static @enum$1241story_c geHoldStory0;
    // -> static int gnOffsetWipe;
    // -> static int gbGfxHeap;
    // -> static @enum$105story_c geMode;
    // -> int gReset;
    // -> int gMain;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> struct Game gTheGame;
    // -> static int gnSkipCount;
    // -> static @enum$105story_c geModeLast;
    // -> struct player_t * gPlayer[4];
    // -> static void * gaszNameHags[1];
    // -> static int ganCommandHags[70];
    // -> char * Pon_Image_Heap;
    // -> static void * gaszNameEnd[3];
    // -> static int ganCommandDone[164];
    // -> static struct [anonymous] * gapPathBits[2];
    // -> static struct [anonymous] * gpPathEye2;
    // -> static struct [anonymous] * gpPathEye1;
    // -> static int gnTickWhale;
    // -> static float grScaleWitch;
    // -> static void * gaszNameOpen[3];
    // -> int ganCommandOpen[203];
    // -> static int giScreenStorm;
    // -> static int giScreenStory;
    // -> static float grFOV;
    // -> static int gnColorBackAlpha;
    // -> static int gnColorBackBlue;
    // -> static int gnColorBackGreen;
    // -> static int gnColorBackRed;
    // -> static @enum$106story_c geXtra;
    // -> static int gnTickAnchor;
    // -> static int gnMagnitudeShake;
    // -> static struct [anonymous] * gpImageDustGlow;
    // -> static struct [anonymous] * gpImageDustBall;
    // -> static struct [anonymous] * gpImageDustBits;
    // -> static int gnDustBallCount;
}

// Range: 0x9D248 -> 0x9EC0C
static void storyDrawImage(union_pon_gc_c_0 * * ppGfx /* r30 */, int iScreen /* r29 */, int nTag /* r24 */) {
    // Local variables
    union_pon_gc_c_0 * pGfx; // r1+0x40
    float rScale; // r1+0x3C
    struct_image_c_39 * pImage; // r1+0x38
    int iBits; // r1+0x8
    int iBack; // r24
    int nSize; // r7
    int nX; // r1+0x34
    int nY; // r1+0x30
    int nAlpha; // r3
    int bFlag; // r28
    int nColor; // r6
    union_pon_gc_MemoryCard_c_14 * pMtx0; // r27
    union_pon_gc_MemoryCard_c_14 * pMtx1; // r26
    union_pon_gc_MemoryCard_c_14 * pMtx2; // r25
    union_pon_gc_MemoryCard_c_14 * pMtx3; // r23
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
    union_pon_gc_c_0 * _g; // r1+0x8
    union_pon_gc_c_0 * _g; // r1+0x8

    // References
    // -> static struct [anonymous] * gapImageBack[6];
    // -> static struct [anonymous] * gpBitsCast;
    // -> static int giBackStory;
    // -> static struct [anonymous] * gpImageGirl;
    // -> static int giFrameGirl;
    // -> static float grFOV;
    // -> static float grAngleBob;
    // -> static float garBaseRainbow[2][2];
    // -> static @enum$2278story_c geTypeCast;
    // -> static int gnOffsetWipe;
    // -> static struct [anonymous] * gpPathBat5;
    // -> static struct [anonymous] * gpPathBat4;
    // -> static struct [anonymous] * gpPathBat3;
    // -> static struct [anonymous] * gpPathBat2;
    // -> static struct [anonymous] * gpPathBat1;
    // -> static int gnOffsetShakeY;
    // -> static int gnDeltaWhale;
    // -> static int gnOffsetShakeX;
    // -> struct [anonymous] * gpPathGirl;
    // -> static float grPercentZoom;
    // -> static @enum$1241story_c geHoldStory3;
    // -> static struct [anonymous] * gapPathBits[2];
    // -> static struct [anonymous] * gpPathNote;
    // -> static @enum$1241story_c geHoldStory4;
    // -> static struct [anonymous] * gpPathMother;
    // -> static struct [anonymous] * gpImageBubble;
    // -> static struct [anonymous] * gpPathFlower;
    // -> static struct [anonymous] * gpPathBaby;
    // -> static int gnCode;
    // -> static @enum$106story_c geXtra;
    // -> static struct [anonymous] * gpPathEye2;
    // -> static struct [anonymous] * gpPathEye1;
    // -> static int gnColorBackGreen;
    // -> static int gnColorBackRed;
    // -> static int gnColorBackBlue;
    // -> static int gnColorBackAlpha;
    // -> static struct [anonymous] * gpBeamGoddess;
    // -> static struct [anonymous] * gpModelSky;
    // -> static float grAngleSky;
    // -> static int gnHeightSky;
    // -> static int giMtxDraw;
    // -> static union [anonymous] gaMtxStory[5][2];
}

union_pon_gc_c_0 * glistp; // size: 0x4, address: 0x50F48
// Range: 0x9EC0C -> 0x9EE9C
void DrawStory() {
    // Local variables
    union_pon_gc_c_0 * pGfx; // r1+0x10
    union_pon_gc_c_0 * pGfxHeap; // r1+0xC
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
    // -> static union [anonymous] * gpGfxHeapLast;
    // -> static int giMtxDraw;
    // -> static int gbGfxHeap;
    // -> static union [anonymous] gaMtxStory[5][2];
    // -> static unsigned short gnNormalize;
    // -> static union [anonymous] gMtxLook;
    // -> static union [anonymous] gMtxView;
    // -> static int gnFlushCount;
}

// Range: 0x9EE9C -> 0x9F174
void InitStory() {
    // Local variables
    int bFlag; // r5

    // References
    // -> struct OSMesgQueue_s gfxFrameMsgQ;
    // -> static int gnFlushCount;
    // -> static @enum$106story_c geXtraNext;
    // -> static @enum$105story_c geModeNext;
    // -> struct Game gTheGame;
    // -> struct player_t * gPlayer[4];
    // -> int gSelection;
    // -> static int giMovieStory;
    // -> static int gnPickStory;
    // -> static @enum$105story_c geModeLast;
    // -> static @enum$105story_c geMode;
    // -> static @enum$106story_c geXtra;
    // -> static int gnTickStory;
    // -> static int gnAlphaBack;
    // -> static int gbGfxHeap;
    // -> static union [anonymous] gMtxView;
    // -> static float garView[4][4];
    // -> static float grFOV;
    // -> static unsigned short gnNormalize;
    // -> static union [anonymous] gMtxLook;
    // -> static float garLook[4][4];
    // -> static float grCameraTargetZ;
    // -> static float grCameraTargetY;
    // -> static float grCameraTargetX;
    // -> static float grCameraSourceZ;
    // -> static float grCameraSourceY;
    // -> static float grCameraSourceX;
    // -> static float grDistanceCamera;
    // -> static int giMtxDraw;
    // -> static int gnSkipCount;
}


