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
void dm_init_config_save(struct {
    // total size: 0x1A
    unsigned char st_lv; // offset 0x0, size 0x1
    unsigned char st_sh; // offset 0x1, size 0x1
    unsigned char st_st; // offset 0x2, size 0x1
    unsigned char st_no; // offset 0x3, size 0x1
    unsigned char p1_lv; // offset 0x4, size 0x1
    unsigned char p1_sp; // offset 0x5, size 0x1
    unsigned char p1_m; // offset 0x6, size 0x1
    unsigned char p1_ta_lv; // offset 0x7, size 0x1
    unsigned char p1_tq_lv; // offset 0x8, size 0x1
    unsigned char vc_fl_lv[2]; // offset 0x9, size 0x2
    unsigned char vc_lv[2]; // offset 0xB, size 0x2
    unsigned char vc_sp[2]; // offset 0xD, size 0x2
    unsigned char vc_no[2]; // offset 0xF, size 0x2
    unsigned char vc_st; // offset 0x11, size 0x1
    unsigned char vc_m; // offset 0x12, size 0x1
    unsigned char vm_fl_lv; // offset 0x13, size 0x1
    unsigned char vm_ta_lv; // offset 0x14, size 0x1
    unsigned char vm_lv; // offset 0x15, size 0x1
    unsigned char vm_sp; // offset 0x16, size 0x1
    unsigned char vm_no; // offset 0x17, size 0x1
    unsigned char vm_st; // offset 0x18, size 0x1
    unsigned char vm_m; // offset 0x19, size 0x1
} * config /* r1+0x0 */) {}

int evs_default_name[]; // size: 0x0, address: 0x1909C
// Range: 0x2AF60 -> 0x2B0A0
void dm_init_save_mem(struct {
    // total size: 0xD0
    unsigned char mem_use_flg; // offset 0x0, size 0x1
    unsigned char mem_name[4]; // offset 0x1, size 0x4
    int clear_stage[4][2]; // offset 0x8, size 0x20
    struct {
        // total size: 0xC
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
        unsigned char c_stage; // offset 0x8, size 0x1
    } story_data[3]; // offset 0x28, size 0x24
    struct {
        // total size: 0x8
        unsigned long score; // offset 0x0, size 0x4
        unsigned char c_level; // offset 0x4, size 0x1
    } level_data[3]; // offset 0x4C, size 0x18
    struct {
        // total size: 0x8
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
    } taiQ_data[3]; // offset 0x64, size 0x18
    struct {
        // total size: 0xC
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
        unsigned char erase; // offset 0x8, size 0x1
    } timeAt_data[3]; // offset 0x7C, size 0x24
    unsigned short vscom_data[2]; // offset 0xA0, size 0x4
    unsigned short vc_fl_data[2]; // offset 0xA4, size 0x4
    unsigned short vsman_data[2]; // offset 0xA8, size 0x4
    unsigned short vm_fl_data[2]; // offset 0xAC, size 0x4
    unsigned short vm_ta_data[2]; // offset 0xB0, size 0x4
    struct {
        // total size: 0x1A
        unsigned char st_lv; // offset 0x0, size 0x1
        unsigned char st_sh; // offset 0x1, size 0x1
        unsigned char st_st; // offset 0x2, size 0x1
        unsigned char st_no; // offset 0x3, size 0x1
        unsigned char p1_lv; // offset 0x4, size 0x1
        unsigned char p1_sp; // offset 0x5, size 0x1
        unsigned char p1_m; // offset 0x6, size 0x1
        unsigned char p1_ta_lv; // offset 0x7, size 0x1
        unsigned char p1_tq_lv; // offset 0x8, size 0x1
        unsigned char vc_fl_lv[2]; // offset 0x9, size 0x2
        unsigned char vc_lv[2]; // offset 0xB, size 0x2
        unsigned char vc_sp[2]; // offset 0xD, size 0x2
        unsigned char vc_no[2]; // offset 0xF, size 0x2
        unsigned char vc_st; // offset 0x11, size 0x1
        unsigned char vc_m; // offset 0x12, size 0x1
        unsigned char vm_fl_lv; // offset 0x13, size 0x1
        unsigned char vm_ta_lv; // offset 0x14, size 0x1
        unsigned char vm_lv; // offset 0x15, size 0x1
        unsigned char vm_sp; // offset 0x16, size 0x1
        unsigned char vm_no; // offset 0x17, size 0x1
        unsigned char vm_st; // offset 0x18, size 0x1
        unsigned char vm_m; // offset 0x19, size 0x1
    } config; // offset 0xB4, size 0x1A
} * mem /* r29 */) {
    // Local variables
    int i; // r1+0x8
    int j; // r1+0x8

    // References
    // -> int evs_default_name[];
}

static char _defName$233[8]; // size: 0x8, address: 0x1408
unsigned char evs_stereo; // size: 0x1, address: 0x4878
enum /* @enum$96record_c */ {
    GSL_1PLAY = 0,
    GSL_2PLAY = 1,
    GSL_4PLAY = 2,
    GSL_VSCPU = 3,
    GSL_1DEMO = 4,
    GSL_2DEMO = 5,
    GSL_4DEMO = 6,
    GSL_MAX = 7,
};
enum /* @enum$96record_c */ {
    GSL_1PLAY = 0,
    GSL_2PLAY = 1,
    GSL_4PLAY = 2,
    GSL_VSCPU = 3,
    GSL_1DEMO = 4,
    GSL_2DEMO = 5,
    GSL_4DEMO = 6,
    GSL_MAX = 7,
} evs_gamesel; // size: 0x4, address: 0x190B8
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
    // -> enum /* @enum$96record_c */ {
    GSL_1PLAY = 0,
    GSL_2PLAY = 1,
    GSL_4PLAY = 2,
    GSL_VSCPU = 3,
    GSL_1DEMO = 4,
    GSL_2DEMO = 5,
    GSL_4DEMO = 6,
    GSL_MAX = 7,
} evs_gamesel;
    // -> unsigned char evs_stereo;
    // -> int evs_default_name[];
    // -> static char _defName$233[8];
}

struct {
    // total size: 0xD0
    unsigned char mem_use_flg; // offset 0x0, size 0x1
    unsigned char mem_name[4]; // offset 0x1, size 0x4
    int clear_stage[4][2]; // offset 0x8, size 0x20
    struct {
        // total size: 0xC
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
        unsigned char c_stage; // offset 0x8, size 0x1
    } story_data[3]; // offset 0x28, size 0x24
    struct {
        // total size: 0x8
        unsigned long score; // offset 0x0, size 0x4
        unsigned char c_level; // offset 0x4, size 0x1
    } level_data[3]; // offset 0x4C, size 0x18
    struct {
        // total size: 0x8
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
    } taiQ_data[3]; // offset 0x64, size 0x18
    struct {
        // total size: 0xC
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
        unsigned char erase; // offset 0x8, size 0x1
    } timeAt_data[3]; // offset 0x7C, size 0x24
    unsigned short vscom_data[2]; // offset 0xA0, size 0x4
    unsigned short vc_fl_data[2]; // offset 0xA4, size 0x4
    unsigned short vsman_data[2]; // offset 0xA8, size 0x4
    unsigned short vm_fl_data[2]; // offset 0xAC, size 0x4
    unsigned short vm_ta_data[2]; // offset 0xB0, size 0x4
    struct {
        // total size: 0x1A
        unsigned char st_lv; // offset 0x0, size 0x1
        unsigned char st_sh; // offset 0x1, size 0x1
        unsigned char st_st; // offset 0x2, size 0x1
        unsigned char st_no; // offset 0x3, size 0x1
        unsigned char p1_lv; // offset 0x4, size 0x1
        unsigned char p1_sp; // offset 0x5, size 0x1
        unsigned char p1_m; // offset 0x6, size 0x1
        unsigned char p1_ta_lv; // offset 0x7, size 0x1
        unsigned char p1_tq_lv; // offset 0x8, size 0x1
        unsigned char vc_fl_lv[2]; // offset 0x9, size 0x2
        unsigned char vc_lv[2]; // offset 0xB, size 0x2
        unsigned char vc_sp[2]; // offset 0xD, size 0x2
        unsigned char vc_no[2]; // offset 0xF, size 0x2
        unsigned char vc_st; // offset 0x11, size 0x1
        unsigned char vc_m; // offset 0x12, size 0x1
        unsigned char vm_fl_lv; // offset 0x13, size 0x1
        unsigned char vm_ta_lv; // offset 0x14, size 0x1
        unsigned char vm_lv; // offset 0x15, size 0x1
        unsigned char vm_sp; // offset 0x16, size 0x1
        unsigned char vm_no; // offset 0x17, size 0x1
        unsigned char vm_st; // offset 0x18, size 0x1
        unsigned char vm_m; // offset 0x19, size 0x1
    } config; // offset 0xB4, size 0x1A
} evs_mem_data[9]; // size: 0x750, address: 0x549C0
// Range: 0x2B190 -> 0x2B280
void dm_story_sort_set(int player_no /* r1+0x0 */, int char_no /* r1+0x4 */, int g_level /* r1+0x8 */, int score /* r6 */, int time /* r11 */, int c_stage /* r1+0x14 */, int ignoreFlag /* r1+0x18 */) {
    // Local variables
    struct {
        // total size: 0xD0
        unsigned char mem_use_flg; // offset 0x0, size 0x1
        unsigned char mem_name[4]; // offset 0x1, size 0x4
        int clear_stage[4][2]; // offset 0x8, size 0x20
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char c_stage; // offset 0x8, size 0x1
        } story_data[3]; // offset 0x28, size 0x24
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned char c_level; // offset 0x4, size 0x1
        } level_data[3]; // offset 0x4C, size 0x18
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
        } taiQ_data[3]; // offset 0x64, size 0x18
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char erase; // offset 0x8, size 0x1
        } timeAt_data[3]; // offset 0x7C, size 0x24
        unsigned short vscom_data[2]; // offset 0xA0, size 0x4
        unsigned short vc_fl_data[2]; // offset 0xA4, size 0x4
        unsigned short vsman_data[2]; // offset 0xA8, size 0x4
        unsigned short vm_fl_data[2]; // offset 0xAC, size 0x4
        unsigned short vm_ta_data[2]; // offset 0xB0, size 0x4
        struct {
            // total size: 0x1A
            unsigned char st_lv; // offset 0x0, size 0x1
            unsigned char st_sh; // offset 0x1, size 0x1
            unsigned char st_st; // offset 0x2, size 0x1
            unsigned char st_no; // offset 0x3, size 0x1
            unsigned char p1_lv; // offset 0x4, size 0x1
            unsigned char p1_sp; // offset 0x5, size 0x1
            unsigned char p1_m; // offset 0x6, size 0x1
            unsigned char p1_ta_lv; // offset 0x7, size 0x1
            unsigned char p1_tq_lv; // offset 0x8, size 0x1
            unsigned char vc_fl_lv[2]; // offset 0x9, size 0x2
            unsigned char vc_lv[2]; // offset 0xB, size 0x2
            unsigned char vc_sp[2]; // offset 0xD, size 0x2
            unsigned char vc_no[2]; // offset 0xF, size 0x2
            unsigned char vc_st; // offset 0x11, size 0x1
            unsigned char vc_m; // offset 0x12, size 0x1
            unsigned char vm_fl_lv; // offset 0x13, size 0x1
            unsigned char vm_ta_lv; // offset 0x14, size 0x1
            unsigned char vm_lv; // offset 0x15, size 0x1
            unsigned char vm_sp; // offset 0x16, size 0x1
            unsigned char vm_no; // offset 0x17, size 0x1
            unsigned char vm_st; // offset 0x18, size 0x1
            unsigned char vm_m; // offset 0x19, size 0x1
        } config; // offset 0xB4, size 0x1A
    } * mc; // r10
    struct {
        // total size: 0xC
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
        unsigned char c_stage; // offset 0x8, size 0x1
    } * ms; // r1+0x0
    int hi; // r1+0x0
    int lo; // r9

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2B280 -> 0x2B2C8
void dm_level_sort_set(int player_no /* r1+0x0 */, int g_speed /* r1+0x4 */, int score /* r5 */, int c_level /* r6 */) {
    // Local variables
    struct {
        // total size: 0x8
        unsigned long score; // offset 0x0, size 0x4
        unsigned char c_level; // offset 0x4, size 0x1
    } * ml; // r1+0x0
    int hi; // r1+0x0
    int lo; // r4

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2B2C8 -> 0x2B340
void dm_taiQ_sort_set(int player_no /* r1+0x0 */, int dif /* r1+0x4 */, int score /* r5 */, int time /* r6 */) {
    // Local variables
    struct {
        // total size: 0x8
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
    } * tq; // r4
    int hi; // r3
    int lo; // r6

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2B340 -> 0x2B3CC
void dm_timeAt_sort_set(int player_no /* r1+0x0 */, int dif /* r1+0x4 */, int score /* r5 */, int time /* r9 */, int erase /* r7 */) {
    // Local variables
    struct {
        // total size: 0xC
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
        unsigned char erase; // offset 0x8, size 0x1
    } * ta; // r4
    int hi; // r6
    int lo; // r8

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2B3CC -> 0x2B410
void dm_vscom_set(int player_no /* r1+0x0 */, int win /* r1+0x4 */, int lose /* r1+0x8 */) {
    // Local variables
    struct {
        // total size: 0xD0
        unsigned char mem_use_flg; // offset 0x0, size 0x1
        unsigned char mem_name[4]; // offset 0x1, size 0x4
        int clear_stage[4][2]; // offset 0x8, size 0x20
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char c_stage; // offset 0x8, size 0x1
        } story_data[3]; // offset 0x28, size 0x24
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned char c_level; // offset 0x4, size 0x1
        } level_data[3]; // offset 0x4C, size 0x18
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
        } taiQ_data[3]; // offset 0x64, size 0x18
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char erase; // offset 0x8, size 0x1
        } timeAt_data[3]; // offset 0x7C, size 0x24
        unsigned short vscom_data[2]; // offset 0xA0, size 0x4
        unsigned short vc_fl_data[2]; // offset 0xA4, size 0x4
        unsigned short vsman_data[2]; // offset 0xA8, size 0x4
        unsigned short vm_fl_data[2]; // offset 0xAC, size 0x4
        unsigned short vm_ta_data[2]; // offset 0xB0, size 0x4
        struct {
            // total size: 0x1A
            unsigned char st_lv; // offset 0x0, size 0x1
            unsigned char st_sh; // offset 0x1, size 0x1
            unsigned char st_st; // offset 0x2, size 0x1
            unsigned char st_no; // offset 0x3, size 0x1
            unsigned char p1_lv; // offset 0x4, size 0x1
            unsigned char p1_sp; // offset 0x5, size 0x1
            unsigned char p1_m; // offset 0x6, size 0x1
            unsigned char p1_ta_lv; // offset 0x7, size 0x1
            unsigned char p1_tq_lv; // offset 0x8, size 0x1
            unsigned char vc_fl_lv[2]; // offset 0x9, size 0x2
            unsigned char vc_lv[2]; // offset 0xB, size 0x2
            unsigned char vc_sp[2]; // offset 0xD, size 0x2
            unsigned char vc_no[2]; // offset 0xF, size 0x2
            unsigned char vc_st; // offset 0x11, size 0x1
            unsigned char vc_m; // offset 0x12, size 0x1
            unsigned char vm_fl_lv; // offset 0x13, size 0x1
            unsigned char vm_ta_lv; // offset 0x14, size 0x1
            unsigned char vm_lv; // offset 0x15, size 0x1
            unsigned char vm_sp; // offset 0x16, size 0x1
            unsigned char vm_no; // offset 0x17, size 0x1
            unsigned char vm_st; // offset 0x18, size 0x1
            unsigned char vm_m; // offset 0x19, size 0x1
        } config; // offset 0xB4, size 0x1A
    } * mc; // r1+0x0

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2B410 -> 0x2B454
void dm_vc_fl_set(int player_no /* r1+0x0 */, int win /* r1+0x4 */, int lose /* r1+0x8 */) {
    // Local variables
    struct {
        // total size: 0xD0
        unsigned char mem_use_flg; // offset 0x0, size 0x1
        unsigned char mem_name[4]; // offset 0x1, size 0x4
        int clear_stage[4][2]; // offset 0x8, size 0x20
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char c_stage; // offset 0x8, size 0x1
        } story_data[3]; // offset 0x28, size 0x24
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned char c_level; // offset 0x4, size 0x1
        } level_data[3]; // offset 0x4C, size 0x18
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
        } taiQ_data[3]; // offset 0x64, size 0x18
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char erase; // offset 0x8, size 0x1
        } timeAt_data[3]; // offset 0x7C, size 0x24
        unsigned short vscom_data[2]; // offset 0xA0, size 0x4
        unsigned short vc_fl_data[2]; // offset 0xA4, size 0x4
        unsigned short vsman_data[2]; // offset 0xA8, size 0x4
        unsigned short vm_fl_data[2]; // offset 0xAC, size 0x4
        unsigned short vm_ta_data[2]; // offset 0xB0, size 0x4
        struct {
            // total size: 0x1A
            unsigned char st_lv; // offset 0x0, size 0x1
            unsigned char st_sh; // offset 0x1, size 0x1
            unsigned char st_st; // offset 0x2, size 0x1
            unsigned char st_no; // offset 0x3, size 0x1
            unsigned char p1_lv; // offset 0x4, size 0x1
            unsigned char p1_sp; // offset 0x5, size 0x1
            unsigned char p1_m; // offset 0x6, size 0x1
            unsigned char p1_ta_lv; // offset 0x7, size 0x1
            unsigned char p1_tq_lv; // offset 0x8, size 0x1
            unsigned char vc_fl_lv[2]; // offset 0x9, size 0x2
            unsigned char vc_lv[2]; // offset 0xB, size 0x2
            unsigned char vc_sp[2]; // offset 0xD, size 0x2
            unsigned char vc_no[2]; // offset 0xF, size 0x2
            unsigned char vc_st; // offset 0x11, size 0x1
            unsigned char vc_m; // offset 0x12, size 0x1
            unsigned char vm_fl_lv; // offset 0x13, size 0x1
            unsigned char vm_ta_lv; // offset 0x14, size 0x1
            unsigned char vm_lv; // offset 0x15, size 0x1
            unsigned char vm_sp; // offset 0x16, size 0x1
            unsigned char vm_no; // offset 0x17, size 0x1
            unsigned char vm_st; // offset 0x18, size 0x1
            unsigned char vm_m; // offset 0x19, size 0x1
        } config; // offset 0xB4, size 0x1A
    } * mc; // r1+0x0

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2B454 -> 0x2B498
void dm_vsman_set(int player_no /* r1+0x0 */, int win /* r1+0x4 */, int lose /* r1+0x8 */) {
    // Local variables
    struct {
        // total size: 0xD0
        unsigned char mem_use_flg; // offset 0x0, size 0x1
        unsigned char mem_name[4]; // offset 0x1, size 0x4
        int clear_stage[4][2]; // offset 0x8, size 0x20
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char c_stage; // offset 0x8, size 0x1
        } story_data[3]; // offset 0x28, size 0x24
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned char c_level; // offset 0x4, size 0x1
        } level_data[3]; // offset 0x4C, size 0x18
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
        } taiQ_data[3]; // offset 0x64, size 0x18
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char erase; // offset 0x8, size 0x1
        } timeAt_data[3]; // offset 0x7C, size 0x24
        unsigned short vscom_data[2]; // offset 0xA0, size 0x4
        unsigned short vc_fl_data[2]; // offset 0xA4, size 0x4
        unsigned short vsman_data[2]; // offset 0xA8, size 0x4
        unsigned short vm_fl_data[2]; // offset 0xAC, size 0x4
        unsigned short vm_ta_data[2]; // offset 0xB0, size 0x4
        struct {
            // total size: 0x1A
            unsigned char st_lv; // offset 0x0, size 0x1
            unsigned char st_sh; // offset 0x1, size 0x1
            unsigned char st_st; // offset 0x2, size 0x1
            unsigned char st_no; // offset 0x3, size 0x1
            unsigned char p1_lv; // offset 0x4, size 0x1
            unsigned char p1_sp; // offset 0x5, size 0x1
            unsigned char p1_m; // offset 0x6, size 0x1
            unsigned char p1_ta_lv; // offset 0x7, size 0x1
            unsigned char p1_tq_lv; // offset 0x8, size 0x1
            unsigned char vc_fl_lv[2]; // offset 0x9, size 0x2
            unsigned char vc_lv[2]; // offset 0xB, size 0x2
            unsigned char vc_sp[2]; // offset 0xD, size 0x2
            unsigned char vc_no[2]; // offset 0xF, size 0x2
            unsigned char vc_st; // offset 0x11, size 0x1
            unsigned char vc_m; // offset 0x12, size 0x1
            unsigned char vm_fl_lv; // offset 0x13, size 0x1
            unsigned char vm_ta_lv; // offset 0x14, size 0x1
            unsigned char vm_lv; // offset 0x15, size 0x1
            unsigned char vm_sp; // offset 0x16, size 0x1
            unsigned char vm_no; // offset 0x17, size 0x1
            unsigned char vm_st; // offset 0x18, size 0x1
            unsigned char vm_m; // offset 0x19, size 0x1
        } config; // offset 0xB4, size 0x1A
    } * mc; // r1+0x0

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2B498 -> 0x2B4DC
void dm_vm_fl_set(int player_no /* r1+0x0 */, int win /* r1+0x4 */, int lose /* r1+0x8 */) {
    // Local variables
    struct {
        // total size: 0xD0
        unsigned char mem_use_flg; // offset 0x0, size 0x1
        unsigned char mem_name[4]; // offset 0x1, size 0x4
        int clear_stage[4][2]; // offset 0x8, size 0x20
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char c_stage; // offset 0x8, size 0x1
        } story_data[3]; // offset 0x28, size 0x24
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned char c_level; // offset 0x4, size 0x1
        } level_data[3]; // offset 0x4C, size 0x18
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
        } taiQ_data[3]; // offset 0x64, size 0x18
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char erase; // offset 0x8, size 0x1
        } timeAt_data[3]; // offset 0x7C, size 0x24
        unsigned short vscom_data[2]; // offset 0xA0, size 0x4
        unsigned short vc_fl_data[2]; // offset 0xA4, size 0x4
        unsigned short vsman_data[2]; // offset 0xA8, size 0x4
        unsigned short vm_fl_data[2]; // offset 0xAC, size 0x4
        unsigned short vm_ta_data[2]; // offset 0xB0, size 0x4
        struct {
            // total size: 0x1A
            unsigned char st_lv; // offset 0x0, size 0x1
            unsigned char st_sh; // offset 0x1, size 0x1
            unsigned char st_st; // offset 0x2, size 0x1
            unsigned char st_no; // offset 0x3, size 0x1
            unsigned char p1_lv; // offset 0x4, size 0x1
            unsigned char p1_sp; // offset 0x5, size 0x1
            unsigned char p1_m; // offset 0x6, size 0x1
            unsigned char p1_ta_lv; // offset 0x7, size 0x1
            unsigned char p1_tq_lv; // offset 0x8, size 0x1
            unsigned char vc_fl_lv[2]; // offset 0x9, size 0x2
            unsigned char vc_lv[2]; // offset 0xB, size 0x2
            unsigned char vc_sp[2]; // offset 0xD, size 0x2
            unsigned char vc_no[2]; // offset 0xF, size 0x2
            unsigned char vc_st; // offset 0x11, size 0x1
            unsigned char vc_m; // offset 0x12, size 0x1
            unsigned char vm_fl_lv; // offset 0x13, size 0x1
            unsigned char vm_ta_lv; // offset 0x14, size 0x1
            unsigned char vm_lv; // offset 0x15, size 0x1
            unsigned char vm_sp; // offset 0x16, size 0x1
            unsigned char vm_no; // offset 0x17, size 0x1
            unsigned char vm_st; // offset 0x18, size 0x1
            unsigned char vm_m; // offset 0x19, size 0x1
        } config; // offset 0xB4, size 0x1A
    } * mc; // r1+0x0

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2B4DC -> 0x2B520
void dm_vm_ta_set(int player_no /* r1+0x0 */, int win /* r1+0x4 */, int lose /* r1+0x8 */) {
    // Local variables
    struct {
        // total size: 0xD0
        unsigned char mem_use_flg; // offset 0x0, size 0x1
        unsigned char mem_name[4]; // offset 0x1, size 0x4
        int clear_stage[4][2]; // offset 0x8, size 0x20
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char c_stage; // offset 0x8, size 0x1
        } story_data[3]; // offset 0x28, size 0x24
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned char c_level; // offset 0x4, size 0x1
        } level_data[3]; // offset 0x4C, size 0x18
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
        } taiQ_data[3]; // offset 0x64, size 0x18
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char erase; // offset 0x8, size 0x1
        } timeAt_data[3]; // offset 0x7C, size 0x24
        unsigned short vscom_data[2]; // offset 0xA0, size 0x4
        unsigned short vc_fl_data[2]; // offset 0xA4, size 0x4
        unsigned short vsman_data[2]; // offset 0xA8, size 0x4
        unsigned short vm_fl_data[2]; // offset 0xAC, size 0x4
        unsigned short vm_ta_data[2]; // offset 0xB0, size 0x4
        struct {
            // total size: 0x1A
            unsigned char st_lv; // offset 0x0, size 0x1
            unsigned char st_sh; // offset 0x1, size 0x1
            unsigned char st_st; // offset 0x2, size 0x1
            unsigned char st_no; // offset 0x3, size 0x1
            unsigned char p1_lv; // offset 0x4, size 0x1
            unsigned char p1_sp; // offset 0x5, size 0x1
            unsigned char p1_m; // offset 0x6, size 0x1
            unsigned char p1_ta_lv; // offset 0x7, size 0x1
            unsigned char p1_tq_lv; // offset 0x8, size 0x1
            unsigned char vc_fl_lv[2]; // offset 0x9, size 0x2
            unsigned char vc_lv[2]; // offset 0xB, size 0x2
            unsigned char vc_sp[2]; // offset 0xD, size 0x2
            unsigned char vc_no[2]; // offset 0xF, size 0x2
            unsigned char vc_st; // offset 0x11, size 0x1
            unsigned char vc_m; // offset 0x12, size 0x1
            unsigned char vm_fl_lv; // offset 0x13, size 0x1
            unsigned char vm_ta_lv; // offset 0x14, size 0x1
            unsigned char vm_lv; // offset 0x15, size 0x1
            unsigned char vm_sp; // offset 0x16, size 0x1
            unsigned char vm_no; // offset 0x17, size 0x1
            unsigned char vm_st; // offset 0x18, size 0x1
            unsigned char vm_m; // offset 0x19, size 0x1
        } config; // offset 0xB4, size 0x1A
    } * mc; // r1+0x0

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
enum /* @enum$362record_c */ {
    _1P_STORY = 0,
    _1P_LEVEL = 1,
    _1P_TaiQ = 2,
    _1P_TimeAt = 3,
};
enum /* @enum$100record_c */ {
    false = 0,
    true = 1,
};
// Range: 0x2B520 -> 0x2B674
static enum /* @enum$100record_c */ {
    false = 0,
    true = 1,
} _get1PLess(struct {
    // total size: 0xD0
    unsigned char mem_use_flg; // offset 0x0, size 0x1
    unsigned char mem_name[4]; // offset 0x1, size 0x4
    int clear_stage[4][2]; // offset 0x8, size 0x20
    struct {
        // total size: 0xC
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
        unsigned char c_stage; // offset 0x8, size 0x1
    } story_data[3]; // offset 0x28, size 0x24
    struct {
        // total size: 0x8
        unsigned long score; // offset 0x0, size 0x4
        unsigned char c_level; // offset 0x4, size 0x1
    } level_data[3]; // offset 0x4C, size 0x18
    struct {
        // total size: 0x8
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
    } taiQ_data[3]; // offset 0x64, size 0x18
    struct {
        // total size: 0xC
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
        unsigned char erase; // offset 0x8, size 0x1
    } timeAt_data[3]; // offset 0x7C, size 0x24
    unsigned short vscom_data[2]; // offset 0xA0, size 0x4
    unsigned short vc_fl_data[2]; // offset 0xA4, size 0x4
    unsigned short vsman_data[2]; // offset 0xA8, size 0x4
    unsigned short vm_fl_data[2]; // offset 0xAC, size 0x4
    unsigned short vm_ta_data[2]; // offset 0xB0, size 0x4
    struct {
        // total size: 0x1A
        unsigned char st_lv; // offset 0x0, size 0x1
        unsigned char st_sh; // offset 0x1, size 0x1
        unsigned char st_st; // offset 0x2, size 0x1
        unsigned char st_no; // offset 0x3, size 0x1
        unsigned char p1_lv; // offset 0x4, size 0x1
        unsigned char p1_sp; // offset 0x5, size 0x1
        unsigned char p1_m; // offset 0x6, size 0x1
        unsigned char p1_ta_lv; // offset 0x7, size 0x1
        unsigned char p1_tq_lv; // offset 0x8, size 0x1
        unsigned char vc_fl_lv[2]; // offset 0x9, size 0x2
        unsigned char vc_lv[2]; // offset 0xB, size 0x2
        unsigned char vc_sp[2]; // offset 0xD, size 0x2
        unsigned char vc_no[2]; // offset 0xF, size 0x2
        unsigned char vc_st; // offset 0x11, size 0x1
        unsigned char vc_m; // offset 0x12, size 0x1
        unsigned char vm_fl_lv; // offset 0x13, size 0x1
        unsigned char vm_ta_lv; // offset 0x14, size 0x1
        unsigned char vm_lv; // offset 0x15, size 0x1
        unsigned char vm_sp; // offset 0x16, size 0x1
        unsigned char vm_no; // offset 0x17, size 0x1
        unsigned char vm_st; // offset 0x18, size 0x1
        unsigned char vm_m; // offset 0x19, size 0x1
    } config; // offset 0xB4, size 0x1A
} * mc1 /* r1+0x0 */, struct {
    // total size: 0xD0
    unsigned char mem_use_flg; // offset 0x0, size 0x1
    unsigned char mem_name[4]; // offset 0x1, size 0x4
    int clear_stage[4][2]; // offset 0x8, size 0x20
    struct {
        // total size: 0xC
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
        unsigned char c_stage; // offset 0x8, size 0x1
    } story_data[3]; // offset 0x28, size 0x24
    struct {
        // total size: 0x8
        unsigned long score; // offset 0x0, size 0x4
        unsigned char c_level; // offset 0x4, size 0x1
    } level_data[3]; // offset 0x4C, size 0x18
    struct {
        // total size: 0x8
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
    } taiQ_data[3]; // offset 0x64, size 0x18
    struct {
        // total size: 0xC
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
        unsigned char erase; // offset 0x8, size 0x1
    } timeAt_data[3]; // offset 0x7C, size 0x24
    unsigned short vscom_data[2]; // offset 0xA0, size 0x4
    unsigned short vc_fl_data[2]; // offset 0xA4, size 0x4
    unsigned short vsman_data[2]; // offset 0xA8, size 0x4
    unsigned short vm_fl_data[2]; // offset 0xAC, size 0x4
    unsigned short vm_ta_data[2]; // offset 0xB0, size 0x4
    struct {
        // total size: 0x1A
        unsigned char st_lv; // offset 0x0, size 0x1
        unsigned char st_sh; // offset 0x1, size 0x1
        unsigned char st_st; // offset 0x2, size 0x1
        unsigned char st_no; // offset 0x3, size 0x1
        unsigned char p1_lv; // offset 0x4, size 0x1
        unsigned char p1_sp; // offset 0x5, size 0x1
        unsigned char p1_m; // offset 0x6, size 0x1
        unsigned char p1_ta_lv; // offset 0x7, size 0x1
        unsigned char p1_tq_lv; // offset 0x8, size 0x1
        unsigned char vc_fl_lv[2]; // offset 0x9, size 0x2
        unsigned char vc_lv[2]; // offset 0xB, size 0x2
        unsigned char vc_sp[2]; // offset 0xD, size 0x2
        unsigned char vc_no[2]; // offset 0xF, size 0x2
        unsigned char vc_st; // offset 0x11, size 0x1
        unsigned char vc_m; // offset 0x12, size 0x1
        unsigned char vm_fl_lv; // offset 0x13, size 0x1
        unsigned char vm_ta_lv; // offset 0x14, size 0x1
        unsigned char vm_lv; // offset 0x15, size 0x1
        unsigned char vm_sp; // offset 0x16, size 0x1
        unsigned char vm_no; // offset 0x17, size 0x1
        unsigned char vm_st; // offset 0x18, size 0x1
        unsigned char vm_m; // offset 0x19, size 0x1
    } config; // offset 0xB4, size 0x1A
} * mc2 /* r1+0x4 */, enum /* @enum$362record_c */ {
    _1P_STORY = 0,
    _1P_LEVEL = 1,
    _1P_TaiQ = 2,
    _1P_TimeAt = 3,
} mode /* r1+0x8 */, int level /* r1+0xC */) {
    // Local variables
    int hi; // r7
    int lo; // r8
    struct {
        // total size: 0xC
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
        unsigned char c_stage; // offset 0x8, size 0x1
    } * story1; // r1+0x0
    struct {
        // total size: 0xC
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
        unsigned char c_stage; // offset 0x8, size 0x1
    } * story2; // r1+0x0
    struct {
        // total size: 0x8
        unsigned long score; // offset 0x0, size 0x4
        unsigned char c_level; // offset 0x4, size 0x1
    } * level1; // r1+0x0
    struct {
        // total size: 0x8
        unsigned long score; // offset 0x0, size 0x4
        unsigned char c_level; // offset 0x4, size 0x1
    } * level2; // r1+0x0
    struct {
        // total size: 0x8
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
    } * taiQ1; // r1+0x0
    struct {
        // total size: 0x8
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
    } * taiQ2; // r1+0x0
    struct {
        // total size: 0xC
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
        unsigned char erase; // offset 0x8, size 0x1
    } * timeAt1; // r1+0x0
    struct {
        // total size: 0xC
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
        unsigned char erase; // offset 0x8, size 0x1
    } * timeAt2; // r1+0x0
}

// Range: 0x2B674 -> 0x2B89C
static void _sort1PMode(struct SRankSortInfo * st /* r1+0x8 */, enum /* @enum$362record_c */ {
    _1P_STORY = 0,
    _1P_LEVEL = 1,
    _1P_TaiQ = 2,
    _1P_TimeAt = 3,
} mode /* r23 */, int level /* r24 */) {
    // Local variables
    struct {
        // total size: 0xD0
        unsigned char mem_use_flg; // offset 0x0, size 0x1
        unsigned char mem_name[4]; // offset 0x1, size 0x4
        int clear_stage[4][2]; // offset 0x8, size 0x20
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char c_stage; // offset 0x8, size 0x1
        } story_data[3]; // offset 0x28, size 0x24
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned char c_level; // offset 0x4, size 0x1
        } level_data[3]; // offset 0x4C, size 0x18
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
        } taiQ_data[3]; // offset 0x64, size 0x18
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char erase; // offset 0x8, size 0x1
        } timeAt_data[3]; // offset 0x7C, size 0x24
        unsigned short vscom_data[2]; // offset 0xA0, size 0x4
        unsigned short vc_fl_data[2]; // offset 0xA4, size 0x4
        unsigned short vsman_data[2]; // offset 0xA8, size 0x4
        unsigned short vm_fl_data[2]; // offset 0xAC, size 0x4
        unsigned short vm_ta_data[2]; // offset 0xB0, size 0x4
        struct {
            // total size: 0x1A
            unsigned char st_lv; // offset 0x0, size 0x1
            unsigned char st_sh; // offset 0x1, size 0x1
            unsigned char st_st; // offset 0x2, size 0x1
            unsigned char st_no; // offset 0x3, size 0x1
            unsigned char p1_lv; // offset 0x4, size 0x1
            unsigned char p1_sp; // offset 0x5, size 0x1
            unsigned char p1_m; // offset 0x6, size 0x1
            unsigned char p1_ta_lv; // offset 0x7, size 0x1
            unsigned char p1_tq_lv; // offset 0x8, size 0x1
            unsigned char vc_fl_lv[2]; // offset 0x9, size 0x2
            unsigned char vc_lv[2]; // offset 0xB, size 0x2
            unsigned char vc_sp[2]; // offset 0xD, size 0x2
            unsigned char vc_no[2]; // offset 0xF, size 0x2
            unsigned char vc_st; // offset 0x11, size 0x1
            unsigned char vc_m; // offset 0x12, size 0x1
            unsigned char vm_fl_lv; // offset 0x13, size 0x1
            unsigned char vm_ta_lv; // offset 0x14, size 0x1
            unsigned char vm_lv; // offset 0x15, size 0x1
            unsigned char vm_sp; // offset 0x16, size 0x1
            unsigned char vm_no; // offset 0x17, size 0x1
            unsigned char vm_st; // offset 0x18, size 0x1
            unsigned char vm_m; // offset 0x19, size 0x1
        } config; // offset 0xB4, size 0x1A
    } * mc; // r1+0x8
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

enum /* @enum$494record_c */ {
    _VS_COM = 0,
    _VS_COM_FLASH = 1,
    _VS_MAN = 2,
    _VS_MAN_FLASH = 3,
    _VS_MAN_TIME_AT = 4,
};
// Range: 0x2B9DC -> 0x2BDE4
static void _sortVsMode(struct SRankSortInfo * st /* r1+0x8 */, enum /* @enum$494record_c */ {
    _VS_COM = 0,
    _VS_COM_FLASH = 1,
    _VS_MAN = 2,
    _VS_MAN_FLASH = 3,
    _VS_MAN_TIME_AT = 4,
} mode /* r1+0xC */) {
    // Local variables
    struct {
        // total size: 0xD0
        unsigned char mem_use_flg; // offset 0x0, size 0x1
        unsigned char mem_name[4]; // offset 0x1, size 0x4
        int clear_stage[4][2]; // offset 0x8, size 0x20
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char c_stage; // offset 0x8, size 0x1
        } story_data[3]; // offset 0x28, size 0x24
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned char c_level; // offset 0x4, size 0x1
        } level_data[3]; // offset 0x4C, size 0x18
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
        } taiQ_data[3]; // offset 0x64, size 0x18
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char erase; // offset 0x8, size 0x1
        } timeAt_data[3]; // offset 0x7C, size 0x24
        unsigned short vscom_data[2]; // offset 0xA0, size 0x4
        unsigned short vc_fl_data[2]; // offset 0xA4, size 0x4
        unsigned short vsman_data[2]; // offset 0xA8, size 0x4
        unsigned short vm_fl_data[2]; // offset 0xAC, size 0x4
        unsigned short vm_ta_data[2]; // offset 0xB0, size 0x4
        struct {
            // total size: 0x1A
            unsigned char st_lv; // offset 0x0, size 0x1
            unsigned char st_sh; // offset 0x1, size 0x1
            unsigned char st_st; // offset 0x2, size 0x1
            unsigned char st_no; // offset 0x3, size 0x1
            unsigned char p1_lv; // offset 0x4, size 0x1
            unsigned char p1_sp; // offset 0x5, size 0x1
            unsigned char p1_m; // offset 0x6, size 0x1
            unsigned char p1_ta_lv; // offset 0x7, size 0x1
            unsigned char p1_tq_lv; // offset 0x8, size 0x1
            unsigned char vc_fl_lv[2]; // offset 0x9, size 0x2
            unsigned char vc_lv[2]; // offset 0xB, size 0x2
            unsigned char vc_sp[2]; // offset 0xD, size 0x2
            unsigned char vc_no[2]; // offset 0xF, size 0x2
            unsigned char vc_st; // offset 0x11, size 0x1
            unsigned char vc_m; // offset 0x12, size 0x1
            unsigned char vm_fl_lv; // offset 0x13, size 0x1
            unsigned char vm_ta_lv; // offset 0x14, size 0x1
            unsigned char vm_lv; // offset 0x15, size 0x1
            unsigned char vm_sp; // offset 0x16, size 0x1
            unsigned char vm_no; // offset 0x17, size 0x1
            unsigned char vm_st; // offset 0x18, size 0x1
            unsigned char vm_m; // offset 0x19, size 0x1
        } config; // offset 0xB4, size 0x1A
    } * mc; // r5
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

// Range: 0x2BE98 -> 0x2C36C
static void RecStory_Compress(struct BitField * bf /* r1+0x8 */, int num /* r1+0xC */) {
    // Local variables
    struct {
        // total size: 0xD0
        unsigned char mem_use_flg; // offset 0x0, size 0x1
        unsigned char mem_name[4]; // offset 0x1, size 0x4
        int clear_stage[4][2]; // offset 0x8, size 0x20
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char c_stage; // offset 0x8, size 0x1
        } story_data[3]; // offset 0x28, size 0x24
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned char c_level; // offset 0x4, size 0x1
        } level_data[3]; // offset 0x4C, size 0x18
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
        } taiQ_data[3]; // offset 0x64, size 0x18
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char erase; // offset 0x8, size 0x1
        } timeAt_data[3]; // offset 0x7C, size 0x24
        unsigned short vscom_data[2]; // offset 0xA0, size 0x4
        unsigned short vc_fl_data[2]; // offset 0xA4, size 0x4
        unsigned short vsman_data[2]; // offset 0xA8, size 0x4
        unsigned short vm_fl_data[2]; // offset 0xAC, size 0x4
        unsigned short vm_ta_data[2]; // offset 0xB0, size 0x4
        struct {
            // total size: 0x1A
            unsigned char st_lv; // offset 0x0, size 0x1
            unsigned char st_sh; // offset 0x1, size 0x1
            unsigned char st_st; // offset 0x2, size 0x1
            unsigned char st_no; // offset 0x3, size 0x1
            unsigned char p1_lv; // offset 0x4, size 0x1
            unsigned char p1_sp; // offset 0x5, size 0x1
            unsigned char p1_m; // offset 0x6, size 0x1
            unsigned char p1_ta_lv; // offset 0x7, size 0x1
            unsigned char p1_tq_lv; // offset 0x8, size 0x1
            unsigned char vc_fl_lv[2]; // offset 0x9, size 0x2
            unsigned char vc_lv[2]; // offset 0xB, size 0x2
            unsigned char vc_sp[2]; // offset 0xD, size 0x2
            unsigned char vc_no[2]; // offset 0xF, size 0x2
            unsigned char vc_st; // offset 0x11, size 0x1
            unsigned char vc_m; // offset 0x12, size 0x1
            unsigned char vm_fl_lv; // offset 0x13, size 0x1
            unsigned char vm_ta_lv; // offset 0x14, size 0x1
            unsigned char vm_lv; // offset 0x15, size 0x1
            unsigned char vm_sp; // offset 0x16, size 0x1
            unsigned char vm_no; // offset 0x17, size 0x1
            unsigned char vm_st; // offset 0x18, size 0x1
            unsigned char vm_m; // offset 0x19, size 0x1
        } config; // offset 0xB4, size 0x1A
    } * player; // r31
    int i; // r1+0x8
    int j; // r1+0x8
    struct {
        // total size: 0xC
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
        unsigned char c_stage; // offset 0x8, size 0x1
    } * story; // r6

    // References
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x2C36C -> 0x2C7C4
static void RecStory_Extract(struct BitField * bf /* r1+0x0 */, int num /* r1+0x4 */) {
    // Local variables
    struct {
        // total size: 0xD0
        unsigned char mem_use_flg; // offset 0x0, size 0x1
        unsigned char mem_name[4]; // offset 0x1, size 0x4
        int clear_stage[4][2]; // offset 0x8, size 0x20
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char c_stage; // offset 0x8, size 0x1
        } story_data[3]; // offset 0x28, size 0x24
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned char c_level; // offset 0x4, size 0x1
        } level_data[3]; // offset 0x4C, size 0x18
        struct {
            // total size: 0x8
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
        } taiQ_data[3]; // offset 0x64, size 0x18
        struct {
            // total size: 0xC
            unsigned long score; // offset 0x0, size 0x4
            unsigned long time; // offset 0x4, size 0x4
            unsigned char erase; // offset 0x8, size 0x1
        } timeAt_data[3]; // offset 0x7C, size 0x24
        unsigned short vscom_data[2]; // offset 0xA0, size 0x4
        unsigned short vc_fl_data[2]; // offset 0xA4, size 0x4
        unsigned short vsman_data[2]; // offset 0xA8, size 0x4
        unsigned short vm_fl_data[2]; // offset 0xAC, size 0x4
        unsigned short vm_ta_data[2]; // offset 0xB0, size 0x4
        struct {
            // total size: 0x1A
            unsigned char st_lv; // offset 0x0, size 0x1
            unsigned char st_sh; // offset 0x1, size 0x1
            unsigned char st_st; // offset 0x2, size 0x1
            unsigned char st_no; // offset 0x3, size 0x1
            unsigned char p1_lv; // offset 0x4, size 0x1
            unsigned char p1_sp; // offset 0x5, size 0x1
            unsigned char p1_m; // offset 0x6, size 0x1
            unsigned char p1_ta_lv; // offset 0x7, size 0x1
            unsigned char p1_tq_lv; // offset 0x8, size 0x1
            unsigned char vc_fl_lv[2]; // offset 0x9, size 0x2
            unsigned char vc_lv[2]; // offset 0xB, size 0x2
            unsigned char vc_sp[2]; // offset 0xD, size 0x2
            unsigned char vc_no[2]; // offset 0xF, size 0x2
            unsigned char vc_st; // offset 0x11, size 0x1
            unsigned char vc_m; // offset 0x12, size 0x1
            unsigned char vm_fl_lv; // offset 0x13, size 0x1
            unsigned char vm_ta_lv; // offset 0x14, size 0x1
            unsigned char vm_lv; // offset 0x15, size 0x1
            unsigned char vm_sp; // offset 0x16, size 0x1
            unsigned char vm_no; // offset 0x17, size 0x1
            unsigned char vm_st; // offset 0x18, size 0x1
            unsigned char vm_m; // offset 0x19, size 0x1
        } config; // offset 0xB4, size 0x1A
    } * player; // r11
    int i; // r1+0x0
    int j; // r1+0x0
    struct {
        // total size: 0xC
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
        unsigned char c_stage; // offset 0x8, size 0x1
    } * story; // r6

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

struct {
    // total size: 0x16
    unsigned char p4_team[4]; // offset 0x0, size 0x4
    unsigned char p4_lv[4]; // offset 0x4, size 0x4
    unsigned char p4_fl_lv[4]; // offset 0x8, size 0x4
    unsigned char p4_no[4]; // offset 0xC, size 0x4
    unsigned char p4_sp[4]; // offset 0x10, size 0x4
    unsigned char p4_st; // offset 0x14, size 0x1
    unsigned char p4_m; // offset 0x15, size 0x1
} evs_cfg_4p; // size: 0x16, address: 0x55110
// Range: 0x2D878 -> 0x2D948
void EepRom_InitVars() {
    // Local variables
    int i; // r29

    // References
    // -> struct [anonymous] evs_mem_data[9];
    // -> struct [anonymous] evs_cfg_4p;
}

static enum /* @enum$100record_c */ {
    false = 0,
    true = 1,
} _cached$1332; // size: 0x4, address: 0x55128
static unsigned char _cache$1333[512]; // size: 0x200, address: 0x55140
unsigned char * eeprom_bufferp; // size: 0x4, address: 0xC
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
    // -> static enum /* @enum$100record_c */ {
    false = 0,
    true = 1,
} _cached$1332;
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
    // -> static enum /* @enum$100record_c */ {
    false = 0,
    true = 1,
} _cached$1332;
    // -> unsigned char * eeprom_bufferp;
}

// Range: 0x2DDA4 -> 0x2DDA8
void EepRom_DumpErrMes() {}

// Range: 0x2DDA8 -> 0x2DDAC
void EepRom_DumpDataSize() {}

// Range: 0x2DDAC -> 0x2DE0C
void RecWritingMsg_init(struct {
    // total size: 0x88
    struct {
        // total size: 0x80
        void * heap; // offset 0x0, size 0x4
        struct {
            // total size: 0x10
            int top; // offset 0x0, size 0x4
            int end; // offset 0x4, size 0x4
            int width; // offset 0x8, size 0x4
            int color; // offset 0xC, size 0x4
        } * layout; // offset 0x4, size 0x4
        int layoutSize; // offset 0x8, size 0x4
        unsigned char * msgBuf; // offset 0xC, size 0x4
        int msgBufSize; // offset 0x10, size 0x4
        int msgBufTop; // offset 0x14, size 0x4
        int msgBufNow; // offset 0x18, size 0x4
        int contFlags; // offset 0x1C, size 0x4
        int fontType; // offset 0x20, size 0x4
        int centering; // offset 0x24, size 0x4
        int posX; // offset 0x28, size 0x4
        int posY; // offset 0x2C, size 0x4
        int fntW; // offset 0x30, size 0x4
        int fntH; // offset 0x34, size 0x4
        int colSize; // offset 0x38, size 0x4
        int colStep; // offset 0x3C, size 0x4
        int colNow; // offset 0x40, size 0x4
        int rowSize; // offset 0x44, size 0x4
        int rowStep; // offset 0x48, size 0x4
        int rowNow; // offset 0x4C, size 0x4
        float msgCount; // offset 0x50, size 0x4
        float msgSpeed; // offset 0x54, size 0x4
        float scrCount; // offset 0x58, size 0x4
        float scrSpeed; // offset 0x5C, size 0x4
        int msgIsEnd; // offset 0x60, size 0x4
        int isSpeak; // offset 0x64, size 0x4
        int topColor; // offset 0x68, size 0x4
        int keyWait; // offset 0x6C, size 0x4
        int countWait; // offset 0x70, size 0x4
        int alpha; // offset 0x74, size 0x4
        int scisFlag; // offset 0x78, size 0x4
        unsigned int grapCount; // offset 0x7C, size 0x4
    } msgWnd; // offset 0x0, size 0x80
    int timeout; // offset 0x80, size 0x4
    int count; // offset 0x84, size 0x4
} * st /* r31 */, void * heap /* r4 */) {}

// Range: 0x2DE0C -> 0x2DE58
void RecWritingMsg_setStr(struct {
    // total size: 0x88
    struct {
        // total size: 0x80
        void * heap; // offset 0x0, size 0x4
        struct {
            // total size: 0x10
            int top; // offset 0x0, size 0x4
            int end; // offset 0x4, size 0x4
            int width; // offset 0x8, size 0x4
            int color; // offset 0xC, size 0x4
        } * layout; // offset 0x4, size 0x4
        int layoutSize; // offset 0x8, size 0x4
        unsigned char * msgBuf; // offset 0xC, size 0x4
        int msgBufSize; // offset 0x10, size 0x4
        int msgBufTop; // offset 0x14, size 0x4
        int msgBufNow; // offset 0x18, size 0x4
        int contFlags; // offset 0x1C, size 0x4
        int fontType; // offset 0x20, size 0x4
        int centering; // offset 0x24, size 0x4
        int posX; // offset 0x28, size 0x4
        int posY; // offset 0x2C, size 0x4
        int fntW; // offset 0x30, size 0x4
        int fntH; // offset 0x34, size 0x4
        int colSize; // offset 0x38, size 0x4
        int colStep; // offset 0x3C, size 0x4
        int colNow; // offset 0x40, size 0x4
        int rowSize; // offset 0x44, size 0x4
        int rowStep; // offset 0x48, size 0x4
        int rowNow; // offset 0x4C, size 0x4
        float msgCount; // offset 0x50, size 0x4
        float msgSpeed; // offset 0x54, size 0x4
        float scrCount; // offset 0x58, size 0x4
        float scrSpeed; // offset 0x5C, size 0x4
        int msgIsEnd; // offset 0x60, size 0x4
        int isSpeak; // offset 0x64, size 0x4
        int topColor; // offset 0x68, size 0x4
        int keyWait; // offset 0x6C, size 0x4
        int countWait; // offset 0x70, size 0x4
        int alpha; // offset 0x74, size 0x4
        int scisFlag; // offset 0x78, size 0x4
        unsigned int grapCount; // offset 0x7C, size 0x4
    } msgWnd; // offset 0x0, size 0x80
    int timeout; // offset 0x80, size 0x4
    int count; // offset 0x84, size 0x4
} * st /* r30 */, const unsigned char * str /* r31 */) {}

// Range: 0x2DE58 -> 0x2DEA0
void RecWritingMsg_calc(struct {
    // total size: 0x88
    struct {
        // total size: 0x80
        void * heap; // offset 0x0, size 0x4
        struct {
            // total size: 0x10
            int top; // offset 0x0, size 0x4
            int end; // offset 0x4, size 0x4
            int width; // offset 0x8, size 0x4
            int color; // offset 0xC, size 0x4
        } * layout; // offset 0x4, size 0x4
        int layoutSize; // offset 0x8, size 0x4
        unsigned char * msgBuf; // offset 0xC, size 0x4
        int msgBufSize; // offset 0x10, size 0x4
        int msgBufTop; // offset 0x14, size 0x4
        int msgBufNow; // offset 0x18, size 0x4
        int contFlags; // offset 0x1C, size 0x4
        int fontType; // offset 0x20, size 0x4
        int centering; // offset 0x24, size 0x4
        int posX; // offset 0x28, size 0x4
        int posY; // offset 0x2C, size 0x4
        int fntW; // offset 0x30, size 0x4
        int fntH; // offset 0x34, size 0x4
        int colSize; // offset 0x38, size 0x4
        int colStep; // offset 0x3C, size 0x4
        int colNow; // offset 0x40, size 0x4
        int rowSize; // offset 0x44, size 0x4
        int rowStep; // offset 0x48, size 0x4
        int rowNow; // offset 0x4C, size 0x4
        float msgCount; // offset 0x50, size 0x4
        float msgSpeed; // offset 0x54, size 0x4
        float scrCount; // offset 0x58, size 0x4
        float scrSpeed; // offset 0x5C, size 0x4
        int msgIsEnd; // offset 0x60, size 0x4
        int isSpeak; // offset 0x64, size 0x4
        int topColor; // offset 0x68, size 0x4
        int keyWait; // offset 0x6C, size 0x4
        int countWait; // offset 0x70, size 0x4
        int alpha; // offset 0x74, size 0x4
        int scisFlag; // offset 0x78, size 0x4
        unsigned int grapCount; // offset 0x7C, size 0x4
    } msgWnd; // offset 0x0, size 0x80
    int timeout; // offset 0x80, size 0x4
    int count; // offset 0x84, size 0x4
} * st /* r31 */) {}

union {
    struct {
        // total size: 0x8
        unsigned int w0; // offset 0x0, size 0x4
        unsigned int w1; // offset 0x4, size 0x4
    } words; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int par : 8; // offset 0x0, size 0x4
        unsigned int len : 16; // offset 0x0, size 0x4
        unsigned int addr; // offset 0x4, size 0x4
    } dma; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad : 24; // offset 0x0, size 0x4
        struct {
            // total size: 0x4
            unsigned char flag; // offset 0x0, size 0x1
            unsigned char v[3]; // offset 0x1, size 0x3
        } tri; // offset 0x4, size 0x4
    } tri; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad : 24; // offset 0x0, size 0x4
        struct {
            // total size: 0x4
            unsigned char flag; // offset 0x0, size 0x1
            unsigned char v[3]; // offset 0x1, size 0x3
        } line; // offset 0x4, size 0x4
    } line; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad1 : 24; // offset 0x0, size 0x4
        int pad2 : 24; // offset 0x4, size 0x4
        unsigned int param : 8; // offset 0x4, size 0x4
    } popmtx; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad0 : 8; // offset 0x0, size 0x4
        int mw_index : 8; // offset 0x0, size 0x4
        int number : 8; // offset 0x0, size 0x4
        int pad1 : 8; // offset 0x4, size 0x4
        int base : 24; // offset 0x4, size 0x4
    } segment; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad0 : 8; // offset 0x0, size 0x4
        int sft : 8; // offset 0x0, size 0x4
        int len : 8; // offset 0x0, size 0x4
        unsigned int data : 32; // offset 0x4, size 0x4
    } setothermodeH; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad0 : 8; // offset 0x0, size 0x4
        int sft : 8; // offset 0x0, size 0x4
        int len : 8; // offset 0x0, size 0x4
        unsigned int data : 32; // offset 0x4, size 0x4
    } setothermodeL; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        unsigned char cmd; // offset 0x0, size 0x1
        unsigned char lodscale; // offset 0x1, size 0x1
        unsigned char tile; // offset 0x2, size 0x1
        unsigned char on; // offset 0x3, size 0x1
        unsigned short s; // offset 0x4, size 0x2
        unsigned short t; // offset 0x6, size 0x2
    } texture; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad1 : 24; // offset 0x0, size 0x4
        signed short pad2; // offset 0x4, size 0x2
        signed short scale; // offset 0x6, size 0x2
    } perspnorm; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int fmt : 3; // offset 0x0, size 0x4
        unsigned int siz : 2; // offset 0x0, size 0x4
        unsigned int pad : 7; // offset 0x0, size 0x4
        unsigned int wd : 12; // offset 0x0, size 0x4
        unsigned int dram; // offset 0x4, size 0x4
    } setimg; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int muxs0 : 24; // offset 0x0, size 0x4
        unsigned int muxs1 : 32; // offset 0x4, size 0x4
    } setcombine; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned char pad; // offset 0x1, size 0x1
        unsigned char prim_min_level; // offset 0x2, size 0x1
        unsigned char prim_level; // offset 0x3, size 0x1
        unsigned long color; // offset 0x4, size 0x4
    } setcolor; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int x0 : 10; // offset 0x0, size 0x4
        int x0frac : 2; // offset 0x0, size 0x4
        int y0 : 10; // offset 0x0, size 0x4
        int y0frac : 2; // offset 0x0, size 0x4
        unsigned int pad : 8; // offset 0x4, size 0x4
        int x1 : 10; // offset 0x4, size 0x4
        int x1frac : 2; // offset 0x4, size 0x4
        int y1 : 10; // offset 0x4, size 0x4
        int y1frac : 2; // offset 0x4, size 0x4
    } fillrect; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int fmt : 3; // offset 0x0, size 0x4
        unsigned int siz : 2; // offset 0x0, size 0x4
        unsigned int pad0 : 1; // offset 0x0, size 0x4
        unsigned int line : 9; // offset 0x0, size 0x4
        unsigned int tmem : 9; // offset 0x0, size 0x4
        unsigned int pad1 : 5; // offset 0x4, size 0x4
        unsigned int tile : 3; // offset 0x4, size 0x4
        unsigned int palette : 4; // offset 0x4, size 0x4
        unsigned int ct : 1; // offset 0x4, size 0x4
        unsigned int mt : 1; // offset 0x4, size 0x4
        unsigned int maskt : 4; // offset 0x4, size 0x4
        unsigned int shiftt : 4; // offset 0x4, size 0x4
        unsigned int cs : 1; // offset 0x4, size 0x4
        unsigned int ms : 1; // offset 0x4, size 0x4
        unsigned int masks : 4; // offset 0x4, size 0x4
        unsigned int shifts : 4; // offset 0x4, size 0x4
    } settile; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int sl : 12; // offset 0x0, size 0x4
        unsigned int tl : 12; // offset 0x0, size 0x4
        int pad : 5; // offset 0x4, size 0x4
        unsigned int tile : 3; // offset 0x4, size 0x4
        unsigned int sh : 12; // offset 0x4, size 0x4
        unsigned int th : 12; // offset 0x4, size 0x4
    } loadtile; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int sl : 12; // offset 0x0, size 0x4
        unsigned int tl : 12; // offset 0x0, size 0x4
        int pad : 5; // offset 0x4, size 0x4
        unsigned int tile : 3; // offset 0x4, size 0x4
        unsigned int sh : 12; // offset 0x4, size 0x4
        unsigned int th : 12; // offset 0x4, size 0x4
    } settilesize; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int sl : 12; // offset 0x0, size 0x4
        unsigned int tl : 12; // offset 0x0, size 0x4
        int pad : 5; // offset 0x4, size 0x4
        unsigned int tile : 3; // offset 0x4, size 0x4
        unsigned int sh : 12; // offset 0x4, size 0x4
        unsigned int th : 12; // offset 0x4, size 0x4
    } loadtlut; // offset 0x0, size 0x8
    long long force_structure_alignment; // offset 0x0, size 0x8
} normal_texture_init_dl[]; // size: 0x0, address: 0x4208
// Range: 0x2DEA0 -> 0x2E004
void RecWritingMsg_draw(struct {
    // total size: 0x88
    struct {
        // total size: 0x80
        void * heap; // offset 0x0, size 0x4
        struct {
            // total size: 0x10
            int top; // offset 0x0, size 0x4
            int end; // offset 0x4, size 0x4
            int width; // offset 0x8, size 0x4
            int color; // offset 0xC, size 0x4
        } * layout; // offset 0x4, size 0x4
        int layoutSize; // offset 0x8, size 0x4
        unsigned char * msgBuf; // offset 0xC, size 0x4
        int msgBufSize; // offset 0x10, size 0x4
        int msgBufTop; // offset 0x14, size 0x4
        int msgBufNow; // offset 0x18, size 0x4
        int contFlags; // offset 0x1C, size 0x4
        int fontType; // offset 0x20, size 0x4
        int centering; // offset 0x24, size 0x4
        int posX; // offset 0x28, size 0x4
        int posY; // offset 0x2C, size 0x4
        int fntW; // offset 0x30, size 0x4
        int fntH; // offset 0x34, size 0x4
        int colSize; // offset 0x38, size 0x4
        int colStep; // offset 0x3C, size 0x4
        int colNow; // offset 0x40, size 0x4
        int rowSize; // offset 0x44, size 0x4
        int rowStep; // offset 0x48, size 0x4
        int rowNow; // offset 0x4C, size 0x4
        float msgCount; // offset 0x50, size 0x4
        float msgSpeed; // offset 0x54, size 0x4
        float scrCount; // offset 0x58, size 0x4
        float scrSpeed; // offset 0x5C, size 0x4
        int msgIsEnd; // offset 0x60, size 0x4
        int isSpeak; // offset 0x64, size 0x4
        int topColor; // offset 0x68, size 0x4
        int keyWait; // offset 0x6C, size 0x4
        int countWait; // offset 0x70, size 0x4
        int alpha; // offset 0x74, size 0x4
        int scisFlag; // offset 0x78, size 0x4
        unsigned int grapCount; // offset 0x7C, size 0x4
    } msgWnd; // offset 0x0, size 0x80
    int timeout; // offset 0x80, size 0x4
    int count; // offset 0x84, size 0x4
} * st /* r28 */, union {
    struct {
        // total size: 0x8
        unsigned int w0; // offset 0x0, size 0x4
        unsigned int w1; // offset 0x4, size 0x4
    } words; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int par : 8; // offset 0x0, size 0x4
        unsigned int len : 16; // offset 0x0, size 0x4
        unsigned int addr; // offset 0x4, size 0x4
    } dma; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad : 24; // offset 0x0, size 0x4
        struct {
            // total size: 0x4
            unsigned char flag; // offset 0x0, size 0x1
            unsigned char v[3]; // offset 0x1, size 0x3
        } tri; // offset 0x4, size 0x4
    } tri; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad : 24; // offset 0x0, size 0x4
        struct {
            // total size: 0x4
            unsigned char flag; // offset 0x0, size 0x1
            unsigned char v[3]; // offset 0x1, size 0x3
        } line; // offset 0x4, size 0x4
    } line; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad1 : 24; // offset 0x0, size 0x4
        int pad2 : 24; // offset 0x4, size 0x4
        unsigned int param : 8; // offset 0x4, size 0x4
    } popmtx; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad0 : 8; // offset 0x0, size 0x4
        int mw_index : 8; // offset 0x0, size 0x4
        int number : 8; // offset 0x0, size 0x4
        int pad1 : 8; // offset 0x4, size 0x4
        int base : 24; // offset 0x4, size 0x4
    } segment; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad0 : 8; // offset 0x0, size 0x4
        int sft : 8; // offset 0x0, size 0x4
        int len : 8; // offset 0x0, size 0x4
        unsigned int data : 32; // offset 0x4, size 0x4
    } setothermodeH; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad0 : 8; // offset 0x0, size 0x4
        int sft : 8; // offset 0x0, size 0x4
        int len : 8; // offset 0x0, size 0x4
        unsigned int data : 32; // offset 0x4, size 0x4
    } setothermodeL; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        unsigned char cmd; // offset 0x0, size 0x1
        unsigned char lodscale; // offset 0x1, size 0x1
        unsigned char tile; // offset 0x2, size 0x1
        unsigned char on; // offset 0x3, size 0x1
        unsigned short s; // offset 0x4, size 0x2
        unsigned short t; // offset 0x6, size 0x2
    } texture; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad1 : 24; // offset 0x0, size 0x4
        signed short pad2; // offset 0x4, size 0x2
        signed short scale; // offset 0x6, size 0x2
    } perspnorm; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int fmt : 3; // offset 0x0, size 0x4
        unsigned int siz : 2; // offset 0x0, size 0x4
        unsigned int pad : 7; // offset 0x0, size 0x4
        unsigned int wd : 12; // offset 0x0, size 0x4
        unsigned int dram; // offset 0x4, size 0x4
    } setimg; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int muxs0 : 24; // offset 0x0, size 0x4
        unsigned int muxs1 : 32; // offset 0x4, size 0x4
    } setcombine; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned char pad; // offset 0x1, size 0x1
        unsigned char prim_min_level; // offset 0x2, size 0x1
        unsigned char prim_level; // offset 0x3, size 0x1
        unsigned long color; // offset 0x4, size 0x4
    } setcolor; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int x0 : 10; // offset 0x0, size 0x4
        int x0frac : 2; // offset 0x0, size 0x4
        int y0 : 10; // offset 0x0, size 0x4
        int y0frac : 2; // offset 0x0, size 0x4
        unsigned int pad : 8; // offset 0x4, size 0x4
        int x1 : 10; // offset 0x4, size 0x4
        int x1frac : 2; // offset 0x4, size 0x4
        int y1 : 10; // offset 0x4, size 0x4
        int y1frac : 2; // offset 0x4, size 0x4
    } fillrect; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int fmt : 3; // offset 0x0, size 0x4
        unsigned int siz : 2; // offset 0x0, size 0x4
        unsigned int pad0 : 1; // offset 0x0, size 0x4
        unsigned int line : 9; // offset 0x0, size 0x4
        unsigned int tmem : 9; // offset 0x0, size 0x4
        unsigned int pad1 : 5; // offset 0x4, size 0x4
        unsigned int tile : 3; // offset 0x4, size 0x4
        unsigned int palette : 4; // offset 0x4, size 0x4
        unsigned int ct : 1; // offset 0x4, size 0x4
        unsigned int mt : 1; // offset 0x4, size 0x4
        unsigned int maskt : 4; // offset 0x4, size 0x4
        unsigned int shiftt : 4; // offset 0x4, size 0x4
        unsigned int cs : 1; // offset 0x4, size 0x4
        unsigned int ms : 1; // offset 0x4, size 0x4
        unsigned int masks : 4; // offset 0x4, size 0x4
        unsigned int shifts : 4; // offset 0x4, size 0x4
    } settile; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int sl : 12; // offset 0x0, size 0x4
        unsigned int tl : 12; // offset 0x0, size 0x4
        int pad : 5; // offset 0x4, size 0x4
        unsigned int tile : 3; // offset 0x4, size 0x4
        unsigned int sh : 12; // offset 0x4, size 0x4
        unsigned int th : 12; // offset 0x4, size 0x4
    } loadtile; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int sl : 12; // offset 0x0, size 0x4
        unsigned int tl : 12; // offset 0x0, size 0x4
        int pad : 5; // offset 0x4, size 0x4
        unsigned int tile : 3; // offset 0x4, size 0x4
        unsigned int sh : 12; // offset 0x4, size 0x4
        unsigned int th : 12; // offset 0x4, size 0x4
    } settilesize; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int sl : 12; // offset 0x0, size 0x4
        unsigned int tl : 12; // offset 0x0, size 0x4
        int pad : 5; // offset 0x4, size 0x4
        unsigned int tile : 3; // offset 0x4, size 0x4
        unsigned int sh : 12; // offset 0x4, size 0x4
        unsigned int th : 12; // offset 0x4, size 0x4
    } loadtlut; // offset 0x0, size 0x8
    long long force_structure_alignment; // offset 0x0, size 0x8
} * * gpp /* r29 */) {
    // Local variables
    union {
        struct {
            // total size: 0x8
            unsigned int w0; // offset 0x0, size 0x4
            unsigned int w1; // offset 0x4, size 0x4
        } words; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int par : 8; // offset 0x0, size 0x4
            unsigned int len : 16; // offset 0x0, size 0x4
            unsigned int addr; // offset 0x4, size 0x4
        } dma; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad : 24; // offset 0x0, size 0x4
            struct {
                // total size: 0x4
                unsigned char flag; // offset 0x0, size 0x1
                unsigned char v[3]; // offset 0x1, size 0x3
            } tri; // offset 0x4, size 0x4
        } tri; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad : 24; // offset 0x0, size 0x4
            struct {
                // total size: 0x4
                unsigned char flag; // offset 0x0, size 0x1
                unsigned char v[3]; // offset 0x1, size 0x3
            } line; // offset 0x4, size 0x4
        } line; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad1 : 24; // offset 0x0, size 0x4
            int pad2 : 24; // offset 0x4, size 0x4
            unsigned int param : 8; // offset 0x4, size 0x4
        } popmtx; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int mw_index : 8; // offset 0x0, size 0x4
            int number : 8; // offset 0x0, size 0x4
            int pad1 : 8; // offset 0x4, size 0x4
            int base : 24; // offset 0x4, size 0x4
        } segment; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int sft : 8; // offset 0x0, size 0x4
            int len : 8; // offset 0x0, size 0x4
            unsigned int data : 32; // offset 0x4, size 0x4
        } setothermodeH; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int sft : 8; // offset 0x0, size 0x4
            int len : 8; // offset 0x0, size 0x4
            unsigned int data : 32; // offset 0x4, size 0x4
        } setothermodeL; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            unsigned char cmd; // offset 0x0, size 0x1
            unsigned char lodscale; // offset 0x1, size 0x1
            unsigned char tile; // offset 0x2, size 0x1
            unsigned char on; // offset 0x3, size 0x1
            unsigned short s; // offset 0x4, size 0x2
            unsigned short t; // offset 0x6, size 0x2
        } texture; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad1 : 24; // offset 0x0, size 0x4
            signed short pad2; // offset 0x4, size 0x2
            signed short scale; // offset 0x6, size 0x2
        } perspnorm; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int fmt : 3; // offset 0x0, size 0x4
            unsigned int siz : 2; // offset 0x0, size 0x4
            unsigned int pad : 7; // offset 0x0, size 0x4
            unsigned int wd : 12; // offset 0x0, size 0x4
            unsigned int dram; // offset 0x4, size 0x4
        } setimg; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int muxs0 : 24; // offset 0x0, size 0x4
            unsigned int muxs1 : 32; // offset 0x4, size 0x4
        } setcombine; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned char pad; // offset 0x1, size 0x1
            unsigned char prim_min_level; // offset 0x2, size 0x1
            unsigned char prim_level; // offset 0x3, size 0x1
            unsigned long color; // offset 0x4, size 0x4
        } setcolor; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int x0 : 10; // offset 0x0, size 0x4
            int x0frac : 2; // offset 0x0, size 0x4
            int y0 : 10; // offset 0x0, size 0x4
            int y0frac : 2; // offset 0x0, size 0x4
            unsigned int pad : 8; // offset 0x4, size 0x4
            int x1 : 10; // offset 0x4, size 0x4
            int x1frac : 2; // offset 0x4, size 0x4
            int y1 : 10; // offset 0x4, size 0x4
            int y1frac : 2; // offset 0x4, size 0x4
        } fillrect; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int fmt : 3; // offset 0x0, size 0x4
            unsigned int siz : 2; // offset 0x0, size 0x4
            unsigned int pad0 : 1; // offset 0x0, size 0x4
            unsigned int line : 9; // offset 0x0, size 0x4
            unsigned int tmem : 9; // offset 0x0, size 0x4
            unsigned int pad1 : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int palette : 4; // offset 0x4, size 0x4
            unsigned int ct : 1; // offset 0x4, size 0x4
            unsigned int mt : 1; // offset 0x4, size 0x4
            unsigned int maskt : 4; // offset 0x4, size 0x4
            unsigned int shiftt : 4; // offset 0x4, size 0x4
            unsigned int cs : 1; // offset 0x4, size 0x4
            unsigned int ms : 1; // offset 0x4, size 0x4
            unsigned int masks : 4; // offset 0x4, size 0x4
            unsigned int shifts : 4; // offset 0x4, size 0x4
        } settile; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } loadtile; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } settilesize; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } loadtlut; // offset 0x0, size 0x8
        long long force_structure_alignment; // offset 0x0, size 0x8
    } * gp; // r1+0x18
    int w; // r1+0x10
    int h; // r1+0x10
    union {
        struct {
            // total size: 0x8
            unsigned int w0; // offset 0x0, size 0x4
            unsigned int w1; // offset 0x4, size 0x4
        } words; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int par : 8; // offset 0x0, size 0x4
            unsigned int len : 16; // offset 0x0, size 0x4
            unsigned int addr; // offset 0x4, size 0x4
        } dma; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad : 24; // offset 0x0, size 0x4
            struct {
                // total size: 0x4
                unsigned char flag; // offset 0x0, size 0x1
                unsigned char v[3]; // offset 0x1, size 0x3
            } tri; // offset 0x4, size 0x4
        } tri; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad : 24; // offset 0x0, size 0x4
            struct {
                // total size: 0x4
                unsigned char flag; // offset 0x0, size 0x1
                unsigned char v[3]; // offset 0x1, size 0x3
            } line; // offset 0x4, size 0x4
        } line; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad1 : 24; // offset 0x0, size 0x4
            int pad2 : 24; // offset 0x4, size 0x4
            unsigned int param : 8; // offset 0x4, size 0x4
        } popmtx; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int mw_index : 8; // offset 0x0, size 0x4
            int number : 8; // offset 0x0, size 0x4
            int pad1 : 8; // offset 0x4, size 0x4
            int base : 24; // offset 0x4, size 0x4
        } segment; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int sft : 8; // offset 0x0, size 0x4
            int len : 8; // offset 0x0, size 0x4
            unsigned int data : 32; // offset 0x4, size 0x4
        } setothermodeH; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int sft : 8; // offset 0x0, size 0x4
            int len : 8; // offset 0x0, size 0x4
            unsigned int data : 32; // offset 0x4, size 0x4
        } setothermodeL; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            unsigned char cmd; // offset 0x0, size 0x1
            unsigned char lodscale; // offset 0x1, size 0x1
            unsigned char tile; // offset 0x2, size 0x1
            unsigned char on; // offset 0x3, size 0x1
            unsigned short s; // offset 0x4, size 0x2
            unsigned short t; // offset 0x6, size 0x2
        } texture; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad1 : 24; // offset 0x0, size 0x4
            signed short pad2; // offset 0x4, size 0x2
            signed short scale; // offset 0x6, size 0x2
        } perspnorm; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int fmt : 3; // offset 0x0, size 0x4
            unsigned int siz : 2; // offset 0x0, size 0x4
            unsigned int pad : 7; // offset 0x0, size 0x4
            unsigned int wd : 12; // offset 0x0, size 0x4
            unsigned int dram; // offset 0x4, size 0x4
        } setimg; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int muxs0 : 24; // offset 0x0, size 0x4
            unsigned int muxs1 : 32; // offset 0x4, size 0x4
        } setcombine; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned char pad; // offset 0x1, size 0x1
            unsigned char prim_min_level; // offset 0x2, size 0x1
            unsigned char prim_level; // offset 0x3, size 0x1
            unsigned long color; // offset 0x4, size 0x4
        } setcolor; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int x0 : 10; // offset 0x0, size 0x4
            int x0frac : 2; // offset 0x0, size 0x4
            int y0 : 10; // offset 0x0, size 0x4
            int y0frac : 2; // offset 0x0, size 0x4
            unsigned int pad : 8; // offset 0x4, size 0x4
            int x1 : 10; // offset 0x4, size 0x4
            int x1frac : 2; // offset 0x4, size 0x4
            int y1 : 10; // offset 0x4, size 0x4
            int y1frac : 2; // offset 0x4, size 0x4
        } fillrect; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int fmt : 3; // offset 0x0, size 0x4
            unsigned int siz : 2; // offset 0x0, size 0x4
            unsigned int pad0 : 1; // offset 0x0, size 0x4
            unsigned int line : 9; // offset 0x0, size 0x4
            unsigned int tmem : 9; // offset 0x0, size 0x4
            unsigned int pad1 : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int palette : 4; // offset 0x4, size 0x4
            unsigned int ct : 1; // offset 0x4, size 0x4
            unsigned int mt : 1; // offset 0x4, size 0x4
            unsigned int maskt : 4; // offset 0x4, size 0x4
            unsigned int shiftt : 4; // offset 0x4, size 0x4
            unsigned int cs : 1; // offset 0x4, size 0x4
            unsigned int ms : 1; // offset 0x4, size 0x4
            unsigned int masks : 4; // offset 0x4, size 0x4
            unsigned int shifts : 4; // offset 0x4, size 0x4
        } settile; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } loadtile; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } settilesize; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } loadtlut; // offset 0x0, size 0x8
        long long force_structure_alignment; // offset 0x0, size 0x8
    } * _g; // r1+0x10

    // References
    // -> unsigned char mess_panel_tex[15456];
    // -> unsigned short mess_panel_lut[256];
    // -> unsigned short mess_panel_tex_size[4];
    // -> union [anonymous] normal_texture_init_dl[];
}

// Range: 0x2E004 -> 0x2E010
void RecWritingMsg_start(struct {
    // total size: 0x88
    struct {
        // total size: 0x80
        void * heap; // offset 0x0, size 0x4
        struct {
            // total size: 0x10
            int top; // offset 0x0, size 0x4
            int end; // offset 0x4, size 0x4
            int width; // offset 0x8, size 0x4
            int color; // offset 0xC, size 0x4
        } * layout; // offset 0x4, size 0x4
        int layoutSize; // offset 0x8, size 0x4
        unsigned char * msgBuf; // offset 0xC, size 0x4
        int msgBufSize; // offset 0x10, size 0x4
        int msgBufTop; // offset 0x14, size 0x4
        int msgBufNow; // offset 0x18, size 0x4
        int contFlags; // offset 0x1C, size 0x4
        int fontType; // offset 0x20, size 0x4
        int centering; // offset 0x24, size 0x4
        int posX; // offset 0x28, size 0x4
        int posY; // offset 0x2C, size 0x4
        int fntW; // offset 0x30, size 0x4
        int fntH; // offset 0x34, size 0x4
        int colSize; // offset 0x38, size 0x4
        int colStep; // offset 0x3C, size 0x4
        int colNow; // offset 0x40, size 0x4
        int rowSize; // offset 0x44, size 0x4
        int rowStep; // offset 0x48, size 0x4
        int rowNow; // offset 0x4C, size 0x4
        float msgCount; // offset 0x50, size 0x4
        float msgSpeed; // offset 0x54, size 0x4
        float scrCount; // offset 0x58, size 0x4
        float scrSpeed; // offset 0x5C, size 0x4
        int msgIsEnd; // offset 0x60, size 0x4
        int isSpeak; // offset 0x64, size 0x4
        int topColor; // offset 0x68, size 0x4
        int keyWait; // offset 0x6C, size 0x4
        int countWait; // offset 0x70, size 0x4
        int alpha; // offset 0x74, size 0x4
        int scisFlag; // offset 0x78, size 0x4
        unsigned int grapCount; // offset 0x7C, size 0x4
    } msgWnd; // offset 0x0, size 0x80
    int timeout; // offset 0x80, size 0x4
    int count; // offset 0x84, size 0x4
} * st /* r1+0x0 */) {}

// Range: 0x2E010 -> 0x2E01C
void RecWritingMsg_end(struct {
    // total size: 0x88
    struct {
        // total size: 0x80
        void * heap; // offset 0x0, size 0x4
        struct {
            // total size: 0x10
            int top; // offset 0x0, size 0x4
            int end; // offset 0x4, size 0x4
            int width; // offset 0x8, size 0x4
            int color; // offset 0xC, size 0x4
        } * layout; // offset 0x4, size 0x4
        int layoutSize; // offset 0x8, size 0x4
        unsigned char * msgBuf; // offset 0xC, size 0x4
        int msgBufSize; // offset 0x10, size 0x4
        int msgBufTop; // offset 0x14, size 0x4
        int msgBufNow; // offset 0x18, size 0x4
        int contFlags; // offset 0x1C, size 0x4
        int fontType; // offset 0x20, size 0x4
        int centering; // offset 0x24, size 0x4
        int posX; // offset 0x28, size 0x4
        int posY; // offset 0x2C, size 0x4
        int fntW; // offset 0x30, size 0x4
        int fntH; // offset 0x34, size 0x4
        int colSize; // offset 0x38, size 0x4
        int colStep; // offset 0x3C, size 0x4
        int colNow; // offset 0x40, size 0x4
        int rowSize; // offset 0x44, size 0x4
        int rowStep; // offset 0x48, size 0x4
        int rowNow; // offset 0x4C, size 0x4
        float msgCount; // offset 0x50, size 0x4
        float msgSpeed; // offset 0x54, size 0x4
        float scrCount; // offset 0x58, size 0x4
        float scrSpeed; // offset 0x5C, size 0x4
        int msgIsEnd; // offset 0x60, size 0x4
        int isSpeak; // offset 0x64, size 0x4
        int topColor; // offset 0x68, size 0x4
        int keyWait; // offset 0x6C, size 0x4
        int countWait; // offset 0x70, size 0x4
        int alpha; // offset 0x74, size 0x4
        int scisFlag; // offset 0x78, size 0x4
        unsigned int grapCount; // offset 0x7C, size 0x4
    } msgWnd; // offset 0x0, size 0x80
    int timeout; // offset 0x80, size 0x4
    int count; // offset 0x84, size 0x4
} * st /* r1+0x0 */) {}

// Range: 0x2E01C -> 0x2E038
int RecWritingMsg_isEnd(struct {
    // total size: 0x88
    struct {
        // total size: 0x80
        void * heap; // offset 0x0, size 0x4
        struct {
            // total size: 0x10
            int top; // offset 0x0, size 0x4
            int end; // offset 0x4, size 0x4
            int width; // offset 0x8, size 0x4
            int color; // offset 0xC, size 0x4
        } * layout; // offset 0x4, size 0x4
        int layoutSize; // offset 0x8, size 0x4
        unsigned char * msgBuf; // offset 0xC, size 0x4
        int msgBufSize; // offset 0x10, size 0x4
        int msgBufTop; // offset 0x14, size 0x4
        int msgBufNow; // offset 0x18, size 0x4
        int contFlags; // offset 0x1C, size 0x4
        int fontType; // offset 0x20, size 0x4
        int centering; // offset 0x24, size 0x4
        int posX; // offset 0x28, size 0x4
        int posY; // offset 0x2C, size 0x4
        int fntW; // offset 0x30, size 0x4
        int fntH; // offset 0x34, size 0x4
        int colSize; // offset 0x38, size 0x4
        int colStep; // offset 0x3C, size 0x4
        int colNow; // offset 0x40, size 0x4
        int rowSize; // offset 0x44, size 0x4
        int rowStep; // offset 0x48, size 0x4
        int rowNow; // offset 0x4C, size 0x4
        float msgCount; // offset 0x50, size 0x4
        float msgSpeed; // offset 0x54, size 0x4
        float scrCount; // offset 0x58, size 0x4
        float scrSpeed; // offset 0x5C, size 0x4
        int msgIsEnd; // offset 0x60, size 0x4
        int isSpeak; // offset 0x64, size 0x4
        int topColor; // offset 0x68, size 0x4
        int keyWait; // offset 0x6C, size 0x4
        int countWait; // offset 0x70, size 0x4
        int alpha; // offset 0x74, size 0x4
        int scisFlag; // offset 0x78, size 0x4
        unsigned int grapCount; // offset 0x7C, size 0x4
    } msgWnd; // offset 0x0, size 0x80
    int timeout; // offset 0x80, size 0x4
    int count; // offset 0x84, size 0x4
} * st /* r1+0x0 */) {}

// Range: 0x2E038 -> 0x2E044
void RecWritingMsg_setPos(struct {
    // total size: 0x88
    struct {
        // total size: 0x80
        void * heap; // offset 0x0, size 0x4
        struct {
            // total size: 0x10
            int top; // offset 0x0, size 0x4
            int end; // offset 0x4, size 0x4
            int width; // offset 0x8, size 0x4
            int color; // offset 0xC, size 0x4
        } * layout; // offset 0x4, size 0x4
        int layoutSize; // offset 0x8, size 0x4
        unsigned char * msgBuf; // offset 0xC, size 0x4
        int msgBufSize; // offset 0x10, size 0x4
        int msgBufTop; // offset 0x14, size 0x4
        int msgBufNow; // offset 0x18, size 0x4
        int contFlags; // offset 0x1C, size 0x4
        int fontType; // offset 0x20, size 0x4
        int centering; // offset 0x24, size 0x4
        int posX; // offset 0x28, size 0x4
        int posY; // offset 0x2C, size 0x4
        int fntW; // offset 0x30, size 0x4
        int fntH; // offset 0x34, size 0x4
        int colSize; // offset 0x38, size 0x4
        int colStep; // offset 0x3C, size 0x4
        int colNow; // offset 0x40, size 0x4
        int rowSize; // offset 0x44, size 0x4
        int rowStep; // offset 0x48, size 0x4
        int rowNow; // offset 0x4C, size 0x4
        float msgCount; // offset 0x50, size 0x4
        float msgSpeed; // offset 0x54, size 0x4
        float scrCount; // offset 0x58, size 0x4
        float scrSpeed; // offset 0x5C, size 0x4
        int msgIsEnd; // offset 0x60, size 0x4
        int isSpeak; // offset 0x64, size 0x4
        int topColor; // offset 0x68, size 0x4
        int keyWait; // offset 0x6C, size 0x4
        int countWait; // offset 0x70, size 0x4
        int alpha; // offset 0x74, size 0x4
        int scisFlag; // offset 0x78, size 0x4
        unsigned int grapCount; // offset 0x7C, size 0x4
    } msgWnd; // offset 0x0, size 0x80
    int timeout; // offset 0x80, size 0x4
    int count; // offset 0x84, size 0x4
} * st /* r1+0x0 */, int x /* r1+0x4 */, int y /* r1+0x8 */) {}

// Range: 0x2E044 -> 0x2E048
void setSleepTimer() {}


