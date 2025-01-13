/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\evsworks.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0000CF70 -> 0x0000CF70
*/
unsigned char evs_stereo; // size: 0x1, address: 0x4878
unsigned char evs_seqence; // size: 0x1, address: 0x4879
unsigned char evs_seqnumb; // size: 0x1, address: 0x18F90
unsigned char evs_playcnt; // size: 0x1, address: 0x487A
unsigned char evs_keyrept[2]; // size: 0x2, address: 0x487C
unsigned char evs_gamespeed; // size: 0x1, address: 0x487E
unsigned char evs_score_flag; // size: 0x1, address: 0x487F
signed char evs_story_flg; // size: 0x1, address: 0x18F91
signed char evs_story_no; // size: 0x1, address: 0x18F92
signed char evs_story_level; // size: 0x1, address: 0x4880
unsigned char evs_secret_flg[2]; // size: 0x2, address: 0x4884
unsigned char evs_one_game_flg; // size: 0x1, address: 0x18F93
unsigned char evs_level_21; // size: 0x1, address: 0x18F94
signed char evs_manual_no; // size: 0x1, address: 0x18F95
unsigned long evs_high_score; // size: 0x4, address: 0x18F98
int evs_vs_count; // size: 0x4, address: 0x4888
unsigned char FlyingCnt[3]; // size: 0x3, address: 0x488C
unsigned char BonusWait[3][3]; // size: 0x9, address: 0x4890
unsigned char GameSpeed[4]; // size: 0x4, address: 0x489C
unsigned char FallSpeed[56]; // size: 0x38, address: 0x48A0
unsigned char Score1p[3][6]; // size: 0x12, address: 0x48D8
unsigned char CapsMagazine[256]; // size: 0x100, address: 0x18F9C
int evs_default_name[4]; // size: 0x10, address: 0x1909C
unsigned long evs_game_time; // size: 0x4, address: 0x190AC
unsigned char evs_select_name_no[2]; // size: 0x2, address: 0x190B0
enum /* @enum$104evsworks_c */ {
    GMD_NORMAL = 0,
    GMD_FLASH = 1,
    GMD_TaiQ = 2,
    GMD_TIME_ATTACK = 3,
};
enum /* @enum$104evsworks_c */ {
    GMD_NORMAL = 0,
    GMD_FLASH = 1,
    GMD_TaiQ = 2,
    GMD_TIME_ATTACK = 3,
} evs_gamemode; // size: 0x4, address: 0x190B4
enum /* @enum$103evsworks_c */ {
    GSL_1PLAY = 0,
    GSL_2PLAY = 1,
    GSL_4PLAY = 2,
    GSL_VSCPU = 3,
    GSL_1DEMO = 4,
    GSL_2DEMO = 5,
    GSL_4DEMO = 6,
    GSL_MAX = 7,
};
enum /* @enum$103evsworks_c */ {
    GSL_1PLAY = 0,
    GSL_2PLAY = 1,
    GSL_4PLAY = 2,
    GSL_VSCPU = 3,
    GSL_1DEMO = 4,
    GSL_2DEMO = 5,
    GSL_4DEMO = 6,
    GSL_MAX = 7,
} evs_gamesel; // size: 0x4, address: 0x190B8
unsigned char evs_playmax; // size: 0x1, address: 0x190BC

