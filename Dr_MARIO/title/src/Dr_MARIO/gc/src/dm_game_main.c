/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\dm_game_main.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0000D9C8 -> 0x00021E08
*/
unsigned char virus_anime_table[3][4]; // size: 0xC, address: 0x48F0
unsigned char Score1p[][6]; // size: 0x0, address: 0x48D8
@enum$99dm_game_main_c;
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
unsigned long evs_high_score; // size: 0x4, address: 0x18F98
signed char evs_story_flg; // size: 0x1, address: 0x18F91
signed char evs_story_level; // size: 0x1, address: 0x4880
@enum$106dm_title_main_c;
@enum$106dm_title_main_c evs_gamesel; // size: 0x4, address: 0x190B8
// Range: 0xD9C8 -> 0xDAD8
unsigned long dm_make_score(struct_dm_game_main_c_176 * state /* r1+0x0 */) {
    // Local variables
    int level; // r5

    // References
    // -> unsigned long evs_high_score;
    // -> unsigned char Score1p[][6];
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> signed char evs_story_level;
    // -> signed char evs_story_flg;
}

static signed char dm_chaine_se_table_vs$178[2]; // size: 0x2, address: 0x4918
static signed char dm_chaine_se_table_4p$179[4][3]; // size: 0xC, address: 0x491C
// Range: 0xDAD8 -> 0xDBC0
void dm_attack_se(struct_dm_game_main_c_176 * state /* r28 */, int player_no /* r1+0xC */) {
    // Local variables
    int i; // r29

    // References
    // -> static signed char dm_chaine_se_table_4p$179[4][3];
    // -> static signed char dm_chaine_se_table_vs$178[2];
    // -> @enum$106dm_title_main_c evs_gamesel;
}

// Range: 0xDBC0 -> 0xDC60
void dm_warning_h_line(struct_dm_game_main_c_176 * state /* r27 */, struct_dm_game_main_c_487 * map /* r28 */) {
    // Local variables
    int i; // r31
    int j; // r30
    int flg; // r29
}

// Range: 0xDC60 -> 0xDF5C
static int set_down_flg(struct_dm_game_main_c_487 * map /* r27 */) {
    // Local variables
    int i; // r1+0x8
    int j; // r28
    int ret; // r3
    unsigned int k; // r1+0x8
    unsigned int l; // r20
    unsigned int flg[2]; // r1+0x24
}

// Range: 0xDF5C -> 0xE1D4
void go_down(struct_dm_game_main_c_176 * state /* r30 */, struct_dm_game_main_c_487 * map /* r31 */, int cout /* r1+0x10 */) {
    // Local variables
    int i; // r25
    int j; // r24
    unsigned int k; // r1+0x8
    unsigned int se_flg; // r4
}

// Range: 0xE1D4 -> 0xE2A8
void erase_anime(struct_dm_game_main_c_487 * map /* r29 */) {
    // Local variables
    int i; // r30
}

static int rotate_table$399[4]; // size: 0x10, address: 0xB38
static int rotate_mtx$400[6]; // size: 0x18, address: 0xB48
// Range: 0xE2A8 -> 0xE37C
static void throw_rotate_capsel(struct_dm_game_main_c_690 * cap /* r1+0x0 */) {
    // Local variables
    int vec; // r8
    int save; // r4

    // References
    // -> static int rotate_mtx$400[6];
    // -> static int rotate_table$399[4];
}

// Range: 0xE37C -> 0xE5A4
void translate_capsel(struct_dm_game_main_c_487 * map /* r26 */, struct_dm_game_main_c_176 * state /* r27 */, int move_vec /* r28 */, int joy_no /* r29 */) {
    // Local variables
    int vec; // r31
    struct_dm_game_main_c_690 * cap; // r30
}

static unsigned int rotate_table$474[4]; // size: 0x10, address: 0x4928
static unsigned int rotate_mtx$475[6]; // size: 0x18, address: 0x4938
// Range: 0xE5A4 -> 0xE7C8
void rotate_capsel(struct_dm_game_main_c_487 * map /* r27 */, struct_dm_game_main_c_690 * cap /* r28 */, int move_vec /* r29 */) {
    // Local variables
    int vec; // r30
    unsigned int save; // r3

    // References
    // -> static unsigned int rotate_mtx$475[6];
    // -> static unsigned int rotate_table$474[4];
}

unsigned char CapsMagazine[]; // size: 0x0, address: 0x18F9C
// Range: 0xE7C8 -> 0xE8F4
static void dm_make_magazine() {
    // Local variables
    int i; // r26
    int tmp; // r1+0x8

    // References
    // -> unsigned char CapsMagazine[];
}

// Range: 0xE8F4 -> 0xE940
static void dm_init_capsel(struct_dm_game_main_c_690 * cap /* r1+0x0 */, unsigned int left_cap_col /* r1+0x4 */, unsigned int right_cap_col /* r1+0x8 */) {}

// Range: 0xE940 -> 0xEA90
void dm_set_capsel(struct_dm_game_main_c_176 * state /* r1+0x0 */) {
    // References
    // -> unsigned char CapsMagazine[];
}

static unsigned char _speed$561[3]; // size: 0x3, address: 0xB60
unsigned char GameSpeed[]; // size: 0x0, address: 0x489C
@enum$107dm_title_main_c;
@enum$107dm_title_main_c evs_gamemode; // size: 0x4, address: 0x190B4
// Range: 0xEA90 -> 0xEB44
void dm_capsel_speed_up(struct_dm_game_main_c_176 * state /* r31 */) {
    // References
    // -> static unsigned char _speed$561[3];
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> unsigned char GameSpeed[];
}

// Range: 0xEB44 -> 0xEB60
int dm_check_game_over(struct_dm_game_main_c_176 * state /* r1+0x0 */) {}

@enum$110dm_title_main_c;
// Range: 0xEB60 -> 0xEBE4
static int update_flash_virus_count(struct_dm_game_main_c_176 * state /* r3 */, struct_dm_game_main_c_487 * map /* r1+0x4 */, @enum$110dm_title_main_c flag /* r1+0x8 */) {
    // Local variables
    int count; // r8
    int i; // r9
    int j; // r1+0x0
}

// Range: 0xEBE4 -> 0xED2C
static void dm_set_virus(struct_dm_game_main_c_176 * state /* r28 */, struct_dm_game_main_c_487 * map /* r29 */, struct_dm_game_main_c_1653 * v_map /* r30 */, unsigned char * order /* r27 */) {
    // Local variables
    unsigned int p; // r27
    int virus_max; // r1+0x8

    // References
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> unsigned char virus_anime_table[3][4];
}

// Range: 0xED2C -> 0xEEC4
void dm_virus_anime(struct_dm_game_main_c_176 * state /* r1+0x0 */, struct_dm_game_main_c_487 * map /* r4 */) {
    // Local variables
    int i; // r7

    // References
    // -> unsigned char virus_anime_table[3][4];
}

// Range: 0xEEC4 -> 0xEF58
void dm_capsel_erase_anime(struct_dm_game_main_c_176 * state /* r30 */, struct_dm_game_main_c_487 * map /* r31 */) {}

// Range: 0xEF58 -> 0xEFFC
static void dm_make_erase_h_line(struct_dm_game_main_c_176 * state /* r1+0x0 */, struct_dm_game_main_c_487 * map /* r1+0x4 */, int start /* r5 */, int chain /* r1+0xC */, int pos_x /* r1+0x10 */) {
    // Local variables
    int i; // r1+0x0
}

// Range: 0xEFFC -> 0xF158
int dm_h_erase_chack(struct_dm_game_main_c_487 * map /* r1+0x0 */) {
    // Local variables
    int i; // r6
    int j; // r7
    int chain; // r8
    int chain_start; // r1+0x0
    int chain_col; // r9
}

// Range: 0xF158 -> 0xF360
void dm_h_erase_chack_set(struct_dm_game_main_c_176 * state /* r23 */, struct_dm_game_main_c_487 * map /* r24 */) {
    // Local variables
    int i; // r30
    int j; // r29
    int end; // r28
    int chain; // r27
    int chain_start; // r26
    int chain_col; // r25
}

// Range: 0xF360 -> 0xF404
static void dm_make_erase_w_line(struct_dm_game_main_c_176 * state /* r1+0x0 */, struct_dm_game_main_c_487 * map /* r1+0x4 */, unsigned int start /* r5 */, unsigned int chain /* r1+0xC */, unsigned int pos_y /* r1+0x10 */) {
    // Local variables
    int i; // r5
    int p; // r1+0x0
}

// Range: 0xF404 -> 0xF568
int dm_w_erase_chack(struct_dm_game_main_c_487 * map /* r1+0x0 */) {
    // Local variables
    int i; // r7
    int j; // r8
    int chain; // r9
    int chain_start; // r1+0x0
    int chain_col; // r10
}

// Range: 0xF568 -> 0xF770
void dm_w_erase_chack_set(struct_dm_game_main_c_176 * state /* r22 */, struct_dm_game_main_c_487 * map /* r23 */) {
    // Local variables
    unsigned int p; // r1+0x8
    unsigned int end; // r29
    int i; // r28
    int j; // r27
    int chain; // r26
    int chain_start; // r25
    int chain_col; // r24
}

// Range: 0xF770 -> 0xF8F0
void dm_h_ball_chack(struct_dm_game_main_c_487 * map /* r1+0x0 */) {
    // Local variables
    unsigned int i; // r5
    unsigned int j; // r6
}

// Range: 0xF8F0 -> 0xF9EC
void dm_w_ball_chack(struct_dm_game_main_c_487 * map /* r1+0x0 */) {
    // Local variables
    unsigned int i; // r9
    unsigned int j; // r10
}

// Range: 0xF9EC -> 0xFA9C
int dm_black_up(struct_dm_game_main_c_176 * state /* r1+0x0 */, struct_dm_game_main_c_487 * map /* r1+0x4 */) {
    // Local variables
    unsigned char i; // r6
}

// Range: 0xFA9C -> 0xFCC0
int dm_broken_set(struct_dm_game_main_c_176 * state /* r31 */, struct_dm_game_main_c_487 * map /* r27 */) {
    // Local variables
    unsigned int i; // r29
    unsigned int j; // r28
    unsigned int chack; // r1+0x8
    unsigned short work[16][2]; // r1+0x20
    int ret; // r3
}

// Range: 0xFCC0 -> 0xFE60
static void dm_calc_erase_score_pos(struct_dm_game_main_c_176 * state /* r1+0x8 */, struct_dm_game_main_c_487 * map /* r1+0xC */, int * pos /* r1+0x10 */) {
    // Local variables
    int count; // r6
    int x; // r12
    int y; // r31
    struct_dm_game_main_c_487 * mp; // r1+0x8
}

unsigned char FlyingCnt[]; // size: 0x0, address: 0x488C
// Range: 0xFE60 -> 0x10330
static int dm_calc_capsel_pos(struct_dm_game_main_c_176 * state /* r25 */, int * xx /* r26 */, int * yy /* r27 */) {
    // Local variables
    struct_dm_game_main_c_690 * n_cap; // r29
    float aa; // f7
    float bb; // f6
    float ee; // f1
    float ff; // f30
    float ii; // f3
    int gg; // r1+0x8
    int hh; // r28

    // References
    // -> unsigned char FlyingCnt[];
}

union_drmario_gc_c_202 * gp; // size: 0x4, address: 0x1E9A4
union_drmario_gc_c_202 normal_texture_init_dl[]; // size: 0x0, address: 0x4208
// Range: 0x10330 -> 0x10454
static void dm_draw_capsel_by_gfx(struct_dm_game_main_c_176 * state /* r31 */, int * xx /* r29 */, int * yy /* r28 */) {
    // Local variables
    struct_dm_game_main_c_690 * cap; // r27
    struct_tex_func_c_1287 * tex; // r1+0x8
    struct_tex_func_c_1287 * pal; // r1+0x8
    int i; // r26
    int type; // r25
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> union [anonymous] * gp;
    // -> union [anonymous] normal_texture_init_dl[];
}

// Range: 0x10454 -> 0x10578
static void dm_draw_capsel_by_cpu_tentative(struct_dm_game_main_c_176 * state /* r31 */, int * xx /* r29 */, int * yy /* r28 */) {
    // Local variables
    struct_dm_game_main_c_690 * cap; // r27
    struct_tex_func_c_1287 * tex; // r1+0x8
    struct_tex_func_c_1287 * pal; // r1+0x8
    int i; // r26
    int type; // r25
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> union [anonymous] * gp;
    // -> union [anonymous] normal_texture_init_dl[];
}

static void * heapTop; // size: 0x4, address: 0x1A1A0
int dm_think_flg; // size: 0x4, address: 0x1A1A4
static int visible_fall_point[4]; // size: 0x10, address: 0x4950
static unsigned char _retryMenu_itemCount[6]; // size: 0x6, address: 0xB88
static float _big_virus_def_wait[3]; // size: 0xC, address: 0xB90
static float _big_virus_min_wait[3]; // size: 0xC, address: 0xB9C
static float _big_virus_max_wait[3]; // size: 0xC, address: 0xBA8
static unsigned char _scoreNumsColor[6][3]; // size: 0x12, address: 0xBB4
static char _mesPassword[22]; // size: 0x16, address: 0x4960
static char _mesEasyCont[112]; // size: 0x70, address: 0x4978
static char _mesEasyNoCont[152]; // size: 0x98, address: 0x49E8
static char _mesNormalCont[114]; // size: 0x72, address: 0x4A80
static char _mesNormalNoCont[152]; // size: 0x98, address: 0x4AF4
static char _mesHardCont[112]; // size: 0x70, address: 0x4B8C
static char _mesHardNoCont[324]; // size: 0x144, address: 0x4BFC
static char _mesSHardCont[114]; // size: 0x72, address: 0x4D40
static char _mesSHardNoCont[178]; // size: 0xB2, address: 0x4DB4
static char _mesWriting[71]; // size: 0x47, address: 0xBC8
static int _posStP4StarX[4]; // size: 0x10, address: 0xC10
static int _posStStar[2][2]; // size: 0x10, address: 0xC20
static int _posLsTime[2]; // size: 0x8, address: 0xC30
static int _posP2StarX[2]; // size: 0x8, address: 0xC38
static int _posP2StarY[3][3]; // size: 0x24, address: 0xC40
static int _posP4Bottle[4][2]; // size: 0x20, address: 0xC64
static int _posP4BottleIn[2]; // size: 0x8, address: 0xC84
static int _posP4CharBase[4][2]; // size: 0x20, address: 0xC8C
static int _posP4TeamStarX[3][2][3]; // size: 0x48, address: 0xCAC
static int _posP4CharStarX[3][4][3]; // size: 0x90, address: 0xCF4
static int _posP4StockCap[2][2]; // size: 0x10, address: 0xD84
static int _posP2VirusNum[2][2]; // size: 0x10, address: 0xD94
static int _posP2CharFrm[2][2]; // size: 0x10, address: 0xDA4
// Range: 0x10578 -> 0x10584
void * dm_game_heap_top() {
    // References
    // -> static void * heapTop;
}

struct SAnimeSmog {
    // total size: 0x124
    struct SAnimeState animeState[4]; // offset 0x0, size 0x100
    int pos[4][2]; // offset 0x100, size 0x20
    int frameCount; // offset 0x120, size 0x4
};
struct_dm_game_main_c_4937 * watchGame; // size: 0x4, address: 0x1A1A8
// Range: 0x10584 -> 0x1059C
struct SAnimeState * get_virus_anime_state(int index /* r1+0x0 */) {
    // References
    // -> struct [anonymous] * watchGame;
}

// Range: 0x1059C -> 0x105B4
struct SAnimeSmog * get_virus_smog_state(int index /* r1+0x0 */) {
    // References
    // -> struct [anonymous] * watchGame;
}

struct_dm_game_main_c_4974 * gameGeom; // size: 0x4, address: 0x1A1AC
unsigned long gfx_gtask_no; // size: 0x4, address: 0x1E9A0
// Range: 0x105B4 -> 0x105D4
union_main_story_c_778 * dm_get_mtx_buf() {
    // References
    // -> unsigned long gfx_gtask_no;
    // -> struct [anonymous] * gameGeom;
}

// Range: 0x105D4 -> 0x105F8
union_tex_func_c_1051 * dm_get_vtx_buf() {
    // References
    // -> unsigned long gfx_gtask_no;
    // -> struct [anonymous] * gameGeom;
}

unsigned char evs_playcnt; // size: 0x1, address: 0x487A
static int _n$1199[3]; // size: 0xC, address: 0x4E68
// Range: 0x105F8 -> 0x107F0
static @enum$110dm_title_main_c timeAttackResult_update(struct_dm_game_main_c_5026 * st /* r30 */, @enum$110dm_title_main_c se /* r1+0xC */) {
    // Local variables
    @enum$110dm_title_main_c res; // r31
    int j; // r4

    // References
    // -> static int _n$1199[3];
}

// Range: 0x107F0 -> 0x10900
static void scoreNums_set(struct_dm_game_main_c_5046 * st /* r30 */, unsigned long score /* r4 */, int erase /* r1+0x10 */, int x /* r25 */, int y /* r1+0x18 */) {
    // Local variables
    int i; // r26
    int columns; // r9
    int column[16]; // r1+0x1C
    struct_dm_game_main_c_5057 * num; // r5
}

struct_dm_game_main_c_5475 * gameBackup[2]; // size: 0x8, address: 0x1A1B0
struct_dm_game_main_c_176 game_state_data[4]; // size: 0xF10, address: 0x1A1B8
struct_dm_game_main_c_487 game_map_data[4][136]; // size: 0x1540, address: 0x1B0C8
unsigned long evs_game_time; // size: 0x4, address: 0x190AC
// Range: 0x10900 -> 0x10AA4
static void backup_game_state(int bufNo /* r1+0x0 */) {
    // Local variables
    struct_dm_game_main_c_5475 * bak; // r3
    int i; // r11
    int j; // r1+0x0

    // References
    // -> unsigned long evs_game_time;
    // -> unsigned long evs_high_score;
    // -> struct [anonymous] game_map_data[4][136];
    // -> struct [anonymous] game_state_data[4];
    // -> struct [anonymous] * watchGame;
    // -> struct [anonymous] * gameBackup[2];
}

// Range: 0x10AA4 -> 0x10C48
static void resume_game_state(int bufNo /* r1+0x0 */) {
    // Local variables
    struct_dm_game_main_c_5475 * bak; // r10
    int i; // r11
    int j; // r1+0x0

    // References
    // -> unsigned long evs_game_time;
    // -> unsigned long evs_high_score;
    // -> struct [anonymous] game_map_data[4][136];
    // -> struct [anonymous] game_state_data[4];
    // -> struct [anonymous] * watchGame;
    // -> struct [anonymous] * gameBackup[2];
}

// Range: 0x10C48 -> 0x10D04
void dm_warning_h_line_se() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r5
    int i; // r1+0x8
    int warning; // r7

    // References
    // -> unsigned char evs_playcnt;
    // -> struct [anonymous] game_state_data[4];
    // -> struct [anonymous] * watchGame;
}

// Range: 0x10D04 -> 0x10DC8
static void dm_play_count_down_se() {
    // Local variables
    int i; // r5
    int j; // r1+0x8

    // References
    // -> unsigned long evs_game_time;
    // -> unsigned char evs_playcnt;
    // -> struct [anonymous] game_state_data[4];
    // -> @enum$107dm_title_main_c evs_gamemode;
}

static int black_color$1384[2]; // size: 0x8, address: 0xDC8
unsigned char FallSpeed[]; // size: 0x0, address: 0x48A0
unsigned char BonusWait[][3]; // size: 0x0, address: 0x4890
// Range: 0x10DC8 -> 0x11090
void dm_capsel_down(struct_dm_game_main_c_176 * state /* r28 */, struct_dm_game_main_c_487 * map /* r29 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r31
    struct_dm_game_main_c_690 * cap; // r30
    unsigned int i; // r27
    unsigned int j; // r26

    // References
    // -> static int black_color$1384[2];
    // -> unsigned char BonusWait[][3];
    // -> unsigned char FallSpeed[];
    // -> struct [anonymous] * watchGame;
}

// Range: 0x11090 -> 0x113F4
static int dm_set_attack_2p(struct_dm_game_main_c_176 * state /* r28 */) {
    // Local variables
    struct_dm_game_main_c_176 * enemy; // r31
    int i; // r30
    int x; // r5
    int pattern; // r29
    int flag; // r6
    int c; // r1+0x8

    // References
    // -> struct [anonymous] game_state_data[4];
}

static char attack_table$1531[4][3]; // size: 0xC, address: 0xDD0
// Range: 0x113F4 -> 0x11A48
static int dm_set_attack_4p(struct_dm_game_main_c_176 * state /* r26 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r30
    struct_dm_game_main_c_176 * enemy; // r1+0x8
    int c; // r1+0x8
    int i; // r1+0x8
    int j; // r1+0x8
    int chainCount; // r29
    int work[3]; // r1+0x1C
    int attackWork[3]; // r1+0x10
    int attackFlag; // r28
    int stockFlag; // r27
    int x; // r18

    // References
    // -> static int _posP4CharBase[4][2];
    // -> struct [anonymous] game_state_data[4];
    // -> static char attack_table$1531[4][3];
    // -> struct [anonymous] * watchGame;
}

unsigned char evs_select_name_no[]; // size: 0x0, address: 0x190B0
struct_dm_game_main_c_8121 evs_mem_data[9]; // size: 0x750, address: 0x549C0
// Range: 0x11A48 -> 0x11AEC
static void save_visible_fall_point_flag() {
    // Local variables
    int i; // r1+0x0
    int j; // r1+0x0
    struct_dm_game_main_c_8121 * mc; // r1+0x0

    // References
    // -> struct [anonymous] evs_mem_data[9];
    // -> static int visible_fall_point[4];
    // -> unsigned char evs_select_name_no[];
    // -> @enum$106dm_title_main_c evs_gamesel;
}

// Range: 0x11AEC -> 0x11B38
static void retryMenu_init(int playerNo /* r1+0x0 */, int type /* r1+0x4 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r1+0x0

    // References
    // -> struct [anonymous] * watchGame;
}

unsigned short joycur[5]; // size: 0xA, address: 0x1CDAC
unsigned char main_joy[4]; // size: 0x4, address: 0x1CE68
unsigned short joyupd[5]; // size: 0xA, address: 0x1CDA0
// Range: 0x11B38 -> 0x11C54
static int retryMenu_input(int playerNo /* r1+0x8 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r28
    int rep; // r27
    int trg; // r26
    int select; // r1+0x8
    int vy; // r25
    int sound; // r24
    int result; // r23

    // References
    // -> static unsigned char _retryMenu_itemCount[6];
    // -> unsigned short joyupd[5];
    // -> unsigned char main_joy[4];
    // -> unsigned short joycur[5];
    // -> struct [anonymous] * watchGame;
}

// Range: 0x11C54 -> 0x11F88
static void set_bottom_up_virus(struct_dm_game_main_c_176 * state /* r27 */, struct_dm_game_main_c_487 * map /* r28 */) {
    // Local variables
    int i; // r29
    int j; // r30
    int x; // r1+0x8
    int endI; // r1+0x8
    int color; // r6
    unsigned char work[8]; // r1+0x3C
    int mask[3]; // r1+0x30
    int flag[3]; // r1+0x24
    int pos[3]; // r1+0x18

    // References
    // -> unsigned char virus_anime_table[3][4];
}

// Range: 0x11F88 -> 0x12144
static @enum$110dm_title_main_c bottom_up_bottle_items(struct_dm_game_main_c_487 * map /* r3 */) {
    // Local variables
    int i; // r1+0x8
    int j; // r1+0x8
    int size; // r1+0x8
    @enum$110dm_title_main_c flow; // r31
}

static int _bonus$1884[6]; // size: 0x18, address: 0xDDC
// Range: 0x12144 -> 0x1225C
static void add_taiQ_bonus_wait(struct_dm_game_main_c_176 * state /* r1+0x8 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r4
    int i; // r8
    int count; // r5

    // References
    // -> static int _bonus$1884[6];
    // -> static float _big_virus_max_wait[3];
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> struct [anonymous] * watchGame;
}

@enum$98dm_game_main_c;
// Range: 0x1225C -> 0x122F4
static void dm_game_eep_write_callback(void * args /* r30 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r1+0x8

    // References
    // -> static char _mesWriting[71];
}

// Range: 0x122F4 -> 0x12358
int yama_dm_game_eep_retrace(void * global /* r31 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r1+0x8
}

enum EepRomErr {
    EepRomErr_NoError = 0,
    EepRomErr_NotFound = 1,
    EepRomErr_NotInit = 2,
    EepRomErr_ReadError = 3,
    EepRomErr_WriteError = 4,
    EepRomErr_BadSum = 5,
};
signed char evs_story_no; // size: 0x1, address: 0x18F92
int story_proc_no; // size: 0x4, address: 0x154C
unsigned char evs_one_game_flg; // size: 0x1, address: 0x18F93
unsigned char evs_secret_flg[]; // size: 0x0, address: 0x4884
unsigned char evs_level_21; // size: 0x1, address: 0x18F94
// Range: 0x12358 -> 0x1282C
static void dm_save_all() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r1+0x8
    struct_dm_game_main_c_176 * state; // r3
    int i; // r29
    int stage; // r8
    struct_dm_game_main_c_10328 * cfg; // r7
    int charNo; // r4
    int stage; // r8
    int level; // r26

    // References
    // -> struct [anonymous] * watchGame;
    // -> unsigned long evs_game_time;
    // -> unsigned char evs_select_name_no[];
    // -> struct [anonymous] evs_mem_data[9];
    // -> unsigned char evs_level_21;
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> struct [anonymous] game_state_data[4];
    // -> unsigned char evs_one_game_flg;
    // -> signed char evs_story_level;
    // -> unsigned char evs_secret_flg[];
    // -> signed char evs_story_no;
    // -> int story_proc_no;
    // -> signed char evs_story_flg;
    // -> @enum$106dm_title_main_c evs_gamesel;
}

// Range: 0x1282C -> 0x12940
static void dm_query_pause_player(struct_dm_game_main_c_176 * state /* r1+0x8 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r1+0x8
    int trg; // r4

    // References
    // -> unsigned char main_joy[4];
    // -> unsigned short joyupd[5];
    // -> struct [anonymous] * watchGame;
}

static char _guest$2208[4]; // size: 0x4, address: 0x4E74
struct_dm_game_main_c_1653 virus_map_data[4][128]; // size: 0x600, address: 0x1C608
unsigned char virus_map_disp_order[4][96]; // size: 0x180, address: 0x1CC08
unsigned char _charSE_tbl[]; // size: 0x0, address: 0x10F0
signed char aiDebugP1; // size: 0x1, address: 0x23580
unsigned short joynew[5]; // size: 0xA, address: 0x1CD88
@enum$100dm_game_main_c;
// Range: 0x12940 -> 0x13968
static @enum$100dm_game_main_c dm_game_main_cnt_1P(struct_dm_game_main_c_176 * state /* r31 */, struct_dm_game_main_c_487 * map /* r24 */, int player_no /* r26 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r25
    int i; // r20
    int pos[2]; // r1+0x38

    // References
    // -> struct [anonymous] * watchGame;
    // -> unsigned char main_joy[4];
    // -> unsigned short joyupd[5];
    // -> static char _mesPassword[22];
    // -> unsigned short joynew[5];
    // -> unsigned long evs_high_score;
    // -> static float _big_virus_min_wait[3];
    // -> signed char aiDebugP1;
    // -> static signed char dm_chaine_se_table_4p$179[4][3];
    // -> static signed char dm_chaine_se_table_vs$178[2];
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> static unsigned char _speed$561[3];
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> unsigned char GameSpeed[];
    // -> unsigned char CapsMagazine[];
    // -> unsigned char _charSE_tbl[];
    // -> unsigned char FlyingCnt[];
    // -> unsigned char virus_map_disp_order[4][96];
    // -> struct [anonymous] virus_map_data[4][128];
    // -> unsigned long evs_game_time;
}

// Range: 0x13968 -> 0x14DE4
static @enum$100dm_game_main_c dm_game_main_cnt(struct_dm_game_main_c_176 * state /* r30 */, struct_dm_game_main_c_487 * map /* r22 */, int player_no /* r31 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r24
    int i; // r1+0x8
    int j; // r1+0x8
    int out; // r24
    int trg; // r23
    int erase; // r23
    int pos[2]; // r1+0x54

    // References
    // -> static unsigned char _speed$561[3];
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> unsigned char GameSpeed[];
    // -> unsigned char CapsMagazine[];
    // -> static signed char dm_chaine_se_table_4p$179[4][3];
    // -> static signed char dm_chaine_se_table_vs$178[2];
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> unsigned char virus_map_disp_order[4][96];
    // -> struct [anonymous] * watchGame;
    // -> unsigned long evs_high_score;
    // -> unsigned short joyupd[5];
    // -> signed char aiDebugP1;
    // -> unsigned char _charSE_tbl[];
    // -> struct [anonymous] virus_map_data[4][128];
    // -> unsigned long evs_game_time;
    // -> unsigned char main_joy[4];
}

// Range: 0x14DE4 -> 0x15048
static void dm_set_pause_on(struct_dm_game_main_c_176 * state /* r29 */, int master /* r25 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r1+0x8
    int p; // r26

    // References
    // -> struct [anonymous] * watchGame;
    // -> signed char evs_story_no;
    // -> signed char evs_story_flg;
    // -> @enum$106dm_title_main_c evs_gamesel;
}

// Range: 0x15048 -> 0x151BC
static void dm_set_pause_and_volume(struct_dm_game_main_c_176 * * state /* r26 */, int count /* r27 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r1+0x8
    int pause; // r30
    int sound; // r29
    int i; // r28

    // References
    // -> struct [anonymous] * watchGame;
}

unsigned short joyflg[4]; // size: 0x8, address: 0x1CE38
// Range: 0x151BC -> 0x152C8
static void dm_set_debug_mode() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r1+0x0
    struct_dm_game_main_c_176 * state; // r3
    @enum$110dm_title_main_c dbg; // r6
    @enum$110dm_title_main_c cfg; // r4

    // References
    // -> unsigned short joyflg[4];
    // -> struct [anonymous] game_state_data[4];
    // -> struct [anonymous] * watchGame;
}

static struct_dm_game_main_c_12898 _tbl$2997[3]; // size: 0xC, address: 0xE08
static signed short _clr$3004[2]; // size: 0x4, address: 0xE14
// Range: 0x152C8 -> 0x158EC
void dm_calc_big_virus_pos(struct_dm_game_main_c_176 * state /* r31 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r30
    int i; // r1+0x8
    int stopFlag; // r24
    struct SAnimeState * ani; // r11
    float vec; // f2
    int color; // r6
    struct SAnimeState * anim; // r5
    struct SAnimeState * ani; // r3
    int top; // r24
    int lost; // r28
    struct SAnimeState * ani; // r3
    int step; // r1+0x8

    // References
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> static struct [anonymous] _tbl$2997[3];
    // -> static signed short _clr$3004[2];
    // -> struct [anonymous] * watchGame;
}

// Range: 0x158EC -> 0x15DFC
@enum$100dm_game_main_c dm_game_main_1p() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r29
    struct_dm_game_main_c_176 * state; // r28
    struct_dm_game_main_c_487 * map; // r24
    @enum$100dm_game_main_c ret; // r1+0x8
    int i; // r24
    unsigned long score; // r24

    // References
    // -> struct [anonymous] * watchGame;
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> struct [anonymous] game_state_data[4];
    // -> unsigned long evs_game_time;
    // -> unsigned char evs_playcnt;
    // -> struct [anonymous] game_map_data[4][136];
}

int evs_vs_count; // size: 0x4, address: 0x4888
// Range: 0x15DFC -> 0x15F7C
static @enum$110dm_title_main_c dm_add_win_2p(struct_dm_game_main_c_176 * state /* r1+0x8 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r1+0x8
    @enum$110dm_title_main_c finish; // r31
    int sound; // r1+0x8
    int x; // r8
    int y; // r11
    int p; // r1+0x8

    // References
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> int evs_vs_count;
    // -> static int _posP2StarY[3][3];
    // -> static int _posP2StarX[2];
    // -> static int _posStStar[2][2];
    // -> signed char evs_story_flg;
    // -> struct [anonymous] * watchGame;
}

// Range: 0x15F7C -> 0x16134
static @enum$110dm_title_main_c dm_set_win_2p(struct_dm_game_main_c_176 * state /* r26 */, @enum$110dm_title_main_c finish /* r27 */, enum /* @enum$115dm_game_main_c */ {
    false = 0,
    true = 1,
} menu /* r28 */) {
    // Local variables
    int p; // r6

    // References
    // -> struct [anonymous] * watchGame;
    // -> signed char evs_story_flg;
    // -> unsigned char _charSE_tbl[];
}

// Range: 0x16134 -> 0x16334
static @enum$110dm_title_main_c dm_set_lose_2p(struct_dm_game_main_c_176 * state /* r30 */, @enum$110dm_title_main_c finish /* r27 */, enum /* @enum$115dm_game_main_c */ {
    false = 0,
    true = 1,
} menu /* r31 */) {
    // Local variables
    int p; // r28

    // References
    // -> struct [anonymous] * watchGame;
    // -> signed char evs_story_no;
    // -> signed char evs_story_flg;
}

// Range: 0x16334 -> 0x16534
static @enum$110dm_title_main_c dm_set_time_attack_result_2p(struct_dm_game_main_c_176 * * state /* r27 */) {
    // Local variables
    @enum$110dm_title_main_c menu; // r26
    @enum$110dm_title_main_c finish; // r25
    unsigned long result[2]; // r1+0x18
    int i; // r29

    // References
    // -> struct [anonymous] * watchGame;
}

// Range: 0x16534 -> 0x16DE8
@enum$100dm_game_main_c dm_game_main_2p() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r25
    struct_dm_game_main_c_176 * state[2]; // r1+0x3C
    struct_dm_game_main_c_487 * map[2]; // r1+0x34
    @enum$110dm_title_main_c finish; // r20
    @enum$110dm_title_main_c menu; // r27
    int i; // r28
    int clear; // r1+0x48
    int gover; // r1+0x44
    int ret[2]; // r1+0x2C
    int waitTA; // r3
    int resultTA; // r4

    // References
    // -> struct [anonymous] * watchGame;
    // -> unsigned long evs_game_time;
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> unsigned char evs_playcnt;
    // -> signed char aiDebugP1;
    // -> struct [anonymous] game_map_data[4][136];
    // -> struct [anonymous] game_state_data[4];
}

// Range: 0x16DE8 -> 0x17AA4
static @enum$100dm_game_main_c dm_game_main_4p() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r27
    struct_dm_game_main_c_176 * state[4]; // r1+0x58
    struct_dm_game_main_c_487 * map[4]; // r1+0x48
    @enum$100dm_game_main_c ret[4]; // r1+0x38
    int i; // r26
    @enum$110dm_title_main_c finish; // r31
    @enum$110dm_title_main_c menu; // r26
    int clear; // r4
    int gover; // r5
    int sound; // r22
    int win_team; // r30
    int clearBit; // r8
    int team; // r1+0x8
    int win; // r12
    @enum$110dm_title_main_c end; // r21
    int retire; // r7
    int retireBit; // r8
    int team; // r1+0x8
    int win; // r8
    int team; // r7
    int win; // r9

    // References
    // -> int evs_vs_count;
    // -> static int _posP4TeamStarX[3][2][3];
    // -> signed char evs_story_flg;
    // -> static int _posP4CharStarX[3][4][3];
    // -> static int _posStP4StarX[4];
    // -> struct [anonymous] * watchGame;
    // -> unsigned char evs_playcnt;
    // -> signed char aiDebugP1;
    // -> struct [anonymous] game_map_data[4][136];
    // -> struct [anonymous] game_state_data[4];
}

// Range: 0x17AA4 -> 0x17BDC
static @enum$100dm_game_main_c dm_game_demo_1p() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r31
    @enum$100dm_game_main_c ret; // r1+0x8
    int i; // r26

    // References
    // -> unsigned char main_joy[4];
    // -> unsigned short joyupd[5];
    // -> struct [anonymous] game_state_data[4];
    // -> signed char aiDebugP1;
    // -> struct [anonymous] game_map_data[4][136];
    // -> struct [anonymous] * watchGame;
}

// Range: 0x17BDC -> 0x17D34
static @enum$100dm_game_main_c dm_game_demo_2p() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r31
    @enum$100dm_game_main_c ret[2]; // r1+0x8
    int i; // r26

    // References
    // -> unsigned char main_joy[4];
    // -> unsigned short joyupd[5];
    // -> signed char aiDebugP1;
    // -> struct [anonymous] game_state_data[4];
    // -> struct [anonymous] game_map_data[4][136];
    // -> struct [anonymous] * watchGame;
}

// Range: 0x17D34 -> 0x17EA4
static @enum$100dm_game_main_c dm_game_demo_4p() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r31
    @enum$100dm_game_main_c ret[4]; // r1+0x8
    int i; // r26

    // References
    // -> unsigned char main_joy[4];
    // -> unsigned short joyupd[5];
    // -> signed char aiDebugP1;
    // -> struct [anonymous] game_state_data[4];
    // -> struct [anonymous] game_map_data[4][136];
    // -> struct [anonymous] * watchGame;
}

static int cap_tex$4162[2]; // size: 0x8, address: 0xE68
// Range: 0x17EA4 -> 0x17ED4
struct_tex_func_c_1287 * dm_game_get_capsel_tex(int sizeIndex /* r1+0x0 */) {
    // References
    // -> static int cap_tex$4162[2];
    // -> struct [anonymous] * watchGame;
}

static int cap_pal$4164[2][6]; // size: 0x30, address: 0xE70
// Range: 0x17ED4 -> 0x17F08
struct_tex_func_c_1287 * dm_game_get_capsel_pal(int sizeIndex /* r1+0x0 */, int colorIndex /* r1+0x4 */) {
    // References
    // -> static int cap_pal$4164[2][6];
    // -> struct [anonymous] * watchGame;
}

union_drmario_gc_c_202 alpha_texture_init_dl[]; // size: 0x0, address: 0x41A0
// Range: 0x17F08 -> 0x1822C
static void scoreNums_draw(struct_dm_game_main_c_5046 * st /* r24 */, union_drmario_gc_c_202 * * gpp /* r1+0x18 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x10
    struct_dm_game_main_c_5057 * num; // r3
    struct_tex_func_c_1287 * texC; // r1+0x8
    struct_tex_func_c_1287 * texA; // r1+0x8
    int width; // r21
    int height; // r28
    int i; // r30
    int alpha; // r1+0x8
    float time; // f2
    float bound; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static unsigned char _scoreNumsColor[6][3];
    // -> union [anonymous] alpha_texture_init_dl[];
    // -> struct [anonymous] * watchGame;
}

// Range: 0x1822C -> 0x18654
void starForce_draw(struct_dm_game_main_c_17429 * star /* r28 */, union_drmario_gc_c_202 * * gpp /* r29 */, int count /* r30 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r31
    union_drmario_gc_c_202 * gp; // r1+0x14
    struct_tex_func_c_1287 * texC; // r23
    struct_tex_func_c_1287 * texA; // r22
    int i; // r21
    int j; // r6
    union_drmario_gc_c_202 * _g; // r1+0x8
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
    // -> union [anonymous] normal_texture_init_dl[];
    // -> union [anonymous] alpha_texture_init_dl[];
    // -> struct [anonymous] * watchGame;
}

static unsigned char _tbl$4274[4][4]; // size: 0x10, address: 0xEC0
// Range: 0x18654 -> 0x18944
static void draw_4p_attack_guide_panel(union_drmario_gc_c_202 * * gpp /* r20 */, int playerCount /* r29 */, int playerNo /* r21 */, int x /* r26 */, int y /* r24 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r23
    union_drmario_gc_c_202 * gp; // r1+0x20
    struct_tex_func_c_1287 * texC; // r9
    struct_tex_func_c_1287 * texA; // r7
    int i; // r22
    int j; // r8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    float xx; // f1
    float yy; // f2
    int a; // r1+0x8

    // References
    // -> struct [anonymous] game_state_data[4];
    // -> static unsigned char _tbl$4274[4][4];
    // -> union [anonymous] alpha_texture_init_dl[];
    // -> union [anonymous] normal_texture_init_dl[];
    // -> struct [anonymous] * watchGame;
}

// Range: 0x18944 -> 0x18A58
static void dm_map_draw(struct_dm_game_main_c_487 * map /* r3 */, unsigned char col_no /* r1+0xC */, signed short x_p /* r1+0xE */, signed short y_p /* r1+0x10 */, signed char size /* r1+0x12 */) {
    // Local variables
    int i; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> union [anonymous] * gp;
}

static char _tbl$4345[10]; // size: 0xA, address: 0xED0
// Range: 0x18A58 -> 0x18CA8
void draw_virus_number(union_drmario_gc_c_202 * * gpp /* r22 */, unsigned long number /* r4 */, int x /* r1+0x10 */, int y /* r1+0x14 */, float sx /* f31 */) {
    // Local variables
    struct_tex_func_c_1287 * texC; // r1+0x8
    struct_tex_func_c_1287 * texA; // r1+0x8
    int i; // r26
    int xx; // r25
    int yy; // r1+0x8
    int tmp[16]; // r1+0x20
    int column; // r3
    int width; // r24
    int height; // r23

    // References
    // -> static char _tbl$4345[10];
    // -> struct [anonymous] * watchGame;
}

static int _tex$4374[3]; // size: 0xC, address: 0xEDC
static int _row$4375[3]; // size: 0xC, address: 0xEE8
// Range: 0x18CA8 -> 0x18FFC
void draw_count_number(union_drmario_gc_c_202 * * gpp /* r30 */, int color /* r1+0xC */, int column /* r5 */, unsigned long number /* r6 */, int x /* r31 */, int y /* r1+0x1C */) {
    // Local variables
    struct_tex_func_c_1287 * texC; // r1+0x8
    struct_tex_func_c_1287 * texA; // r1+0x8
    int i; // r4
    int tmp[16]; // r1+0x24
    int width; // r24
    int height; // r23

    // References
    // -> static int _row$4375[3];
    // -> static int _tex$4374[3];
    // -> struct [anonymous] * watchGame;
}

static unsigned char _pos$4415[3]; // size: 0x3, address: 0xEF4
static signed char _col$4416[3]; // size: 0x3, address: 0xEF8
static unsigned char _pos$4426[5]; // size: 0x5, address: 0xEFC
static signed char _col$4427[5]; // size: 0x5, address: 0xF04
// Range: 0x18FFC -> 0x19100
static void draw_time2(union_drmario_gc_c_202 * * gpp /* r25 */, unsigned long time /* r11 */, int x /* r26 */, int y /* r27 */) {
    // Local variables
    int i; // r28
    int t[5]; // r1+0x18

    // References
    // -> static signed char _col$4427[5];
    // -> static unsigned char _pos$4426[5];
}

// Range: 0x19100 -> 0x1930C
void push_any_key_draw(int x_pos /* r29 */, int y_pos /* r30 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r31
    struct_tex_func_c_1287 * texC; // r1+0x18
    struct_tex_func_c_1287 * texA; // r1+0x18
    int width; // r4
    int alpha; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18

    // References
    // -> union [anonymous] * gp;
    // -> union [anonymous] alpha_texture_init_dl[];
    // -> struct [anonymous] * watchGame;
}

static int _tex$4459[3][2]; // size: 0x18, address: 0xF14
// Range: 0x1930C -> 0x19590
static void draw_demo_logo(union_drmario_gc_c_202 * * gpp /* r28 */, int x /* r29 */, int y /* r30 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r31
    union_drmario_gc_c_202 * gp; // r1+0x30
    struct_tex_func_c_1287 * texC; // r1+0x18
    struct_tex_func_c_1287 * texA; // r1+0x18
    int i; // r23
    int width; // r4
    int height; // r5
    int alpha[3]; // r1+0x24
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18

    // References
    // -> static int _tex$4459[3][2];
    // -> union [anonymous] alpha_texture_init_dl[];
    // -> struct [anonymous] * watchGame;
}

static int _tex$4492[2][2]; // size: 0x10, address: 0xF2C
// Range: 0x19590 -> 0x197FC
static void draw_replay_logo(union_drmario_gc_c_202 * * gpp /* r30 */, int x /* r26 */, int y /* r23 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r31
    union_drmario_gc_c_202 * gp; // r1+0x2C
    struct_tex_func_c_1287 * texC; // r1+0x18
    struct_tex_func_c_1287 * texA; // r1+0x18
    int i; // r23
    int width; // r4
    int height; // r5
    int alpha[2]; // r1+0x24
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18

    // References
    // -> static int _tex$4492[2][2];
    // -> union [anonymous] alpha_texture_init_dl[];
    // -> struct [anonymous] * watchGame;
}

// Range: 0x197FC -> 0x19ADC
static void _disp_coin_logo(union_drmario_gc_c_202 * * glp /* r19 */, int count /* r20 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r3
    union_drmario_gc_c_202 * pgfx; // r1+0x1C
    struct_tex_func_c_1287 * texC; // r1+0x10
    int i; // r1+0x10
    int tileW; // r21
    float fx; // f1
    float fy; // f1
    union_drmario_gc_c_202 * _g; // r1+0x10
    union_drmario_gc_c_202 * _g; // r1+0x10
    union_drmario_gc_c_202 * _g; // r1+0x10
    union_drmario_gc_c_202 * _g; // r1+0x10

    // References
    // -> union [anonymous] normal_texture_init_dl[];
    // -> struct [anonymous] * watchGame;
}

static unsigned char tbl$4589[4]; // size: 0x4, address: 0x4F70
static unsigned char col$4590[3][4]; // size: 0xC, address: 0x4F74
// Range: 0x19ADC -> 0x19C88
static void draw_flash_virus_light(union_drmario_gc_c_202 * * gpp /* r31 */, @enum$110dm_title_main_c cached /* r3 */, int x /* r5 */, int y /* r1+0x14 */, int color /* r1+0x18 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x20
    struct_tex_func_c_1287 * tex; // r4
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static unsigned char col$4590[3][4];
    // -> union [anonymous] normal_texture_init_dl[];
    // -> static unsigned char tbl$4589[4];
    // -> struct [anonymous] * watchGame;
}

// Range: 0x19C88 -> 0x19D6C
static void draw_flash_virus_lights(union_drmario_gc_c_202 * * gpp /* r30 */, struct_dm_game_main_c_176 * state /* r31 */) {
    // Local variables
    @enum$110dm_title_main_c cached; // r4
    int i; // r28
    int dx; // r27
    int dy; // r26
}

// Range: 0x19D6C -> 0x19F6C
static void draw_story_board(union_drmario_gc_c_202 * * gpp /* r26 */, int x /* r27 */, int y /* r28 */, @enum$110dm_title_main_c visBoard /* r1+0x14 */, enum /* @enum$115dm_game_main_c */ {
    false = 0,
    true = 1,
} visScore /* r29 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r30
    union_drmario_gc_c_202 * gp; // r1+0x1C
    struct_tex_func_c_1287 * texC; // r7
    struct_tex_func_c_1287 * texA; // r8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> struct [anonymous] game_state_data[4];
    // -> signed char evs_story_level;
    // -> union [anonymous] alpha_texture_init_dl[];
    // -> struct [anonymous] * watchGame;
}

static int _x$4663[2]; // size: 0x8, address: 0xF58
static int _x$4670[2]; // size: 0x8, address: 0xF60
static int _x$4676[2]; // size: 0x8, address: 0xF68
static int _x$4693[2]; // size: 0x8, address: 0xF70
// Range: 0x19F6C -> 0x1A65C
void draw_vsmode_board(union_drmario_gc_c_202 * * gpp /* r28 */, int x /* r30 */, int y /* r31 */, @enum$110dm_title_main_c visBoard /* r25 */, enum /* @enum$115dm_game_main_c */ {
    false = 0,
    true = 1,
} visScore /* r27 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r26
    union_drmario_gc_c_202 * gp; // r1+0x1C
    struct_tex_func_c_1287 * texC; // r6
    struct_tex_func_c_1287 * texA; // r7
    int i; // r17
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> struct [anonymous] game_state_data[4];
    // -> static int _x$4693[2];
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> static int _x$4676[2];
    // -> static int _x$4670[2];
    // -> static int _x$4663[2];
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> union [anonymous] alpha_texture_init_dl[];
    // -> struct [anonymous] * watchGame;
}

static int _rect$4752[5][4]; // size: 0x50, address: 0xF78
// Range: 0x1A65C -> 0x1A940
static void _draw_bottle_10(union_drmario_gc_c_202 * * gpp /* r28 */, const int * xx /* r29 */, const int * yy /* r30 */, int count /* r31 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r21
    union_drmario_gc_c_202 * gp; // r1+0x18
    struct_tex_func_c_1287 * texC; // r22
    int h; // r9
    int i; // r23
    int j; // r24
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static int _rect$4752[5][4];
    // -> union [anonymous] normal_texture_init_dl[];
    // -> struct [anonymous] * watchGame;
}

// Range: 0x1A940 -> 0x1A988
void dm_calc_bottle_2p() {
    // Local variables
    int mx[2]; // r1+0x10
    struct_dm_game_main_c_176 * state; // r1+0x8

    // References
    // -> struct [anonymous] game_state_data[4];
}

// Range: 0x1A988 -> 0x1AA10
void dm_draw_bottle_2p(union_drmario_gc_c_202 * * gpp /* r31 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x38
    int x[2]; // r1+0x24
    int y[2]; // r1+0x1C
    struct_dm_game_main_c_176 * state; // r1+0x8

    // References
    // -> struct [anonymous] game_state_data[4];
}

// Range: 0x1AA10 -> 0x1AAD4
void dm_draw_big_virus(union_drmario_gc_c_202 * * gpp /* r26 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r6
    union_drmario_gc_c_202 * gp; // r1+0xC
    int i; // r27

    // References
    // -> struct [anonymous] * watchGame;
}

static int _pat$4838[6]; // size: 0x18, address: 0xFC8
// Range: 0x1AAD4 -> 0x1AEB8
void dm_draw_KaSaMaRu(union_drmario_gc_c_202 * * gpp /* r24 */, union_main_story_c_778 * * mpp /* r25 */, union_tex_func_c_1051 * * vpp /* r26 */, int speaking /* r19 */, int x /* r27 */, int y /* r28 */, int dir /* r29 */, int alpha /* r30 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r20
    union_drmario_gc_c_202 * gp; // r1+0x7C
    union_main_story_c_778 * mp; // r31
    union_tex_func_c_1051 * vp; // r1+0x78
    struct_tex_func_c_1287 * texC; // r1+0x18
    struct_tex_func_c_1287 * texA; // r1+0x18
    int i; // r3
    int width; // r20
    int height; // r23
    float mf[4][4]; // r1+0x38
    float angle; // f1
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18

    // References
    // -> union [anonymous] alpha_texture_init_dl[];
    // -> static int _pat$4838[6];
    // -> struct [anonymous] * watchGame;
}

// Range: 0x1AEB8 -> 0x1B340
static void dm_game_graphic_common(struct_dm_game_main_c_176 * state /* r31 */, int player_no /* r23 */, struct_dm_game_main_c_487 * map /* r25 */) {
    // Local variables
    struct_tex_func_c_1287 * tex; // r3
    int i; // r22
    int size_flg; // r24
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    struct_dm_game_main_c_690 * cap; // r23
    int fallPosY[2]; // r1+0x3C
    int x; // r7
    int y; // r8
    int size; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> union [anonymous] * gp;
    // -> struct [anonymous] * watchGame;
    // -> static int visible_fall_point[4];
    // -> signed char aiDebugP1;
    // -> static int cap_pal$4164[2][6];
    // -> static int cap_tex$4162[2];
    // -> union [anonymous] normal_texture_init_dl[];
}

// Range: 0x1B340 -> 0x1B4F8
void dm_game_graphic_p(struct_dm_game_main_c_176 * state /* r28 */, int player_no /* r4 */, struct_dm_game_main_c_487 * map /* r5 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r30
    int i; // r29
    int xx[2]; // r1+0x28
    int yy[2]; // r1+0x20
    int size_flg; // r29
    struct_tex_func_c_1287 * tex; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> struct [anonymous] * watchGame;
    // -> static int cap_pal$4164[2][6];
    // -> union [anonymous] * gp;
    // -> union [anonymous] normal_texture_init_dl[];
}

// Range: 0x1B4F8 -> 0x1B6D8
static void dm_game_graphic_1p(struct_dm_game_main_c_176 * state /* r29 */, int player_no /* r4 */, struct_dm_game_main_c_487 * map /* r5 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r30
    int i; // r6
    int xx[2]; // r1+0x28
    int yy[2]; // r1+0x20
    struct_tex_func_c_1287 * tex; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static int cap_pal$4164[2][6];
    // -> struct [anonymous] * watchGame;
    // -> union [anonymous] * gp;
    // -> union [anonymous] normal_texture_init_dl[];
}

unsigned char evs_score_flag; // size: 0x1, address: 0x487F
// Range: 0x1B6D8 -> 0x1C18C
void dm_game_graphic_effect(struct_dm_game_main_c_176 * state /* r31 */, int player_no /* r30 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r29
    struct_tex_func_c_1287 * texC; // r25
    struct_tex_func_c_1287 * texA; // r24
    int i; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    int frame; // r23
    int sound; // r25

    // References
    // -> union [anonymous] * gp;
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> struct [anonymous] * watchGame;
    // -> unsigned char evs_playcnt;
    // -> union [anonymous] alpha_texture_init_dl[];
    // -> unsigned long evs_game_time;
    // -> unsigned char evs_score_flag;
    // -> struct [anonymous] game_map_data[4][136];
}

unsigned char joygmf[4]; // size: 0x4, address: 0x1CE48
unsigned short joygam[4]; // size: 0x8, address: 0x1CE40
unsigned short joycur1; // size: 0x2, address: 0x1CE4C
unsigned char evs_keyrept[]; // size: 0x0, address: 0x487C
unsigned short joycur2; // size: 0x2, address: 0x1CE4E
// Range: 0x1C18C -> 0x1C290
void dm_make_key() {
    // Local variables
    int i; // r1+0x0
    int count; // r1+0x0

    // References
    // -> unsigned short joynew[5];
    // -> unsigned short joycur[5];
    // -> unsigned short joyupd[5];
    // -> unsigned char joygmf[4];
    // -> unsigned short joygam[4];
    // -> unsigned char main_joy[4];
    // -> struct [anonymous] game_state_data[4];
    // -> @enum$106dm_title_main_c evs_gamesel;
}

// Range: 0x1C290 -> 0x1C6C4
void key_control_main(struct_dm_game_main_c_176 * state /* r27 */, struct_dm_game_main_c_487 * map /* r28 */, int player_no /* r29 */, int joy_no /* r30 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r31
    struct_dm_game_main_c_690 * cap; // r25
    unsigned long joybak; // r25
    int i; // r1+0x8
    int xx[2]; // r1+0x24
    int yy[2]; // r1+0x1C
    int bak; // r25

    // References
    // -> unsigned short joynew[5];
    // -> unsigned char FallSpeed[];
    // -> unsigned short joygam[4];
    // -> signed char aiDebugP1;
    // -> static int visible_fall_point[4];
    // -> unsigned short joyupd[5];
    // -> struct [anonymous] evs_mem_data[9];
    // -> unsigned char evs_select_name_no[];
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> struct [anonymous] * watchGame;
}

// Range: 0x1C6C4 -> 0x1C814
void make_ai_main() {
    // Local variables
    int i; // r29

    // References
    // -> struct [anonymous] game_state_data[4];
    // -> signed char aiDebugP1;
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> int dm_think_flg;
}

// Range: 0x1C814 -> 0x1C890
void dm_effect_make() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r1+0x0
    int i; // r1+0x0

    // References
    // -> unsigned long evs_game_time;
    // -> unsigned char evs_playcnt;
    // -> struct [anonymous] game_state_data[4];
    // -> struct [anonymous] * watchGame;
}

unsigned char * Heap_bufferp; // size: 0x4, address: 0x18
// Range: 0x1C890 -> 0x1C944
void dm_game_init_heap() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r3
    int i; // r1+0x8

    // References
    // -> struct [anonymous] * gameGeom;
    // -> static void * heapTop;
    // -> struct [anonymous] * gameBackup[2];
    // -> struct [anonymous] * watchGame;
    // -> unsigned char * Heap_bufferp;
}

static signed short map_x_table$5383[3][4]; // size: 0x18, address: 0x1014
static unsigned char map_y_table$5384[2]; // size: 0x2, address: 0x102C
static unsigned char size_table$5385[2]; // size: 0x2, address: 0x1030
@enum$98dm_title_main_c;
@enum$98dm_title_main_c main_no; // size: 0x4, address: 0x18E6C
unsigned char evs_seqnumb; // size: 0x1, address: 0x18F90
int fool_mode; // size: 0x4, address: 0x55518
int s_hard_mode; // size: 0x4, address: 0x5551C
// Range: 0x1C944 -> 0x1D5E0
void dm_game_init(int reinit /* r23 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r22
    struct_dm_game_main_c_176 * state; // r1+0x8
    int i; // r1+0x8
    int j; // r23
    int k; // r24

    // References
    // -> int s_hard_mode;
    // -> int fool_mode;
    // -> signed char evs_story_no;
    // -> signed char evs_story_level;
    // -> unsigned char evs_playcnt;
    // -> struct [anonymous] * watchGame;
    // -> struct [anonymous] game_state_data[4];
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> unsigned char virus_map_disp_order[4][96];
    // -> struct [anonymous] virus_map_data[4][128];
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> unsigned char CapsMagazine[];
    // -> unsigned char GameSpeed[];
    // -> struct [anonymous] game_map_data[4][136];
    // -> static unsigned char size_table$5385[2];
    // -> static unsigned char map_y_table$5384[2];
    // -> static signed short map_x_table$5383[3][4];
    // -> unsigned char evs_seqnumb;
    // -> unsigned long evs_game_time;
    // -> static float _big_virus_def_wait[3];
    // -> @enum$98dm_title_main_c main_no;
}

void * _romDataTbl[][2]; // size: 0x0, address: 0x1DB58
char st_staffroll_txt[]; // size: 0x0, address: 0x18D8
// Range: 0x1D5E0 -> 0x1DD74
void dm_game_init_static() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r29
    void * (* tbl)[2]; // r1+0x8
    int i; // r1+0x8
    struct_dm_game_main_c_8121 * mc; // r5

    // References
    // -> struct [anonymous] game_state_data[4];
    // -> static void * heapTop;
    // -> unsigned char evs_select_name_no[];
    // -> struct [anonymous] evs_mem_data[9];
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> signed char evs_story_flg;
    // -> char st_staffroll_txt[];
    // -> unsigned long evs_high_score;
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> unsigned char evs_playcnt;
    // -> struct [anonymous] * watchGame;
    // -> @enum$98dm_title_main_c main_no;
    // -> void * _romDataTbl[][2];
}

// Range: 0x1DD74 -> 0x1DE00
void dm_game_init_snap_bg() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r1+0x8

    // References
    // -> static void * heapTop;
    // -> int story_proc_no;
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> struct [anonymous] * watchGame;
}

static signed short _bgPos$5792[7][2]; // size: 0x1C, address: 0x1034
static signed short _panelPos$5793[3][2]; // size: 0xC, address: 0x1050
static char _bgTex$5794[3]; // size: 0x3, address: 0x105C
static char _magTex$5795[3]; // size: 0x3, address: 0x1060
static char _scrTex$5796[3]; // size: 0x3, address: 0x1064
static char _panelTex$5797[3][3]; // size: 0x9, address: 0x1068
static int tbl$5867[2][2]; // size: 0x10, address: 0x1074
// Range: 0x1DE00 -> 0x1EC74
void dm_game_draw_snap_bg(union_drmario_gc_c_202 * * gpp /* r28 */, int drawPanelFlag /* r27 */) {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r1+0x18
    union_drmario_gc_c_202 * gp; // r1+0x2C
    struct_tex_func_c_1287 * texC; // r23
    struct_tex_func_c_1287 * texA; // r1+0x18
    int i; // r24
    int width; // r4
    union_drmario_gc_c_202 * _g; // r1+0x18
    int type; // r29
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18

    // References
    // -> signed char evs_story_no;
    // -> signed char evs_story_flg;
    // -> union [anonymous] alpha_texture_init_dl[];
    // -> int evs_vs_count;
    // -> static int tbl$5867[2][2];
    // -> static int _posP4CharBase[4][2];
    // -> struct [anonymous] game_state_data[4];
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> union [anonymous] normal_texture_init_dl[];
    // -> static int _posP4Bottle[4][2];
    // -> static int _posP4BottleIn[2];
    // -> static signed short _panelPos$5793[3][2];
    // -> static char _panelTex$5797[3][3];
    // -> static char _scrTex$5796[3];
    // -> static char _magTex$5795[3];
    // -> static signed short _bgPos$5792[7][2];
    // -> static char _bgTex$5794[3];
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> struct [anonymous] * watchGame;
}

union_drmario_gc_c_202 gfx_glist[3][9216]; // size: 0x36000, address: 0x1E9A8
unsigned char evs_gamespeed; // size: 0x1, address: 0x487E
@enum$101main_story_c;
@enum$101main_story_c graphic_no; // size: 0x4, address: 0x1E994
unsigned long pendingGFX; // size: 0x4, address: 0x1E998
// Range: 0x1EC74 -> 0x1EF8C
int dm_game_main() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r29
    @enum$98dm_title_main_c ret; // r24
    @enum$100dm_game_main_c gret; // r28
    @enum$110dm_title_main_c loop_flg; // r27
    int gs; // r23
    int joybak; // r22

    // References
    // -> unsigned long pendingGFX;
    // -> @enum$101main_story_c graphic_no;
    // -> int dm_think_flg;
    // -> unsigned short joyupd[5];
    // -> unsigned char evs_gamespeed;
    // -> unsigned long gfx_gtask_no;
    // -> union [anonymous] gfx_glist[3][9216];
    // -> union [anonymous] * gp;
    // -> static void * heapTop;
    // -> int story_proc_no;
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> struct [anonymous] * watchGame;
    // -> struct [anonymous] * gameGeom;
    // -> struct [anonymous] * gameBackup[2];
    // -> unsigned char * Heap_bufferp;
    // -> unsigned char evs_keyrept[];
    // -> unsigned short joycur2;
    // -> unsigned short joycur1;
    // -> unsigned short joygam[4];
    // -> unsigned char joygmf[4];
    // -> unsigned short joyflg[4];
}

// Range: 0x1EF8C -> 0x1F6C8
static @enum$100dm_game_main_c dm_game_main2() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r1+0x8
    @enum$100dm_game_main_c ret; // r28
    @enum$110dm_title_main_c finish; // r27
    int i; // r1+0x8

    // References
    // -> struct [anonymous] game_state_data[4];
    // -> int evs_vs_count;
    // -> signed char evs_story_flg;
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> char st_staffroll_txt[];
    // -> unsigned char evs_seqnumb;
    // -> unsigned char main_joy[4];
    // -> unsigned short joyupd[5];
    // -> unsigned short joynew[5];
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> unsigned long evs_game_time;
    // -> unsigned char evs_playcnt;
    // -> struct [anonymous] * watchGame;
}

char * EndingLastMessage; // size: 0x4, address: 0x3FA8
int drmario_exit_flag; // size: 0x4, address: 0x18E68
// Range: 0x1F6C8 -> 0x1F9CC
static @enum$98dm_title_main_c dm_game_main3(enum /* @enum$100dm_game_main_c */ {
    dm_ret_game_end = -2,
    dm_ret_game_over = -1,
    dm_ret_null = 0,
    dm_ret_next_stage = 1,
    dm_ret_retry = 2,
    dm_ret_virus_wait = 3,
    dm_ret_pause = 4,
    dm_ret_black_up = 5,
    dm_ret_clear = 6,
    dm_ret_tr_a = 7,
    dm_ret_tr_b = 8,
    dm_ret_replay = 9,
    dm_ret_end = 100,
} gret /* r1+0x8 */) {
    // Local variables
    @enum$98dm_title_main_c ret; // r31
    int handover_demono; // r4

    // References
    // -> int drmario_exit_flag;
    // -> static char _mesSHardNoCont[178];
    // -> char * EndingLastMessage;
    // -> static char _mesSHardCont[114];
    // -> struct [anonymous] game_state_data[4];
    // -> static char _mesHardNoCont[324];
    // -> static char _mesHardCont[112];
    // -> static char _mesNormalNoCont[152];
    // -> static char _mesNormalCont[114];
    // -> static char _mesEasyNoCont[152];
    // -> static char _mesEasyCont[112];
    // -> signed char evs_story_level;
    // -> int story_proc_no;
    // -> signed char evs_story_no;
    // -> signed char evs_story_flg;
    // -> @enum$106dm_title_main_c evs_gamesel;
}

// Range: 0x1F9CC -> 0x1FAB8
void dm_game_graphic() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r29
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> union [anonymous] * gp;
    // -> unsigned long gfx_gtask_no;
    // -> union [anonymous] gfx_glist[3][9216];
    // -> struct [anonymous] * watchGame;
}

static int _x$6416[2]; // size: 0x8, address: 0x10BC
static int dir$6435[2]; // size: 0x8, address: 0x10C4
static int color2index$6470[3]; // size: 0xC, address: 0x10CC
// Range: 0x1FAB8 -> 0x21628
static void dm_game_graphic2() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r15
    struct_tex_func_c_1287 * texC; // r6
    struct_tex_func_c_1287 * texA; // r7
    union_main_story_c_778 * mp; // r1+0xEC
    union_tex_func_c_1051 * vp; // r1+0xE8
    int i; // r4
    int j; // r30
    int cached; // r19
    int debug_flag; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    int bak; // r1+0x18
    @enum$110dm_title_main_c visBoard; // r1+0x18
    @enum$110dm_title_main_c visScore; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    int tx; // r22
    int ty; // r1+0x18
    int tw; // r23
    int th; // r26
    int color; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    int x; // r1+0x18
    int y; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18

    // References
    // -> union [anonymous] * gp;
    // -> union [anonymous] normal_texture_init_dl[];
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> unsigned char evs_playcnt;
    // -> struct [anonymous] game_state_data[4];
    // -> int evs_vs_count;
    // -> union [anonymous] alpha_texture_init_dl[];
    // -> struct [anonymous] * watchGame;
    // -> static int _posP4CharStarX[3][4][3];
    // -> static int _posP4TeamStarX[3][2][3];
    // -> static int color2index$6470[3];
    // -> static int _posP4StockCap[2][2];
    // -> static int _posStP4StarX[4];
    // -> static signed char _col$4416[3];
    // -> static unsigned char _pos$4415[3];
    // -> unsigned long evs_game_time;
    // -> signed char evs_story_flg;
    // -> static int _posP4CharBase[4][2];
    // -> static int _posP2CharFrm[2][2];
    // -> static int dir$6435[2];
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> static int _posP2StarY[3][3];
    // -> static int _posP2StarX[2];
    // -> static int _x$6416[2];
    // -> static int _posStStar[2][2];
    // -> static signed char _col$4427[5];
    // -> static unsigned char _pos$4426[5];
    // -> static int _posP2VirusNum[2][2];
    // -> static int _posLsTime[2];
    // -> unsigned long evs_high_score;
    // -> struct [anonymous] game_map_data[4][136];
    // -> struct [anonymous] * gameGeom;
    // -> unsigned long gfx_gtask_no;
    // -> union [anonymous] gfx_glist[3][9216];
}

unsigned short joyold[5]; // size: 0xA, address: 0x1CD94
// Range: 0x21628 -> 0x21998
void dm_game_graphic_onDoneSawp() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r1+0x8
    int i; // r1+0x8
    int stepCnt; // r21
    @enum$110dm_title_main_c pause; // r20
    @enum$110dm_title_main_c finish; // r22

    // References
    // -> unsigned char evs_gamespeed;
    // -> unsigned char evs_playcnt;
    // -> unsigned short joygam[4];
    // -> struct [anonymous] game_state_data[4];
    // -> struct [anonymous] game_map_data[4][136];
    // -> unsigned char main_joy[4];
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> unsigned short joycur[5];
    // -> unsigned short joyupd[5];
    // -> unsigned short joyold[5];
    // -> unsigned short joynew[5];
    // -> struct [anonymous] * watchGame;
}

unsigned char evs_seqence; // size: 0x1, address: 0x4879
// Range: 0x21998 -> 0x21C14
int main_techmes() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r30
    @enum$110dm_title_main_c loop; // r29
    int i; // r28

    // References
    // -> unsigned long pendingGFX;
    // -> @enum$101main_story_c graphic_no;
    // -> unsigned char main_joy[4];
    // -> unsigned short joyupd[5];
    // -> unsigned char evs_seqence;
    // -> char * EndingLastMessage;
    // -> static void * heapTop;
    // -> struct [anonymous] * watchGame;
    // -> struct [anonymous] * gameGeom;
    // -> struct [anonymous] * gameBackup[2];
    // -> unsigned char * Heap_bufferp;
}

// Range: 0x21C14 -> 0x21E08
void graphic_techmes() {
    // Local variables
    struct_dm_game_main_c_4937 * st; // r30
    union_main_story_c_778 * mp; // r1+0x1C
    union_tex_func_c_1051 * vp; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x10
    union_drmario_gc_c_202 * _g; // r1+0x10
    union_drmario_gc_c_202 * _g; // r1+0x10
    union_drmario_gc_c_202 * _g; // r1+0x10

    // References
    // -> union [anonymous] * gp;
    // -> unsigned long gfx_gtask_no;
    // -> union [anonymous] gfx_glist[3][9216];
    // -> struct [anonymous] * gameGeom;
    // -> struct [anonymous] * watchGame;
}


