/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\dm_manual_main.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00057228 -> 0x0005B184
*/
static struct_tex_func_c_1287 * _texAll; // size: 0x4, address: 0x583A0
static struct_tex_func_c_1287 * _texKaSa; // size: 0x4, address: 0x583A4
struct STutolWnd {
    // total size: 0x90
    int pos[2]; // offset 0x0, size 0x8
    float alpha; // offset 0x8, size 0x4
    float alphaStep; // offset 0xC, size 0x4
    struct_main_story_c_451 msgWnd[1]; // offset 0x10, size 0x80
};
union_drmario_gc_c_202 normal_texture_init_dl[]; // size: 0x0, address: 0x4208
// Range: 0x57228 -> 0x573F4
static void tutolWnd_draw(struct STutolWnd * wnd /* r29 */, union_drmario_gc_c_202 * * gpp /* r30 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x10
    struct_tex_func_c_1287 * texC; // r4
    int alpha; // r31
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static struct [anonymous] * _texAll;
    // -> union [anonymous] normal_texture_init_dl[];
}

static int _posLvMsgWnd[2]; // size: 0x8, address: 0x3C90
static int _posP2MsgWnd[2]; // size: 0x8, address: 0x3C98
static int _posP4MsgWnd[2][2]; // size: 0x10, address: 0x3CA0
static int _posLvMario[2]; // size: 0x8, address: 0x3CB0
static int _posP2Mario[2]; // size: 0x8, address: 0x3CB8
static int _posP4Mario[2][2]; // size: 0x10, address: 0x3CC0
@enum$165dm_manual_main_c;
struct_dm_manual_main_c_1294 * watchManual; // size: 0x4, address: 0x583A8
struct_dm_game_main_c_502 game_map_data[4][136]; // size: 0x1540, address: 0x1B0C8
// Range: 0x573F4 -> 0x5754C
void dm_manual_attack_capsel_down() {
    // Local variables
    int i; // r27
    int j; // r26
    int flg; // r25

    // References
    // -> struct [anonymous] game_map_data[4][136];
    // -> struct [anonymous] * watchManual;
}

static unsigned char virus_1_1[4][3]; // size: 0xC, address: 0x3CD0
static unsigned char capsel_1_1[5]; // size: 0x5, address: 0x3CDC
static unsigned char capsel_1_2[5]; // size: 0x5, address: 0x3CE4
static unsigned char position_1_1[4][4]; // size: 0x10, address: 0x3CEC
static unsigned char virus_2_1[20][3]; // size: 0x3C, address: 0x3CFC
static unsigned char capsel_2_1[12]; // size: 0xC, address: 0x3D38
static unsigned char position_2_1[10][4]; // size: 0x28, address: 0x3D44
static unsigned char virus_3_1[20][3]; // size: 0x3C, address: 0x3D6C
static unsigned char capsel_3_1[11]; // size: 0xB, address: 0x3DA8
static unsigned char position_3_1[10][4]; // size: 0x28, address: 0x3DB4
static unsigned char virus_4_1[16][3]; // size: 0x30, address: 0x3DDC
static unsigned char capsel_4_1[17]; // size: 0x11, address: 0x3E0C
static unsigned char position_4_1[16][4]; // size: 0x40, address: 0x3E20
static char mes_1_1[36]; // size: 0x24, address: 0x3E60
static char mes_1_2[78]; // size: 0x4E, address: 0x3E84
static char mes_1_3[88]; // size: 0x58, address: 0x3ED4
static char mes_1_4[64]; // size: 0x40, address: 0x3F2C
static char mes_1_5[80]; // size: 0x50, address: 0x3F6C
static char mes_1_6[72]; // size: 0x48, address: 0x3FBC
static char mes_1_7[72]; // size: 0x48, address: 0x4004
static char mes_1_8[58]; // size: 0x3A, address: 0x404C
static char mes_2_1[66]; // size: 0x42, address: 0x4088
static char mes_2_2[82]; // size: 0x52, address: 0x40CC
static char mes_2_3[70]; // size: 0x46, address: 0x4120
static char mes_2_4[72]; // size: 0x48, address: 0x4168
static char mes_2_5[74]; // size: 0x4A, address: 0x41B0
static char mes_2_6[54]; // size: 0x36, address: 0x41FC
static char mes_2_7[70]; // size: 0x46, address: 0x4234
static char mes_2_8[84]; // size: 0x54, address: 0x427C
static char mes_2_9[58]; // size: 0x3A, address: 0x42D0
static char mes_3_1[66]; // size: 0x42, address: 0x430C
static char mes_3_2[82]; // size: 0x52, address: 0x4350
static char mes_3_3[70]; // size: 0x46, address: 0x43A4
static char mes_3_4[60]; // size: 0x3C, address: 0x43EC
static char mes_3_5[76]; // size: 0x4C, address: 0x4428
static char mes_3_6[82]; // size: 0x52, address: 0x4474
static char mes_3_7[86]; // size: 0x56, address: 0x44C8
static char mes_3_8[86]; // size: 0x56, address: 0x4520
static char mes_3_9[94]; // size: 0x5E, address: 0x4578
static char mes_3_10[76]; // size: 0x4C, address: 0x45D8
static char mes_3_11[62]; // size: 0x3E, address: 0x4624
static char mes_3_12[58]; // size: 0x3A, address: 0x4664
static char mes_3_13[40]; // size: 0x28, address: 0x46A0
static char mes_3_14[58]; // size: 0x3A, address: 0x46C8
static char mes_3_15[58]; // size: 0x3A, address: 0x4704
static char mes_4_1[46]; // size: 0x2E, address: 0x4740
static char mes_4_2[84]; // size: 0x54, address: 0x4770
static char mes_4_3[56]; // size: 0x38, address: 0x47C4
static char mes_4_4[58]; // size: 0x3A, address: 0x47FC
static char mes_4_5[90]; // size: 0x5A, address: 0x4838
static char mes_4_6[80]; // size: 0x50, address: 0x4894
static char mes_4_7[80]; // size: 0x50, address: 0x48E4
static char mes_4_8[46]; // size: 0x2E, address: 0x4934
static char mes_4_9[56]; // size: 0x38, address: 0x4964
static char mes_4_10[34]; // size: 0x22, address: 0x499C
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
// Range: 0x5754C -> 0x575AC
static void dm_manual_update_virus_anime(struct_dm_game_main_c_176 * state /* r30 */) {
    // Local variables
    int i; // r31
}

signed char evs_manual_no; // size: 0x1, address: 0x18F95
unsigned char evs_seqnumb; // size: 0x1, address: 0x18F90
struct_dm_game_main_c_176 game_state_data[4]; // size: 0xF10, address: 0x1A1B8
@enum$100dm_game_main_c;
// Range: 0x575AC -> 0x57AFC
@enum$100dm_game_main_c dm_manual_main_cnt(struct_dm_game_main_c_176 * state /* r29 */, struct {
    // total size: 0xA
    signed char pos_m_x; // offset 0x0, size 0x1
    signed char pos_m_y; // offset 0x1, size 0x1
    signed char capsel_m_g; // offset 0x2, size 0x1
    signed char capsel_m_p; // offset 0x3, size 0x1
    signed char capsel_m_flg[6]; // offset 0x4, size 0x6
} * map /* r30 */, unsigned char player_no /* r1+0x10 */) {
    // Local variables
    struct_dm_manual_main_c_1294 * st; // r31
    int i; // r28
    int out; // r28

    // References
    // -> struct [anonymous] game_state_data[4];
    // -> unsigned char evs_seqnumb;
    // -> signed char evs_manual_no;
    // -> struct [anonymous] * watchManual;
}

unsigned short joygam[4]; // size: 0x8, address: 0x1CE40
unsigned char main_joy[4]; // size: 0x4, address: 0x1CE68
unsigned char FallSpeed[]; // size: 0x0, address: 0x48A0
// Range: 0x57AFC -> 0x57C40
static void dm_manual_make_key(struct_dm_game_main_c_176 * state /* r27 */, struct {
    // total size: 0xA
    signed char pos_m_x; // offset 0x0, size 0x1
    signed char pos_m_y; // offset 0x1, size 0x1
    signed char capsel_m_g; // offset 0x2, size 0x1
    signed char capsel_m_p; // offset 0x3, size 0x1
    signed char capsel_m_flg[6]; // offset 0x4, size 0x6
} * map /* r28 */) {
    // Local variables
    struct_dm_manual_main_c_1294 * st; // r30
    struct_dm_game_main_c_690 * cap; // r29
    unsigned long key; // r1+0x8
    int i; // r1+0x8

    // References
    // -> unsigned char FallSpeed[];
    // -> unsigned char main_joy[4];
    // -> unsigned short joygam[4];
    // -> struct [anonymous] * watchManual;
}

unsigned char CapsMagazine[]; // size: 0x0, address: 0x18F9C
unsigned char virus_anime_table[][4]; // size: 0x0, address: 0x48F0
struct_dm_game_main_c_1653 virus_map_data[4][128]; // size: 0x600, address: 0x1C608
unsigned char virus_map_disp_order[4][96]; // size: 0x180, address: 0x1CC08
@enum$107dm_title_main_c;
@enum$107dm_title_main_c evs_gamemode; // size: 0x4, address: 0x190B4
@enum$110dm_title_main_c;
// Range: 0x57C40 -> 0x58588
static @enum$110dm_title_main_c dm_manual_1_main() {
    // Local variables
    struct_dm_manual_main_c_1294 * st; // r1+0x8
    struct_dm_game_main_c_176 * state; // r29
    struct_dm_game_main_c_502 * map; // r28
    struct_dm_game_main_c_690 * cap; // r27
    @enum$100dm_game_main_c ret; // r26
    int i; // r1+0x8
    @enum$110dm_title_main_c res; // r31

    // References
    // -> static char mes_1_8[58];
    // -> static unsigned char position_1_1[4][4];
    // -> static char mes_1_7[72];
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> unsigned char virus_anime_table[][4];
    // -> struct [anonymous] virus_map_data[4][128];
    // -> unsigned char virus_map_disp_order[4][96];
    // -> unsigned char CapsMagazine[];
    // -> static unsigned char capsel_1_2[5];
    // -> static char mes_1_6[72];
    // -> static char mes_1_5[80];
    // -> static char mes_1_4[64];
    // -> static char mes_1_3[88];
    // -> static char mes_1_2[78];
    // -> static char mes_1_1[36];
    // -> static unsigned char virus_1_1[4][3];
    // -> static unsigned char capsel_1_1[5];
    // -> static int _posLvMario[2];
    // -> static int _posLvMsgWnd[2];
    // -> struct [anonymous] game_state_data[4];
    // -> struct [anonymous] game_map_data[4][136];
    // -> struct [anonymous] * watchManual;
}

// Range: 0x58588 -> 0x58C6C
static @enum$110dm_title_main_c dm_manual_2_main() {
    // Local variables
    struct_dm_manual_main_c_1294 * st; // r1+0x8
    int i; // r25
    @enum$110dm_title_main_c res; // r30
    struct_dm_game_main_c_176 * state; // r29
    struct_dm_game_main_c_502 * map; // r28

    // References
    // -> static unsigned char position_2_1[10][4];
    // -> static char mes_2_9[58];
    // -> static char mes_2_8[84];
    // -> static char mes_2_7[70];
    // -> static char mes_2_6[54];
    // -> static char mes_2_5[74];
    // -> static char mes_2_4[72];
    // -> static char mes_2_3[70];
    // -> static char mes_2_2[82];
    // -> static char mes_2_1[66];
    // -> unsigned char virus_anime_table[][4];
    // -> static unsigned char virus_2_1[20][3];
    // -> unsigned char CapsMagazine[];
    // -> static unsigned char capsel_2_1[12];
    // -> static int _posP2Mario[2];
    // -> static int _posP2MsgWnd[2];
    // -> struct [anonymous] game_state_data[4];
    // -> struct [anonymous] game_map_data[4][136];
    // -> struct [anonymous] * watchManual;
}

// Range: 0x58C6C -> 0x59660
static @enum$110dm_title_main_c dm_manual_3_main() {
    // Local variables
    struct_dm_manual_main_c_1294 * st; // r1+0x8
    int i; // r25
    @enum$110dm_title_main_c res; // r31
    struct_dm_game_main_c_176 * state; // r29
    struct_dm_game_main_c_502 * map; // r28

    // References
    // -> static int _posP4Mario[2][2];
    // -> static int _posP4MsgWnd[2][2];
    // -> static unsigned char position_3_1[10][4];
    // -> static char mes_3_15[58];
    // -> static char mes_3_14[58];
    // -> static char mes_3_13[40];
    // -> static char mes_3_12[58];
    // -> static char mes_3_11[62];
    // -> static char mes_3_10[76];
    // -> static char mes_3_9[94];
    // -> static char mes_3_8[86];
    // -> static char mes_3_7[86];
    // -> static char mes_3_6[82];
    // -> static char mes_3_5[76];
    // -> static char mes_3_4[60];
    // -> static char mes_3_3[70];
    // -> static char mes_3_2[82];
    // -> static char mes_3_1[66];
    // -> unsigned char virus_anime_table[][4];
    // -> static unsigned char virus_3_1[20][3];
    // -> unsigned char CapsMagazine[];
    // -> static unsigned char capsel_3_1[11];
    // -> struct [anonymous] game_state_data[4];
    // -> struct [anonymous] game_map_data[4][136];
    // -> struct [anonymous] * watchManual;
}

// Range: 0x59660 -> 0x59D20
static @enum$110dm_title_main_c dm_manual_4_main() {
    // Local variables
    struct_dm_manual_main_c_1294 * st; // r1+0x8
    struct_dm_game_main_c_176 * state; // r30
    struct_dm_game_main_c_502 * map; // r29
    int i; // r1+0x8
    int j; // r1+0x8
    @enum$110dm_title_main_c res; // r28

    // References
    // -> static unsigned char position_4_1[16][4];
    // -> static char mes_4_10[34];
    // -> static char mes_4_9[56];
    // -> static char mes_4_8[46];
    // -> static char mes_4_7[80];
    // -> static char mes_4_6[80];
    // -> static char mes_4_5[90];
    // -> static char mes_4_4[58];
    // -> static char mes_4_3[56];
    // -> static char mes_4_2[84];
    // -> static char mes_4_1[46];
    // -> unsigned char virus_anime_table[][4];
    // -> static unsigned char virus_4_1[16][3];
    // -> unsigned char CapsMagazine[];
    // -> static unsigned char capsel_4_1[17];
    // -> static int _posLvMario[2];
    // -> static int _posLvMsgWnd[2];
    // -> struct [anonymous] game_map_data[4][136];
    // -> struct [anonymous] game_state_data[4];
    // -> struct [anonymous] * watchManual;
}

static int _tex$884[2][2]; // size: 0x10, address: 0x49C0
static int _pos$885[2][2]; // size: 0x10, address: 0x49D0
union_drmario_gc_c_202 * gp; // size: 0x4, address: 0x1E9A4
union_drmario_gc_c_202 alpha_texture_init_dl[]; // size: 0x0, address: 0x41A0
// Range: 0x59D20 -> 0x59EE8
static void draw_AB_guide(int x_pos /* r24 */, int y_pos /* r25 */) {
    // Local variables
    struct_tex_func_c_1287 * texC; // r1+0x18
    struct_tex_func_c_1287 * texA; // r1+0x18
    int width; // r4
    int i; // r26
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18

    // References
    // -> union [anonymous] * gp;
    // -> static struct [anonymous] * _texAll;
    // -> static int _pos$885[2][2];
    // -> static int _tex$884[2][2];
    // -> union [anonymous] alpha_texture_init_dl[];
}

static int _posContPanel[2]; // size: 0x8, address: 0x49E0
static int _posCircle$924[4][2]; // size: 0x20, address: 0x49E8
static int _posFinger$925[4][2]; // size: 0x20, address: 0x4A08
// Range: 0x59EE8 -> 0x5A1FC
static void disp_cont() {
    // Local variables
    struct_tex_func_c_1287 * texC; // r10
    struct_tex_func_c_1287 * texA; // r1+0x8
    const int * pos; // r1+0x8
    int i; // r23
    int width; // r26
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static int _posContPanel[2];
    // -> union [anonymous] * gp;
    // -> static struct [anonymous] * _texAll;
    // -> union [anonymous] alpha_texture_init_dl[];
    // -> union [anonymous] normal_texture_init_dl[];
    // -> static int _posFinger$925[4][2];
    // -> static int _posCircle$924[4][2];
    // -> struct [anonymous] * watchManual;
}

@enum$98dm_title_main_c;
@enum$98dm_title_main_c main_old; // size: 0x4, address: 0x18F88
// Range: 0x5A1FC -> 0x5A698
static void dm_manual_draw_fg(union_main_story_c_778 * * mpp /* r30 */, union {
    struct_drmario_tex_func_c_25209 v; // offset 0x0, size 0x10
    struct_drmario_tex_func_c_25217 n; // offset 0x0, size 0x10
    long long force_structure_alignment; // offset 0x0, size 0x8
} * * vpp /* r29 */) {
    // Local variables
    struct_dm_manual_main_c_1294 * st; // r31
    struct_tex_func_c_1287 * texC; // r4
    int i; // r22
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> union [anonymous] * gp;
    // -> @enum$98dm_title_main_c main_old;
    // -> signed char evs_manual_no;
    // -> struct [anonymous] game_map_data[4][136];
    // -> struct [anonymous] game_state_data[4];
    // -> static int _posContPanel[2];
    // -> static struct [anonymous] * _texAll;
    // -> union [anonymous] normal_texture_init_dl[];
    // -> struct [anonymous] * watchManual;
}

static signed short map_x_table$1036[3][4]; // size: 0x18, address: 0x4A28
static unsigned char _seqTbl$1037[2]; // size: 0x2, address: 0x4A40
static unsigned char map_y_table$1038[2]; // size: 0x2, address: 0x4A44
static unsigned char size_table$1039[2]; // size: 0x2, address: 0x4A48
unsigned char evs_seqence; // size: 0x1, address: 0x4879
@enum$106dm_title_main_c;
@enum$106dm_title_main_c evs_gamesel; // size: 0x4, address: 0x190B8
unsigned char evs_playcnt; // size: 0x1, address: 0x487A
int story_proc_no; // size: 0x4, address: 0x154C
void * _romDataTbl[][2]; // size: 0x0, address: 0x1DB58
unsigned char GameSpeed[]; // size: 0x0, address: 0x489C
// Range: 0x5A698 -> 0x5AC40
void dm_manual_all_init() {
    // Local variables
    struct_dm_manual_main_c_1294 * st; // r23
    int i; // r1+0x8
    int j; // r22
    int k; // r21
    void * heap; // r20
    void * (* tbl)[2]; // r1+0x8
    struct_dm_game_main_c_176 * state; // r1+0x8
    struct_dm_manual_main_c_5274 * acap; // r8

    // References
    // -> signed char evs_manual_no;
    // -> unsigned char GameSpeed[];
    // -> struct [anonymous] game_state_data[4];
    // -> static unsigned char size_table$1039[2];
    // -> static unsigned char map_y_table$1038[2];
    // -> static signed short map_x_table$1036[3][4];
    // -> static struct [anonymous] * _texKaSa;
    // -> static struct [anonymous] * _texAll;
    // -> struct [anonymous] * watchManual;
    // -> void * _romDataTbl[][2];
    // -> int story_proc_no;
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> unsigned char evs_playcnt;
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> static unsigned char _seqTbl$1037[2];
    // -> unsigned char evs_seqnumb;
    // -> unsigned char evs_seqence;
}

unsigned short joyupd[5]; // size: 0xA, address: 0x1CDA0
@enum$101main_story_c;
@enum$101main_story_c graphic_no; // size: 0x4, address: 0x1E994
unsigned long pendingGFX; // size: 0x4, address: 0x1E998
int drmario_exit_flag; // size: 0x4, address: 0x18E68
// Range: 0x5AC40 -> 0x5AF68
int dm_manual_main() {
    // Local variables
    struct_dm_manual_main_c_1294 * st; // r21
    int i; // r22
    int key; // r4
    @enum$110dm_title_main_c loop_flg; // r18
    @enum$110dm_title_main_c fade_out; // r20
    int handover_demono; // r4

    // References
    // -> @enum$98dm_title_main_c main_old;
    // -> int drmario_exit_flag;
    // -> unsigned long pendingGFX;
    // -> @enum$101main_story_c graphic_no;
    // -> unsigned char main_joy[4];
    // -> unsigned short joyupd[5];
    // -> unsigned char evs_seqnumb;
    // -> signed char evs_manual_no;
    // -> struct [anonymous] game_state_data[4];
    // -> struct [anonymous] * watchManual;
}

union_drmario_gc_c_202 gfx_glist[3][9216]; // size: 0x36000, address: 0x1E9A8
unsigned long gfx_gtask_no; // size: 0x4, address: 0x1E9A0
// Range: 0x5AF68 -> 0x5B184
void dm_manual_graphic() {
    // Local variables
    struct_dm_manual_main_c_1294 * st; // r31
    union_main_story_c_778 * mp; // r1+0x14
    union_tex_func_c_1051 * vp; // r1+0x10
    union_drmario_gc_c_202 * _g; // r1+0x10
    union_drmario_gc_c_202 * _g; // r1+0x10
    int c; // r1+0x10
    int a; // r1+0x10
    union_drmario_gc_c_202 * _g; // r1+0x10
    union_drmario_gc_c_202 * _g; // r1+0x10

    // References
    // -> union [anonymous] * gp;
    // -> unsigned long gfx_gtask_no;
    // -> union [anonymous] gfx_glist[3][9216];
    // -> struct [anonymous] * watchManual;
}


