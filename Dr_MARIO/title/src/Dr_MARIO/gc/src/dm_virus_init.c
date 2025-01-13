/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\dm_virus_init.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00022A38 -> 0x00023E48
*/
static unsigned char limit_table[25]; // size: 0x19, address: 0x1100
// Range: 0x22A38 -> 0x22B50
void init_map_all(struct {
    // total size: 0xA
    signed char pos_m_x; // offset 0x0, size 0x1
    signed char pos_m_y; // offset 0x1, size 0x1
    signed char capsel_m_g; // offset 0x2, size 0x1
    signed char capsel_m_p; // offset 0x3, size 0x1
    signed char capsel_m_flg[6]; // offset 0x4, size 0x6
} * map /* r31 */) {
    // Local variables
    int i; // r3
    int p; // r6
}

// Range: 0x22B50 -> 0x22B8C
void clear_map(struct {
    // total size: 0xA
    signed char pos_m_x; // offset 0x0, size 0x1
    signed char pos_m_y; // offset 0x1, size 0x1
    signed char capsel_m_g; // offset 0x2, size 0x1
    signed char capsel_m_p; // offset 0x3, size 0x1
    signed char capsel_m_flg[6]; // offset 0x4, size 0x6
} * map /* r1+0x0 */, int x_pos /* r1+0x4 */, int y_pos /* r1+0x8 */) {
    // Local variables
    int j; // r1+0x0
}

// Range: 0x22B8C -> 0x22C84
void clear_map_all(struct {
    // total size: 0xA
    signed char pos_m_x; // offset 0x0, size 0x1
    signed char pos_m_y; // offset 0x1, size 0x1
    signed char capsel_m_g; // offset 0x2, size 0x1
    signed char capsel_m_p; // offset 0x3, size 0x1
    signed char capsel_m_flg[6]; // offset 0x4, size 0x6
} * map /* r1+0x0 */) {
    // Local variables
    int i; // r8
    int j; // r9
}

// Range: 0x22C84 -> 0x22CB4
int get_map_info(struct {
    // total size: 0xA
    signed char pos_m_x; // offset 0x0, size 0x1
    signed char pos_m_y; // offset 0x1, size 0x1
    signed char capsel_m_g; // offset 0x2, size 0x1
    signed char capsel_m_p; // offset 0x3, size 0x1
    signed char capsel_m_flg[6]; // offset 0x4, size 0x6
} * map /* r1+0x0 */, int x_pos /* r1+0x4 */, int y_pos /* r1+0x8 */) {}

// Range: 0x22CB4 -> 0x22D64
int get_virus_color_count(struct {
    // total size: 0xA
    signed char pos_m_x; // offset 0x0, size 0x1
    signed char pos_m_y; // offset 0x1, size 0x1
    signed char capsel_m_g; // offset 0x2, size 0x1
    signed char capsel_m_p; // offset 0x3, size 0x1
    signed char capsel_m_flg[6]; // offset 0x4, size 0x6
} * map /* r1+0x8 */, unsigned char * red /* r1+0xC */, unsigned char * yellow /* r1+0x10 */, unsigned char * blue /* r1+0x14 */) {
    // Local variables
    int i; // r1+0x8
    int ret; // r11
    int color[3]; // r1+0x18
}

// Range: 0x22D64 -> 0x22D90
int get_virus_count(struct {
    // total size: 0xA
    signed char pos_m_x; // offset 0x0, size 0x1
    signed char pos_m_y; // offset 0x1, size 0x1
    signed char capsel_m_g; // offset 0x2, size 0x1
    signed char capsel_m_p; // offset 0x3, size 0x1
    signed char capsel_m_flg[6]; // offset 0x4, size 0x6
} * map /* r3 */) {
    // Local variables
    unsigned char ryb[3]; // r1+0xC
}

// Range: 0x22D90 -> 0x22DEC
void set_map(struct {
    // total size: 0xA
    signed char pos_m_x; // offset 0x0, size 0x1
    signed char pos_m_y; // offset 0x1, size 0x1
    signed char capsel_m_g; // offset 0x2, size 0x1
    signed char capsel_m_p; // offset 0x3, size 0x1
    signed char capsel_m_flg[6]; // offset 0x4, size 0x6
} * map /* r1+0x0 */, int x_pos /* r1+0x4 */, int y_pos /* r1+0x8 */, int item /* r1+0xC */, int pal /* r7 */) {
    // Local variables
    int pal_save; // r8
}

// Range: 0x22DEC -> 0x22E44
void set_virus(struct {
    // total size: 0xA
    signed char pos_m_x; // offset 0x0, size 0x1
    signed char pos_m_y; // offset 0x1, size 0x1
    signed char capsel_m_g; // offset 0x2, size 0x1
    signed char capsel_m_p; // offset 0x3, size 0x1
    signed char capsel_m_flg[6]; // offset 0x4, size 0x6
} * map /* r1+0x0 */, int x_pos /* r1+0x4 */, int y_pos /* r1+0x8 */, int virus /* r6 */, int virus_anime_no /* r1+0x10 */) {
    // Local variables
    int pal_save; // r8
}

// Range: 0x22E44 -> 0x23038
unsigned char dm_check_color(struct {
    // total size: 0x3
    signed char virus_type; // offset 0x0, size 0x1
    unsigned char x_pos; // offset 0x1, size 0x1
    unsigned char y_pos; // offset 0x2, size 0x1
} * v_map /* r1+0x0 */, unsigned short x_pos /* r1+0x4 */, unsigned short y_pos /* r1+0x6 */, unsigned char check_color /* r1+0x8 */) {
    // Local variables
    unsigned char p; // r11
}

// Range: 0x23038 -> 0x23130
unsigned char dm_check_color_2(struct {
    // total size: 0x3
    signed char virus_type; // offset 0x0, size 0x1
    unsigned char x_pos; // offset 0x1, size 0x1
    unsigned char y_pos; // offset 0x2, size 0x1
} * v_map /* r1+0x0 */, unsigned short x_pos /* r1+0x4 */, unsigned short y_pos /* r1+0x6 */, unsigned char check_color /* r1+0x8 */) {
    // Local variables
    unsigned char p; // r10
}

// Range: 0x23130 -> 0x233AC
void dm_virus_map_copy(struct {
    // total size: 0x3
    signed char virus_type; // offset 0x0, size 0x1
    unsigned char x_pos; // offset 0x1, size 0x1
    unsigned char y_pos; // offset 0x2, size 0x1
} * v_map_a /* r3 */, struct {
    // total size: 0x3
    signed char virus_type; // offset 0x0, size 0x1
    unsigned char x_pos; // offset 0x1, size 0x1
    unsigned char y_pos; // offset 0x2, size 0x1
} * v_map_b /* r4 */, unsigned char * order_a /* r1+0x8 */, unsigned char * order_b /* r1+0xC */) {
    // Local variables
    int i; // r1+0x0
}

enum /* @enum$98dm_virus_init_c */ {
    GMD_NORMAL = 0,
    GMD_FLASH = 1,
    GMD_TaiQ = 2,
    GMD_TIME_ATTACK = 3,
};
enum /* @enum$104dm_virus_init_c */ {
    dm_mode_null = 0,
    dm_mode_init = 1,
    dm_mode_wait = 2,
    dm_mode_throw = 3,
    dm_mode_down = 4,
    dm_mode_down_wait = 5,
    dm_mode_erase_chack = 6,
    dm_mode_erase_anime = 7,
    dm_mode_ball_down = 8,
    dm_mode_cap_set = 9,
    dm_mode_stage_clear = 10,
    dm_mode_game_over = 11,
    dm_mode_bottom_up = 12,
    dm_mode_win = 13,
    dm_mode_win_retry = 14,
    dm_mode_lose = 15,
    dm_mode_lose_retry = 16,
    dm_mode_draw = 17,
    dm_mode_draw_retry = 18,
    dm_mode_tr_chaeck = 19,
    dm_mode_training = 20,
    dm_mode_tr_erase_chack = 21,
    dm_mode_tr_cap_set = 22,
    dm_mode_pause = 23,
    dm_mode_pause_retry = 24,
    dm_mode_no_action = 25,
    dm_mode_clear_wait = 26,
    dm_mode_clear_result = 27,
    dm_mode_gover_wait = 28,
    dm_mode_gover_result = 29,
    dm_mode_retire_wait = 30,
    dm_mode_retire_result = 31,
    dm_mode_debug_config = 32,
    dm_mode_debug = 33,
};
enum /* @enum$103dm_virus_init_c */ {
    dm_cnd_null = 0,
    dm_cnd_wait = 1,
    dm_cnd_init = 2,
    dm_cnd_stage_clear = 3,
    dm_cnd_game_over = 4,
    dm_cnd_win = 5,
    dm_cnd_win_retry = 6,
    dm_cnd_win_retry_sc = 7,
    dm_cnd_lose = 8,
    dm_cnd_lose_retry = 9,
    dm_cnd_lose_retry_sc = 10,
    dm_cnd_draw = 11,
    dm_cnd_draw_retry = 12,
    dm_cnd_pause = 13,
    dm_cnd_pause_re = 14,
    dm_cnd_pause_re_sc = 15,
    dm_cnd_retire = 16,
    dm_cnd_tr_chack = 17,
    dm_cnd_training = 18,
    dm_cnd_clear_wait = 19,
    dm_cnd_clear_result = 20,
    dm_cnd_gover_wait = 21,
    dm_cnd_gover_result = 22,
    dm_cnd_retire_wait = 23,
    dm_cnd_retire_result = 24,
    dm_cnd_debug_config = 25,
    dm_cnd_debug = 26,
};
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
    struct {
        // total size: 0x8
        void * addr; // offset 0x0, size 0x4
        unsigned short * size; // offset 0x4, size 0x4
    } * texArray; // offset 0x1C, size 0x4
    unsigned long frameCount; // offset 0x20, size 0x4
    int center[2]; // offset 0x24, size 0x8
    int charNo; // offset 0x2C, size 0x4
    int color[4]; // offset 0x30, size 0x10
};
// Range: 0x233AC -> 0x2340C
int dm_get_first_virus_count(enum /* @enum$98dm_virus_init_c */ {
    GMD_NORMAL = 0,
    GMD_FLASH = 1,
    GMD_TaiQ = 2,
    GMD_TIME_ATTACK = 3,
} mode /* r1+0x8 */, struct {
    // total size: 0x3C4
    unsigned long game_score; // offset 0x0, size 0x4
    unsigned short game_retry; // offset 0x4, size 0x2
    signed short map_x; // offset 0x6, size 0x2
    signed short map_y; // offset 0x8, size 0x2
    signed char map_item_size; // offset 0xA, size 0x1
    enum /* @enum$104dm_virus_init_c */ {
        dm_mode_null = 0,
        dm_mode_init = 1,
        dm_mode_wait = 2,
        dm_mode_throw = 3,
        dm_mode_down = 4,
        dm_mode_down_wait = 5,
        dm_mode_erase_chack = 6,
        dm_mode_erase_anime = 7,
        dm_mode_ball_down = 8,
        dm_mode_cap_set = 9,
        dm_mode_stage_clear = 10,
        dm_mode_game_over = 11,
        dm_mode_bottom_up = 12,
        dm_mode_win = 13,
        dm_mode_win_retry = 14,
        dm_mode_lose = 15,
        dm_mode_lose_retry = 16,
        dm_mode_draw = 17,
        dm_mode_draw_retry = 18,
        dm_mode_tr_chaeck = 19,
        dm_mode_training = 20,
        dm_mode_tr_erase_chack = 21,
        dm_mode_tr_cap_set = 22,
        dm_mode_pause = 23,
        dm_mode_pause_retry = 24,
        dm_mode_no_action = 25,
        dm_mode_clear_wait = 26,
        dm_mode_clear_result = 27,
        dm_mode_gover_wait = 28,
        dm_mode_gover_result = 29,
        dm_mode_retire_wait = 30,
        dm_mode_retire_result = 31,
        dm_mode_debug_config = 32,
        dm_mode_debug = 33,
    } mode_now; // offset 0xC, size 0x4
    enum /* @enum$104dm_virus_init_c */ {
        dm_mode_null = 0,
        dm_mode_init = 1,
        dm_mode_wait = 2,
        dm_mode_throw = 3,
        dm_mode_down = 4,
        dm_mode_down_wait = 5,
        dm_mode_erase_chack = 6,
        dm_mode_erase_anime = 7,
        dm_mode_ball_down = 8,
        dm_mode_cap_set = 9,
        dm_mode_stage_clear = 10,
        dm_mode_game_over = 11,
        dm_mode_bottom_up = 12,
        dm_mode_win = 13,
        dm_mode_win_retry = 14,
        dm_mode_lose = 15,
        dm_mode_lose_retry = 16,
        dm_mode_draw = 17,
        dm_mode_draw_retry = 18,
        dm_mode_tr_chaeck = 19,
        dm_mode_training = 20,
        dm_mode_tr_erase_chack = 21,
        dm_mode_tr_cap_set = 22,
        dm_mode_pause = 23,
        dm_mode_pause_retry = 24,
        dm_mode_no_action = 25,
        dm_mode_clear_wait = 26,
        dm_mode_clear_result = 27,
        dm_mode_gover_wait = 28,
        dm_mode_gover_result = 29,
        dm_mode_retire_wait = 30,
        dm_mode_retire_result = 31,
        dm_mode_debug_config = 32,
        dm_mode_debug = 33,
    } mode_old; // offset 0x10, size 0x4
    enum /* @enum$103dm_virus_init_c */ {
        dm_cnd_null = 0,
        dm_cnd_wait = 1,
        dm_cnd_init = 2,
        dm_cnd_stage_clear = 3,
        dm_cnd_game_over = 4,
        dm_cnd_win = 5,
        dm_cnd_win_retry = 6,
        dm_cnd_win_retry_sc = 7,
        dm_cnd_lose = 8,
        dm_cnd_lose_retry = 9,
        dm_cnd_lose_retry_sc = 10,
        dm_cnd_draw = 11,
        dm_cnd_draw_retry = 12,
        dm_cnd_pause = 13,
        dm_cnd_pause_re = 14,
        dm_cnd_pause_re_sc = 15,
        dm_cnd_retire = 16,
        dm_cnd_tr_chack = 17,
        dm_cnd_training = 18,
        dm_cnd_clear_wait = 19,
        dm_cnd_clear_result = 20,
        dm_cnd_gover_wait = 21,
        dm_cnd_gover_result = 22,
        dm_cnd_retire_wait = 23,
        dm_cnd_retire_result = 24,
        dm_cnd_debug_config = 25,
        dm_cnd_debug = 26,
    } cnd_now; // offset 0x14, size 0x4
    enum /* @enum$103dm_virus_init_c */ {
        dm_cnd_null = 0,
        dm_cnd_wait = 1,
        dm_cnd_init = 2,
        dm_cnd_stage_clear = 3,
        dm_cnd_game_over = 4,
        dm_cnd_win = 5,
        dm_cnd_win_retry = 6,
        dm_cnd_win_retry_sc = 7,
        dm_cnd_lose = 8,
        dm_cnd_lose_retry = 9,
        dm_cnd_lose_retry_sc = 10,
        dm_cnd_draw = 11,
        dm_cnd_draw_retry = 12,
        dm_cnd_pause = 13,
        dm_cnd_pause_re = 14,
        dm_cnd_pause_re_sc = 15,
        dm_cnd_retire = 16,
        dm_cnd_tr_chack = 17,
        dm_cnd_training = 18,
        dm_cnd_clear_wait = 19,
        dm_cnd_clear_result = 20,
        dm_cnd_gover_wait = 21,
        dm_cnd_gover_result = 22,
        dm_cnd_retire_wait = 23,
        dm_cnd_retire_result = 24,
        dm_cnd_debug_config = 25,
        dm_cnd_debug = 26,
    } cnd_old; // offset 0x18, size 0x4
    enum /* @enum$103dm_virus_init_c */ {
        dm_cnd_null = 0,
        dm_cnd_wait = 1,
        dm_cnd_init = 2,
        dm_cnd_stage_clear = 3,
        dm_cnd_game_over = 4,
        dm_cnd_win = 5,
        dm_cnd_win_retry = 6,
        dm_cnd_win_retry_sc = 7,
        dm_cnd_lose = 8,
        dm_cnd_lose_retry = 9,
        dm_cnd_lose_retry_sc = 10,
        dm_cnd_draw = 11,
        dm_cnd_draw_retry = 12,
        dm_cnd_pause = 13,
        dm_cnd_pause_re = 14,
        dm_cnd_pause_re_sc = 15,
        dm_cnd_retire = 16,
        dm_cnd_tr_chack = 17,
        dm_cnd_training = 18,
        dm_cnd_clear_wait = 19,
        dm_cnd_clear_result = 20,
        dm_cnd_gover_wait = 21,
        dm_cnd_gover_result = 22,
        dm_cnd_retire_wait = 23,
        dm_cnd_retire_result = 24,
        dm_cnd_debug_config = 25,
        dm_cnd_debug = 26,
    } cnd_training; // offset 0x1C, size 0x4
    enum /* @enum$103dm_virus_init_c */ {
        dm_cnd_null = 0,
        dm_cnd_wait = 1,
        dm_cnd_init = 2,
        dm_cnd_stage_clear = 3,
        dm_cnd_game_over = 4,
        dm_cnd_win = 5,
        dm_cnd_win_retry = 6,
        dm_cnd_win_retry_sc = 7,
        dm_cnd_lose = 8,
        dm_cnd_lose_retry = 9,
        dm_cnd_lose_retry_sc = 10,
        dm_cnd_draw = 11,
        dm_cnd_draw_retry = 12,
        dm_cnd_pause = 13,
        dm_cnd_pause_re = 14,
        dm_cnd_pause_re_sc = 15,
        dm_cnd_retire = 16,
        dm_cnd_tr_chack = 17,
        dm_cnd_training = 18,
        dm_cnd_clear_wait = 19,
        dm_cnd_clear_result = 20,
        dm_cnd_gover_wait = 21,
        dm_cnd_gover_result = 22,
        dm_cnd_retire_wait = 23,
        dm_cnd_retire_result = 24,
        dm_cnd_debug_config = 25,
        dm_cnd_debug = 26,
    } cnd_static; // offset 0x20, size 0x4
    unsigned char virus_order_number; // offset 0x24, size 0x1
    unsigned char virus_number; // offset 0x25, size 0x1
    unsigned char virus_level; // offset 0x26, size 0x1
    unsigned char virus_anime; // offset 0x27, size 0x1
    signed char virus_anime_vec; // offset 0x28, size 0x1
    unsigned char virus_anime_count; // offset 0x29, size 0x1
    unsigned char virus_anime_max; // offset 0x2A, size 0x1
    unsigned char virus_anime_spead; // offset 0x2B, size 0x1
    unsigned char cap_def_speed; // offset 0x2C, size 0x1
    unsigned char cap_speed; // offset 0x2D, size 0x1
    unsigned char cap_count; // offset 0x2E, size 0x1
    unsigned char cap_speed_count; // offset 0x2F, size 0x1
    unsigned char cap_speed_vec; // offset 0x30, size 0x1
    unsigned char cap_speed_max; // offset 0x31, size 0x1
    unsigned char cap_magazine_cnt; // offset 0x32, size 0x1
    unsigned char cap_magazine_save; // offset 0x33, size 0x1
    signed char cap_move_se_flg; // offset 0x34, size 0x1
    unsigned char erase_anime; // offset 0x35, size 0x1
    unsigned char erase_anime_count; // offset 0x36, size 0x1
    unsigned char erase_virus_count; // offset 0x37, size 0x1
    unsigned char erase_virus_count_old; // offset 0x38, size 0x1
    unsigned char chain_count; // offset 0x39, size 0x1
    unsigned char chain_line; // offset 0x3A, size 0x1
    unsigned char chain_line_max; // offset 0x3B, size 0x1
    unsigned char chain_color[4]; // offset 0x3C, size 0x4
    unsigned char black_up_count; // offset 0x40, size 0x1
    int warning_se_flag; // offset 0x44, size 0x4
    unsigned char flg_retire; // offset 0x48, size 0x1
    unsigned char flg_game_over; // offset 0x49, size 0x1
    unsigned char flg_training; // offset 0x4A, size 0x1
    unsigned char player_no; // offset 0x4B, size 0x1
    unsigned char player_type; // offset 0x4C, size 0x1
    unsigned char think_type; // offset 0x4D, size 0x1
    unsigned char think_level; // offset 0x4E, size 0x1
    unsigned char team_no; // offset 0x4F, size 0x1
    unsigned short cap_attack_work[16][2]; // offset 0x50, size 0x40
    int charNo; // offset 0x90, size 0x4
    struct SAnimeState anime; // offset 0x94, size 0x40
    int flash_virus_pos[9][3]; // offset 0xD4, size 0x6C
    int flash_virus_bak[9]; // offset 0x140, size 0x24
    int flash_virus_count; // offset 0x164, size 0x4
    int bottom_up_scroll; // offset 0x168, size 0x4
    int game_level; // offset 0x16C, size 0x4
    int total_erase_count; // offset 0x170, size 0x4
    int total_chain_count; // offset 0x174, size 0x4
    struct {
        // total size: 0xC
        signed char pos_x[2]; // offset 0x0, size 0x2
        signed char pos_y[2]; // offset 0x2, size 0x2
        signed char capsel_g[2]; // offset 0x4, size 0x2
        signed char capsel_p[2]; // offset 0x6, size 0x2
        signed char capsel_flg[4]; // offset 0x8, size 0x4
    } now_cap; // offset 0x178, size 0xC
    struct {
        // total size: 0xC
        signed char pos_x[2]; // offset 0x0, size 0x2
        signed char pos_y[2]; // offset 0x2, size 0x2
        signed char capsel_g[2]; // offset 0x4, size 0x2
        signed char capsel_p[2]; // offset 0x6, size 0x2
        signed char capsel_flg[4]; // offset 0x8, size 0x4
    } next_cap; // offset 0x184, size 0xC
    struct {
        // total size: 0x108
        struct {
            // total size: 0x40
            unsigned char ok; // offset 0x0, size 0x1
            unsigned char tory; // offset 0x1, size 0x1
            unsigned char x; // offset 0x2, size 0x1
            unsigned char y; // offset 0x3, size 0x1
            unsigned char rev; // offset 0x4, size 0x1
            unsigned char ccnt; // offset 0x5, size 0x1
            long pri; // offset 0x8, size 0x4
            long dead; // offset 0xC, size 0x4
            unsigned char hei[2][10]; // offset 0x10, size 0x14
            unsigned char wid[2][10]; // offset 0x24, size 0x14
            unsigned char elin[2]; // offset 0x38, size 0x2
            unsigned char only[2]; // offset 0x3A, size 0x2
            unsigned char wonly[2]; // offset 0x3C, size 0x2
            unsigned char sub; // offset 0x3E, size 0x1
            unsigned char rensa; // offset 0x3F, size 0x1
        } aiFlagDecide; // offset 0x0, size 0x40
        struct {
            // total size: 0x2
            unsigned char x; // offset 0x0, size 0x1
            unsigned char y; // offset 0x1, size 0x1
        } aiRootDecide[50]; // offset 0x40, size 0x64
        unsigned char aiKeyCount; // offset 0xA4, size 0x1
        unsigned char aiSpeedCnt; // offset 0xA5, size 0x1
        unsigned char aiKRFlag; // offset 0xA6, size 0x1
        unsigned char aiRollCnt; // offset 0xA7, size 0x1
        unsigned char aiRollFinal; // offset 0xA8, size 0x1
        unsigned char aiRollHabit; // offset 0xA9, size 0x1
        unsigned char aiSpUpFlag; // offset 0xAA, size 0x1
        unsigned char aiSpUpStart; // offset 0xAB, size 0x1
        unsigned char aivl; // offset 0xAC, size 0x1
        unsigned char aiok; // offset 0xAD, size 0x1
        unsigned char aiRandFlag; // offset 0xAE, size 0x1
        unsigned char aiEX; // offset 0xAF, size 0x1
        unsigned char aiEY; // offset 0xB0, size 0x1
        unsigned char aiOldRollCnt; // offset 0xB1, size 0x1
        unsigned char aiEffectNo[16]; // offset 0xB2, size 0x10
        signed short aiEffectParam[16]; // offset 0xC2, size 0x20
        signed short aiEffectCount[16]; // offset 0xE2, size 0x20
        unsigned char aiState; // offset 0x102, size 0x1
        unsigned char aiSelSpeed; // offset 0x103, size 0x1
        unsigned char aiRootP; // offset 0x104, size 0x1
        unsigned short aiPriOfs; // offset 0x106, size 0x2
    } ai; // offset 0x190, size 0x108
    unsigned char pn; // offset 0x298, size 0x1
    unsigned char gs; // offset 0x299, size 0x1
    unsigned char lv; // offset 0x29A, size 0x1
    unsigned char vs; // offset 0x29B, size 0x1
    struct {
        // total size: 0x2
        unsigned char st; // offset 0x0, size 0x1
        unsigned char co; // offset 0x1, size 0x1
    } blk[18][8]; // offset 0x29C, size 0x120
    struct {
        // total size: 0x6
        unsigned char mx; // offset 0x0, size 0x1
        unsigned char my; // offset 0x1, size 0x1
        unsigned char ca; // offset 0x2, size 0x1
        unsigned char cb; // offset 0x3, size 0x1
        unsigned char sp; // offset 0x4, size 0x1
        unsigned char cn; // offset 0x5, size 0x1
    } cap; // offset 0x3BC, size 0x6
} * state /* r1+0xC */) {
    // Local variables
    int count; // r3
}

static unsigned char _n$343[3]; // size: 0x3, address: 0x1128
// Range: 0x2340C -> 0x23420
int dm_get_first_virus_count_in_new_mode(int level /* r1+0x0 */) {
    // References
    // -> static unsigned char _n$343[3];
}

static unsigned char _l$359[3]; // size: 0x3, address: 0x112C
// Range: 0x23420 -> 0x2396C
void _dm_virus_init(enum /* @enum$98dm_virus_init_c */ {
    GMD_NORMAL = 0,
    GMD_FLASH = 1,
    GMD_TaiQ = 2,
    GMD_TIME_ATTACK = 3,
} mode /* r14 */, struct {
    // total size: 0x3C4
    unsigned long game_score; // offset 0x0, size 0x4
    unsigned short game_retry; // offset 0x4, size 0x2
    signed short map_x; // offset 0x6, size 0x2
    signed short map_y; // offset 0x8, size 0x2
    signed char map_item_size; // offset 0xA, size 0x1
    enum /* @enum$104dm_virus_init_c */ {
        dm_mode_null = 0,
        dm_mode_init = 1,
        dm_mode_wait = 2,
        dm_mode_throw = 3,
        dm_mode_down = 4,
        dm_mode_down_wait = 5,
        dm_mode_erase_chack = 6,
        dm_mode_erase_anime = 7,
        dm_mode_ball_down = 8,
        dm_mode_cap_set = 9,
        dm_mode_stage_clear = 10,
        dm_mode_game_over = 11,
        dm_mode_bottom_up = 12,
        dm_mode_win = 13,
        dm_mode_win_retry = 14,
        dm_mode_lose = 15,
        dm_mode_lose_retry = 16,
        dm_mode_draw = 17,
        dm_mode_draw_retry = 18,
        dm_mode_tr_chaeck = 19,
        dm_mode_training = 20,
        dm_mode_tr_erase_chack = 21,
        dm_mode_tr_cap_set = 22,
        dm_mode_pause = 23,
        dm_mode_pause_retry = 24,
        dm_mode_no_action = 25,
        dm_mode_clear_wait = 26,
        dm_mode_clear_result = 27,
        dm_mode_gover_wait = 28,
        dm_mode_gover_result = 29,
        dm_mode_retire_wait = 30,
        dm_mode_retire_result = 31,
        dm_mode_debug_config = 32,
        dm_mode_debug = 33,
    } mode_now; // offset 0xC, size 0x4
    enum /* @enum$104dm_virus_init_c */ {
        dm_mode_null = 0,
        dm_mode_init = 1,
        dm_mode_wait = 2,
        dm_mode_throw = 3,
        dm_mode_down = 4,
        dm_mode_down_wait = 5,
        dm_mode_erase_chack = 6,
        dm_mode_erase_anime = 7,
        dm_mode_ball_down = 8,
        dm_mode_cap_set = 9,
        dm_mode_stage_clear = 10,
        dm_mode_game_over = 11,
        dm_mode_bottom_up = 12,
        dm_mode_win = 13,
        dm_mode_win_retry = 14,
        dm_mode_lose = 15,
        dm_mode_lose_retry = 16,
        dm_mode_draw = 17,
        dm_mode_draw_retry = 18,
        dm_mode_tr_chaeck = 19,
        dm_mode_training = 20,
        dm_mode_tr_erase_chack = 21,
        dm_mode_tr_cap_set = 22,
        dm_mode_pause = 23,
        dm_mode_pause_retry = 24,
        dm_mode_no_action = 25,
        dm_mode_clear_wait = 26,
        dm_mode_clear_result = 27,
        dm_mode_gover_wait = 28,
        dm_mode_gover_result = 29,
        dm_mode_retire_wait = 30,
        dm_mode_retire_result = 31,
        dm_mode_debug_config = 32,
        dm_mode_debug = 33,
    } mode_old; // offset 0x10, size 0x4
    enum /* @enum$103dm_virus_init_c */ {
        dm_cnd_null = 0,
        dm_cnd_wait = 1,
        dm_cnd_init = 2,
        dm_cnd_stage_clear = 3,
        dm_cnd_game_over = 4,
        dm_cnd_win = 5,
        dm_cnd_win_retry = 6,
        dm_cnd_win_retry_sc = 7,
        dm_cnd_lose = 8,
        dm_cnd_lose_retry = 9,
        dm_cnd_lose_retry_sc = 10,
        dm_cnd_draw = 11,
        dm_cnd_draw_retry = 12,
        dm_cnd_pause = 13,
        dm_cnd_pause_re = 14,
        dm_cnd_pause_re_sc = 15,
        dm_cnd_retire = 16,
        dm_cnd_tr_chack = 17,
        dm_cnd_training = 18,
        dm_cnd_clear_wait = 19,
        dm_cnd_clear_result = 20,
        dm_cnd_gover_wait = 21,
        dm_cnd_gover_result = 22,
        dm_cnd_retire_wait = 23,
        dm_cnd_retire_result = 24,
        dm_cnd_debug_config = 25,
        dm_cnd_debug = 26,
    } cnd_now; // offset 0x14, size 0x4
    enum /* @enum$103dm_virus_init_c */ {
        dm_cnd_null = 0,
        dm_cnd_wait = 1,
        dm_cnd_init = 2,
        dm_cnd_stage_clear = 3,
        dm_cnd_game_over = 4,
        dm_cnd_win = 5,
        dm_cnd_win_retry = 6,
        dm_cnd_win_retry_sc = 7,
        dm_cnd_lose = 8,
        dm_cnd_lose_retry = 9,
        dm_cnd_lose_retry_sc = 10,
        dm_cnd_draw = 11,
        dm_cnd_draw_retry = 12,
        dm_cnd_pause = 13,
        dm_cnd_pause_re = 14,
        dm_cnd_pause_re_sc = 15,
        dm_cnd_retire = 16,
        dm_cnd_tr_chack = 17,
        dm_cnd_training = 18,
        dm_cnd_clear_wait = 19,
        dm_cnd_clear_result = 20,
        dm_cnd_gover_wait = 21,
        dm_cnd_gover_result = 22,
        dm_cnd_retire_wait = 23,
        dm_cnd_retire_result = 24,
        dm_cnd_debug_config = 25,
        dm_cnd_debug = 26,
    } cnd_old; // offset 0x18, size 0x4
    enum /* @enum$103dm_virus_init_c */ {
        dm_cnd_null = 0,
        dm_cnd_wait = 1,
        dm_cnd_init = 2,
        dm_cnd_stage_clear = 3,
        dm_cnd_game_over = 4,
        dm_cnd_win = 5,
        dm_cnd_win_retry = 6,
        dm_cnd_win_retry_sc = 7,
        dm_cnd_lose = 8,
        dm_cnd_lose_retry = 9,
        dm_cnd_lose_retry_sc = 10,
        dm_cnd_draw = 11,
        dm_cnd_draw_retry = 12,
        dm_cnd_pause = 13,
        dm_cnd_pause_re = 14,
        dm_cnd_pause_re_sc = 15,
        dm_cnd_retire = 16,
        dm_cnd_tr_chack = 17,
        dm_cnd_training = 18,
        dm_cnd_clear_wait = 19,
        dm_cnd_clear_result = 20,
        dm_cnd_gover_wait = 21,
        dm_cnd_gover_result = 22,
        dm_cnd_retire_wait = 23,
        dm_cnd_retire_result = 24,
        dm_cnd_debug_config = 25,
        dm_cnd_debug = 26,
    } cnd_training; // offset 0x1C, size 0x4
    enum /* @enum$103dm_virus_init_c */ {
        dm_cnd_null = 0,
        dm_cnd_wait = 1,
        dm_cnd_init = 2,
        dm_cnd_stage_clear = 3,
        dm_cnd_game_over = 4,
        dm_cnd_win = 5,
        dm_cnd_win_retry = 6,
        dm_cnd_win_retry_sc = 7,
        dm_cnd_lose = 8,
        dm_cnd_lose_retry = 9,
        dm_cnd_lose_retry_sc = 10,
        dm_cnd_draw = 11,
        dm_cnd_draw_retry = 12,
        dm_cnd_pause = 13,
        dm_cnd_pause_re = 14,
        dm_cnd_pause_re_sc = 15,
        dm_cnd_retire = 16,
        dm_cnd_tr_chack = 17,
        dm_cnd_training = 18,
        dm_cnd_clear_wait = 19,
        dm_cnd_clear_result = 20,
        dm_cnd_gover_wait = 21,
        dm_cnd_gover_result = 22,
        dm_cnd_retire_wait = 23,
        dm_cnd_retire_result = 24,
        dm_cnd_debug_config = 25,
        dm_cnd_debug = 26,
    } cnd_static; // offset 0x20, size 0x4
    unsigned char virus_order_number; // offset 0x24, size 0x1
    unsigned char virus_number; // offset 0x25, size 0x1
    unsigned char virus_level; // offset 0x26, size 0x1
    unsigned char virus_anime; // offset 0x27, size 0x1
    signed char virus_anime_vec; // offset 0x28, size 0x1
    unsigned char virus_anime_count; // offset 0x29, size 0x1
    unsigned char virus_anime_max; // offset 0x2A, size 0x1
    unsigned char virus_anime_spead; // offset 0x2B, size 0x1
    unsigned char cap_def_speed; // offset 0x2C, size 0x1
    unsigned char cap_speed; // offset 0x2D, size 0x1
    unsigned char cap_count; // offset 0x2E, size 0x1
    unsigned char cap_speed_count; // offset 0x2F, size 0x1
    unsigned char cap_speed_vec; // offset 0x30, size 0x1
    unsigned char cap_speed_max; // offset 0x31, size 0x1
    unsigned char cap_magazine_cnt; // offset 0x32, size 0x1
    unsigned char cap_magazine_save; // offset 0x33, size 0x1
    signed char cap_move_se_flg; // offset 0x34, size 0x1
    unsigned char erase_anime; // offset 0x35, size 0x1
    unsigned char erase_anime_count; // offset 0x36, size 0x1
    unsigned char erase_virus_count; // offset 0x37, size 0x1
    unsigned char erase_virus_count_old; // offset 0x38, size 0x1
    unsigned char chain_count; // offset 0x39, size 0x1
    unsigned char chain_line; // offset 0x3A, size 0x1
    unsigned char chain_line_max; // offset 0x3B, size 0x1
    unsigned char chain_color[4]; // offset 0x3C, size 0x4
    unsigned char black_up_count; // offset 0x40, size 0x1
    int warning_se_flag; // offset 0x44, size 0x4
    unsigned char flg_retire; // offset 0x48, size 0x1
    unsigned char flg_game_over; // offset 0x49, size 0x1
    unsigned char flg_training; // offset 0x4A, size 0x1
    unsigned char player_no; // offset 0x4B, size 0x1
    unsigned char player_type; // offset 0x4C, size 0x1
    unsigned char think_type; // offset 0x4D, size 0x1
    unsigned char think_level; // offset 0x4E, size 0x1
    unsigned char team_no; // offset 0x4F, size 0x1
    unsigned short cap_attack_work[16][2]; // offset 0x50, size 0x40
    int charNo; // offset 0x90, size 0x4
    struct SAnimeState anime; // offset 0x94, size 0x40
    int flash_virus_pos[9][3]; // offset 0xD4, size 0x6C
    int flash_virus_bak[9]; // offset 0x140, size 0x24
    int flash_virus_count; // offset 0x164, size 0x4
    int bottom_up_scroll; // offset 0x168, size 0x4
    int game_level; // offset 0x16C, size 0x4
    int total_erase_count; // offset 0x170, size 0x4
    int total_chain_count; // offset 0x174, size 0x4
    struct {
        // total size: 0xC
        signed char pos_x[2]; // offset 0x0, size 0x2
        signed char pos_y[2]; // offset 0x2, size 0x2
        signed char capsel_g[2]; // offset 0x4, size 0x2
        signed char capsel_p[2]; // offset 0x6, size 0x2
        signed char capsel_flg[4]; // offset 0x8, size 0x4
    } now_cap; // offset 0x178, size 0xC
    struct {
        // total size: 0xC
        signed char pos_x[2]; // offset 0x0, size 0x2
        signed char pos_y[2]; // offset 0x2, size 0x2
        signed char capsel_g[2]; // offset 0x4, size 0x2
        signed char capsel_p[2]; // offset 0x6, size 0x2
        signed char capsel_flg[4]; // offset 0x8, size 0x4
    } next_cap; // offset 0x184, size 0xC
    struct {
        // total size: 0x108
        struct {
            // total size: 0x40
            unsigned char ok; // offset 0x0, size 0x1
            unsigned char tory; // offset 0x1, size 0x1
            unsigned char x; // offset 0x2, size 0x1
            unsigned char y; // offset 0x3, size 0x1
            unsigned char rev; // offset 0x4, size 0x1
            unsigned char ccnt; // offset 0x5, size 0x1
            long pri; // offset 0x8, size 0x4
            long dead; // offset 0xC, size 0x4
            unsigned char hei[2][10]; // offset 0x10, size 0x14
            unsigned char wid[2][10]; // offset 0x24, size 0x14
            unsigned char elin[2]; // offset 0x38, size 0x2
            unsigned char only[2]; // offset 0x3A, size 0x2
            unsigned char wonly[2]; // offset 0x3C, size 0x2
            unsigned char sub; // offset 0x3E, size 0x1
            unsigned char rensa; // offset 0x3F, size 0x1
        } aiFlagDecide; // offset 0x0, size 0x40
        struct {
            // total size: 0x2
            unsigned char x; // offset 0x0, size 0x1
            unsigned char y; // offset 0x1, size 0x1
        } aiRootDecide[50]; // offset 0x40, size 0x64
        unsigned char aiKeyCount; // offset 0xA4, size 0x1
        unsigned char aiSpeedCnt; // offset 0xA5, size 0x1
        unsigned char aiKRFlag; // offset 0xA6, size 0x1
        unsigned char aiRollCnt; // offset 0xA7, size 0x1
        unsigned char aiRollFinal; // offset 0xA8, size 0x1
        unsigned char aiRollHabit; // offset 0xA9, size 0x1
        unsigned char aiSpUpFlag; // offset 0xAA, size 0x1
        unsigned char aiSpUpStart; // offset 0xAB, size 0x1
        unsigned char aivl; // offset 0xAC, size 0x1
        unsigned char aiok; // offset 0xAD, size 0x1
        unsigned char aiRandFlag; // offset 0xAE, size 0x1
        unsigned char aiEX; // offset 0xAF, size 0x1
        unsigned char aiEY; // offset 0xB0, size 0x1
        unsigned char aiOldRollCnt; // offset 0xB1, size 0x1
        unsigned char aiEffectNo[16]; // offset 0xB2, size 0x10
        signed short aiEffectParam[16]; // offset 0xC2, size 0x20
        signed short aiEffectCount[16]; // offset 0xE2, size 0x20
        unsigned char aiState; // offset 0x102, size 0x1
        unsigned char aiSelSpeed; // offset 0x103, size 0x1
        unsigned char aiRootP; // offset 0x104, size 0x1
        unsigned short aiPriOfs; // offset 0x106, size 0x2
    } ai; // offset 0x190, size 0x108
    unsigned char pn; // offset 0x298, size 0x1
    unsigned char gs; // offset 0x299, size 0x1
    unsigned char lv; // offset 0x29A, size 0x1
    unsigned char vs; // offset 0x29B, size 0x1
    struct {
        // total size: 0x2
        unsigned char st; // offset 0x0, size 0x1
        unsigned char co; // offset 0x1, size 0x1
    } blk[18][8]; // offset 0x29C, size 0x120
    struct {
        // total size: 0x6
        unsigned char mx; // offset 0x0, size 0x1
        unsigned char my; // offset 0x1, size 0x1
        unsigned char ca; // offset 0x2, size 0x1
        unsigned char cb; // offset 0x3, size 0x1
        unsigned char sp; // offset 0x4, size 0x1
        unsigned char cn; // offset 0x5, size 0x1
    } cap; // offset 0x3BC, size 0x6
} * state /* r1+0x4C */, struct {
    // total size: 0x3
    signed char virus_type; // offset 0x0, size 0x1
    unsigned char x_pos; // offset 0x1, size 0x1
    unsigned char y_pos; // offset 0x2, size 0x1
} * v_map /* r29 */, unsigned char * order /* r19 */, int special /* r1+0x50 */) {
    // Local variables
    signed short i; // r4
    signed short j; // r18
    unsigned short virus_color[4]; // r1+0x44
    unsigned short cont_count; // r21
    unsigned short dead_count; // r20
    unsigned short x_set; // r30
    unsigned short y_set; // r31
    unsigned char color_set; // r4
    unsigned char virus_work; // r1+0x8
    unsigned char virus_max; // r15
    unsigned char virus_count; // r18
    unsigned char limit_line; // r21
    unsigned char set_flg; // r28
    int a; // r24
    int c; // r1+0x8

    // References
    // -> static unsigned char _n$343[3];
    // -> static unsigned char limit_table[25];
    // -> static unsigned char _l$359[3];
}

// Range: 0x2396C -> 0x23990
void dm_virus_init(enum /* @enum$98dm_virus_init_c */ {
    GMD_NORMAL = 0,
    GMD_FLASH = 1,
    GMD_TaiQ = 2,
    GMD_TIME_ATTACK = 3,
} mode /* r3 */, struct {
    // total size: 0x3C4
    unsigned long game_score; // offset 0x0, size 0x4
    unsigned short game_retry; // offset 0x4, size 0x2
    signed short map_x; // offset 0x6, size 0x2
    signed short map_y; // offset 0x8, size 0x2
    signed char map_item_size; // offset 0xA, size 0x1
    enum /* @enum$104dm_virus_init_c */ {
        dm_mode_null = 0,
        dm_mode_init = 1,
        dm_mode_wait = 2,
        dm_mode_throw = 3,
        dm_mode_down = 4,
        dm_mode_down_wait = 5,
        dm_mode_erase_chack = 6,
        dm_mode_erase_anime = 7,
        dm_mode_ball_down = 8,
        dm_mode_cap_set = 9,
        dm_mode_stage_clear = 10,
        dm_mode_game_over = 11,
        dm_mode_bottom_up = 12,
        dm_mode_win = 13,
        dm_mode_win_retry = 14,
        dm_mode_lose = 15,
        dm_mode_lose_retry = 16,
        dm_mode_draw = 17,
        dm_mode_draw_retry = 18,
        dm_mode_tr_chaeck = 19,
        dm_mode_training = 20,
        dm_mode_tr_erase_chack = 21,
        dm_mode_tr_cap_set = 22,
        dm_mode_pause = 23,
        dm_mode_pause_retry = 24,
        dm_mode_no_action = 25,
        dm_mode_clear_wait = 26,
        dm_mode_clear_result = 27,
        dm_mode_gover_wait = 28,
        dm_mode_gover_result = 29,
        dm_mode_retire_wait = 30,
        dm_mode_retire_result = 31,
        dm_mode_debug_config = 32,
        dm_mode_debug = 33,
    } mode_now; // offset 0xC, size 0x4
    enum /* @enum$104dm_virus_init_c */ {
        dm_mode_null = 0,
        dm_mode_init = 1,
        dm_mode_wait = 2,
        dm_mode_throw = 3,
        dm_mode_down = 4,
        dm_mode_down_wait = 5,
        dm_mode_erase_chack = 6,
        dm_mode_erase_anime = 7,
        dm_mode_ball_down = 8,
        dm_mode_cap_set = 9,
        dm_mode_stage_clear = 10,
        dm_mode_game_over = 11,
        dm_mode_bottom_up = 12,
        dm_mode_win = 13,
        dm_mode_win_retry = 14,
        dm_mode_lose = 15,
        dm_mode_lose_retry = 16,
        dm_mode_draw = 17,
        dm_mode_draw_retry = 18,
        dm_mode_tr_chaeck = 19,
        dm_mode_training = 20,
        dm_mode_tr_erase_chack = 21,
        dm_mode_tr_cap_set = 22,
        dm_mode_pause = 23,
        dm_mode_pause_retry = 24,
        dm_mode_no_action = 25,
        dm_mode_clear_wait = 26,
        dm_mode_clear_result = 27,
        dm_mode_gover_wait = 28,
        dm_mode_gover_result = 29,
        dm_mode_retire_wait = 30,
        dm_mode_retire_result = 31,
        dm_mode_debug_config = 32,
        dm_mode_debug = 33,
    } mode_old; // offset 0x10, size 0x4
    enum /* @enum$103dm_virus_init_c */ {
        dm_cnd_null = 0,
        dm_cnd_wait = 1,
        dm_cnd_init = 2,
        dm_cnd_stage_clear = 3,
        dm_cnd_game_over = 4,
        dm_cnd_win = 5,
        dm_cnd_win_retry = 6,
        dm_cnd_win_retry_sc = 7,
        dm_cnd_lose = 8,
        dm_cnd_lose_retry = 9,
        dm_cnd_lose_retry_sc = 10,
        dm_cnd_draw = 11,
        dm_cnd_draw_retry = 12,
        dm_cnd_pause = 13,
        dm_cnd_pause_re = 14,
        dm_cnd_pause_re_sc = 15,
        dm_cnd_retire = 16,
        dm_cnd_tr_chack = 17,
        dm_cnd_training = 18,
        dm_cnd_clear_wait = 19,
        dm_cnd_clear_result = 20,
        dm_cnd_gover_wait = 21,
        dm_cnd_gover_result = 22,
        dm_cnd_retire_wait = 23,
        dm_cnd_retire_result = 24,
        dm_cnd_debug_config = 25,
        dm_cnd_debug = 26,
    } cnd_now; // offset 0x14, size 0x4
    enum /* @enum$103dm_virus_init_c */ {
        dm_cnd_null = 0,
        dm_cnd_wait = 1,
        dm_cnd_init = 2,
        dm_cnd_stage_clear = 3,
        dm_cnd_game_over = 4,
        dm_cnd_win = 5,
        dm_cnd_win_retry = 6,
        dm_cnd_win_retry_sc = 7,
        dm_cnd_lose = 8,
        dm_cnd_lose_retry = 9,
        dm_cnd_lose_retry_sc = 10,
        dm_cnd_draw = 11,
        dm_cnd_draw_retry = 12,
        dm_cnd_pause = 13,
        dm_cnd_pause_re = 14,
        dm_cnd_pause_re_sc = 15,
        dm_cnd_retire = 16,
        dm_cnd_tr_chack = 17,
        dm_cnd_training = 18,
        dm_cnd_clear_wait = 19,
        dm_cnd_clear_result = 20,
        dm_cnd_gover_wait = 21,
        dm_cnd_gover_result = 22,
        dm_cnd_retire_wait = 23,
        dm_cnd_retire_result = 24,
        dm_cnd_debug_config = 25,
        dm_cnd_debug = 26,
    } cnd_old; // offset 0x18, size 0x4
    enum /* @enum$103dm_virus_init_c */ {
        dm_cnd_null = 0,
        dm_cnd_wait = 1,
        dm_cnd_init = 2,
        dm_cnd_stage_clear = 3,
        dm_cnd_game_over = 4,
        dm_cnd_win = 5,
        dm_cnd_win_retry = 6,
        dm_cnd_win_retry_sc = 7,
        dm_cnd_lose = 8,
        dm_cnd_lose_retry = 9,
        dm_cnd_lose_retry_sc = 10,
        dm_cnd_draw = 11,
        dm_cnd_draw_retry = 12,
        dm_cnd_pause = 13,
        dm_cnd_pause_re = 14,
        dm_cnd_pause_re_sc = 15,
        dm_cnd_retire = 16,
        dm_cnd_tr_chack = 17,
        dm_cnd_training = 18,
        dm_cnd_clear_wait = 19,
        dm_cnd_clear_result = 20,
        dm_cnd_gover_wait = 21,
        dm_cnd_gover_result = 22,
        dm_cnd_retire_wait = 23,
        dm_cnd_retire_result = 24,
        dm_cnd_debug_config = 25,
        dm_cnd_debug = 26,
    } cnd_training; // offset 0x1C, size 0x4
    enum /* @enum$103dm_virus_init_c */ {
        dm_cnd_null = 0,
        dm_cnd_wait = 1,
        dm_cnd_init = 2,
        dm_cnd_stage_clear = 3,
        dm_cnd_game_over = 4,
        dm_cnd_win = 5,
        dm_cnd_win_retry = 6,
        dm_cnd_win_retry_sc = 7,
        dm_cnd_lose = 8,
        dm_cnd_lose_retry = 9,
        dm_cnd_lose_retry_sc = 10,
        dm_cnd_draw = 11,
        dm_cnd_draw_retry = 12,
        dm_cnd_pause = 13,
        dm_cnd_pause_re = 14,
        dm_cnd_pause_re_sc = 15,
        dm_cnd_retire = 16,
        dm_cnd_tr_chack = 17,
        dm_cnd_training = 18,
        dm_cnd_clear_wait = 19,
        dm_cnd_clear_result = 20,
        dm_cnd_gover_wait = 21,
        dm_cnd_gover_result = 22,
        dm_cnd_retire_wait = 23,
        dm_cnd_retire_result = 24,
        dm_cnd_debug_config = 25,
        dm_cnd_debug = 26,
    } cnd_static; // offset 0x20, size 0x4
    unsigned char virus_order_number; // offset 0x24, size 0x1
    unsigned char virus_number; // offset 0x25, size 0x1
    unsigned char virus_level; // offset 0x26, size 0x1
    unsigned char virus_anime; // offset 0x27, size 0x1
    signed char virus_anime_vec; // offset 0x28, size 0x1
    unsigned char virus_anime_count; // offset 0x29, size 0x1
    unsigned char virus_anime_max; // offset 0x2A, size 0x1
    unsigned char virus_anime_spead; // offset 0x2B, size 0x1
    unsigned char cap_def_speed; // offset 0x2C, size 0x1
    unsigned char cap_speed; // offset 0x2D, size 0x1
    unsigned char cap_count; // offset 0x2E, size 0x1
    unsigned char cap_speed_count; // offset 0x2F, size 0x1
    unsigned char cap_speed_vec; // offset 0x30, size 0x1
    unsigned char cap_speed_max; // offset 0x31, size 0x1
    unsigned char cap_magazine_cnt; // offset 0x32, size 0x1
    unsigned char cap_magazine_save; // offset 0x33, size 0x1
    signed char cap_move_se_flg; // offset 0x34, size 0x1
    unsigned char erase_anime; // offset 0x35, size 0x1
    unsigned char erase_anime_count; // offset 0x36, size 0x1
    unsigned char erase_virus_count; // offset 0x37, size 0x1
    unsigned char erase_virus_count_old; // offset 0x38, size 0x1
    unsigned char chain_count; // offset 0x39, size 0x1
    unsigned char chain_line; // offset 0x3A, size 0x1
    unsigned char chain_line_max; // offset 0x3B, size 0x1
    unsigned char chain_color[4]; // offset 0x3C, size 0x4
    unsigned char black_up_count; // offset 0x40, size 0x1
    int warning_se_flag; // offset 0x44, size 0x4
    unsigned char flg_retire; // offset 0x48, size 0x1
    unsigned char flg_game_over; // offset 0x49, size 0x1
    unsigned char flg_training; // offset 0x4A, size 0x1
    unsigned char player_no; // offset 0x4B, size 0x1
    unsigned char player_type; // offset 0x4C, size 0x1
    unsigned char think_type; // offset 0x4D, size 0x1
    unsigned char think_level; // offset 0x4E, size 0x1
    unsigned char team_no; // offset 0x4F, size 0x1
    unsigned short cap_attack_work[16][2]; // offset 0x50, size 0x40
    int charNo; // offset 0x90, size 0x4
    struct SAnimeState anime; // offset 0x94, size 0x40
    int flash_virus_pos[9][3]; // offset 0xD4, size 0x6C
    int flash_virus_bak[9]; // offset 0x140, size 0x24
    int flash_virus_count; // offset 0x164, size 0x4
    int bottom_up_scroll; // offset 0x168, size 0x4
    int game_level; // offset 0x16C, size 0x4
    int total_erase_count; // offset 0x170, size 0x4
    int total_chain_count; // offset 0x174, size 0x4
    struct {
        // total size: 0xC
        signed char pos_x[2]; // offset 0x0, size 0x2
        signed char pos_y[2]; // offset 0x2, size 0x2
        signed char capsel_g[2]; // offset 0x4, size 0x2
        signed char capsel_p[2]; // offset 0x6, size 0x2
        signed char capsel_flg[4]; // offset 0x8, size 0x4
    } now_cap; // offset 0x178, size 0xC
    struct {
        // total size: 0xC
        signed char pos_x[2]; // offset 0x0, size 0x2
        signed char pos_y[2]; // offset 0x2, size 0x2
        signed char capsel_g[2]; // offset 0x4, size 0x2
        signed char capsel_p[2]; // offset 0x6, size 0x2
        signed char capsel_flg[4]; // offset 0x8, size 0x4
    } next_cap; // offset 0x184, size 0xC
    struct {
        // total size: 0x108
        struct {
            // total size: 0x40
            unsigned char ok; // offset 0x0, size 0x1
            unsigned char tory; // offset 0x1, size 0x1
            unsigned char x; // offset 0x2, size 0x1
            unsigned char y; // offset 0x3, size 0x1
            unsigned char rev; // offset 0x4, size 0x1
            unsigned char ccnt; // offset 0x5, size 0x1
            long pri; // offset 0x8, size 0x4
            long dead; // offset 0xC, size 0x4
            unsigned char hei[2][10]; // offset 0x10, size 0x14
            unsigned char wid[2][10]; // offset 0x24, size 0x14
            unsigned char elin[2]; // offset 0x38, size 0x2
            unsigned char only[2]; // offset 0x3A, size 0x2
            unsigned char wonly[2]; // offset 0x3C, size 0x2
            unsigned char sub; // offset 0x3E, size 0x1
            unsigned char rensa; // offset 0x3F, size 0x1
        } aiFlagDecide; // offset 0x0, size 0x40
        struct {
            // total size: 0x2
            unsigned char x; // offset 0x0, size 0x1
            unsigned char y; // offset 0x1, size 0x1
        } aiRootDecide[50]; // offset 0x40, size 0x64
        unsigned char aiKeyCount; // offset 0xA4, size 0x1
        unsigned char aiSpeedCnt; // offset 0xA5, size 0x1
        unsigned char aiKRFlag; // offset 0xA6, size 0x1
        unsigned char aiRollCnt; // offset 0xA7, size 0x1
        unsigned char aiRollFinal; // offset 0xA8, size 0x1
        unsigned char aiRollHabit; // offset 0xA9, size 0x1
        unsigned char aiSpUpFlag; // offset 0xAA, size 0x1
        unsigned char aiSpUpStart; // offset 0xAB, size 0x1
        unsigned char aivl; // offset 0xAC, size 0x1
        unsigned char aiok; // offset 0xAD, size 0x1
        unsigned char aiRandFlag; // offset 0xAE, size 0x1
        unsigned char aiEX; // offset 0xAF, size 0x1
        unsigned char aiEY; // offset 0xB0, size 0x1
        unsigned char aiOldRollCnt; // offset 0xB1, size 0x1
        unsigned char aiEffectNo[16]; // offset 0xB2, size 0x10
        signed short aiEffectParam[16]; // offset 0xC2, size 0x20
        signed short aiEffectCount[16]; // offset 0xE2, size 0x20
        unsigned char aiState; // offset 0x102, size 0x1
        unsigned char aiSelSpeed; // offset 0x103, size 0x1
        unsigned char aiRootP; // offset 0x104, size 0x1
        unsigned short aiPriOfs; // offset 0x106, size 0x2
    } ai; // offset 0x190, size 0x108
    unsigned char pn; // offset 0x298, size 0x1
    unsigned char gs; // offset 0x299, size 0x1
    unsigned char lv; // offset 0x29A, size 0x1
    unsigned char vs; // offset 0x29B, size 0x1
    struct {
        // total size: 0x2
        unsigned char st; // offset 0x0, size 0x1
        unsigned char co; // offset 0x1, size 0x1
    } blk[18][8]; // offset 0x29C, size 0x120
    struct {
        // total size: 0x6
        unsigned char mx; // offset 0x0, size 0x1
        unsigned char my; // offset 0x1, size 0x1
        unsigned char ca; // offset 0x2, size 0x1
        unsigned char cb; // offset 0x3, size 0x1
        unsigned char sp; // offset 0x4, size 0x1
        unsigned char cn; // offset 0x5, size 0x1
    } cap; // offset 0x3BC, size 0x6
} * state /* r4 */, struct {
    // total size: 0x3
    signed char virus_type; // offset 0x0, size 0x1
    unsigned char x_pos; // offset 0x1, size 0x1
    unsigned char y_pos; // offset 0x2, size 0x1
} * v_map /* r5 */, unsigned char * order /* r6 */) {}

// Range: 0x23990 -> 0x23B38
static void _makeFlash_checkOrdre(struct {
    // total size: 0x2F4
    struct {
        // total size: 0x3
        signed char virus_type; // offset 0x0, size 0x1
        unsigned char x_pos; // offset 0x1, size 0x1
        unsigned char y_pos; // offset 0x2, size 0x1
    } * vmap; // offset 0x0, size 0x4
    unsigned char * order; // offset 0x4, size 0x4
    int virusCnt; // offset 0x8, size 0x4
    unsigned char selected[96]; // offset 0xC, size 0x60
    unsigned char decideBuf[3][32]; // offset 0x6C, size 0x60
    int decideCnt[3]; // offset 0xCC, size 0xC
    unsigned char underBuf[3][32]; // offset 0xD8, size 0x60
    int underCnt[3]; // offset 0x138, size 0xC
    unsigned char under2Buf[3][32]; // offset 0x144, size 0x60
    int under2Cnt[3]; // offset 0x1A4, size 0xC
    unsigned char under3Buf[3][32]; // offset 0x1B0, size 0x60
    int under3Cnt[3]; // offset 0x210, size 0xC
    unsigned char centerBuf[3][32]; // offset 0x21C, size 0x60
    int centerCnt[3]; // offset 0x27C, size 0xC
    unsigned char sideBuf[3][32]; // offset 0x288, size 0x60
    int sideCnt[3]; // offset 0x2E8, size 0xC
} * st /* r1+0x0 */) {
    // Local variables
    int i; // r7
    int c; // r6
    int o; // r1+0x0
    int y; // r1+0x0
    int under; // r8
    int under2; // r7
}

static int _n$564[3][5]; // size: 0x3C, address: 0x1130
// Range: 0x23B38 -> 0x23E48
int make_flash_virus_pos(struct {
    // total size: 0x3C4
    unsigned long game_score; // offset 0x0, size 0x4
    unsigned short game_retry; // offset 0x4, size 0x2
    signed short map_x; // offset 0x6, size 0x2
    signed short map_y; // offset 0x8, size 0x2
    signed char map_item_size; // offset 0xA, size 0x1
    enum /* @enum$104dm_virus_init_c */ {
        dm_mode_null = 0,
        dm_mode_init = 1,
        dm_mode_wait = 2,
        dm_mode_throw = 3,
        dm_mode_down = 4,
        dm_mode_down_wait = 5,
        dm_mode_erase_chack = 6,
        dm_mode_erase_anime = 7,
        dm_mode_ball_down = 8,
        dm_mode_cap_set = 9,
        dm_mode_stage_clear = 10,
        dm_mode_game_over = 11,
        dm_mode_bottom_up = 12,
        dm_mode_win = 13,
        dm_mode_win_retry = 14,
        dm_mode_lose = 15,
        dm_mode_lose_retry = 16,
        dm_mode_draw = 17,
        dm_mode_draw_retry = 18,
        dm_mode_tr_chaeck = 19,
        dm_mode_training = 20,
        dm_mode_tr_erase_chack = 21,
        dm_mode_tr_cap_set = 22,
        dm_mode_pause = 23,
        dm_mode_pause_retry = 24,
        dm_mode_no_action = 25,
        dm_mode_clear_wait = 26,
        dm_mode_clear_result = 27,
        dm_mode_gover_wait = 28,
        dm_mode_gover_result = 29,
        dm_mode_retire_wait = 30,
        dm_mode_retire_result = 31,
        dm_mode_debug_config = 32,
        dm_mode_debug = 33,
    } mode_now; // offset 0xC, size 0x4
    enum /* @enum$104dm_virus_init_c */ {
        dm_mode_null = 0,
        dm_mode_init = 1,
        dm_mode_wait = 2,
        dm_mode_throw = 3,
        dm_mode_down = 4,
        dm_mode_down_wait = 5,
        dm_mode_erase_chack = 6,
        dm_mode_erase_anime = 7,
        dm_mode_ball_down = 8,
        dm_mode_cap_set = 9,
        dm_mode_stage_clear = 10,
        dm_mode_game_over = 11,
        dm_mode_bottom_up = 12,
        dm_mode_win = 13,
        dm_mode_win_retry = 14,
        dm_mode_lose = 15,
        dm_mode_lose_retry = 16,
        dm_mode_draw = 17,
        dm_mode_draw_retry = 18,
        dm_mode_tr_chaeck = 19,
        dm_mode_training = 20,
        dm_mode_tr_erase_chack = 21,
        dm_mode_tr_cap_set = 22,
        dm_mode_pause = 23,
        dm_mode_pause_retry = 24,
        dm_mode_no_action = 25,
        dm_mode_clear_wait = 26,
        dm_mode_clear_result = 27,
        dm_mode_gover_wait = 28,
        dm_mode_gover_result = 29,
        dm_mode_retire_wait = 30,
        dm_mode_retire_result = 31,
        dm_mode_debug_config = 32,
        dm_mode_debug = 33,
    } mode_old; // offset 0x10, size 0x4
    enum /* @enum$103dm_virus_init_c */ {
        dm_cnd_null = 0,
        dm_cnd_wait = 1,
        dm_cnd_init = 2,
        dm_cnd_stage_clear = 3,
        dm_cnd_game_over = 4,
        dm_cnd_win = 5,
        dm_cnd_win_retry = 6,
        dm_cnd_win_retry_sc = 7,
        dm_cnd_lose = 8,
        dm_cnd_lose_retry = 9,
        dm_cnd_lose_retry_sc = 10,
        dm_cnd_draw = 11,
        dm_cnd_draw_retry = 12,
        dm_cnd_pause = 13,
        dm_cnd_pause_re = 14,
        dm_cnd_pause_re_sc = 15,
        dm_cnd_retire = 16,
        dm_cnd_tr_chack = 17,
        dm_cnd_training = 18,
        dm_cnd_clear_wait = 19,
        dm_cnd_clear_result = 20,
        dm_cnd_gover_wait = 21,
        dm_cnd_gover_result = 22,
        dm_cnd_retire_wait = 23,
        dm_cnd_retire_result = 24,
        dm_cnd_debug_config = 25,
        dm_cnd_debug = 26,
    } cnd_now; // offset 0x14, size 0x4
    enum /* @enum$103dm_virus_init_c */ {
        dm_cnd_null = 0,
        dm_cnd_wait = 1,
        dm_cnd_init = 2,
        dm_cnd_stage_clear = 3,
        dm_cnd_game_over = 4,
        dm_cnd_win = 5,
        dm_cnd_win_retry = 6,
        dm_cnd_win_retry_sc = 7,
        dm_cnd_lose = 8,
        dm_cnd_lose_retry = 9,
        dm_cnd_lose_retry_sc = 10,
        dm_cnd_draw = 11,
        dm_cnd_draw_retry = 12,
        dm_cnd_pause = 13,
        dm_cnd_pause_re = 14,
        dm_cnd_pause_re_sc = 15,
        dm_cnd_retire = 16,
        dm_cnd_tr_chack = 17,
        dm_cnd_training = 18,
        dm_cnd_clear_wait = 19,
        dm_cnd_clear_result = 20,
        dm_cnd_gover_wait = 21,
        dm_cnd_gover_result = 22,
        dm_cnd_retire_wait = 23,
        dm_cnd_retire_result = 24,
        dm_cnd_debug_config = 25,
        dm_cnd_debug = 26,
    } cnd_old; // offset 0x18, size 0x4
    enum /* @enum$103dm_virus_init_c */ {
        dm_cnd_null = 0,
        dm_cnd_wait = 1,
        dm_cnd_init = 2,
        dm_cnd_stage_clear = 3,
        dm_cnd_game_over = 4,
        dm_cnd_win = 5,
        dm_cnd_win_retry = 6,
        dm_cnd_win_retry_sc = 7,
        dm_cnd_lose = 8,
        dm_cnd_lose_retry = 9,
        dm_cnd_lose_retry_sc = 10,
        dm_cnd_draw = 11,
        dm_cnd_draw_retry = 12,
        dm_cnd_pause = 13,
        dm_cnd_pause_re = 14,
        dm_cnd_pause_re_sc = 15,
        dm_cnd_retire = 16,
        dm_cnd_tr_chack = 17,
        dm_cnd_training = 18,
        dm_cnd_clear_wait = 19,
        dm_cnd_clear_result = 20,
        dm_cnd_gover_wait = 21,
        dm_cnd_gover_result = 22,
        dm_cnd_retire_wait = 23,
        dm_cnd_retire_result = 24,
        dm_cnd_debug_config = 25,
        dm_cnd_debug = 26,
    } cnd_training; // offset 0x1C, size 0x4
    enum /* @enum$103dm_virus_init_c */ {
        dm_cnd_null = 0,
        dm_cnd_wait = 1,
        dm_cnd_init = 2,
        dm_cnd_stage_clear = 3,
        dm_cnd_game_over = 4,
        dm_cnd_win = 5,
        dm_cnd_win_retry = 6,
        dm_cnd_win_retry_sc = 7,
        dm_cnd_lose = 8,
        dm_cnd_lose_retry = 9,
        dm_cnd_lose_retry_sc = 10,
        dm_cnd_draw = 11,
        dm_cnd_draw_retry = 12,
        dm_cnd_pause = 13,
        dm_cnd_pause_re = 14,
        dm_cnd_pause_re_sc = 15,
        dm_cnd_retire = 16,
        dm_cnd_tr_chack = 17,
        dm_cnd_training = 18,
        dm_cnd_clear_wait = 19,
        dm_cnd_clear_result = 20,
        dm_cnd_gover_wait = 21,
        dm_cnd_gover_result = 22,
        dm_cnd_retire_wait = 23,
        dm_cnd_retire_result = 24,
        dm_cnd_debug_config = 25,
        dm_cnd_debug = 26,
    } cnd_static; // offset 0x20, size 0x4
    unsigned char virus_order_number; // offset 0x24, size 0x1
    unsigned char virus_number; // offset 0x25, size 0x1
    unsigned char virus_level; // offset 0x26, size 0x1
    unsigned char virus_anime; // offset 0x27, size 0x1
    signed char virus_anime_vec; // offset 0x28, size 0x1
    unsigned char virus_anime_count; // offset 0x29, size 0x1
    unsigned char virus_anime_max; // offset 0x2A, size 0x1
    unsigned char virus_anime_spead; // offset 0x2B, size 0x1
    unsigned char cap_def_speed; // offset 0x2C, size 0x1
    unsigned char cap_speed; // offset 0x2D, size 0x1
    unsigned char cap_count; // offset 0x2E, size 0x1
    unsigned char cap_speed_count; // offset 0x2F, size 0x1
    unsigned char cap_speed_vec; // offset 0x30, size 0x1
    unsigned char cap_speed_max; // offset 0x31, size 0x1
    unsigned char cap_magazine_cnt; // offset 0x32, size 0x1
    unsigned char cap_magazine_save; // offset 0x33, size 0x1
    signed char cap_move_se_flg; // offset 0x34, size 0x1
    unsigned char erase_anime; // offset 0x35, size 0x1
    unsigned char erase_anime_count; // offset 0x36, size 0x1
    unsigned char erase_virus_count; // offset 0x37, size 0x1
    unsigned char erase_virus_count_old; // offset 0x38, size 0x1
    unsigned char chain_count; // offset 0x39, size 0x1
    unsigned char chain_line; // offset 0x3A, size 0x1
    unsigned char chain_line_max; // offset 0x3B, size 0x1
    unsigned char chain_color[4]; // offset 0x3C, size 0x4
    unsigned char black_up_count; // offset 0x40, size 0x1
    int warning_se_flag; // offset 0x44, size 0x4
    unsigned char flg_retire; // offset 0x48, size 0x1
    unsigned char flg_game_over; // offset 0x49, size 0x1
    unsigned char flg_training; // offset 0x4A, size 0x1
    unsigned char player_no; // offset 0x4B, size 0x1
    unsigned char player_type; // offset 0x4C, size 0x1
    unsigned char think_type; // offset 0x4D, size 0x1
    unsigned char think_level; // offset 0x4E, size 0x1
    unsigned char team_no; // offset 0x4F, size 0x1
    unsigned short cap_attack_work[16][2]; // offset 0x50, size 0x40
    int charNo; // offset 0x90, size 0x4
    struct SAnimeState anime; // offset 0x94, size 0x40
    int flash_virus_pos[9][3]; // offset 0xD4, size 0x6C
    int flash_virus_bak[9]; // offset 0x140, size 0x24
    int flash_virus_count; // offset 0x164, size 0x4
    int bottom_up_scroll; // offset 0x168, size 0x4
    int game_level; // offset 0x16C, size 0x4
    int total_erase_count; // offset 0x170, size 0x4
    int total_chain_count; // offset 0x174, size 0x4
    struct {
        // total size: 0xC
        signed char pos_x[2]; // offset 0x0, size 0x2
        signed char pos_y[2]; // offset 0x2, size 0x2
        signed char capsel_g[2]; // offset 0x4, size 0x2
        signed char capsel_p[2]; // offset 0x6, size 0x2
        signed char capsel_flg[4]; // offset 0x8, size 0x4
    } now_cap; // offset 0x178, size 0xC
    struct {
        // total size: 0xC
        signed char pos_x[2]; // offset 0x0, size 0x2
        signed char pos_y[2]; // offset 0x2, size 0x2
        signed char capsel_g[2]; // offset 0x4, size 0x2
        signed char capsel_p[2]; // offset 0x6, size 0x2
        signed char capsel_flg[4]; // offset 0x8, size 0x4
    } next_cap; // offset 0x184, size 0xC
    struct {
        // total size: 0x108
        struct {
            // total size: 0x40
            unsigned char ok; // offset 0x0, size 0x1
            unsigned char tory; // offset 0x1, size 0x1
            unsigned char x; // offset 0x2, size 0x1
            unsigned char y; // offset 0x3, size 0x1
            unsigned char rev; // offset 0x4, size 0x1
            unsigned char ccnt; // offset 0x5, size 0x1
            long pri; // offset 0x8, size 0x4
            long dead; // offset 0xC, size 0x4
            unsigned char hei[2][10]; // offset 0x10, size 0x14
            unsigned char wid[2][10]; // offset 0x24, size 0x14
            unsigned char elin[2]; // offset 0x38, size 0x2
            unsigned char only[2]; // offset 0x3A, size 0x2
            unsigned char wonly[2]; // offset 0x3C, size 0x2
            unsigned char sub; // offset 0x3E, size 0x1
            unsigned char rensa; // offset 0x3F, size 0x1
        } aiFlagDecide; // offset 0x0, size 0x40
        struct {
            // total size: 0x2
            unsigned char x; // offset 0x0, size 0x1
            unsigned char y; // offset 0x1, size 0x1
        } aiRootDecide[50]; // offset 0x40, size 0x64
        unsigned char aiKeyCount; // offset 0xA4, size 0x1
        unsigned char aiSpeedCnt; // offset 0xA5, size 0x1
        unsigned char aiKRFlag; // offset 0xA6, size 0x1
        unsigned char aiRollCnt; // offset 0xA7, size 0x1
        unsigned char aiRollFinal; // offset 0xA8, size 0x1
        unsigned char aiRollHabit; // offset 0xA9, size 0x1
        unsigned char aiSpUpFlag; // offset 0xAA, size 0x1
        unsigned char aiSpUpStart; // offset 0xAB, size 0x1
        unsigned char aivl; // offset 0xAC, size 0x1
        unsigned char aiok; // offset 0xAD, size 0x1
        unsigned char aiRandFlag; // offset 0xAE, size 0x1
        unsigned char aiEX; // offset 0xAF, size 0x1
        unsigned char aiEY; // offset 0xB0, size 0x1
        unsigned char aiOldRollCnt; // offset 0xB1, size 0x1
        unsigned char aiEffectNo[16]; // offset 0xB2, size 0x10
        signed short aiEffectParam[16]; // offset 0xC2, size 0x20
        signed short aiEffectCount[16]; // offset 0xE2, size 0x20
        unsigned char aiState; // offset 0x102, size 0x1
        unsigned char aiSelSpeed; // offset 0x103, size 0x1
        unsigned char aiRootP; // offset 0x104, size 0x1
        unsigned short aiPriOfs; // offset 0x106, size 0x2
    } ai; // offset 0x190, size 0x108
    unsigned char pn; // offset 0x298, size 0x1
    unsigned char gs; // offset 0x299, size 0x1
    unsigned char lv; // offset 0x29A, size 0x1
    unsigned char vs; // offset 0x29B, size 0x1
    struct {
        // total size: 0x2
        unsigned char st; // offset 0x0, size 0x1
        unsigned char co; // offset 0x1, size 0x1
    } blk[18][8]; // offset 0x29C, size 0x120
    struct {
        // total size: 0x6
        unsigned char mx; // offset 0x0, size 0x1
        unsigned char my; // offset 0x1, size 0x1
        unsigned char ca; // offset 0x2, size 0x1
        unsigned char cb; // offset 0x3, size 0x1
        unsigned char sp; // offset 0x4, size 0x1
        unsigned char cn; // offset 0x5, size 0x1
    } cap; // offset 0x3BC, size 0x6
} * state /* r27 */, struct {
    // total size: 0x3
    signed char virus_type; // offset 0x0, size 0x1
    unsigned char x_pos; // offset 0x1, size 0x1
    unsigned char y_pos; // offset 0x2, size 0x1
} * vmap /* r25 */, unsigned char * order /* r24 */) {
    // Local variables
    struct {
        // total size: 0x2F4
        struct {
            // total size: 0x3
            signed char virus_type; // offset 0x0, size 0x1
            unsigned char x_pos; // offset 0x1, size 0x1
            unsigned char y_pos; // offset 0x2, size 0x1
        } * vmap; // offset 0x0, size 0x4
        unsigned char * order; // offset 0x4, size 0x4
        int virusCnt; // offset 0x8, size 0x4
        unsigned char selected[96]; // offset 0xC, size 0x60
        unsigned char decideBuf[3][32]; // offset 0x6C, size 0x60
        int decideCnt[3]; // offset 0xCC, size 0xC
        unsigned char underBuf[3][32]; // offset 0xD8, size 0x60
        int underCnt[3]; // offset 0x138, size 0xC
        unsigned char under2Buf[3][32]; // offset 0x144, size 0x60
        int under2Cnt[3]; // offset 0x1A4, size 0xC
        unsigned char under3Buf[3][32]; // offset 0x1B0, size 0x60
        int under3Cnt[3]; // offset 0x210, size 0xC
        unsigned char centerBuf[3][32]; // offset 0x21C, size 0x60
        int centerCnt[3]; // offset 0x27C, size 0xC
        unsigned char sideBuf[3][32]; // offset 0x288, size 0x60
        int sideCnt[3]; // offset 0x2E8, size 0xC
    } watchMakeFlash[1]; // r1+0x2C
    struct {
        // total size: 0x2F4
        struct {
            // total size: 0x3
            signed char virus_type; // offset 0x0, size 0x1
            unsigned char x_pos; // offset 0x1, size 0x1
            unsigned char y_pos; // offset 0x2, size 0x1
        } * vmap; // offset 0x0, size 0x4
        unsigned char * order; // offset 0x4, size 0x4
        int virusCnt; // offset 0x8, size 0x4
        unsigned char selected[96]; // offset 0xC, size 0x60
        unsigned char decideBuf[3][32]; // offset 0x6C, size 0x60
        int decideCnt[3]; // offset 0xCC, size 0xC
        unsigned char underBuf[3][32]; // offset 0xD8, size 0x60
        int underCnt[3]; // offset 0x138, size 0xC
        unsigned char under2Buf[3][32]; // offset 0x144, size 0x60
        int under2Cnt[3]; // offset 0x1A4, size 0xC
        unsigned char under3Buf[3][32]; // offset 0x1B0, size 0x60
        int under3Cnt[3]; // offset 0x210, size 0xC
        unsigned char centerBuf[3][32]; // offset 0x21C, size 0x60
        int centerCnt[3]; // offset 0x27C, size 0xC
        unsigned char sideBuf[3][32]; // offset 0x288, size 0x60
        int sideCnt[3]; // offset 0x2E8, size 0xC
    } * st; // r31
    int i; // r8
    int j; // r9
    int pos; // r6
    int color; // r3
    int count; // r30
    unsigned char (* buf)[32]; // r29
    int * cnt; // r28
    int k; // r10

    // References
    // -> static int _n$564[3][5];
    // -> static unsigned char _n$343[3];
}


