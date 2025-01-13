/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\tetsound.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x000A0B40 -> 0x000A229C
*/
static signed short DangerMusicBgmIndex; // size: 0x2, address: 0xDF5D0
static signed short NormalMusicBgmIndex; // size: 0x2, address: 0x116FA0
static signed short NormalMusicBgmIndex_ScoreAttack; // size: 0x2, address: 0xDF5D2
static signed short DangerMusicBgmIndex_ScoreAttack; // size: 0x2, address: 0xDF5D4
static char crossfadeBool; // size: 0x1, address: 0x116FA2
static char initgameBool; // size: 0x1, address: 0xDF5D6
static signed short ts_ok_start_timer; // size: 0x2, address: 0xDF5D8
signed short ts_timer_counter; // size: 0x2, address: 0x116FA4
static signed short ts_current_alert; // size: 0x2, address: 0x116FA6
static signed short ts_old_alert; // size: 0x2, address: 0xDF5DA
static signed short ts_song_index; // size: 0x2, address: 0x116FA8
static signed short ts_song_buffer; // size: 0x2, address: 0x116FAA
unsigned char TenSecond; // size: 0x1, address: 0x116FAC
unsigned char DolbyEnabled; // size: 0x1, address: 0x116FAD
// Range: 0xA0B40 -> 0xA0BD4
void InitGameAudioSystem() {
    // References
    // -> unsigned char DolbyEnabled;
    // -> static signed short ts_old_alert;
    // -> static signed short ts_current_alert;
    // -> signed short ts_timer_counter;
    // -> static signed short ts_ok_start_timer;
    // -> static char initgameBool;
    // -> static char crossfadeBool;
    // -> static signed short DangerMusicBgmIndex_ScoreAttack;
    // -> static signed short NormalMusicBgmIndex_ScoreAttack;
    // -> static signed short NormalMusicBgmIndex;
    // -> static signed short DangerMusicBgmIndex;
    // -> unsigned char TenSecond;
}

long GarbageBlockBaseSfx_L; // size: 0x4, address: 0x116FB0
long GarbageBlockBaseSfx_R; // size: 0x4, address: 0x116FB4
// Range: 0xA0BD4 -> 0xA0C70
void SetSoundOptions(signed short settings /* r1+0x8 */) {
    // References
    // -> long GarbageBlockBaseSfx_R;
    // -> long GarbageBlockBaseSfx_L;
    // -> unsigned char DolbyEnabled;
}

// Range: 0xA0C70 -> 0xA1418
int LoadFairySoundData(signed short music /* r1+0x8 */, signed short fairy1 /* r27 */, signed short fairy2 /* r28 */) {
    // Local variables
    int current1PBank; // r29
    int current2PBank; // r1+0x8

    // References
    // -> static signed short DangerMusicBgmIndex_ScoreAttack;
    // -> static signed short NormalMusicBgmIndex_ScoreAttack;
    // -> static signed short DangerMusicBgmIndex;
    // -> static signed short NormalMusicBgmIndex;
    // -> unsigned char TenSecond;
    // -> static char initgameBool;
    // -> static char crossfadeBool;
    // -> static signed short ts_old_alert;
    // -> static signed short ts_current_alert;
    // -> signed short ts_timer_counter;
    // -> static signed short ts_ok_start_timer;
}

// Range: 0xA1418 -> 0xA1BC0
int pon_LoadFairySoundData4p(signed short music /* r1+0x8 */, signed short fairy1 /* r27 */, signed short fairy2 /* r28 */) {
    // Local variables
    int current1PBank; // r29
    int current2PBank; // r1+0x8

    // References
    // -> static signed short DangerMusicBgmIndex_ScoreAttack;
    // -> static signed short NormalMusicBgmIndex_ScoreAttack;
    // -> static signed short DangerMusicBgmIndex;
    // -> static signed short NormalMusicBgmIndex;
    // -> unsigned char TenSecond;
    // -> static char initgameBool;
    // -> static char crossfadeBool;
    // -> static signed short ts_old_alert;
    // -> static signed short ts_current_alert;
    // -> signed short ts_timer_counter;
    // -> static signed short ts_ok_start_timer;
}

long last_song_handle; // size: 0x4, address: 0xF46E8
struct SongInitStruct {
    // total size: 0x4
    unsigned char bankRef; // offset 0x0, size 0x1
    unsigned char vol; // offset 0x1, size 0x1
    unsigned char pan; // offset 0x2, size 0x1
    unsigned char tempo; // offset 0x3, size 0x1
};
struct SongInitStruct BGM_INIT_TABLE[91]; // size: 0x16C, address: 0xAF7F0
int gMain; // size: 0x4, address: 0xDF59C
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
// Range: 0xA1BC0 -> 0xA1D90
int PlayGameSong(struct tetWell * well /* r1+0x8 */) {
    // References
    // -> static signed short ts_song_buffer;
    // -> static char crossfadeBool;
    // -> static signed short ts_ok_start_timer;
    // -> static signed short ts_song_index;
    // -> struct SongInitStruct BGM_INIT_TABLE[91];
    // -> signed short ts_timer_counter;
    // -> int gMain;
    // -> static signed short NormalMusicBgmIndex;
    // -> long last_song_handle;
    // -> static signed short DangerMusicBgmIndex;
    // -> static signed short ts_current_alert;
    // -> static signed short NormalMusicBgmIndex_ScoreAttack;
    // -> static signed short DangerMusicBgmIndex_ScoreAttack;
    // -> unsigned char TenSecond;
    // -> static signed short ts_old_alert;
    // -> static char initgameBool;
}

// Range: 0xA1D90 -> 0xA1ED0
int GetLoadSongNumber(int songnum /* r3 */) {}

signed short last_tune_buffer; // size: 0x2, address: 0xF46EC
// Range: 0xA1ED0 -> 0xA1F80
long PlayGameMusicTest(long song_index /* r30 */) {
    // Local variables
    int songbuffer; // r31
    int song_load_index; // r3

    // References
    // -> signed short last_tune_buffer;
    // -> struct SongInitStruct BGM_INIT_TABLE[91];
}

static int sfxtest_currentSfx$306; // size: 0x4, address: 0xDF83C
static int sfxtest_bankArray$307; // size: 0x4, address: 0x116FB8
static int sfxtest_bankIndex$308; // size: 0x4, address: 0x116FBC
static signed short sfxtest_sfxArray$309[200]; // size: 0x190, address: 0xDF840
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
// Range: 0xA1F80 -> 0xA229C
long PlayGameSfxTest(long sfx_index /* r29 */) {
    // References
    // -> static int sfxtest_currentSfx$306;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int sfxtest_bankIndex$308;
    // -> static int sfxtest_bankArray$307;
    // -> static signed short sfxtest_sfxArray$309[200];
}

unsigned char GameEndBool; // size: 0x1, address: 0x116FC0

