/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\record.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0002AB38 -> 0x0002E048
*/
unsigned short mess_panel_tex_size[4]; // size: 0x8, address: 0x1DD70
unsigned short mess_panel_lut[256]; // size: 0x200, address: 0x1DD78
unsigned char mess_panel_tex[15456]; // size: 0x3C60, address: 0x1DF78
static char eeprom_header[4]; // size: 0x4, address: 0x1400
static char eeprom_header_bits[4]; // size: 0x4, address: 0x1404
// Erased
static void BitField_Attach(struct BitField * st /* r1+0x0 */, void * buf /* r1+0x4 */, int size /* r1+0x8 */) {}

// Erased
static void BitField_Init(struct BitField * st /* r29 */, void * buf /* r30 */, int size /* r31 */) {}

// Range: 0x2AB38 -> 0x2AD28
static void BitField_PutBit(struct BitField * st /* r1+0x0 */, int count /* r1+0x4 */, unsigned long bits /* r1+0x8 */) {
    // Local variables
    int i; // r11
}

// Range: 0x2AD28 -> 0x2AEE8
static unsigned long BitField_GetBit(struct BitField * st /* r1+0x0 */, int count /* r1+0x4 */) {
    // Local variables
    unsigned long bits; // r8
    int i; // r9
}

// Range: 0x2AEE8 -> 0x2AF60
void dm_init_config_save(struct_dm_game_main_c_13768 * config /* r1+0x0 */) {}

// Erased
static void dm_init_config_4p_save(struct_record_c_66 * config /* r1+0x0 */) {}

// Erased
static void dm_init_story_save(struct_record_c_74 * st /* r1+0x0 */) {}

// Erased
static void dm_init_level_save(struct_record_c_81 * st /* r1+0x0 */) {}

// Erased
static void dm_init_taiQ_save(struct_record_c_88 * st /* r1+0x0 */) {}

// Erased
static void dm_init_timeAt_save(struct_record_c_96 * st /* r1+0x0 */) {}

int evs_default_name[]; // size: 0x0, address: 0x1909C
// Range: 0x2AF60 -> 0x2B0A0
void dm_init_save_mem(struct_dm_game_main_c_10035 * mem /* r29 */) {
    // Local variables
    int i; // r1+0x8
    int j; // r1+0x8

    // References
    // -> int evs_default_name[];
}

static char _defName$233[8]; // size: 0x8, address: 0x1408
unsigned char evs_stereo; // size: 0x1, address: 0x4878
@enum$106dm_title_main_c;
@enum$106dm_title_main_c evs_gamesel; // size: 0x4, address: 0x190B8
unsigned char evs_secret_flg[]; // size: 0x0, address: 0x4884
unsigned char evs_level_21; // size: 0x1, address: 0x18F94
int evs_vs_count; // size: 0x4, address: 0x4888
unsigned char evs_score_flag; // size: 0x1, address: 0x487F
// Range: 0x2B0A0 -> 0x2B190
void dm_init_system_mem() {
    // Local variables
    int i; // r29

    // References
    // -> unsigned char evs_score_flag;
    // -> int evs_vs_count;
    // -> unsigned char evs_level_21;
    // -> unsigned char evs_secret_flg[];
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> unsigned char evs_stereo;
    // -> int evs_default_name[];
    // -> static char _defName$233[8];
}

struct_dm_game_main_c_10035 evs_mem_data[9]; // size: 0x750, address: 0x549C0
// Range: 0x2B190 -> 0x2B280
void dm_story_sort_set(int player_no /* r1+0x0 */, int char_no /* r1+0x4 */, int g_level /* r1+0x8 */, int score /* r6 */, int time /* r11 */, int c_stage /* r1+0x14 */, int ignoreFlag /* r1+0x18 */) {
    // Local variables
    struct_dm_game_main_c_10035 * mc; // r10
    struct_record_c_74 * ms; // r1+0x0
    int hi; // r1+0x0
    int lo; // r9

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2B280 -> 0x2B2C8
void dm_level_sort_set(int player_no /* r1+0x0 */, int g_speed /* r1+0x4 */, int score /* r5 */, int c_level /* r6 */) {
    // Local variables
    struct_record_c_81 * ml; // r1+0x0
    int hi; // r1+0x0
    int lo; // r4

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2B2C8 -> 0x2B340
void dm_taiQ_sort_set(int player_no /* r1+0x0 */, int dif /* r1+0x4 */, int score /* r5 */, int time /* r6 */) {
    // Local variables
    struct_record_c_88 * tq; // r4
    int hi; // r3
    int lo; // r6

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2B340 -> 0x2B3CC
void dm_timeAt_sort_set(int player_no /* r1+0x0 */, int dif /* r1+0x4 */, int score /* r5 */, int time /* r9 */, int erase /* r7 */) {
    // Local variables
    struct_record_c_96 * ta; // r4
    int hi; // r6
    int lo; // r8

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2B3CC -> 0x2B410
void dm_vscom_set(int player_no /* r1+0x0 */, int win /* r1+0x4 */, int lose /* r1+0x8 */) {
    // Local variables
    struct_dm_game_main_c_10035 * mc; // r1+0x0

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2B410 -> 0x2B454
void dm_vc_fl_set(int player_no /* r1+0x0 */, int win /* r1+0x4 */, int lose /* r1+0x8 */) {
    // Local variables
    struct_dm_game_main_c_10035 * mc; // r1+0x0

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2B454 -> 0x2B498
void dm_vsman_set(int player_no /* r1+0x0 */, int win /* r1+0x4 */, int lose /* r1+0x8 */) {
    // Local variables
    struct_dm_game_main_c_10035 * mc; // r1+0x0

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2B498 -> 0x2B4DC
void dm_vm_fl_set(int player_no /* r1+0x0 */, int win /* r1+0x4 */, int lose /* r1+0x8 */) {
    // Local variables
    struct_dm_game_main_c_10035 * mc; // r1+0x0

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2B4DC -> 0x2B520
void dm_vm_ta_set(int player_no /* r1+0x0 */, int win /* r1+0x4 */, int lose /* r1+0x8 */) {
    // Local variables
    struct_dm_game_main_c_10035 * mc; // r1+0x0

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

struct SRankSortInfo {
    // total size: 0x160
    unsigned char story_sort[3][8]; // offset 0x0, size 0x18
    unsigned char story_rank[3][8]; // offset 0x18, size 0x18
    unsigned char level_sort[3][8]; // offset 0x30, size 0x18
    unsigned char level_rank[3][8]; // offset 0x48, size 0x18
    unsigned char taiQ_sort[3][8]; // offset 0x60, size 0x18
    unsigned char taiQ_rank[3][8]; // offset 0x78, size 0x18
    unsigned char timeAt_sort[3][8]; // offset 0x90, size 0x18
    unsigned char timeAt_rank[3][8]; // offset 0xA8, size 0x18
    unsigned char vscom_sort[8]; // offset 0xC0, size 0x8
    unsigned char vscom_rank[8]; // offset 0xC8, size 0x8
    unsigned short vscom_ave[8]; // offset 0xD0, size 0x10
    unsigned char vc_fl_sort[8]; // offset 0xE0, size 0x8
    unsigned char vc_fl_rank[8]; // offset 0xE8, size 0x8
    unsigned short vc_fl_ave[8]; // offset 0xF0, size 0x10
    unsigned char vsman_sort[8]; // offset 0x100, size 0x8
    unsigned char vsman_rank[8]; // offset 0x108, size 0x8
    unsigned short vsman_ave[8]; // offset 0x110, size 0x10
    unsigned char vm_fl_sort[8]; // offset 0x120, size 0x8
    unsigned char vm_fl_rank[8]; // offset 0x128, size 0x8
    unsigned short vm_fl_ave[8]; // offset 0x130, size 0x10
    unsigned char vm_ta_sort[8]; // offset 0x140, size 0x8
    unsigned char vm_ta_rank[8]; // offset 0x148, size 0x8
    unsigned short vm_ta_ave[8]; // offset 0x150, size 0x10
};
@enum$362record_c;
// Erased
static unsigned char * _get1PSort(struct SRankSortInfo * st /* r1+0x0 */, @enum$362record_c mode /* r1+0x4 */, int level /* r1+0x8 */) {
    // Local variables
    unsigned char * ptr; // r1+0x0
}

// Erased
static unsigned char * _get1PRank(struct SRankSortInfo * st /* r1+0x0 */, @enum$362record_c mode /* r1+0x4 */, int level /* r1+0x8 */) {
    // Local variables
    unsigned char * ptr; // r1+0x0
}

@enum$110dm_title_main_c;
// Range: 0x2B520 -> 0x2B674
static @enum$110dm_title_main_c _get1PLess(struct_dm_game_main_c_10035 * mc1 /* r1+0x0 */, struct_dm_game_main_c_10035 * mc2 /* r1+0x4 */, @enum$362record_c mode /* r1+0x8 */, int level /* r1+0xC */) {
    // Local variables
    int hi; // r7
    int lo; // r8
    struct_record_c_74 * story1; // r1+0x0
    struct_record_c_74 * story2; // r1+0x0
    struct_record_c_81 * level1; // r1+0x0
    struct_record_c_81 * level2; // r1+0x0
    struct_record_c_88 * taiQ1; // r1+0x0
    struct_record_c_88 * taiQ2; // r1+0x0
    struct_record_c_96 * timeAt1; // r1+0x0
    struct_record_c_96 * timeAt2; // r1+0x0
}

// Range: 0x2B674 -> 0x2B89C
static void _sort1PMode(struct SRankSortInfo * st /* r1+0x8 */, @enum$362record_c mode /* r23 */, int level /* r24 */) {
    // Local variables
    struct_dm_game_main_c_10035 * mc; // r1+0x8
    unsigned char * sort; // r1+0x8
    int i; // r26
    int j; // r25
    int rankNo; // r26
    int hi; // r21
    int lo; // r20
    unsigned char temp; // r3

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2B89C -> 0x2B8EC
void dm_data_mode_story_sort(struct SRankSortInfo * st /* r30 */) {
    // Local variables
    int i; // r31
}

// Range: 0x2B8EC -> 0x2B93C
void dm_data_mode_level_sort(struct SRankSortInfo * st /* r30 */) {
    // Local variables
    int i; // r31
}

// Range: 0x2B93C -> 0x2B98C
void dm_data_mode_taiQ_sort(struct SRankSortInfo * st /* r30 */) {
    // Local variables
    int i; // r31
}

// Range: 0x2B98C -> 0x2B9DC
void dm_data_mode_timeAt_sort(struct SRankSortInfo * st /* r30 */) {
    // Local variables
    int i; // r31
}

@enum$494record_c;
// Erased
static unsigned short * _getVsResult(struct_dm_game_main_c_10035 * mc /* r1+0x0 */, @enum$494record_c mode /* r1+0x4 */) {
    // Local variables
    unsigned short * ptr; // r1+0x0
}

// Erased
static unsigned char * _getVsSort(struct SRankSortInfo * st /* r1+0x0 */, @enum$494record_c mode /* r1+0x4 */) {
    // Local variables
    unsigned char * ptr; // r1+0x0
}

// Erased
static unsigned char * _getVsRank(struct SRankSortInfo * st /* r1+0x0 */, @enum$494record_c mode /* r1+0x4 */) {
    // Local variables
    unsigned char * ptr; // r1+0x0
}

// Erased
static unsigned short * _getVsAve(struct SRankSortInfo * st /* r1+0x0 */, @enum$494record_c mode /* r1+0x4 */) {
    // Local variables
    unsigned short * ptr; // r1+0x0
}

// Range: 0x2B9DC -> 0x2BDE4
static void _sortVsMode(struct SRankSortInfo * st /* r1+0x8 */, @enum$494record_c mode /* r1+0xC */) {
    // Local variables
    struct_dm_game_main_c_10035 * mc; // r5
    int i; // r31
    int j; // r31
    int aveVal; // r5
    int rankNo; // r6
    int hi; // r3
    int lo; // r1+0x8

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2BDE4 -> 0x2BE08
void dm_data_vscom_sort(struct SRankSortInfo * st /* r3 */) {}

// Range: 0x2BE08 -> 0x2BE2C
void dm_data_vc_fl_sort(struct SRankSortInfo * st /* r3 */) {}

// Range: 0x2BE2C -> 0x2BE50
void dm_data_vsman_sort(struct SRankSortInfo * st /* r3 */) {}

// Range: 0x2BE50 -> 0x2BE74
void dm_data_vm_fl_sort(struct SRankSortInfo * st /* r3 */) {}

// Range: 0x2BE74 -> 0x2BE98
void dm_data_vm_ta_sort(struct SRankSortInfo * st /* r3 */) {}

// Erased
static void fontName_getRange(const unsigned char * name /* r1+0x0 */, int * offset /* r1+0x4 */, int * size /* r1+0x8 */) {
    // Local variables
    int i; // r7
    int start; // r8
    int end; // r9
}

// Erased
static void RecSystem_Compress(struct BitField * bf /* r1+0x0 */) {
    // References
    // -> unsigned char evs_score_flag;
    // -> int evs_vs_count;
    // -> unsigned char evs_level_21;
    // -> unsigned char evs_secret_flg[];
    // -> unsigned char evs_stereo;
}

// Erased
static void RecSystem_Extract(struct BitField * bf /* r1+0x8 */) {
    // References
    // -> unsigned char evs_stereo;
    // -> unsigned char evs_score_flag;
    // -> int evs_vs_count;
    // -> unsigned char evs_level_21;
    // -> unsigned char evs_secret_flg[];
}

// Erased
static void RecPlayer_Compress(struct BitField * bf /* r1+0x0 */, int num /* r1+0x4 */) {
    // Local variables
    struct_dm_game_main_c_10035 * player; // r1+0x0
    int i; // r5

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void RecPlayer_Extract(struct BitField * bf /* r1+0x0 */, int num /* r1+0x4 */) {
    // Local variables
    struct_dm_game_main_c_10035 * player; // r4
    int i; // r5

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2BE98 -> 0x2C36C
static void RecStory_Compress(struct BitField * bf /* r1+0x8 */, int num /* r1+0xC */) {
    // Local variables
    struct_dm_game_main_c_10035 * player; // r31
    int i; // r1+0x8
    int j; // r1+0x8
    struct_record_c_74 * story; // r6

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2C36C -> 0x2C7C4
static void RecStory_Extract(struct BitField * bf /* r1+0x0 */, int num /* r1+0x4 */) {
    // Local variables
    struct_dm_game_main_c_10035 * player; // r11
    int i; // r1+0x0
    int j; // r1+0x0
    struct_record_c_74 * story; // r6

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void RecLevel_Compress(struct BitField * bf /* r1+0x8 */, int num /* r1+0xC */) {
    // Local variables
    int i; // r5
    struct_record_c_81 * level; // r31

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void RecLevel_Extract(struct BitField * bf /* r1+0x0 */, int num /* r1+0x4 */) {
    // Local variables
    int i; // r5
    struct_record_c_81 * level; // r6

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void RecLevelTaiQ_Compress(struct BitField * bf /* r1+0x8 */, int num /* r1+0xC */) {
    // Local variables
    int i; // r5
    struct_record_c_88 * taiQ; // r31

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void RecLevelTaiQ_Extract(struct BitField * bf /* r1+0x0 */, int num /* r1+0x4 */) {
    // Local variables
    int i; // r5
    struct_record_c_88 * taiQ; // r6

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void RecLevelTimeAT_Compress(struct BitField * bf /* r1+0x8 */, int num /* r1+0xC */) {
    // Local variables
    int i; // r5
    struct_record_c_96 * timeAt; // r6

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void RecLevelTimeAT_Extract(struct BitField * bf /* r1+0x0 */, int num /* r1+0x4 */) {
    // Local variables
    int i; // r5
    struct_record_c_96 * timeAt; // r6

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void RecVsCom_Compress(struct BitField * bf /* r1+0x0 */, int num /* r1+0x4 */) {
    // Local variables
    int i; // r11

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void RecVsCom_Extract(struct BitField * bf /* r1+0x0 */, int num /* r1+0x4 */) {
    // Local variables
    int i; // r9

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void RecVsComFlash_Compress(struct BitField * bf /* r1+0x0 */, int num /* r1+0x4 */) {
    // Local variables
    int i; // r11

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void RecVsComFlash_Extract(struct BitField * bf /* r1+0x0 */, int num /* r1+0x4 */) {
    // Local variables
    int i; // r9

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void RecVsMan_Compress(struct BitField * bf /* r1+0x0 */, int num /* r1+0x4 */) {
    // Local variables
    int i; // r11

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void RecVsMan_Extract(struct BitField * bf /* r1+0x0 */, int num /* r1+0x4 */) {
    // Local variables
    int i; // r9

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void RecVsManFlash_Compress(struct BitField * bf /* r1+0x0 */, int num /* r1+0x4 */) {
    // Local variables
    int i; // r11

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void RecVsManFlash_Extract(struct BitField * bf /* r1+0x0 */, int num /* r1+0x4 */) {
    // Local variables
    int i; // r9

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void RecVsManTimeAT_Compress(struct BitField * bf /* r1+0x0 */, int num /* r1+0x4 */) {
    // Local variables
    int i; // r11

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void RecVsManTimeAT_Extract(struct BitField * bf /* r1+0x0 */, int num /* r1+0x4 */) {
    // Local variables
    int i; // r9

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2C7C4 -> 0x2CFF4
static void RecAll_Compress(struct BitField * bf /* r31 */) {
    // Local variables
    int i; // r27
    int sum; // r1+0x8

    // References
    // -> static char eeprom_header_bits[4];
    // -> static char eeprom_header[4];
    // -> struct [anonymous] evs_mem_data[9];
    // -> unsigned char evs_score_flag;
    // -> int evs_vs_count;
    // -> unsigned char evs_level_21;
    // -> unsigned char evs_secret_flg[];
    // -> unsigned char evs_stereo;
}

// Range: 0x2CFF4 -> 0x2D7A0
static int RecAll_Extract(struct BitField * bf /* r27 */, char * header /* r28 */) {
    // Local variables
    int i; // r30
    int sum; // r8
    int bad; // r29

    // References
    // -> static char eeprom_header_bits[4];
    // -> struct [anonymous] evs_mem_data[9];
    // -> unsigned char evs_stereo;
    // -> unsigned char evs_score_flag;
    // -> int evs_vs_count;
    // -> unsigned char evs_level_21;
    // -> unsigned char evs_secret_flg[];
}

enum EepRomErr {
    EepRomErr_NoError = 0,
    EepRomErr_NotFound = 1,
    EepRomErr_NotInit = 2,
    EepRomErr_ReadError = 3,
    EepRomErr_WriteError = 4,
    EepRomErr_BadSum = 5,
};
// Range: 0x2D7A0 -> 0x2D7F4
enum EepRomErr EepRom_Init() {}

// Range: 0x2D7F4 -> 0x2D878
enum EepRomErr EepRom_InitFirst(void (* proc)(void *) /* r29 */, int (* proc2)(void *) /* r30 */, void * args /* r31 */) {}

struct_record_c_66 evs_cfg_4p; // size: 0x16, address: 0x55110
// Range: 0x2D878 -> 0x2D948
void EepRom_InitVars() {
    // Local variables
    int i; // r29

    // References
    // -> struct [anonymous] evs_mem_data[9];
    // -> struct [anonymous] evs_cfg_4p;
}

static @enum$110dm_title_main_c _cached$1332; // size: 0x4, address: 0x55128
static unsigned char _cache$1333[512]; // size: 0x200, address: 0x55140
unsigned char * eeprom_bufferp; // size: 0x4, address: 0xC
// Erased
static unsigned char * eepRom_longRead(@enum$110dm_title_main_c forceRead /* r1+0x8 */) {
    // Local variables
    long res; // r3

    // References
    // -> static unsigned char _cache$1333[512];
    // -> static @enum$110dm_title_main_c _cached$1332;
    // -> unsigned char * eeprom_bufferp;
}

// Erased
static int aaa() {}

// Range: 0x2D948 -> 0x2DAB0
static long EepRom_WriteDif(void * oldBuf /* r28 */, void * newBuf /* r27 */, int size /* r23 */, void (* proc)(void *) /* r24 */, int (* proc2)(void *) /* r25 */, void * args /* r26 */) {
    // Local variables
    unsigned char * oldPtr; // r30
    unsigned char * newPtr; // r29
    int count; // r28
    int write; // r27
    int vThread; // r1+0x8

    // References
    // -> unsigned char * eeprom_bufferp;
}

struct BitField {
    // total size: 0x14
    unsigned char * buf; // offset 0x0, size 0x4
    int bufSiz; // offset 0x4, size 0x4
    int bufIdx; // offset 0x8, size 0x4
    int bitIdx; // offset 0xC, size 0x4
    unsigned long sum; // offset 0x10, size 0x4
};
// Range: 0x2DAB0 -> 0x2DC14
enum EepRomErr EepRom_ReadAll() {
    // Local variables
    struct BitField bf; // r1+0x14
    unsigned char header[4]; // r1+0xC
    int bad; // r1+0x8
    int mCvalue; // r30

    // References
    // -> static char eeprom_header[4];
    // -> static unsigned char _cache$1333[512];
    // -> static @enum$110dm_title_main_c _cached$1332;
    // -> unsigned char * eeprom_bufferp;
}

// Range: 0x2DC14 -> 0x2DDA4
enum EepRomErr EepRom_WriteAll(void (* proc)(void *) /* r28 */, int (* proc2)(void *) /* r29 */, void * args /* r30 */) {
    // Local variables
    struct BitField bf; // r1+0x218
    unsigned char * in; // r26
    unsigned char out[512]; // r1+0x18
    long res; // r31
    int mCvalue; // r1+0x8

    // References
    // -> static unsigned char _cache$1333[512];
    // -> static @enum$110dm_title_main_c _cached$1332;
    // -> unsigned char * eeprom_bufferp;
}

// Range: 0x2DDA4 -> 0x2DDA8
void EepRom_DumpErrMes() {}

// Range: 0x2DDA8 -> 0x2DDAC
void EepRom_DumpDataSize() {}

// Range: 0x2DDAC -> 0x2DE0C
void RecWritingMsg_init(struct_record_c_1843 * st /* r31 */, void * heap /* r4 */) {}

// Range: 0x2DE0C -> 0x2DE58
void RecWritingMsg_setStr(struct_record_c_1843 * st /* r30 */, const unsigned char * str /* r31 */) {}

// Range: 0x2DE58 -> 0x2DEA0
void RecWritingMsg_calc(struct_record_c_1843 * st /* r31 */) {}

union_drmario_gc_c_202 normal_texture_init_dl[]; // size: 0x0, address: 0x4208
// Range: 0x2DEA0 -> 0x2E004
void RecWritingMsg_draw(struct_record_c_1843 * st /* r28 */, union_drmario_gc_c_202 * * gpp /* r29 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x18
    int w; // r1+0x10
    int h; // r1+0x10
    union_drmario_gc_c_202 * _g; // r1+0x10

    // References
    // -> unsigned char mess_panel_tex[15456];
    // -> unsigned short mess_panel_lut[256];
    // -> unsigned short mess_panel_tex_size[4];
    // -> union [anonymous] normal_texture_init_dl[];
}

// Range: 0x2E004 -> 0x2E010
void RecWritingMsg_start(struct_record_c_1843 * st /* r1+0x0 */) {}

// Range: 0x2E010 -> 0x2E01C
void RecWritingMsg_end(struct_record_c_1843 * st /* r1+0x0 */) {}

// Range: 0x2E01C -> 0x2E038
int RecWritingMsg_isEnd(struct_record_c_1843 * st /* r1+0x0 */) {}

// Range: 0x2E038 -> 0x2E044
void RecWritingMsg_setPos(struct_record_c_1843 * st /* r1+0x0 */, int x /* r1+0x4 */, int y /* r1+0x8 */) {}

// Range: 0x2E044 -> 0x2E048
void setSleepTimer() {}


