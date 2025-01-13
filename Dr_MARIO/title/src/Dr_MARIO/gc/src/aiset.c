/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\aiset.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0004D71C -> 0x00055F98
*/
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
static struct {
    // total size: 0x3C4
    unsigned long game_score; // offset 0x0, size 0x4
    unsigned short game_retry; // offset 0x4, size 0x2
    signed short map_x; // offset 0x6, size 0x2
    signed short map_y; // offset 0x8, size 0x2
    signed char map_item_size; // offset 0xA, size 0x1
    @enum$99dm_game_main_c mode_now; // offset 0xC, size 0x4
    @enum$99dm_game_main_c mode_old; // offset 0x10, size 0x4
    @enum$98dm_game_main_c cnd_now; // offset 0x14, size 0x4
    @enum$98dm_game_main_c cnd_old; // offset 0x18, size 0x4
    @enum$98dm_game_main_c cnd_training; // offset 0x1C, size 0x4
    @enum$98dm_game_main_c cnd_static; // offset 0x20, size 0x4
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
} * pGameState; // size: 0x4, address: 0x55378
static int delpos_tbl[100]; // size: 0x190, address: 0x5537C
static int delpos_cnt; // size: 0x4, address: 0x5550C
static int OnVirusP_org; // size: 0x4, address: 0x55510
static int last_flash; // size: 0x4, address: 0x55514
unsigned char aiResSpeed[8][3]; // size: 0x18, address: 0x23508
unsigned char aiVirusLevel[8][3]; // size: 0x18, address: 0x23520
unsigned char aiDownSpeed[8][3]; // size: 0x18, address: 0x23538
unsigned char aiSlideFSpeed[8][3]; // size: 0x18, address: 0x23550
unsigned char aiSlideSpeed[8][3]; // size: 0x18, address: 0x23568
signed char aiDebugP1; // size: 0x1, address: 0x23580
struct {
    // total size: 0x3C4
    unsigned long game_score; // offset 0x0, size 0x4
    unsigned short game_retry; // offset 0x4, size 0x2
    signed short map_x; // offset 0x6, size 0x2
    signed short map_y; // offset 0x8, size 0x2
    signed char map_item_size; // offset 0xA, size 0x1
    @enum$99dm_game_main_c mode_now; // offset 0xC, size 0x4
    @enum$99dm_game_main_c mode_old; // offset 0x10, size 0x4
    @enum$98dm_game_main_c cnd_now; // offset 0x14, size 0x4
    @enum$98dm_game_main_c cnd_old; // offset 0x18, size 0x4
    @enum$98dm_game_main_c cnd_training; // offset 0x1C, size 0x4
    @enum$98dm_game_main_c cnd_static; // offset 0x20, size 0x4
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
} game_state_data[4]; // size: 0xF10, address: 0x1A1B8
static unsigned char capsGCnv$122[22]; // size: 0x16, address: 0x23584
static unsigned char capsCCnv$123[6]; // size: 0x6, address: 0x2359C
struct {
    // total size: 0xA
    signed char pos_m_x; // offset 0x0, size 0x1
    signed char pos_m_y; // offset 0x1, size 0x1
    signed char capsel_m_g; // offset 0x2, size 0x1
    signed char capsel_m_p; // offset 0x3, size 0x1
    signed char capsel_m_flg[6]; // offset 0x4, size 0x6
} game_map_data[4][136]; // size: 0x1540, address: 0x1B0C8
// Range: 0x4D71C -> 0x4D950
void aifMakeBlkWork(struct {
    // total size: 0x3C4
    unsigned long game_score; // offset 0x0, size 0x4
    unsigned short game_retry; // offset 0x4, size 0x2
    signed short map_x; // offset 0x6, size 0x2
    signed short map_y; // offset 0x8, size 0x2
    signed char map_item_size; // offset 0xA, size 0x1
    @enum$99dm_game_main_c mode_now; // offset 0xC, size 0x4
    @enum$99dm_game_main_c mode_old; // offset 0x10, size 0x4
    @enum$98dm_game_main_c cnd_now; // offset 0x14, size 0x4
    @enum$98dm_game_main_c cnd_old; // offset 0x18, size 0x4
    @enum$98dm_game_main_c cnd_training; // offset 0x1C, size 0x4
    @enum$98dm_game_main_c cnd_static; // offset 0x20, size 0x4
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
} * uupw /* r1+0x8 */) {
    // Local variables
    int x; // r7
    int y; // r8

    // References
    // -> struct [anonymous] game_map_data[4][136];
    // -> static unsigned char capsCCnv$123[6];
    // -> static unsigned char capsGCnv$122[22];
}

// Range: 0x4D950 -> 0x4D96C
void aifMakeFlagSet(struct {
    // total size: 0x3C4
    unsigned long game_score; // offset 0x0, size 0x4
    unsigned short game_retry; // offset 0x4, size 0x2
    signed short map_x; // offset 0x6, size 0x2
    signed short map_y; // offset 0x8, size 0x2
    signed char map_item_size; // offset 0xA, size 0x1
    @enum$99dm_game_main_c mode_now; // offset 0xC, size 0x4
    @enum$99dm_game_main_c mode_old; // offset 0x10, size 0x4
    @enum$98dm_game_main_c cnd_now; // offset 0x14, size 0x4
    @enum$98dm_game_main_c cnd_old; // offset 0x18, size 0x4
    @enum$98dm_game_main_c cnd_training; // offset 0x1C, size 0x4
    @enum$98dm_game_main_c cnd_static; // offset 0x20, size 0x4
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
} * uupw /* r1+0x0 */) {}

int fool_mode; // size: 0x4, address: 0x55518
int s_hard_mode; // size: 0x4, address: 0x5551C
unsigned long MissRate; // size: 0x4, address: 0x55520
unsigned long PlayTime; // size: 0x4, address: 0x55524
// Range: 0x4D96C -> 0x4DA44
void aifGameInit() {
    // Local variables
    int i; // r1+0x0
    int j; // r1+0x0

    // References
    // -> struct [anonymous] game_state_data[4];
    // -> unsigned long PlayTime;
    // -> unsigned long MissRate;
    // -> int s_hard_mode;
    // -> int fool_mode;
}

struct {
    // total size: 0x38
    signed short dt_LnOnLinVrs; // offset 0x0, size 0x2
    signed short dt_LnEraseVrs; // offset 0x2, size 0x2
    signed short dt_EraseLinP1; // offset 0x4, size 0x2
    signed short dt_EraseLinP3; // offset 0x6, size 0x2
    signed short dt_HeiEraseLinRate; // offset 0x8, size 0x2
    signed short dt_WidEraseLinRate; // offset 0xA, size 0x2
    signed short dt_P_ALN_HeightP; // offset 0xC, size 0x2
    signed short dt_P_ALN_FallCap; // offset 0xE, size 0x2
    signed short dt_P_ALN_FallVrs; // offset 0x10, size 0x2
    signed short dt_P_ALN_Capsule; // offset 0x12, size 0x2
    signed short dt_P_ALN_Virus; // offset 0x14, size 0x2
    signed short dt_WP_ALN_Bottom; // offset 0x16, size 0x2
    signed short dt_WP_ALN_FallCap; // offset 0x18, size 0x2
    signed short dt_WP_ALN_FallVrs; // offset 0x1A, size 0x2
    signed short dt_WP_ALN_Capsule; // offset 0x1C, size 0x2
    signed short dt_WP_ALN_Virus; // offset 0x1E, size 0x2
    signed short dt_OnVirusP; // offset 0x20, size 0x2
    signed short dt_RensaP; // offset 0x22, size 0x2
    signed short dt_RensaMP; // offset 0x24, size 0x2
    signed short dt_LnHighCaps; // offset 0x26, size 0x2
    signed short dt_LnHighVrs; // offset 0x28, size 0x2
    signed short dt_aiWall_F; // offset 0x2A, size 0x2
    signed short dt_HeiLinesAllp2; // offset 0x2C, size 0x2
    signed short dt_HeiLinesAllp3; // offset 0x2E, size 0x2
    signed short dt_HeiLinesAllp4; // offset 0x30, size 0x2
    signed short dt_WidLinesAllp2; // offset 0x32, size 0x2
    signed short dt_WidLinesAllp3; // offset 0x34, size 0x2
    signed short dt_WidLinesAllp4; // offset 0x36, size 0x2
} ai_param[6][8]; // size: 0xA80, address: 0x57920
struct {
    // total size: 0x38
    signed short dt_LnOnLinVrs; // offset 0x0, size 0x2
    signed short dt_LnEraseVrs; // offset 0x2, size 0x2
    signed short dt_EraseLinP1; // offset 0x4, size 0x2
    signed short dt_EraseLinP3; // offset 0x6, size 0x2
    signed short dt_HeiEraseLinRate; // offset 0x8, size 0x2
    signed short dt_WidEraseLinRate; // offset 0xA, size 0x2
    signed short dt_P_ALN_HeightP; // offset 0xC, size 0x2
    signed short dt_P_ALN_FallCap; // offset 0xE, size 0x2
    signed short dt_P_ALN_FallVrs; // offset 0x10, size 0x2
    signed short dt_P_ALN_Capsule; // offset 0x12, size 0x2
    signed short dt_P_ALN_Virus; // offset 0x14, size 0x2
    signed short dt_WP_ALN_Bottom; // offset 0x16, size 0x2
    signed short dt_WP_ALN_FallCap; // offset 0x18, size 0x2
    signed short dt_WP_ALN_FallVrs; // offset 0x1A, size 0x2
    signed short dt_WP_ALN_Capsule; // offset 0x1C, size 0x2
    signed short dt_WP_ALN_Virus; // offset 0x1E, size 0x2
    signed short dt_OnVirusP; // offset 0x20, size 0x2
    signed short dt_RensaP; // offset 0x22, size 0x2
    signed short dt_RensaMP; // offset 0x24, size 0x2
    signed short dt_LnHighCaps; // offset 0x26, size 0x2
    signed short dt_LnHighVrs; // offset 0x28, size 0x2
    signed short dt_aiWall_F; // offset 0x2A, size 0x2
    signed short dt_HeiLinesAllp2; // offset 0x2C, size 0x2
    signed short dt_HeiLinesAllp3; // offset 0x2E, size 0x2
    signed short dt_HeiLinesAllp4; // offset 0x30, size 0x2
    signed short dt_WidLinesAllp2; // offset 0x32, size 0x2
    signed short dt_WidLinesAllp3; // offset 0x34, size 0x2
    signed short dt_WidLinesAllp4; // offset 0x36, size 0x2
} ai_param_org[6][8]; // size: 0xA80, address: 0x23728
struct {
    // total size: 0x6C
    signed char wait_attack; // offset 0x0, size 0x1
    signed char speed; // offset 0x1, size 0x1
    signed short luck; // offset 0x2, size 0x2
    signed char logic[8]; // offset 0x4, size 0x8
    signed char condition[16]; // offset 0xC, size 0x10
    signed short condition_param[16]; // offset 0x1C, size 0x20
    signed char effect[16]; // offset 0x3C, size 0x10
    signed short effect_param[16]; // offset 0x4C, size 0x20
} ai_char_data_org[16]; // size: 0x6C0, address: 0x241A8
struct {
    // total size: 0x6C
    signed char wait_attack; // offset 0x0, size 0x1
    signed char speed; // offset 0x1, size 0x1
    signed short luck; // offset 0x2, size 0x2
    signed char logic[8]; // offset 0x4, size 0x8
    signed char condition[16]; // offset 0xC, size 0x10
    signed short condition_param[16]; // offset 0x1C, size 0x20
    signed char effect[16]; // offset 0x3C, size 0x10
    signed short effect_param[16]; // offset 0x4C, size 0x20
} ai_char_data[16]; // size: 0x6C0, address: 0x57260
// Range: 0x4DA44 -> 0x4DEB8
void aifFirstInit() {
    // Local variables
    int i; // r1+0x8

    // References
    // -> struct [anonymous] ai_char_data[16];
    // -> struct [anonymous] ai_char_data_org[16];
    // -> struct [anonymous] ai_param_org[6][8];
    // -> struct [anonymous] ai_param[6][8];
}

unsigned short aiGoalX; // size: 0x2, address: 0x55528
unsigned short aiGoalY; // size: 0x2, address: 0x5552A
unsigned char aipn; // size: 0x1, address: 0x5552C
unsigned char FallSpeed[]; // size: 0x0, address: 0x48A0
signed char aiSelSpeed; // size: 0x1, address: 0x5552D
unsigned char aiMoveSF; // size: 0x1, address: 0x5552E
@enum$107dm_title_main_c;
@enum$107dm_title_main_c evs_gamemode; // size: 0x4, address: 0x190B4
// Range: 0x4DEB8 -> 0x4E0BC
void aifMake(struct {
    // total size: 0x3C4
    unsigned long game_score; // offset 0x0, size 0x4
    unsigned short game_retry; // offset 0x4, size 0x2
    signed short map_x; // offset 0x6, size 0x2
    signed short map_y; // offset 0x8, size 0x2
    signed char map_item_size; // offset 0xA, size 0x1
    @enum$99dm_game_main_c mode_now; // offset 0xC, size 0x4
    @enum$99dm_game_main_c mode_old; // offset 0x10, size 0x4
    @enum$98dm_game_main_c cnd_now; // offset 0x14, size 0x4
    @enum$98dm_game_main_c cnd_old; // offset 0x18, size 0x4
    @enum$98dm_game_main_c cnd_training; // offset 0x1C, size 0x4
    @enum$98dm_game_main_c cnd_static; // offset 0x20, size 0x4
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
} * uupw /* r30 */) {
    // Local variables
    int i; // r6

    // References
    // -> static struct [anonymous] * pGameState;
    // -> static int last_flash;
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> static int delpos_cnt;
    // -> unsigned char aiMoveSF;
    // -> signed char aiSelSpeed;
    // -> unsigned char aiSlideFSpeed[8][3];
    // -> unsigned char FallSpeed[];
    // -> unsigned char aipn;
    // -> unsigned short aiGoalY;
    // -> unsigned short aiGoalX;
    // -> struct [anonymous] game_state_data[4];
}

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
} aiFlag[100]; // size: 0x1900, address: 0x55530
unsigned char aiFlagCnt; // size: 0x1, address: 0x56E30
unsigned char decide; // size: 0x1, address: 0x56E31
// Range: 0x4E0BC -> 0x4E298
int aifMake2(struct {
    // total size: 0x3C4
    unsigned long game_score; // offset 0x0, size 0x4
    unsigned short game_retry; // offset 0x4, size 0x2
    signed short map_x; // offset 0x6, size 0x2
    signed short map_y; // offset 0x8, size 0x2
    signed char map_item_size; // offset 0xA, size 0x1
    @enum$99dm_game_main_c mode_now; // offset 0xC, size 0x4
    @enum$99dm_game_main_c mode_old; // offset 0x10, size 0x4
    @enum$98dm_game_main_c cnd_now; // offset 0x14, size 0x4
    @enum$98dm_game_main_c cnd_old; // offset 0x18, size 0x4
    @enum$98dm_game_main_c cnd_training; // offset 0x1C, size 0x4
    @enum$98dm_game_main_c cnd_static; // offset 0x20, size 0x4
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
} * uupw /* r26 */, int x /* r27 */, int y /* r28 */, int tateFlag /* r29 */, int revFlag /* r30 */) {
    // References
    // -> unsigned char decide;
    // -> unsigned char aiFlagCnt;
    // -> struct [anonymous] aiFlag[100];
    // -> unsigned char aiMoveSF;
    // -> signed char aiSelSpeed;
    // -> unsigned char aiSlideFSpeed[8][3];
    // -> unsigned char FallSpeed[];
    // -> unsigned char aipn;
    // -> static struct [anonymous] * pGameState;
    // -> unsigned short aiGoalY;
    // -> unsigned short aiGoalX;
    // -> unsigned long MissRate;
    // -> struct [anonymous] game_state_data[4];
}

unsigned char aiLinePri[8]; // size: 0x8, address: 0x235A4
struct {
    // total size: 0x2
    unsigned char ca; // offset 0x0, size 0x1
    unsigned char cb; // offset 0x1, size 0x1
} aiNext; // size: 0x2, address: 0x56E34
// Range: 0x4E298 -> 0x4E82C
void aiHiruSideLineEraser(struct {
    // total size: 0x3C4
    unsigned long game_score; // offset 0x0, size 0x4
    unsigned short game_retry; // offset 0x4, size 0x2
    signed short map_x; // offset 0x6, size 0x2
    signed short map_y; // offset 0x8, size 0x2
    signed char map_item_size; // offset 0xA, size 0x1
    @enum$99dm_game_main_c mode_now; // offset 0xC, size 0x4
    @enum$99dm_game_main_c mode_old; // offset 0x10, size 0x4
    @enum$98dm_game_main_c cnd_now; // offset 0x14, size 0x4
    @enum$98dm_game_main_c cnd_old; // offset 0x18, size 0x4
    @enum$98dm_game_main_c cnd_training; // offset 0x1C, size 0x4
    @enum$98dm_game_main_c cnd_static; // offset 0x20, size 0x4
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
} * xpw /* r3 */) {
    // Local variables
    int x; // r4
    int y; // r23
    int z; // r24
    int i; // r11
    int f; // r5
    int f2; // r6
    int fc; // r1+0x8
    int r; // r23
    int h[2]; // r1+0x68
    int w[2]; // r1+0x60
    int m; // r26
    int p; // r22
    int v; // r1+0x8
    int c; // r1+0x8
    int e; // r25
    int g; // r1+0x8
    int g2; // r26
    int xx; // r27
    int cf[2]; // r1+0x54
    unsigned char low_virus[12]; // r1+0x48
    unsigned char low_capsx[12]; // r1+0x3C
    unsigned char lst_virus[12]; // r1+0x30
    unsigned char lst_capsx[12]; // r1+0x24
    unsigned char chk_line[8]; // r1+0x1C

    // References
    // -> unsigned char decide;
    // -> struct [anonymous] aiFlag[100];
    // -> struct [anonymous] aiNext;
    // -> unsigned char aiFlagCnt;
    // -> unsigned char aiLinePri[8];
}

static signed char srh$466[4][2]; // size: 0x8, address: 0x235AC
struct {
    // total size: 0x2
    unsigned char co; // offset 0x0, size 0x1
    unsigned char st; // offset 0x1, size 0x1
} aif_field[17][8]; // size: 0x110, address: 0x56E38
unsigned char hei_data[10]; // size: 0xA, address: 0x56F48
unsigned char wid_data[10]; // size: 0xA, address: 0x56F54
// Range: 0x4E82C -> 0x4ED8C
int aifEraseLineCore(int mx /* r19 */, int my /* r18 */) {
    // Local variables
    int x; // r6
    int y; // r30
    int z; // r15
    unsigned char tc; // r28
    int ret; // r17

    // References
    // -> struct [anonymous] aif_field[17][8];
    // -> static signed char srh$466[4][2];
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> unsigned char wid_data[10];
    // -> unsigned char hei_data[10];
}

signed short bad_point[8]; // size: 0x10, address: 0x235B4
signed short bad_point2[8]; // size: 0x10, address: 0x235C4
signed short pri_point[10]; // size: 0x14, address: 0x235D4
signed short EraseLinP[9]; // size: 0x12, address: 0x235E8
float HeiEraseLinRate; // size: 0x4, address: 0x235FC
float WidEraseLinRate; // size: 0x4, address: 0x23600
signed short HeiLinesAllp[9]; // size: 0x12, address: 0x23604
signed short WidLinesAllp[9]; // size: 0x12, address: 0x23618
signed short AloneCapP[6]; // size: 0xC, address: 0x2362C
signed short AloneCapWP[6]; // size: 0xC, address: 0x23638
int OnVirusP; // size: 0x4, address: 0x56F60
signed short HiEraseP; // size: 0x2, address: 0x23644
signed short RensaP; // size: 0x2, address: 0x23646
signed short RensaMP; // size: 0x2, address: 0x23648
signed short LPriP; // size: 0x2, address: 0x56F64
unsigned char BadLineRate[4][8]; // size: 0x20, address: 0x2364C
signed short WallRate[4][8]; // size: 0x40, address: 0x2366C
signed short aiHiEraseCtr; // size: 0x2, address: 0x56F66
// Range: 0x4ED8C -> 0x4F698
int aifRensaCheckCore(struct {
    // total size: 0x3C4
    unsigned long game_score; // offset 0x0, size 0x4
    unsigned short game_retry; // offset 0x4, size 0x2
    signed short map_x; // offset 0x6, size 0x2
    signed short map_y; // offset 0x8, size 0x2
    signed char map_item_size; // offset 0xA, size 0x1
    @enum$99dm_game_main_c mode_now; // offset 0xC, size 0x4
    @enum$99dm_game_main_c mode_old; // offset 0x10, size 0x4
    @enum$98dm_game_main_c cnd_now; // offset 0x14, size 0x4
    @enum$98dm_game_main_c cnd_old; // offset 0x18, size 0x4
    @enum$98dm_game_main_c cnd_training; // offset 0x1C, size 0x4
    @enum$98dm_game_main_c cnd_static; // offset 0x20, size 0x4
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
} * uupw /* r3 */, unsigned char mx /* r1+0x10 */, unsigned char my /* r1+0x11 */, unsigned char mco /* r1+0x12 */, unsigned char mst /* r1+0x13 */, unsigned char sx /* r1+0x14 */, unsigned char sy /* r1+0x15 */, unsigned char sco /* r24 */, unsigned char sst /* r25 */) {
    // Local variables
    int idx; // r27
    int idy; // r26
    unsigned char ctr; // r1+0x8
    unsigned char co; // r23
    unsigned char c; // r24
    unsigned char i; // r26

    // References
    // -> static struct [anonymous] * pGameState;
    // -> signed short aiHiEraseCtr;
    // -> struct [anonymous] aif_field[17][8];
    // -> static signed char srh$466[4][2];
    // -> unsigned char BadLineRate[4][8];
}

// Range: 0x4F698 -> 0x4F764
int aifRensaCheck(struct {
    // total size: 0x3C4
    unsigned long game_score; // offset 0x0, size 0x4
    unsigned short game_retry; // offset 0x4, size 0x2
    signed short map_x; // offset 0x6, size 0x2
    signed short map_y; // offset 0x8, size 0x2
    signed char map_item_size; // offset 0xA, size 0x1
    @enum$99dm_game_main_c mode_now; // offset 0xC, size 0x4
    @enum$99dm_game_main_c mode_old; // offset 0x10, size 0x4
    @enum$98dm_game_main_c cnd_now; // offset 0x14, size 0x4
    @enum$98dm_game_main_c cnd_old; // offset 0x18, size 0x4
    @enum$98dm_game_main_c cnd_training; // offset 0x1C, size 0x4
    @enum$98dm_game_main_c cnd_static; // offset 0x20, size 0x4
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
} * uupw /* r3 */, struct {
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
} * af /* r4 */) {
    // Local variables
    struct {
        // total size: 0x3C4
        unsigned long game_score; // offset 0x0, size 0x4
        unsigned short game_retry; // offset 0x4, size 0x2
        signed short map_x; // offset 0x6, size 0x2
        signed short map_y; // offset 0x8, size 0x2
        signed char map_item_size; // offset 0xA, size 0x1
        @enum$99dm_game_main_c mode_now; // offset 0xC, size 0x4
        @enum$99dm_game_main_c mode_old; // offset 0x10, size 0x4
        @enum$98dm_game_main_c cnd_now; // offset 0x14, size 0x4
        @enum$98dm_game_main_c cnd_old; // offset 0x18, size 0x4
        @enum$98dm_game_main_c cnd_training; // offset 0x1C, size 0x4
        @enum$98dm_game_main_c cnd_static; // offset 0x20, size 0x4
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
    } * upw; // r3
    unsigned char x; // r5
    unsigned char y; // r8
    unsigned char mx; // r5
    unsigned char my; // r6
    unsigned char mco; // r7
    unsigned char mst; // r8
    unsigned char sx; // r9
    unsigned char sy; // r10
    unsigned char sco; // r12
    unsigned char sst; // r1+0x10

    // References
    // -> struct [anonymous] aiNext;
}

// Range: 0x4F764 -> 0x4FDCC
int aifSearchLineCore(int mx /* r1+0x8 */, int my /* r1+0xC */, int fg /* r1+0x10 */) {
    // Local variables
    int i; // r27
    int x; // r11
    int y; // r10
    int z; // r1+0x8
    int w; // r11
    int p; // r26
    unsigned char tc; // r12

    // References
    // -> unsigned char hei_data[10];
    // -> unsigned char wid_data[10];
    // -> static struct [anonymous] * pGameState;
    // -> struct [anonymous] aiFlag[100];
    // -> unsigned char BadLineRate[4][8];
    // -> unsigned char aiFlagCnt;
    // -> struct [anonymous] aif_field[17][8];
}

// Range: 0x4FDCC -> 0x4FF44
int aifMiniPointK3(unsigned char * tbl /* r1+0x8 */, unsigned char sub /* r1+0xC */, unsigned char * elin /* r1+0x10 */, unsigned char flag /* r1+0x14 */, unsigned char tory /* r1+0x15 */, unsigned char ec /* r1+0x16 */) {
    // Local variables
    int ex; // r1+0x8

    // References
    // -> signed short pri_point[10];
    // -> signed short WidLinesAllp[9];
    // -> signed short HeiLinesAllp[9];
}

// Range: 0x4FF44 -> 0x50038
int aifMiniAloneCapNumber(unsigned char x /* r1+0x0 */, unsigned char y /* r1+0x1 */, unsigned char f /* r1+0x2 */, int ec /* r1+0x4 */) {
    // Local variables
    int m; // r3
    int d; // r7

    // References
    // -> unsigned char hei_data[10];
    // -> unsigned char wid_data[10];
    // -> struct [anonymous] aif_field[17][8];
}

// Range: 0x50038 -> 0x500C8
int aifMiniAloneCapNumberW(unsigned char x /* r1+0x0 */, unsigned char y /* r1+0x1 */, unsigned char f /* r1+0x2 */, int ec /* r1+0x4 */) {
    // Local variables
    int m; // r3
    int d; // r7

    // References
    // -> unsigned char wid_data[10];
    // -> struct [anonymous] aif_field[17][8];
}

// Range: 0x500C8 -> 0x50130
static int flash_virus(int x /* r1+0x0 */, int y /* r1+0x4 */) {
    // Local variables
    int i; // r7

    // References
    // -> static struct [anonymous] * pGameState;
}

struct {
    // total size: 0x2
    unsigned char co; // offset 0x0, size 0x1
    unsigned char st; // offset 0x1, size 0x1
} aiFieldData[17][8]; // size: 0x110, address: 0x56F68
// Range: 0x50130 -> 0x501E8
static int search_Vflash(int x /* r1+0x0 */, int y /* r1+0x4 */, int col /* r1+0x8 */) {
    // Local variables
    int i; // r8
    int j; // r1+0x0

    // References
    // -> static struct [anonymous] * pGameState;
    // -> struct [anonymous] aiFieldData[17][8];
}

unsigned char aiWall; // size: 0x1, address: 0x57078
// Range: 0x501E8 -> 0x512A0
int aifSearchLineMS(struct {
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
} * af /* r31 */, int mx /* r30 */, int my /* r24 */, int mco /* r19 */, int sx /* r29 */, int sy /* r25 */, int sco /* r14 */, int ec /* r21 */) {
    // Local variables
    int i; // r7
    int f; // r1+0x8
    int z; // r1+0x8
    int z2; // r16
    int x; // r7
    int y; // r6
    int j; // r3
    int m; // r28
    int s; // r9
    int opt; // r22
    int sy2; // r17
    unsigned char ss[8]; // r1+0x34

    // References
    // -> unsigned char wid_data[10];
    // -> unsigned char hei_data[10];
    // -> signed short WallRate[4][8];
    // -> unsigned char aiWall;
    // -> signed short bad_point[8];
    // -> signed short bad_point2[8];
    // -> struct [anonymous] aif_field[17][8];
    // -> int OnVirusP;
    // -> struct [anonymous] aiFieldData[17][8];
    // -> static struct [anonymous] * pGameState;
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> signed short EraseLinP[9];
    // -> float WidEraseLinRate;
    // -> float HeiEraseLinRate;
    // -> signed short AloneCapWP[6];
    // -> signed short LPriP;
    // -> signed short AloneCapP[6];
    // -> static int OnVirusP_org;
}

signed short aiHiErR; // size: 0x2, address: 0x5707A
signed short aiHiErY; // size: 0x2, address: 0x5707C
signed short aiHiErB; // size: 0x2, address: 0x5707E
unsigned short aiPriOfs; // size: 0x2, address: 0x57080
// Range: 0x512A0 -> 0x51F7C
void aiHiruAllPriSet(struct {
    // total size: 0x3C4
    unsigned long game_score; // offset 0x0, size 0x4
    unsigned short game_retry; // offset 0x4, size 0x2
    signed short map_x; // offset 0x6, size 0x2
    signed short map_y; // offset 0x8, size 0x2
    signed char map_item_size; // offset 0xA, size 0x1
    @enum$99dm_game_main_c mode_now; // offset 0xC, size 0x4
    @enum$99dm_game_main_c mode_old; // offset 0x10, size 0x4
    @enum$98dm_game_main_c cnd_now; // offset 0x14, size 0x4
    @enum$98dm_game_main_c cnd_old; // offset 0x18, size 0x4
    @enum$98dm_game_main_c cnd_training; // offset 0x1C, size 0x4
    @enum$98dm_game_main_c cnd_static; // offset 0x20, size 0x4
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
} * xpw /* r25 */) {
    // Local variables
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
    } * af; // r26
    int i; // r1+0x1C
    int x; // r1+0x10
    int y; // r1+0x10
    int z; // r1+0x10
    int f; // r1+0x10
    int t; // r22
    unsigned char mx; // r27
    unsigned char my; // r30
    unsigned char mco; // r29
    unsigned char mst; // r19
    unsigned char sx; // r22
    unsigned char sy; // r23
    unsigned char sco; // r17
    unsigned char sst; // r1+0x18
    unsigned char rcr; // r14
    unsigned char rcy; // r15
    unsigned char rcb; // r16
    unsigned char rco; // r1+0x10

    // References
    // -> unsigned char decide;
    // -> unsigned char aiFlagCnt;
    // -> struct [anonymous] aiFlag[100];
    // -> unsigned short aiPriOfs;
    // -> signed short RensaMP;
    // -> signed short RensaP;
    // -> signed short pri_point[10];
    // -> signed short aiHiErB;
    // -> signed short aiHiErY;
    // -> signed short aiHiErR;
    // -> signed short aiHiEraseCtr;
    // -> struct [anonymous] aif_field[17][8];
    // -> struct [anonymous] aiNext;
    // -> struct [anonymous] aiFieldData[17][8];
}

@enum$106dm_title_main_c;
@enum$106dm_title_main_c evs_gamesel; // size: 0x4, address: 0x190B8
unsigned char evs_playcnt; // size: 0x1, address: 0x487A
float aiRootP; // size: 0x4, address: 0x57084
unsigned char aiSelCom; // size: 0x1, address: 0x57088
unsigned long framecont; // size: 0x4, address: 0x8
// Range: 0x51F7C -> 0x52DE8
void aiSetCharacter(struct {
    // total size: 0x3C4
    unsigned long game_score; // offset 0x0, size 0x4
    unsigned short game_retry; // offset 0x4, size 0x2
    signed short map_x; // offset 0x6, size 0x2
    signed short map_y; // offset 0x8, size 0x2
    signed char map_item_size; // offset 0xA, size 0x1
    @enum$99dm_game_main_c mode_now; // offset 0xC, size 0x4
    @enum$99dm_game_main_c mode_old; // offset 0x10, size 0x4
    @enum$98dm_game_main_c cnd_now; // offset 0x14, size 0x4
    @enum$98dm_game_main_c cnd_old; // offset 0x18, size 0x4
    @enum$98dm_game_main_c cnd_training; // offset 0x1C, size 0x4
    @enum$98dm_game_main_c cnd_static; // offset 0x20, size 0x4
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
} * xpw /* r25 */) {
    // Local variables
    int i; // r8
    int j; // r1+0x8
    int x; // r9
    int y; // r1+0x8
    unsigned char badLine; // r3
    unsigned char leading; // r1+0x8
    unsigned char wall; // r28
    unsigned char hicaps; // r4
    unsigned char lowvrs; // r5
    int vrsCnt; // r6
    unsigned char char_no; // r9
    int aidt; // r27
    struct {
        // total size: 0x38
        signed short dt_LnOnLinVrs; // offset 0x0, size 0x2
        signed short dt_LnEraseVrs; // offset 0x2, size 0x2
        signed short dt_EraseLinP1; // offset 0x4, size 0x2
        signed short dt_EraseLinP3; // offset 0x6, size 0x2
        signed short dt_HeiEraseLinRate; // offset 0x8, size 0x2
        signed short dt_WidEraseLinRate; // offset 0xA, size 0x2
        signed short dt_P_ALN_HeightP; // offset 0xC, size 0x2
        signed short dt_P_ALN_FallCap; // offset 0xE, size 0x2
        signed short dt_P_ALN_FallVrs; // offset 0x10, size 0x2
        signed short dt_P_ALN_Capsule; // offset 0x12, size 0x2
        signed short dt_P_ALN_Virus; // offset 0x14, size 0x2
        signed short dt_WP_ALN_Bottom; // offset 0x16, size 0x2
        signed short dt_WP_ALN_FallCap; // offset 0x18, size 0x2
        signed short dt_WP_ALN_FallVrs; // offset 0x1A, size 0x2
        signed short dt_WP_ALN_Capsule; // offset 0x1C, size 0x2
        signed short dt_WP_ALN_Virus; // offset 0x1E, size 0x2
        signed short dt_OnVirusP; // offset 0x20, size 0x2
        signed short dt_RensaP; // offset 0x22, size 0x2
        signed short dt_RensaMP; // offset 0x24, size 0x2
        signed short dt_LnHighCaps; // offset 0x26, size 0x2
        signed short dt_LnHighVrs; // offset 0x28, size 0x2
        signed short dt_aiWall_F; // offset 0x2A, size 0x2
        signed short dt_HeiLinesAllp2; // offset 0x2C, size 0x2
        signed short dt_HeiLinesAllp3; // offset 0x2E, size 0x2
        signed short dt_HeiLinesAllp4; // offset 0x30, size 0x2
        signed short dt_WidLinesAllp2; // offset 0x32, size 0x2
        signed short dt_WidLinesAllp3; // offset 0x34, size 0x2
        signed short dt_WidLinesAllp4; // offset 0x36, size 0x2
    } (* aiDataPtr)[][8]; // r1+0x8
    struct {
        // total size: 0x6C
        signed char wait_attack; // offset 0x0, size 0x1
        signed char speed; // offset 0x1, size 0x1
        signed short luck; // offset 0x2, size 0x2
        signed char logic[8]; // offset 0x4, size 0x8
        signed char condition[16]; // offset 0xC, size 0x10
        signed short condition_param[16]; // offset 0x1C, size 0x20
        signed char effect[16]; // offset 0x3C, size 0x10
        signed short effect_param[16]; // offset 0x4C, size 0x20
    } * char_data; // r26
    int doEffectFlag; // r4
    struct {
        // total size: 0x38
        signed short dt_LnOnLinVrs; // offset 0x0, size 0x2
        signed short dt_LnEraseVrs; // offset 0x2, size 0x2
        signed short dt_EraseLinP1; // offset 0x4, size 0x2
        signed short dt_EraseLinP3; // offset 0x6, size 0x2
        signed short dt_HeiEraseLinRate; // offset 0x8, size 0x2
        signed short dt_WidEraseLinRate; // offset 0xA, size 0x2
        signed short dt_P_ALN_HeightP; // offset 0xC, size 0x2
        signed short dt_P_ALN_FallCap; // offset 0xE, size 0x2
        signed short dt_P_ALN_FallVrs; // offset 0x10, size 0x2
        signed short dt_P_ALN_Capsule; // offset 0x12, size 0x2
        signed short dt_P_ALN_Virus; // offset 0x14, size 0x2
        signed short dt_WP_ALN_Bottom; // offset 0x16, size 0x2
        signed short dt_WP_ALN_FallCap; // offset 0x18, size 0x2
        signed short dt_WP_ALN_FallVrs; // offset 0x1A, size 0x2
        signed short dt_WP_ALN_Capsule; // offset 0x1C, size 0x2
        signed short dt_WP_ALN_Virus; // offset 0x1E, size 0x2
        signed short dt_OnVirusP; // offset 0x20, size 0x2
        signed short dt_RensaP; // offset 0x22, size 0x2
        signed short dt_RensaMP; // offset 0x24, size 0x2
        signed short dt_LnHighCaps; // offset 0x26, size 0x2
        signed short dt_LnHighVrs; // offset 0x28, size 0x2
        signed short dt_aiWall_F; // offset 0x2A, size 0x2
        signed short dt_HeiLinesAllp2; // offset 0x2C, size 0x2
        signed short dt_HeiLinesAllp3; // offset 0x2E, size 0x2
        signed short dt_HeiLinesAllp4; // offset 0x30, size 0x2
        signed short dt_WidLinesAllp2; // offset 0x32, size 0x2
        signed short dt_WidLinesAllp3; // offset 0x34, size 0x2
        signed short dt_WidLinesAllp4; // offset 0x36, size 0x2
    } * ptr; // r4

    // References
    // -> unsigned char evs_playcnt;
    // -> struct [anonymous] game_state_data[4];
    // -> unsigned char aipn;
    // -> signed short WidLinesAllp[9];
    // -> signed short HeiLinesAllp[9];
    // -> int OnVirusP;
    // -> static int OnVirusP_org;
    // -> unsigned char aiWall;
    // -> signed short pri_point[10];
    // -> signed short RensaMP;
    // -> signed short RensaP;
    // -> signed short AloneCapWP[6];
    // -> signed short AloneCapP[6];
    // -> signed short LPriP;
    // -> float WidEraseLinRate;
    // -> float HeiEraseLinRate;
    // -> signed short EraseLinP[9];
    // -> unsigned char aiSelCom;
    // -> signed char aiSelSpeed;
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> unsigned long framecont;
    // -> int fool_mode;
    // -> int s_hard_mode;
    // -> static int last_flash;
    // -> float aiRootP;
    // -> unsigned short aiPriOfs;
    // -> struct [anonymous] ai_char_data[16];
    // -> signed char aiDebugP1;
    // -> struct [anonymous] ai_param[6][8];
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> struct [anonymous] aiFieldData[17][8];
}

struct {
    // total size: 0x2
    unsigned char co; // offset 0x0, size 0x1
    unsigned char st; // offset 0x1, size 0x1
} aiRecurData[18][10]; // size: 0x168, address: 0x5708C
// Range: 0x52DE8 -> 0x530E0
void aifFieldCopy(struct {
    // total size: 0x3C4
    unsigned long game_score; // offset 0x0, size 0x4
    unsigned short game_retry; // offset 0x4, size 0x2
    signed short map_x; // offset 0x6, size 0x2
    signed short map_y; // offset 0x8, size 0x2
    signed char map_item_size; // offset 0xA, size 0x1
    @enum$99dm_game_main_c mode_now; // offset 0xC, size 0x4
    @enum$99dm_game_main_c mode_old; // offset 0x10, size 0x4
    @enum$98dm_game_main_c cnd_now; // offset 0x14, size 0x4
    @enum$98dm_game_main_c cnd_old; // offset 0x18, size 0x4
    @enum$98dm_game_main_c cnd_training; // offset 0x1C, size 0x4
    @enum$98dm_game_main_c cnd_static; // offset 0x20, size 0x4
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
} * uupw /* r3 */) {
    // Local variables
    int idx; // r8
    int idy; // r9

    // References
    // -> struct [anonymous] aiRecurData[18][10];
    // -> struct [anonymous] aiFieldData[17][8];
    // -> struct [anonymous] aiNext;
}

unsigned char aiTEdgeCnt; // size: 0x1, address: 0x571F4
unsigned char aiYEdgeCnt; // size: 0x1, address: 0x571F5
// Range: 0x530E0 -> 0x53B80
void aifPlaceSearch() {
    // Local variables
    int idx; // r24
    int idy; // r25
    int cnt; // r26
    struct {
        // total size: 0x3
        unsigned char tory; // offset 0x0, size 0x1
        unsigned char x; // offset 0x1, size 0x1
        unsigned char y; // offset 0x2, size 0x1
    } aiEdge[100]; // r1+0x18

    // References
    // -> unsigned char aiTEdgeCnt;
    // -> struct [anonymous] aiFlag[100];
    // -> unsigned char aiFlagCnt;
    // -> unsigned char aiYEdgeCnt;
    // -> struct [anonymous] aiNext;
    // -> static struct [anonymous] * pGameState;
    // -> struct [anonymous] aiRecurData[18][10];
}

unsigned char aiRootCnt; // size: 0x1, address: 0x571F6
unsigned char aiRollFinal; // size: 0x1, address: 0x571F7
unsigned char success; // size: 0x1, address: 0x571F8
// Range: 0x53B80 -> 0x53FA0
void aifMoveCheck() {
    // Local variables
    int cnt; // r27
    int okctr; // r26
    int okrootctr; // r25
    int i; // r5

    // References
    // -> struct [anonymous] aiRecurData[18][10];
    // -> unsigned char aiFlagCnt;
    // -> struct [anonymous] aiFlag[100];
    // -> float aiRootP;
    // -> unsigned char aiRootCnt;
    // -> unsigned char success;
    // -> unsigned char aiRollFinal;
    // -> unsigned char aiSelCom;
    // -> struct [anonymous] aiFieldData[17][8];
}

struct {
    // total size: 0x2
    unsigned char x; // offset 0x0, size 0x1
    unsigned char y; // offset 0x1, size 0x1
} aiRoot[50]; // size: 0x64, address: 0x571FC
// Range: 0x53FA0 -> 0x54168
void aifTRecur(unsigned char x /* r26 */, unsigned char y /* r27 */, unsigned char cnt /* r28 */) {
    // References
    // -> static struct [anonymous] * pGameState;
    // -> unsigned char aiRootCnt;
    // -> struct [anonymous] aiRoot[50];
    // -> unsigned char success;
    // -> unsigned char aiMoveSF;
    // -> struct [anonymous] aiRecurData[18][10];
    // -> unsigned short aiGoalY;
    // -> unsigned short aiGoalX;
}

// Range: 0x54168 -> 0x54244
void aifTRecurUP(unsigned char x /* r29 */, unsigned char y /* r30 */, unsigned char cnt /* r5 */) {
    // References
    // -> static struct [anonymous] * pGameState;
    // -> unsigned char aiRootCnt;
    // -> struct [anonymous] aiRoot[50];
    // -> unsigned char success;
    // -> struct [anonymous] aiRecurData[18][10];
    // -> unsigned short aiGoalY;
    // -> unsigned short aiGoalX;
}

// Range: 0x54244 -> 0x543F8
void aifYRecur(unsigned char x /* r25 */, unsigned char y /* r26 */, unsigned char cnt /* r27 */) {
    // References
    // -> static struct [anonymous] * pGameState;
    // -> unsigned char aiRootCnt;
    // -> struct [anonymous] aiRoot[50];
    // -> unsigned char success;
    // -> unsigned char aiMoveSF;
    // -> struct [anonymous] aiRecurData[18][10];
    // -> unsigned short aiGoalY;
    // -> unsigned short aiGoalX;
}

// Range: 0x543F8 -> 0x544DC
void aifYRecurUP(unsigned char x /* r29 */, unsigned char y /* r30 */, unsigned char cnt /* r5 */) {
    // References
    // -> static struct [anonymous] * pGameState;
    // -> unsigned char aiRootCnt;
    // -> struct [anonymous] aiRoot[50];
    // -> unsigned char success;
    // -> struct [anonymous] aiRecurData[18][10];
    // -> unsigned short aiGoalY;
    // -> unsigned short aiGoalX;
}

// Range: 0x544DC -> 0x54A08
void aifReMoveCheck() {
    // Local variables
    int idx; // r5

    // References
    // -> struct [anonymous] aiRoot[50];
    // -> unsigned char aiRootCnt;
    // -> struct [anonymous] aiRecurData[18][10];
    // -> struct [anonymous] aiFlag[100];
    // -> unsigned char decide;
    // -> unsigned char aiRollFinal;
    // -> unsigned char success;
    // -> struct [anonymous] aiFieldData[17][8];
    // -> unsigned char aiMoveSF;
}

// Range: 0x54A08 -> 0x54D98
void aifKeyMake(struct {
    // total size: 0x3C4
    unsigned long game_score; // offset 0x0, size 0x4
    unsigned short game_retry; // offset 0x4, size 0x2
    signed short map_x; // offset 0x6, size 0x2
    signed short map_y; // offset 0x8, size 0x2
    signed char map_item_size; // offset 0xA, size 0x1
    @enum$99dm_game_main_c mode_now; // offset 0xC, size 0x4
    @enum$99dm_game_main_c mode_old; // offset 0x10, size 0x4
    @enum$98dm_game_main_c cnd_now; // offset 0x14, size 0x4
    @enum$98dm_game_main_c cnd_old; // offset 0x18, size 0x4
    @enum$98dm_game_main_c cnd_training; // offset 0x1C, size 0x4
    @enum$98dm_game_main_c cnd_static; // offset 0x20, size 0x4
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
} * uupw /* r30 */) {
    // Local variables
    int cnt; // r5
    int roll[2][2]; // r1+0x10
    unsigned char lev; // r1+0x8

    // References
    // -> struct [anonymous] aiRoot[50];
    // -> signed char aiSelSpeed;
    // -> unsigned char aiVirusLevel[8][3];
    // -> float aiRootP;
    // -> unsigned char aiRollFinal;
    // -> unsigned char aiRootCnt;
    // -> unsigned char decide;
    // -> struct [anonymous] aiFlag[100];
}

static int wave_tbl$2879[8]; // size: 0x20, address: 0x3BB4
unsigned short joygam[4]; // size: 0x8, address: 0x1CE40
// Range: 0x54D98 -> 0x553EC
void aifKeyOut(struct {
    // total size: 0x3C4
    unsigned long game_score; // offset 0x0, size 0x4
    unsigned short game_retry; // offset 0x4, size 0x2
    signed short map_x; // offset 0x6, size 0x2
    signed short map_y; // offset 0x8, size 0x2
    signed char map_item_size; // offset 0xA, size 0x1
    @enum$99dm_game_main_c mode_now; // offset 0xC, size 0x4
    @enum$99dm_game_main_c mode_old; // offset 0x10, size 0x4
    @enum$98dm_game_main_c cnd_now; // offset 0x14, size 0x4
    @enum$98dm_game_main_c cnd_old; // offset 0x18, size 0x4
    @enum$98dm_game_main_c cnd_training; // offset 0x1C, size 0x4
    @enum$98dm_game_main_c cnd_static; // offset 0x20, size 0x4
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
} * uupw /* r28 */) {
    // Local variables
    int idx; // r29
    int idy; // r1+0x8
    int i; // r4
    int dx; // r4

    // References
    // -> unsigned short joygam[4];
    // -> unsigned char aiSlideFSpeed[8][3];
    // -> unsigned char aiDownSpeed[8][3];
    // -> unsigned char aipn;
    // -> struct [anonymous] game_state_data[4];
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> unsigned char FallSpeed[];
    // -> unsigned char aiSlideSpeed[8][3];
    // -> static int wave_tbl$2879[8];
}

static int tbl$2973[7]; // size: 0x1C, address: 0x2370C
// Range: 0x553EC -> 0x55C04
static int search_flash_3(int cx /* r1+0x8 */, int cy /* r1+0xC */, int col /* r1+0x10 */, int tory /* r1+0x14 */, int ec /* r1+0x18 */) {
    // Local variables
    int i; // r29
    int j; // r24
    int k; // r1+0x8
    int cnt; // r24
    int x; // r28
    int y; // r1+0x8
    int idx; // r1+0x8
    signed char tmp[8]; // r1+0x44

    // References
    // -> static struct [anonymous] * pGameState;
    // -> static int tbl$2973[7];
    // -> struct [anonymous] aiFieldData[17][8];
}

// Range: 0x55C04 -> 0x55F30
static int flash_special() {
    // Local variables
    int i; // r25
    int ec; // r24
    int ret; // r1+0x8

    // References
    // -> static int delpos_tbl[100];
    // -> unsigned char aiFlagCnt;
    // -> struct [anonymous] aiFlag[100];
    // -> static int delpos_cnt;
    // -> static struct [anonymous] * pGameState;
    // -> struct [anonymous] aiNext;
}

// Range: 0x55F30 -> 0x55F98
void aiCOM_MissTake() {
    // References
    // -> unsigned long MissRate;
    // -> unsigned long PlayTime;
}


