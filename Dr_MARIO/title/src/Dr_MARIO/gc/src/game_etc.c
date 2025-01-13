/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\game_etc.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00023E48 -> 0x00026718
*/
static int pause_table[2][6]; // size: 0x30, address: 0x50B0
static int cont_table[4][6]; // size: 0x60, address: 0x50E0
static unsigned long etc_parts_tbl[16]; // size: 0x40, address: 0x5140
static long x2p[2]; // size: 0x8, address: 0x5180
static long x4p[4]; // size: 0x10, address: 0x5188
static int binCount; // size: 0x4, address: 0x1CEA8
static int cont_bg_flg; // size: 0x4, address: 0x1CEAC
static unsigned long etcTexAddress; // size: 0x4, address: 0x1CEB0
static struct_main_story_c_211 * * etcLwsAddress; // size: 0x4, address: 0x1CEB4
static struct_main_story_c_211 * etcLwsTbl[16]; // size: 0x40, address: 0x1CEB8
static unsigned long logo_ofsY; // size: 0x4, address: 0x1CEF8
static int etc_mode; // size: 0x4, address: 0x1CEFC
static struct_game_etc_c_426 g_etc_work[4]; // size: 0x3C0, address: 0x1CF00
static union_main_story_c_778 etc_viewMtx; // size: 0x40, address: 0x1D2C0
static struct_main_story_c_793 etc_vp; // size: 0x10, address: 0x5198
static union_drmario_gc_c_202 etc_setup[19]; // size: 0x98, address: 0x51A8
@enum$107dm_title_main_c;
@enum$107dm_title_main_c evs_gamemode; // size: 0x4, address: 0x190B4
unsigned long attack_sprite_address; // size: 0x4, address: 0x1D300
@enum$99dm_game_main_c;
@enum$98dm_game_main_c;
struct SAnimeSeq {
    // total size: 0x1C
    unsigned char labelStack[4]; // offset 0x0, size 0x4
    unsigned char countStack[4]; // offset 0x4, size 0x4
    int stackDepth; // offset 0x8, size 0x4
    unsigned char * * seqArray; // offset 0xC, size 0x4
    int animeNo; // offset 0x10, size 0x4
    int seqCount; // offset 0x14, size 0x4
    int textureNo; // offset 0x18, size 0x4
};
struct SAnimeState {
    // total size: 0x40
    struct SAnimeSeq animeSeq[1]; // offset 0x0, size 0x1C
    struct_tex_func_c_1287 * texArray; // offset 0x1C, size 0x4
    unsigned long frameCount; // offset 0x20, size 0x4
    int center[2]; // offset 0x24, size 0x8
    int charNo; // offset 0x2C, size 0x4
    int color[4]; // offset 0x30, size 0x10
};
struct_dm_game_main_c_176 game_state_data[4]; // size: 0xF10, address: 0x1A1B8
int attack_effect_idx; // size: 0x4, address: 0x1D304
struct_game_etc_c_787 attack_effect[16]; // size: 0x2C0, address: 0x1D308
int attack_sprite_idx; // size: 0x4, address: 0x1D5C8
struct_game_etc_c_796 attack_sprite[128]; // size: 0xA00, address: 0x1D5CC
// Range: 0x23E48 -> 0x2437C
void initEtcWork(unsigned long address /* r1+0x8 */, int bin_count /* r1+0xC */) {
    // Local variables
    int i; // r1+0x8
    int n; // r1+0x8
    unsigned long tmp; // r5

    // References
    // -> static struct [anonymous] * etcLwsTbl[16];
    // -> static struct [anonymous] * * etcLwsAddress;
    // -> struct [anonymous] attack_sprite[128];
    // -> int attack_sprite_idx;
    // -> struct [anonymous] attack_effect[16];
    // -> int attack_effect_idx;
    // -> static int binCount;
    // -> static struct [anonymous] g_etc_work[4];
    // -> struct [anonymous] game_state_data[4];
    // -> static union [anonymous] etc_viewMtx;
    // -> static int etc_mode;
    // -> static unsigned long etc_parts_tbl[16];
    // -> unsigned long attack_sprite_address;
    // -> static unsigned long etcTexAddress;
    // -> static unsigned long logo_ofsY;
    // -> @enum$107dm_title_main_c evs_gamemode;
}

// Range: 0x2437C -> 0x247A0
void init_pause_disp() {
    // Local variables
    int i; // r1+0x0
    int n; // r1+0x0

    // References
    // -> static struct [anonymous] g_etc_work[4];
}

// Range: 0x247A0 -> 0x24818
void disp_logo_setup(union_drmario_gc_c_202 * * glp /* r30 */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r31
    union_drmario_gc_c_202 * _g; // r4
    union_drmario_gc_c_202 * _g; // r4

    // References
    // -> static struct [anonymous] * * etcLwsAddress;
    // -> static union [anonymous] etc_viewMtx;
}

// Range: 0x24818 -> 0x24908
int disp_count_logo(union_drmario_gc_c_202 * * glp /* r31 */, int player /* r1+0xC */, int count /* r29 */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r1+0x54
    long pm[4][4]; // r1+0x14
    long x; // r1+0x8
    long y; // r5
    int ret; // r3
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static struct [anonymous] * * etcLwsAddress;
    // -> static struct [anonymous] * etcLwsTbl[16];
    // -> static long x4p[4];
    // -> static long x2p[2];
    // -> static int binCount;
    // -> static union [anonymous] etc_setup[19];
}

// Range: 0x24908 -> 0x24A6C
void disp_clear_logo(union_drmario_gc_c_202 * * glp /* r29 */, int player /* r1+0xC */, int flg /* r28 */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r1+0x54
    struct_game_etc_c_426 * pge; // r30
    long pm[4][4]; // r1+0x14
    long x; // r1+0x8
    long y; // r5
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static struct [anonymous] * * etcLwsAddress;
    // -> static struct [anonymous] * etcLwsTbl[16];
    // -> static long x4p[4];
    // -> static long x2p[2];
    // -> static int binCount;
    // -> static union [anonymous] etc_setup[19];
    // -> static struct [anonymous] g_etc_work[4];
}

// Range: 0x24A6C -> 0x24BD0
void disp_allclear_logo(union_drmario_gc_c_202 * * glp /* r29 */, int player /* r1+0xC */, int flg /* r28 */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r1+0x54
    struct_game_etc_c_426 * pge; // r30
    long pm[4][4]; // r1+0x14
    long x; // r1+0x8
    long y; // r5
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static struct [anonymous] * * etcLwsAddress;
    // -> static struct [anonymous] * etcLwsTbl[16];
    // -> static long x4p[4];
    // -> static long x2p[2];
    // -> static int binCount;
    // -> static union [anonymous] etc_setup[19];
    // -> static struct [anonymous] g_etc_work[4];
}

// Range: 0x24BD0 -> 0x24D24
void disp_win_logo(union_drmario_gc_c_202 * * glp /* r30 */, int player /* r1+0xC */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r1+0x50
    struct_game_etc_c_426 * pge; // r31
    long pm[4][4]; // r1+0x10
    long x; // r4
    long y; // r5
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static struct [anonymous] * * etcLwsAddress;
    // -> static struct [anonymous] * etcLwsTbl[16];
    // -> static int binCount;
    // -> static unsigned long logo_ofsY;
    // -> static long x4p[4];
    // -> static long x2p[2];
    // -> static union [anonymous] etc_setup[19];
    // -> static struct [anonymous] g_etc_work[4];
}

// Range: 0x24D24 -> 0x24E78
void disp_lose_logo(union_drmario_gc_c_202 * * glp /* r30 */, int player /* r1+0xC */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r1+0x50
    struct_game_etc_c_426 * pge; // r31
    long pm[4][4]; // r1+0x10
    long x; // r4
    long y; // r5
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static struct [anonymous] * * etcLwsAddress;
    // -> static struct [anonymous] * etcLwsTbl[16];
    // -> static int binCount;
    // -> static unsigned long logo_ofsY;
    // -> static long x4p[4];
    // -> static long x2p[2];
    // -> static union [anonymous] etc_setup[19];
    // -> static struct [anonymous] g_etc_work[4];
}

// Range: 0x24E78 -> 0x24FCC
void disp_draw_logo(union_drmario_gc_c_202 * * glp /* r30 */, int player /* r1+0xC */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r1+0x50
    struct_game_etc_c_426 * pge; // r31
    long pm[4][4]; // r1+0x10
    long x; // r4
    long y; // r5
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static struct [anonymous] * * etcLwsAddress;
    // -> static struct [anonymous] * etcLwsTbl[16];
    // -> static int binCount;
    // -> static unsigned long logo_ofsY;
    // -> static long x4p[4];
    // -> static long x2p[2];
    // -> static union [anonymous] etc_setup[19];
    // -> static struct [anonymous] g_etc_work[4];
}

union_drmario_gc_c_202 alpha_texture_init_dl[]; // size: 0x0, address: 0x41A0
union_drmario_gc_c_202 normal_texture_init_dl[]; // size: 0x0, address: 0x4208
// Range: 0x24FCC -> 0x254DC
int disp_pause_logo(union_drmario_gc_c_202 * * glp /* r25 */, int player /* r1+0xC */, int cursor /* r26 */, int type /* r1+0x18 */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r1+0x84
    struct_game_etc_c_426 * pge; // r27
    struct_main_story_c_3359 gbi; // r1+0x70
    struct_main_story_c_3359 gbia; // r1+0x5C
    long pm[4][4]; // r1+0x1C
    float fx; // f31
    float fy; // f30
    int a; // r1+0x8
    int x; // r1+0x8
    int y; // r5
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static int pause_table[2][6];
    // -> union [anonymous] normal_texture_init_dl[];
    // -> static unsigned long etc_parts_tbl[16];
    // -> static unsigned long etcTexAddress;
    // -> union [anonymous] alpha_texture_init_dl[];
    // -> static struct [anonymous] * * etcLwsAddress;
    // -> static struct [anonymous] * etcLwsTbl[16];
    // -> static int binCount;
    // -> static long x4p[4];
    // -> static long x2p[2];
    // -> static union [anonymous] etc_setup[19];
    // -> static int etc_mode;
    // -> static struct [anonymous] g_etc_work[4];
}

// Range: 0x254DC -> 0x2592C
int etc_continue_logo(union_drmario_gc_c_202 * * glp /* r25 */, int player /* r1+0xC */, int cursor /* r26 */, int type /* r27 */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r1+0x44
    struct_game_etc_c_426 * pge; // r28
    struct_main_story_c_3359 gbi; // r1+0x30
    struct_main_story_c_3359 gbia; // r1+0x1C
    float fx; // f31
    float fy; // f30
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static int cont_table[4][6];
    // -> union [anonymous] normal_texture_init_dl[];
    // -> static unsigned long etc_parts_tbl[16];
    // -> static unsigned long etcTexAddress;
    // -> union [anonymous] alpha_texture_init_dl[];
    // -> static int binCount;
    // -> static int cont_bg_flg;
    // -> static struct [anonymous] g_etc_work[4];
}

// Range: 0x2592C -> 0x25A0C
int disp_continue_logo(union_drmario_gc_c_202 * * glp /* r3 */, int player /* r4 */, int cursor /* r5 */, int type /* r6 */) {
    // Local variables
    struct_game_etc_c_426 * pge; // r9

    // References
    // -> static int cont_table[4][6];
    // -> static struct [anonymous] g_etc_work[4];
    // -> static int cont_bg_flg;
}

// Range: 0x25A0C -> 0x25ACC
int disp_continue_logo_score(union_drmario_gc_c_202 * * glp /* r3 */, int player /* r4 */, int cursor /* r5 */, int type /* r6 */) {
    // Local variables
    struct_game_etc_c_426 * pge; // r1+0x8

    // References
    // -> static int cont_table[4][6];
    // -> static struct [anonymous] g_etc_work[4];
    // -> static int cont_bg_flg;
}

// Range: 0x25ACC -> 0x25BE8
void disp_gameover_logo(union_drmario_gc_c_202 * * glp /* r31 */, int player /* r1+0xC */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r1+0x50
    struct_game_etc_c_426 * pge; // r29
    long pm[4][4]; // r1+0x10
    long x; // r1+0x8
    long y; // r5
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static struct [anonymous] * * etcLwsAddress;
    // -> static struct [anonymous] * etcLwsTbl[16];
    // -> static long x4p[4];
    // -> static long x2p[2];
    // -> static int binCount;
    // -> static union [anonymous] etc_setup[19];
    // -> static struct [anonymous] g_etc_work[4];
}

// Range: 0x25BE8 -> 0x25D04
void disp_timeover_logo(union_drmario_gc_c_202 * * glp /* r31 */, int player /* r1+0xC */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r1+0x50
    struct_game_etc_c_426 * pge; // r29
    long pm[4][4]; // r1+0x10
    long x; // r1+0x8
    long y; // r5
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static struct [anonymous] * * etcLwsAddress;
    // -> static struct [anonymous] * etcLwsTbl[16];
    // -> static long x4p[4];
    // -> static long x2p[2];
    // -> static int binCount;
    // -> static union [anonymous] etc_setup[19];
    // -> static struct [anonymous] g_etc_work[4];
}

// Range: 0x25D04 -> 0x25E18
void disp_retire_logo(union_drmario_gc_c_202 * * glp /* r31 */, int player /* r1+0xC */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r1+0x50
    struct_game_etc_c_426 * pge; // r29
    long pm[4][4]; // r1+0x10
    long x; // r1+0x8
    long y; // r5
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static struct [anonymous] * * etcLwsAddress;
    // -> static struct [anonymous] * etcLwsTbl[16];
    // -> static long x4p[4];
    // -> static long x2p[2];
    // -> static int binCount;
    // -> static union [anonymous] etc_setup[19];
    // -> static struct [anonymous] g_etc_work[4];
}

// Range: 0x25E18 -> 0x2607C
void disp_timestop_logo(union_drmario_gc_c_202 * * glp /* r23 */, int player /* r1+0xC */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r1+0x24
    struct_game_etc_c_426 * pge; // r1+0x8
    struct_main_story_c_3359 gbi; // r1+0x10
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static unsigned long etc_parts_tbl[16];
    // -> static unsigned long etcTexAddress;
    // -> union [anonymous] normal_texture_init_dl[];
    // -> static struct [anonymous] g_etc_work[4];
}

// Range: 0x2607C -> 0x261B0
void add_attack_effect(int player /* r1+0x8 */, int sx /* r1+0xC */, int sy /* r1+0x10 */, int ex /* r1+0x14 */, int ey /* r1+0x18 */) {
    // References
    // -> int attack_effect_idx;
    // -> static int binCount;
    // -> struct [anonymous] attack_effect[16];
}

static int col_prim$434[4][3]; // size: 0x30, address: 0x5240
static int col_env$435[4][3]; // size: 0x30, address: 0x5270
// Range: 0x261B0 -> 0x26718
void disp_attack_effect(union_drmario_gc_c_202 * * glp /* r18 */) {
    // Local variables
    int i; // r21
    int tmp; // r17
    int a; // r1+0x8
    unsigned long addr; // r6
    union_drmario_gc_c_202 * pgfx; // r1+0xC
    float x; // f30
    float y; // f29
    float t; // f5
    float scl; // f31
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> unsigned long attack_sprite_address;
    // -> static int col_env$435[4][3];
    // -> static int col_prim$434[4][3];
    // -> struct [anonymous] attack_sprite[128];
    // -> int attack_sprite_idx;
    // -> static int binCount;
    // -> struct [anonymous] attack_effect[16];
    // -> union [anonymous] normal_texture_init_dl[];
}


