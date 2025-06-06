/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\main_story.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00000628 -> 0x00002BA0
*/
unsigned char curtain_alpha_00_tex[768]; // size: 0x300, address: 0x1C8
unsigned short curtain_00_tex[1536]; // size: 0xC00, address: 0x4C8
unsigned char changestar_tex[2048]; // size: 0x800, address: 0x10C8
static int title_time; // size: 0x4, address: 0x1028
static int title_wait; // size: 0x4, address: 0x102C
static unsigned long title_data; // size: 0x4, address: 0x1030
static unsigned long title_bmp_data; // size: 0x4, address: 0x1034
static unsigned long title_bmp_tbl[3]; // size: 0xC, address: 0x18C8
static struct_main_story_c_211 * * lws_data; // size: 0x4, address: 0x1038
static struct_main_story_c_211 * lws_scene; // size: 0x4, address: 0x103C
static struct_main_story_c_451 mess_st; // size: 0x80, address: 0x1040
static struct_main_story_c_451 mess_roll_st; // size: 0x80, address: 0x10C0
static unsigned char mess_heap_area[1024]; // size: 0x400, address: 0x1140
static void * mess_heap; // size: 0x4, address: 0x18D4
static void * mess_roll_heap; // size: 0x4, address: 0x1540
static int st_message_count; // size: 0x4, address: 0x1544
char st_staffroll_txt[2670]; // size: 0xA6E, address: 0x18D8
static char mes_mo1_1[53]; // size: 0x35, address: 0x2348
static char mes_mo1_2[51]; // size: 0x33, address: 0x2380
static struct_main_story_c_504 mes_mo1_data[3]; // size: 0x18, address: 0x23B4
static char mes_wo1_1[53]; // size: 0x35, address: 0x23CC
static char mes_wo1_2[51]; // size: 0x33, address: 0x2404
static char mes_wo1_3[71]; // size: 0x47, address: 0x2438
static struct_main_story_c_504 mes_wo1_data[4]; // size: 0x20, address: 0x2480
static char mes_o2_1[75]; // size: 0x4B, address: 0x24A0
static char mes_o2_2[41]; // size: 0x29, address: 0x24EC
static char mes_o2_3[41]; // size: 0x29, address: 0x2518
static char mes_o2_3a[55]; // size: 0x37, address: 0x2544
static char mes_o2_4[75]; // size: 0x4B, address: 0x257C
static char mes_o2_5[71]; // size: 0x47, address: 0x25C8
static struct_main_story_c_504 mes_o2_data[7]; // size: 0x38, address: 0x2610
static char mes_o3_1[73]; // size: 0x49, address: 0x2648
static char mes_o3_2[65]; // size: 0x41, address: 0x2694
static struct_main_story_c_504 mes_o3_data[3]; // size: 0x18, address: 0x26D8
static char mes_01_1[63]; // size: 0x3F, address: 0x26F0
static char mes_01_2[43]; // size: 0x2B, address: 0x2730
static char mes_01_3[65]; // size: 0x41, address: 0x275C
static char mes_01_4[61]; // size: 0x3D, address: 0x27A0
static char mes_01_5[75]; // size: 0x4B, address: 0x27E0
static char mes_01_6[77]; // size: 0x4D, address: 0x282C
static char mes_01_7[79]; // size: 0x4F, address: 0x287C
static struct_main_story_c_504 mes_01_data[8]; // size: 0x40, address: 0x28CC
static char mes_m02a_1[49]; // size: 0x31, address: 0x290C
static char mes_m02a_2[67]; // size: 0x43, address: 0x2940
static struct_main_story_c_504 mes_m02a_data[3]; // size: 0x18, address: 0x2984
static char mes_w02a_1[51]; // size: 0x33, address: 0x299C
static char mes_w02a_2[73]; // size: 0x49, address: 0x29D0
static struct_main_story_c_504 mes_w02a_data[3]; // size: 0x18, address: 0x2A1C
static char mes_m02b_1[51]; // size: 0x33, address: 0x2A34
static char mes_m02b_2[75]; // size: 0x4B, address: 0x2A68
static char mes_m02b_3[49]; // size: 0x31, address: 0x2AB4
static char mes_m02b_4[45]; // size: 0x2D, address: 0x2AE8
static char mes_m02b_5[79]; // size: 0x4F, address: 0x2B18
static char mes_m02b_6[69]; // size: 0x45, address: 0x2B68
static struct_main_story_c_504 mes_m02b_data[7]; // size: 0x38, address: 0x2BB0
static char mes_w02b_1[39]; // size: 0x27, address: 0x2BE8
static char mes_w02b_1a[73]; // size: 0x49, address: 0x2C10
static char mes_w02b_2[61]; // size: 0x3D, address: 0x2C5C
static char mes_w02b_3[43]; // size: 0x2B, address: 0x2C9C
static struct_main_story_c_504 mes_w02b_data[5]; // size: 0x28, address: 0x2CC8
static char mes_m03_1[71]; // size: 0x47, address: 0x2CF0
static char mes_m03_2[71]; // size: 0x47, address: 0x2D38
static char mes_m03_3[37]; // size: 0x25, address: 0x2D80
static char mes_m03_4[55]; // size: 0x37, address: 0x2DA8
static char mes_m03_5[63]; // size: 0x3F, address: 0x2DE0
static struct_main_story_c_504 mes_m03_data[6]; // size: 0x30, address: 0x2E20
static char mes_w03_1[57]; // size: 0x39, address: 0x2E50
static char mes_w03_2[81]; // size: 0x51, address: 0x2E8C
static char mes_w03_3[61]; // size: 0x3D, address: 0x2EE0
static struct_main_story_c_504 mes_w03_data[4]; // size: 0x20, address: 0x2F20
static char mes_m04_1[71]; // size: 0x47, address: 0x2F40
static char mes_m04_2[67]; // size: 0x43, address: 0x2F88
static char mes_m04_3[59]; // size: 0x3B, address: 0x2FCC
static char mes_m04_4[37]; // size: 0x25, address: 0x3008
static struct_main_story_c_504 mes_m04_data[5]; // size: 0x28, address: 0x3030
static char mes_w04_1[71]; // size: 0x47, address: 0x3058
static char mes_w04_2[67]; // size: 0x43, address: 0x30A0
static char mes_w04_3[65]; // size: 0x41, address: 0x30E4
static struct_main_story_c_504 mes_w04_data[4]; // size: 0x20, address: 0x3128
static char mes_m05_1[37]; // size: 0x25, address: 0x3148
static char mes_m05_2[37]; // size: 0x25, address: 0x3170
static char mes_m05_3[65]; // size: 0x41, address: 0x3198
static char mes_m05_4[39]; // size: 0x27, address: 0x31DC
static struct_main_story_c_504 mes_m05_data[5]; // size: 0x28, address: 0x3204
static char mes_w05_1[37]; // size: 0x25, address: 0x322C
static char mes_w05_2[41]; // size: 0x29, address: 0x3254
static char mes_w05_3[57]; // size: 0x39, address: 0x3280
static char mes_w05_4[49]; // size: 0x31, address: 0x32BC
static struct_main_story_c_504 mes_w05_data[5]; // size: 0x28, address: 0x32F0
static char mes_m06_1[71]; // size: 0x47, address: 0x3318
static char mes_m06_2[65]; // size: 0x41, address: 0x3360
static char mes_m06_3[49]; // size: 0x31, address: 0x33A4
static char mes_m06_4[69]; // size: 0x45, address: 0x33D8
static struct_main_story_c_504 mes_m06_data[5]; // size: 0x28, address: 0x3420
static char mes_w06_1[59]; // size: 0x3B, address: 0x3448
static char mes_w06_2[37]; // size: 0x25, address: 0x3484
static char mes_w06_3[41]; // size: 0x29, address: 0x34AC
static struct_main_story_c_504 mes_w06_data[4]; // size: 0x20, address: 0x34D8
static char mes_07_1[69]; // size: 0x45, address: 0x34F8
static char mes_07_2[69]; // size: 0x45, address: 0x3540
static char mes_07_3[75]; // size: 0x4B, address: 0x3588
static char mes_07E_3[59]; // size: 0x3B, address: 0x35D4
static struct_main_story_c_504 mes_07_data[4]; // size: 0x20, address: 0x3610
static struct_main_story_c_504 mes_07E_data[4]; // size: 0x20, address: 0x3630
static char mes_08a_1[77]; // size: 0x4D, address: 0x3650
static struct_main_story_c_504 mes_08a_data[2]; // size: 0x10, address: 0x36A0
static char mes_08Ea_1[63]; // size: 0x3F, address: 0x36B0
static struct_main_story_c_504 mes_08Ea_data[2]; // size: 0x10, address: 0x36F0
static char mes_08b_1[63]; // size: 0x3F, address: 0x3700
static char mes_08b_2[73]; // size: 0x49, address: 0x3740
static struct_main_story_c_504 mes_08b_data[3]; // size: 0x18, address: 0x378C
static char mes_m09_2[71]; // size: 0x47, address: 0x37A4
static char mes_m09_3[71]; // size: 0x47, address: 0x37EC
static char mes_m09_4[57]; // size: 0x39, address: 0x3834
static struct_main_story_c_504 mes_m09_data[4]; // size: 0x20, address: 0x3870
static char mes_w09_2[71]; // size: 0x47, address: 0x3890
static char mes_w09_3[81]; // size: 0x51, address: 0x38D8
static char mes_w09_4[69]; // size: 0x45, address: 0x392C
static struct_main_story_c_504 mes_w09_data[4]; // size: 0x20, address: 0x3974
static char mes_m0e1_1[93]; // size: 0x5D, address: 0x3994
static char mes_m0e1_2[73]; // size: 0x49, address: 0x39F4
static char mes_m0e1_3[65]; // size: 0x41, address: 0x3A40
static struct_main_story_c_504 mes_m0e1_data[4]; // size: 0x20, address: 0x3A84
static char mes_m0e2_1[53]; // size: 0x35, address: 0x3AA4
static char mes_m0e2_2[57]; // size: 0x39, address: 0x3ADC
static char mes_m0e2_3[45]; // size: 0x2D, address: 0x3B18
static char mes_m0e2_4[55]; // size: 0x37, address: 0x3B48
static char mes_m0e2_5[73]; // size: 0x49, address: 0x3B80
static char mes_m0e2_6[65]; // size: 0x41, address: 0x3BCC
static struct_main_story_c_504 mes_m0e2_data[7]; // size: 0x38, address: 0x3C10
static char mes_m0e_1[37]; // size: 0x25, address: 0x3C48
static char mes_m0e_2[81]; // size: 0x51, address: 0x3C70
static char mes_m0e_3[32]; // size: 0x20, address: 0x3CC4
static struct_main_story_c_504 mes_m0e_data[4]; // size: 0x20, address: 0x3CE4
static char mes_w0e1_1[69]; // size: 0x45, address: 0x3D04
static char mes_w0e1_2[77]; // size: 0x4D, address: 0x3D4C
static char mes_w0e1_3[73]; // size: 0x49, address: 0x3D9C
static struct_main_story_c_504 mes_w0e1_data[4]; // size: 0x20, address: 0x3DE8
static char mes_w0e2_1[67]; // size: 0x43, address: 0x3E08
static char mes_w0e2_2[22]; // size: 0x16, address: 0x3E4C
static struct_main_story_c_504 mes_w0e2_data[3]; // size: 0x18, address: 0x3E64
static char mes_ep1[65]; // size: 0x41, address: 0x3E7C
static char mes_ep2[67]; // size: 0x43, address: 0x3EC0
static struct_main_story_c_504 mes_ep_data[3]; // size: 0x18, address: 0x3F04
static struct_main_story_c_504 * mes_data[30]; // size: 0x78, address: 0x3F1C
static struct_main_story_c_504 * st_mes_ptr; // size: 0x4, address: 0x1548
int story_proc_no; // size: 0x4, address: 0x154C
char end_dumm[18]; // size: 0x12, address: 0x3F94
char * EndingLastMessage; // size: 0x4, address: 0x3FA8
static int loop_flg; // size: 0x4, address: 0x1550
static int story_time_cnt; // size: 0x4, address: 0x1554
int story_seq_step; // size: 0x4, address: 0x1558
static int story_zoom; // size: 0x4, address: 0x155C
static int story_curtain; // size: 0x4, address: 0x1560
static int story_spot_cnt; // size: 0x4, address: 0x1564
static int story_kay_wait; // size: 0x4, address: 0x1568
static int story_message_on; // size: 0x4, address: 0x156C
static int story_message_start; // size: 0x4, address: 0x1570
static int story_doing; // size: 0x4, address: 0x3FAC
static int story_staff_roll; // size: 0x4, address: 0x1574
static int bgtime; // size: 0x4, address: 0x1578
static int mes_time; // size: 0x4, address: 0x157C
static unsigned long story_read_buf; // size: 0x4, address: 0x3FB0
static unsigned long story_buffer; // size: 0x4, address: 0x1580
static unsigned long story_z_buffer; // size: 0x4, address: 0x3FB4
static unsigned short story_norm; // size: 0x2, address: 0x1584
static union_main_story_c_778 story_viewMtx; // size: 0x40, address: 0x1588
static union_main_story_c_778 story_objectMtx[2][240]; // size: 0x7800, address: 0x15C8
static int objMtx_FF; // size: 0x4, address: 0x8DC8
static unsigned long wakuGraphic; // size: 0x4, address: 0x8DCC
static unsigned long wakuGraphic_ofs[3]; // size: 0xC, address: 0x3FB8
static unsigned long bgGraphic; // size: 0x4, address: 0x8DD0
static unsigned long storyGraphic; // size: 0x4, address: 0x8DD4
static unsigned long messageData; // size: 0x4, address: 0x8DD8
static struct_main_story_c_793 vp; // size: 0x10, address: 0x3FC4
union_drmario_gc_c_202 gfx_freebuf[27][8192]; // size: 0x1B0000, address: 0x583B0
// Range: 0x628 -> 0x640
void mainStroy_Init() {
    // References
    // -> union [anonymous] gfx_freebuf[27][8192];
    // -> static unsigned long story_buffer;
}

static union_drmario_gc_c_202 story_setup[19]; // size: 0x98, address: 0x3FD8
static int first_copy; // size: 0x4, address: 0x8DDC
union_drmario_gc_c_202 normal_texture_init_dl[]; // size: 0x0, address: 0x4208
// Range: 0x640 -> 0xA18
void story_zoomfade(union_drmario_gc_c_202 * * glp /* r28 */, int count /* r30 */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r1+0x10
    int i; // r1+0x8
    unsigned short * vram_addr; // r29
    float xp; // f29
    float yp; // f7
    float xs; // f3
    float ys; // f4
    float w; // f31
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> union [anonymous] normal_texture_init_dl[];
}

// Range: 0xA18 -> 0xA44
void get_gbi_stat(struct_main_story_c_3359 * gbi /* r1+0x0 */, unsigned long gbi_addr /* r1+0x4 */) {}

// Range: 0xA44 -> 0xB3C
void curtain_proc(union_drmario_gc_c_202 * * glp /* r1+0x8 */, int count /* r4 */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r5
    int i; // r6
    float w; // f2
    union_drmario_gc_c_202 * _g; // r5
    union_drmario_gc_c_202 * _g; // r5
    union_drmario_gc_c_202 * _g; // r5
    union_drmario_gc_c_202 * _g; // r6
}

union_drmario_gc_c_202 alpha_texture_init_dl[]; // size: 0x0, address: 0x41A0
// Range: 0xB3C -> 0xE10
void curtain_proc_org(union_drmario_gc_c_202 * * glp /* r1+0x8 */, int count /* r4 */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r6
    int i; // r31
    int iy1; // r30
    float y; // f4
    float w; // f2
    float lim; // f1
    union_drmario_gc_c_202 * _g; // r6
    union_drmario_gc_c_202 * _g; // r6
    union_drmario_gc_c_202 * _g; // r6
    union_drmario_gc_c_202 * _g; // r7
    union_drmario_gc_c_202 * _g; // r6
    union_drmario_gc_c_202 * _g; // r30
    union_drmario_gc_c_202 * _g; // r31
    union_drmario_gc_c_202 * _g; // r30
    union_drmario_gc_c_202 * _g; // r6
    union_drmario_gc_c_202 * _g; // r30
    union_drmario_gc_c_202 * _g; // r31
    union_drmario_gc_c_202 * _g; // r12
    union_drmario_gc_c_202 * _g; // r30
    union_drmario_gc_c_202 * _g; // r11
    union_drmario_gc_c_202 * _g; // r10
    union_drmario_gc_c_202 * _g; // r29
    union_drmario_gc_c_202 * _g; // r28
    union_drmario_gc_c_202 * _g; // r6

    // References
    // -> unsigned char curtain_alpha_00_tex[768];
    // -> unsigned short curtain_00_tex[1536];
    // -> union [anonymous] alpha_texture_init_dl[];
}

// Erased
static void waku_disp(union_drmario_gc_c_202 * * glp /* r31 */, unsigned long dataAddr /* r1+0xC */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r1+0x14
    unsigned char * texAddr; // r7
    unsigned char * lutAddr; // r6
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> union [anonymous] normal_texture_init_dl[];
}

unsigned char * bgRomData[][2]; // size: 0x0, address: 0x1DA98
unsigned char * storyRomData[][2]; // size: 0x0, address: 0x1DA60
// Range: 0xE10 -> 0xE94
void * story_bg_init(int stage /* r1+0x8 */, unsigned long buffAddr /* r1+0xC */) {
    // Local variables
    unsigned long nextAddr; // r1+0x8

    // References
    // -> unsigned char * storyRomData[][2];
    // -> static unsigned long wakuGraphic;
    // -> unsigned char * bgRomData[][2];
    // -> static unsigned long bgGraphic;
}

// Range: 0xE94 -> 0x10D4
void story_bg_proc(union_drmario_gc_c_202 * * glp /* r31 */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r1+0x58
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18

    // References
    // -> union [anonymous] normal_texture_init_dl[];
    // -> static unsigned long wakuGraphic_ofs[3];
    // -> static unsigned long wakuGraphic;
    // -> union [anonymous] alpha_texture_init_dl[];
    // -> static unsigned long bgGraphic;
}

// Erased
static void story_st_start() {
    // References
    // -> static int title_time;
    // -> static int story_curtain;
    // -> static int story_message_on;
    // -> static int story_message_start;
    // -> static int story_time_cnt;
    // -> int story_seq_step;
}

// Erased
static void story_st_end() {
    // References
    // -> static int story_doing;
    // -> static int story_zoom;
}

// Erased
static void story_st_clear() {
    // References
    // -> static int story_message_start;
    // -> static int story_time_cnt;
    // -> static int title_time;
    // -> int story_seq_step;
    // -> static int story_kay_wait;
    // -> static struct [anonymous] mess_st;
}

// Erased
static int story_st_meswait() {
    // Local variables
    int r; // r30

    // References
    // -> static int story_message_start;
    // -> static int story_time_cnt;
    // -> static int title_time;
    // -> int story_seq_step;
    // -> static int story_kay_wait;
    // -> static struct [anonymous] mess_st;
}

// Range: 0x10D4 -> 0x13F0
static void story_spot(union_drmario_gc_c_202 * * glp /* r31 */, int x /* r1+0xC */, int y /* r1+0x10 */, int count /* r6 */, unsigned char * texAddr /* r7 */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r1+0x28
    float fx; // f1
    float fy; // f2
    float sx; // f3
    float sy; // f4
    int x1; // r12
    int x2; // r1+0x8
    int y1; // r4
    int y2; // r5
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> union [anonymous] normal_texture_init_dl[];
}

// Erased
static void star_spot(union_drmario_gc_c_202 * * glp /* r3 */, int x /* r4 */, int y /* r5 */, int count /* r6 */) {
    // References
    // -> unsigned char changestar_tex[2048];
}

// Range: 0x13F0 -> 0x1454
unsigned long init_coffee_break(unsigned long buffer /* r1+0x8 */) {
    // Local variables
    unsigned long next; // r1+0x8

    // References
    // -> unsigned char * storyRomData[][2];
    // -> static unsigned long bgGraphic;
}

// Range: 0x1454 -> 0x14DC
void init_coffee_break_cnt() {
    // References
    // -> int story_seq_step;
    // -> static int story_time_cnt;
    // -> static int mes_time;
    // -> static int bgtime;
    // -> static union [anonymous] story_viewMtx;
}

// Range: 0x14DC -> 0x17FC
void draw_coffee_break(union_drmario_gc_c_202 * * glp /* r28 */, int mode /* r29 */, int disp_flg /* r30 */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r1+0x5C
    long pm[4][4]; // r1+0x1C
    struct_main_story_c_211 * scn_dat; // r29
    struct_main_story_c_211 * scn_dat2; // r27
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> union [anonymous] normal_texture_init_dl[];
    // -> static int title_time;
    // -> static int mes_time;
    // -> static unsigned long bgGraphic;
    // -> static int story_time_cnt;
    // -> int story_seq_step;
    // -> static int bgtime;
    // -> static struct [anonymous] * * lws_data;
    // -> static union [anonymous] story_setup[19];
    // -> static union [anonymous] story_viewMtx;
}

// Range: 0x17FC -> 0x18E0
unsigned long init_menu_bg(unsigned long buffer /* r29 */, int flg /* r30 */) {
    // Local variables
    unsigned long next; // r3

    // References
    // -> unsigned char * storyRomData[][2];
    // -> static unsigned long bgGraphic;
    // -> static union [anonymous] story_viewMtx;
    // -> static int bgtime;
}

// Range: 0x18E0 -> 0x1A4C
void draw_menu_bg(union_drmario_gc_c_202 * * glp /* r27 */, int ofsx /* r28 */, int ofsy /* r29 */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r1+0x54
    long pm[4][4]; // r1+0x14
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> union [anonymous] normal_texture_init_dl[];
    // -> static int title_time;
    // -> static int bgtime;
    // -> static unsigned long bgGraphic;
    // -> static union [anonymous] story_setup[19];
    // -> static union [anonymous] story_viewMtx;
}

// Range: 0x1A4C -> 0x1B48
unsigned long init_title(unsigned long buffer /* r30 */, int flg /* r1+0xC */) {
    // Local variables
    unsigned long next; // r1+0x8

    // References
    // -> unsigned char * storyRomData[][2];
    // -> static unsigned long title_bmp_data;
    // -> static unsigned long title_data;
    // -> static union [anonymous] story_viewMtx;
    // -> static int title_wait;
    // -> static int story_spot_cnt;
    // -> static int title_time;
}

unsigned short joyupd[5]; // size: 0xA, address: 0x1CDA0
unsigned char main_joy[4]; // size: 0x4, address: 0x1CE68
int drmario_exit_flag; // size: 0x4, address: 0x18E68
// Range: 0x1B48 -> 0x2154
int demo_title(union_drmario_gc_c_202 * * glp /* r30 */, int flg21 /* r26 */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r1+0x8C
    long pm[4][4]; // r1+0x24
    int i; // r1+0x8
    int flg; // r29
    int ret; // r31
    int mask; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> union [anonymous] alpha_texture_init_dl[];
    // -> static unsigned long title_bmp_tbl[3];
    // -> static unsigned long title_bmp_data;
    // -> static int title_time;
    // -> static int title_wait;
    // -> static int story_spot_cnt;
    // -> unsigned char changestar_tex[2048];
    // -> union [anonymous] normal_texture_init_dl[];
    // -> static unsigned long title_data;
    // -> static struct [anonymous] * lws_scene;
    // -> unsigned char main_joy[4];
    // -> unsigned short joyupd[5];
    // -> int drmario_exit_flag;
    // -> static struct [anonymous] * * lws_data;
    // -> static union [anonymous] story_setup[19];
    // -> static union [anonymous] story_viewMtx;
}

// Erased
static void main_open() {}

unsigned long framecont; // size: 0x4, address: 0x8
unsigned short joynew[5]; // size: 0xA, address: 0x1CD88
static int fin_frame$440; // size: 0x4, address: 0x8DE0
static int fin_demo$441; // size: 0x4, address: 0x8DE4
static int fin_frame$543; // size: 0x4, address: 0x8DE8
static int fin_frame$568; // size: 0x4, address: 0x8DEC
static int fin_demo$569; // size: 0x4, address: 0x8DF0
static int fin_frame$623; // size: 0x4, address: 0x8DF4
static int fin_demo$624; // size: 0x4, address: 0x8DF8
static int fin_frame$667; // size: 0x4, address: 0x8DFC
static int fin_frame$737; // size: 0x4, address: 0x8E00
static int fin_frame$768; // size: 0x4, address: 0x8E04
// Erased
static void read_graphic_data() {
    // Local variables
    unsigned long addr; // r4

    // References
    // -> static unsigned long messageData;
    // -> unsigned char * storyRomData[][2];
    // -> static unsigned long bgGraphic;
    // -> static unsigned long wakuGraphic;
    // -> static unsigned long story_buffer;
    // -> static unsigned long storyGraphic;
}

static int snd_tbl$838[24]; // size: 0x60, address: 0x4070
@enum$101main_story_c;
@enum$101main_story_c graphic_no; // size: 0x4, address: 0x1E994
unsigned short joyflg[4]; // size: 0x8, address: 0x1CE38
unsigned long pendingGFX; // size: 0x4, address: 0x1E998
signed char evs_story_no; // size: 0x1, address: 0x18F92
unsigned char evs_seqnumb; // size: 0x1, address: 0x18F90
// Range: 0x2154 -> 0x24B0
void main_story() {
    // Local variables
    int i; // r23

    // References
    // -> signed char evs_story_no;
    // -> unsigned char evs_seqnumb;
    // -> int story_proc_no;
    // -> unsigned long pendingGFX;
    // -> @enum$101main_story_c graphic_no;
    // -> static int loop_flg;
    // -> static int story_zoom;
    // -> static int story_doing;
    // -> static struct [anonymous] mess_roll_st;
    // -> static struct [anonymous] mess_st;
    // -> static int snd_tbl$838[24];
    // -> static unsigned long messageData;
    // -> unsigned char * storyRomData[][2];
    // -> static unsigned long bgGraphic;
    // -> static unsigned long wakuGraphic;
    // -> static unsigned long story_buffer;
    // -> static unsigned long storyGraphic;
    // -> static void * mess_roll_heap;
    // -> union [anonymous] gfx_freebuf[27][8192];
    // -> static void * mess_heap;
    // -> static unsigned char mess_heap_area[1024];
    // -> static int st_message_count;
    // -> static int story_staff_roll;
    // -> static int story_message_start;
    // -> static int story_message_on;
    // -> static int story_curtain;
    // -> static int story_kay_wait;
    // -> int story_seq_step;
    // -> static int story_time_cnt;
    // -> unsigned long framecont;
    // -> static unsigned long story_read_buf;
    // -> unsigned short joyflg[4];
    // -> static int first_copy;
    // -> static union [anonymous] story_viewMtx;
    // -> static unsigned short story_norm;
    // -> static unsigned long story_z_buffer;
}

union_main_story_c_778 * pObjectMtx; // size: 0x4, address: 0x8E08
// Range: 0x24B0 -> 0x24DC
void init_objMtx() {
    // References
    // -> static int title_time;
    // -> static int objMtx_FF;
    // -> static union [anonymous] story_objectMtx[2][240];
    // -> union [anonymous] * pObjectMtx;
}

union_drmario_gc_c_202 * gp; // size: 0x4, address: 0x1E9A4
union_drmario_gc_c_202 gfx_glist[3][9216]; // size: 0x36000, address: 0x1E9A8
unsigned long gfx_gtask_no; // size: 0x4, address: 0x1E9A0
signed char evs_story_level; // size: 0x1, address: 0x4880
// Range: 0x24DC -> 0x2BA0
void graphic_story() {
    // Local variables
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> union [anonymous] * gp;
    // -> unsigned long gfx_gtask_no;
    // -> union [anonymous] gfx_glist[3][9216];
    // -> static int title_time;
    // -> static int story_time_cnt;
    // -> static int loop_flg;
    // -> static int story_spot_cnt;
    // -> unsigned char changestar_tex[2048];
    // -> union [anonymous] normal_texture_init_dl[];
    // -> static int story_staff_roll;
    // -> static struct [anonymous] mess_st;
    // -> static int story_message_on;
    // -> static unsigned long wakuGraphic;
    // -> static struct [anonymous] mess_roll_st;
    // -> unsigned short joynew[5];
    // -> unsigned char main_joy[4];
    // -> unsigned short joyupd[5];
    // -> static int story_curtain;
    // -> signed char evs_story_level;
    // -> int story_proc_no;
    // -> static int story_zoom;
    // -> static union [anonymous] story_viewMtx;
    // -> static unsigned long story_buffer;
    // -> static struct [anonymous] * * lws_data;
    // -> static int objMtx_FF;
    // -> static union [anonymous] story_objectMtx[2][240];
    // -> union [anonymous] * pObjectMtx;
}

// Erased
static void draw_ending_mess_bg(union_drmario_gc_c_202 * * glp /* r3 */) {}


