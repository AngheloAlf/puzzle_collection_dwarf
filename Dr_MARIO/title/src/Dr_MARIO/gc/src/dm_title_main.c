/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\dm_title_main.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0000C510 -> 0x0000CD58
*/
static int title_demo_flg; // size: 0x4, address: 0x18E48
static int title_demo_no; // size: 0x4, address: 0x18E4C
static int title_manual_no; // size: 0x4, address: 0x18E50
static int title_exit_flag; // size: 0x4, address: 0x18E54
static int title_mode_type; // size: 0x4, address: 0x18E58
static int title_fade_count; // size: 0x4, address: 0x18E5C
static int title_fade_step; // size: 0x4, address: 0x18E60
@enum$98dm_title_main_c;
@enum$98dm_title_main_c main_old; // size: 0x4, address: 0x18F88
unsigned char evs_seqence; // size: 0x1, address: 0x4879
unsigned char * Gzip_bufferp; // size: 0x4, address: 0x10
// Erased
static void dm_title_init() {
    // References
    // -> unsigned char * Gzip_bufferp;
    // -> unsigned char evs_seqence;
    // -> static int title_fade_step;
    // -> static int title_fade_count;
    // -> @enum$98dm_title_main_c main_old;
    // -> static int title_mode_type;
    // -> static int title_exit_flag;
}

static unsigned char _stageTbl[18]; // size: 0x12, address: 0x9A0
unsigned char evs_playmax; // size: 0x1, address: 0x190BC
@enum$101main_story_c;
@enum$101main_story_c graphic_no; // size: 0x4, address: 0x1E994
unsigned long pendingGFX; // size: 0x4, address: 0x1E998
int story_proc_no; // size: 0x4, address: 0x154C
@enum$106dm_title_main_c;
@enum$106dm_title_main_c evs_gamesel; // size: 0x4, address: 0x190B8
@enum$107dm_title_main_c;
@enum$107dm_title_main_c evs_gamemode; // size: 0x4, address: 0x190B4
signed char evs_manual_no; // size: 0x1, address: 0x18F95
// Range: 0xC510 -> 0xC874
int dm_title_main() {
    // Local variables
    int sec_count; // r30
    int out_flg; // r29

    // References
    // -> static int title_demo_flg;
    // -> static int title_manual_no;
    // -> signed char evs_manual_no;
    // -> static int title_demo_no;
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> static unsigned char _stageTbl[18];
    // -> int story_proc_no;
    // -> unsigned long pendingGFX;
    // -> @enum$101main_story_c graphic_no;
    // -> static int title_fade_count;
    // -> static int title_fade_step;
    // -> static int title_mode_type;
    // -> static int title_exit_flag;
    // -> unsigned char evs_playmax;
    // -> unsigned char * Gzip_bufferp;
    // -> unsigned char evs_seqence;
    // -> @enum$98dm_title_main_c main_old;
}

union_drmario_gc_c_202 * gp; // size: 0x4, address: 0x1E9A4
union_drmario_gc_c_202 gfx_glist[3][9216]; // size: 0x36000, address: 0x1E9A8
unsigned long wb_flag; // size: 0x4, address: 0x1E990
union_drmario_gc_c_202 S2Spriteinit_dl[]; // size: 0x0, address: 0x249C8
unsigned char evs_level_21; // size: 0x1, address: 0x18F94
// Range: 0xC874 -> 0xCAAC
void dm_title_graphic() {
    // Local variables
    union_drmario_gc_c_202 * _g; // r1+0x10
    union_drmario_gc_c_202 * _g; // r1+0x10
    union_drmario_gc_c_202 * _g; // r1+0x10
    int c; // r1+0x10
    int a; // r1+0x10
    union_drmario_gc_c_202 * _g; // r1+0x10
    union_drmario_gc_c_202 * _g; // r1+0x10

    // References
    // -> union [anonymous] * gp;
    // -> unsigned long wb_flag;
    // -> union [anonymous] gfx_glist[3][9216];
    // -> static int title_fade_count;
    // -> static int title_exit_flag;
    // -> unsigned char evs_level_21;
    // -> union [anonymous] S2Spriteinit_dl[];
}

static char _mesBootTvErr[53]; // size: 0x35, address: 0x9E0
static char _mesBootContErr[137]; // size: 0x89, address: 0xA18
static char _mesBootCSumErr[87]; // size: 0x57, address: 0xAA4
@enum$98dm_title_main_c main_no; // size: 0x4, address: 0x18E6C
unsigned short joyupd[5]; // size: 0xA, address: 0x1CDA0
unsigned char main_joy[4]; // size: 0x4, address: 0x1CE68
@enum$110dm_title_main_c;
// Range: 0xCAAC -> 0xCC74
int main_boot_error() {
    // Local variables
    struct_dm_title_main_c_1489 * st; // r31
    void * heap; // r1+0x8
    @enum$110dm_title_main_c loop; // r30

    // References
    // -> @enum$98dm_title_main_c main_no;
    // -> @enum$101main_story_c graphic_no;
    // -> unsigned char main_joy[4];
    // -> unsigned short joyupd[5];
    // -> static char _mesBootCSumErr[87];
    // -> static char _mesBootTvErr[53];
    // -> static char _mesBootContErr[137];
    // -> unsigned char * Gzip_bufferp;
}

unsigned long gfx_gtask_no; // size: 0x4, address: 0x1E9A0
// Range: 0xCC74 -> 0xCD58
void graphic_boot_error() {
    // Local variables
    struct_dm_title_main_c_1489 * st; // r27
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> union [anonymous] * gp;
    // -> unsigned long gfx_gtask_no;
    // -> union [anonymous] gfx_glist[3][9216];
    // -> unsigned char * Gzip_bufferp;
}


