/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\dm_virus_init.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00022A38 -> 0x00023E48
*/
static unsigned char limit_table[25]; // size: 0x19, address: 0x1100
// Range: 0x22A38 -> 0x22B50
void init_map_all(struct_dm_game_main_c_487 * map /* r31 */) {
    // Local variables
    int i; // r3
    int p; // r6
}

// Range: 0x22B50 -> 0x22B8C
void clear_map(struct_dm_game_main_c_487 * map /* r1+0x0 */, int x_pos /* r1+0x4 */, int y_pos /* r1+0x8 */) {
    // Local variables
    int j; // r1+0x0
}

// Range: 0x22B8C -> 0x22C84
void clear_map_all(struct_dm_game_main_c_487 * map /* r1+0x0 */) {
    // Local variables
    int i; // r8
    int j; // r9
}

// Range: 0x22C84 -> 0x22CB4
int get_map_info(struct_dm_game_main_c_487 * map /* r1+0x0 */, int x_pos /* r1+0x4 */, int y_pos /* r1+0x8 */) {}

// Range: 0x22CB4 -> 0x22D64
int get_virus_color_count(struct_dm_game_main_c_487 * map /* r1+0x8 */, unsigned char * red /* r1+0xC */, unsigned char * yellow /* r1+0x10 */, unsigned char * blue /* r1+0x14 */) {
    // Local variables
    int i; // r1+0x8
    int ret; // r11
    int color[3]; // r1+0x18
}

// Range: 0x22D64 -> 0x22D90
int get_virus_count(struct_dm_game_main_c_487 * map /* r3 */) {
    // Local variables
    unsigned char ryb[3]; // r1+0xC
}

// Range: 0x22D90 -> 0x22DEC
void set_map(struct_dm_game_main_c_487 * map /* r1+0x0 */, int x_pos /* r1+0x4 */, int y_pos /* r1+0x8 */, int item /* r1+0xC */, int pal /* r7 */) {
    // Local variables
    int pal_save; // r8
}

// Range: 0x22DEC -> 0x22E44
void set_virus(struct_dm_game_main_c_487 * map /* r1+0x0 */, int x_pos /* r1+0x4 */, int y_pos /* r1+0x8 */, int virus /* r6 */, int virus_anime_no /* r1+0x10 */) {
    // Local variables
    int pal_save; // r8
}

// Range: 0x22E44 -> 0x23038
unsigned char dm_check_color(struct_dm_game_main_c_1653 * v_map /* r1+0x0 */, unsigned short x_pos /* r1+0x4 */, unsigned short y_pos /* r1+0x6 */, unsigned char check_color /* r1+0x8 */) {
    // Local variables
    unsigned char p; // r11
}

// Range: 0x23038 -> 0x23130
unsigned char dm_check_color_2(struct_dm_game_main_c_1653 * v_map /* r1+0x0 */, unsigned short x_pos /* r1+0x4 */, unsigned short y_pos /* r1+0x6 */, unsigned char check_color /* r1+0x8 */) {
    // Local variables
    unsigned char p; // r10
}

// Range: 0x23130 -> 0x233AC
void dm_virus_map_copy(struct_dm_game_main_c_1653 * v_map_a /* r3 */, struct_dm_game_main_c_1653 * v_map_b /* r4 */, unsigned char * order_a /* r1+0x8 */, unsigned char * order_b /* r1+0xC */) {
    // Local variables
    int i; // r1+0x0
}

@enum$107dm_title_main_c;
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
// Range: 0x233AC -> 0x2340C
int dm_get_first_virus_count(@enum$107dm_title_main_c mode /* r1+0x8 */, struct_dm_game_main_c_176 * state /* r1+0xC */) {
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
void _dm_virus_init(@enum$107dm_title_main_c mode /* r14 */, struct_dm_game_main_c_176 * state /* r1+0x4C */, struct_dm_game_main_c_1653 * v_map /* r29 */, unsigned char * order /* r19 */, int special /* r1+0x50 */) {
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
void dm_virus_init(@enum$107dm_title_main_c mode /* r3 */, struct_dm_game_main_c_176 * state /* r4 */, struct_dm_game_main_c_1653 * v_map /* r5 */, unsigned char * order /* r6 */) {}

// Range: 0x23990 -> 0x23B38
static void _makeFlash_checkOrdre(struct_dm_virus_init_c_668 * st /* r1+0x0 */) {
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
int make_flash_virus_pos(struct_dm_game_main_c_176 * state /* r27 */, struct_dm_game_main_c_1653 * vmap /* r25 */, unsigned char * order /* r24 */) {
    // Local variables
    struct_dm_virus_init_c_668 watchMakeFlash[1]; // r1+0x2C
    struct_dm_virus_init_c_668 * st; // r31
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


