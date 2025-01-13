/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\main1x.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00055F98 -> 0x00056DB0
*/
static unsigned char _stageTbl[18]; // size: 0x12, address: 0x3BD8
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
unsigned char evs_select_name_no[]; // size: 0x0, address: 0x190B0
signed char evs_manual_no; // size: 0x1, address: 0x18F95
int story_proc_no; // size: 0x4, address: 0x154C
@enum$106dm_title_main_c;
@enum$106dm_title_main_c evs_gamesel; // size: 0x4, address: 0x190B8
@enum$98dm_title_main_c;
// Range: 0x55F98 -> 0x561B0
int main11() {
    // Local variables
    @enum$98dm_title_main_c no; // r31
    int handover_demono; // r1+0x8

    // References
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> static unsigned char _stageTbl[18];
    // -> int story_proc_no;
    // -> signed char evs_manual_no;
    // -> unsigned char evs_select_name_no[];
    // -> struct [anonymous] game_state_data[4];
}

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
signed char evs_story_level; // size: 0x1, address: 0x4880
signed char evs_story_no; // size: 0x1, address: 0x18F92
unsigned char evs_playcnt; // size: 0x1, address: 0x487A
// Range: 0x561B0 -> 0x56684
static void adjust_story_ai() {
    // Local variables
    int i; // r10
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
    } * aichar; // r11

    // References
    // -> unsigned char evs_playcnt;
    // -> struct [anonymous] ai_char_data[16];
    // -> signed char evs_story_no;
    // -> signed char evs_story_level;
    // -> struct [anonymous] game_state_data[4];
}

static unsigned char _seqTbl$224[10]; // size: 0xA, address: 0x3BEC
static unsigned char _demoSeqTbl$225[2]; // size: 0x2, address: 0x3BF8
static unsigned char StoryVirLv$226[3][10]; // size: 0x1E, address: 0x3BFC
static signed char _charToAi$227[15]; // size: 0xF, address: 0x3C1C
static signed char _stageToChar_tbl$228[2][10]; // size: 0x14, address: 0x3C2C
static signed char _story4PChar_tbl$229[2][4]; // size: 0x8, address: 0x3C40
static signed char _team_flg$230[3][4]; // size: 0xC, address: 0x3C48
static unsigned char GameSize$231[7]; // size: 0x7, address: 0x3C54
signed char evs_story_flg; // size: 0x1, address: 0x18F91
unsigned char evs_seqence; // size: 0x1, address: 0x4879
unsigned char evs_seqnumb; // size: 0x1, address: 0x18F90
unsigned long evs_game_time; // size: 0x4, address: 0x190AC
unsigned char evs_one_game_flg; // size: 0x1, address: 0x18F93
// Range: 0x56684 -> 0x56DB0
int main12() {
    // Local variables
    int i; // r9
    int j; // r5
    int k; // r6
    int ret_main; // r3

    // References
    // -> static unsigned char _demoSeqTbl$225[2];
    // -> unsigned char evs_seqnumb;
    // -> unsigned char evs_seqence;
    // -> static signed char _charToAi$227[15];
    // -> struct [anonymous] game_state_data[4];
    // -> unsigned char evs_one_game_flg;
    // -> signed char evs_story_flg;
    // -> unsigned char evs_playcnt;
    // -> unsigned char evs_select_name_no[];
    // -> unsigned long evs_game_time;
    // -> signed char evs_story_no;
    // -> static unsigned char _seqTbl$224[10];
    // -> signed char evs_story_level;
    // -> static signed char _story4PChar_tbl$229[2][4];
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> static signed char _team_flg$230[3][4];
    // -> static unsigned char StoryVirLv$226[3][10];
    // -> static signed char _stageToChar_tbl$228[2][10];
    // -> int story_proc_no;
    // -> static unsigned char GameSize$231[7];
}


