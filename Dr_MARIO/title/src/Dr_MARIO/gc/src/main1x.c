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
    struct_tex_func_c_1287 * texArray; // offset 0x1C, size 0x4
    unsigned long frameCount; // offset 0x20, size 0x4
    int center[2]; // offset 0x24, size 0x8
    int charNo; // offset 0x2C, size 0x4
    int color[4]; // offset 0x30, size 0x10
};
struct_dm_game_main_c_171 game_state_data[4]; // size: 0xF10, address: 0x1A1B8
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

struct_aiset_c_858 ai_char_data[16]; // size: 0x6C0, address: 0x57260
signed char evs_story_level; // size: 0x1, address: 0x4880
signed char evs_story_no; // size: 0x1, address: 0x18F92
unsigned char evs_playcnt; // size: 0x1, address: 0x487A
// Range: 0x561B0 -> 0x56684
static void adjust_story_ai() {
    // Local variables
    int i; // r10
    struct_aiset_c_858 * aichar; // r11

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


