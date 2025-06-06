/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\main_menu.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0002E048 -> 0x0004D71C
*/
unsigned int * yamauchi_debug_pointer; // size: 0x4, address: 0x55340
// Erased
static float timeFunc_update(float time /* f1 */, float step /* r1+0x4 */) {}

// Erased
static float timeFunc_loop(float time /* f1 */, float step /* f2 */) {}

// Erased
static float coordFunc_curve(float time /* r1+0x0 */) {}

struct SMenuItem {
    // total size: 0x90
    float center[2]; // offset 0x0, size 0x8
    void (* transFunc)(struct SMenuItem *); // offset 0x8, size 0x4
    float trans[2]; // offset 0xC, size 0x8
    float transTime; // offset 0x14, size 0x4
    float transStep; // offset 0x18, size 0x4
    float transRange[2][2]; // offset 0x1C, size 0x10
    void (* scaleFunc)(struct SMenuItem *); // offset 0x2C, size 0x4
    float scale[2]; // offset 0x30, size 0x8
    float scaleTime; // offset 0x38, size 0x4
    float scaleStep; // offset 0x3C, size 0x4
    float scaleRange[2][2]; // offset 0x40, size 0x10
    void (* colorFunc)(struct SMenuItem *); // offset 0x50, size 0x4
    float color[4]; // offset 0x54, size 0x10
    float colorTime; // offset 0x64, size 0x4
    float colorStep; // offset 0x68, size 0x4
    float colorRange[2][4]; // offset 0x6C, size 0x20
    struct_main_menu_c_37 flags; // offset 0x8C, size 0x4
};
// Erased
static void transFunc_linear(struct SMenuItem * st /* r1+0x0 */) {
    // Local variables
    int i; // r1+0x0
}

// Range: 0x2E048 -> 0x2E0F0
static void transFunc_curve(struct SMenuItem * st /* r1+0x0 */) {
    // Local variables
    int i; // r1+0x0
}

// Range: 0x2E0F0 -> 0x2E1A8
static void transFunc_finger(struct SMenuItem * st /* r31 */) {
    // Local variables
    float time; // r1+0x8
    float coord; // f2
    int i; // r1+0x8
}

// Erased
static void scaleFunc_linear(struct SMenuItem * st /* r1+0x0 */) {
    // Local variables
    int i; // r1+0x0
}

// Range: 0x2E1A8 -> 0x2E250
static void scaleFunc_curve(struct SMenuItem * st /* r1+0x0 */) {
    // Local variables
    int i; // r1+0x0
}

// Erased
static void colorFunc_linear(struct SMenuItem * st /* r1+0x0 */) {
    // Local variables
    int i; // r1+0x0
}

// Range: 0x2E250 -> 0x2E328
static void colorFunc_curve(struct SMenuItem * st /* r1+0x0 */) {
    // Local variables
    int i; // r1+0x0
}

// Range: 0x2E328 -> 0x2E410
static void colorFunc_cursor(struct SMenuItem * st /* r31 */) {
    // Local variables
    float time; // r1+0x8
    float coord; // f2
    int i; // r1+0x8
}

static float color$251[4]; // size: 0x10, address: 0x1440
// Range: 0x2E410 -> 0x2E5A4
static void menuItem_init(struct SMenuItem * st /* r1+0x8 */, int x /* r1+0xC */, int y /* r1+0x10 */) {
    // Local variables
    int i; // r1+0x8

    // References
    // -> static float color$251[4];
}

// Range: 0x2E5A4 -> 0x2E67C
static void menuItem_updateTransScale(struct SMenuItem * st /* r30 */, struct SMenuItem * parent /* r31 */) {
    // Local variables
    int i; // r1+0x8
}

// Range: 0x2E67C -> 0x2E71C
static void menuItem_updateColor(struct SMenuItem * st /* r30 */, struct SMenuItem * parent /* r31 */) {
    // Local variables
    int i; // r1+0x8
}

// Erased
static void menuItem_update(struct SMenuItem * st /* r30 */, struct SMenuItem * parent /* r31 */) {}

// Erased
static void menuItem_updateN(struct SMenuItem * array /* r1+0x8 */, int count /* r28 */, struct SMenuItem * parent /* r29 */) {
    // Local variables
    int i; // r30
}

// Erased
static void menuItem_setTransDir(struct SMenuItem * st /* r1+0x0 */, int dir /* r1+0x4 */) {}

// Erased
static void menuItem_setScaleDir(struct SMenuItem * st /* r1+0x0 */, int dir /* r1+0x4 */) {}

// Range: 0x2E71C -> 0x2E764
static void menuItem_setColorDir(struct SMenuItem * st /* r1+0x0 */, int dir /* r1+0x4 */) {}

// Erased
static void menuItem_setTransLow(struct SMenuItem * item /* r1+0x0 */, float x /* r1+0x4 */, float y /* r1+0x8 */) {}

// Erased
static void menuItem_setTransHi(struct SMenuItem * item /* r1+0x0 */, float x /* r1+0x4 */, float y /* r1+0x8 */) {}

// Erased
static void menuItem_setScaleLow(struct SMenuItem * item /* r1+0x0 */, float x /* r1+0x4 */, float y /* r1+0x8 */) {}

// Erased
static void menuItem_setScaleHi(struct SMenuItem * item /* r1+0x0 */, float x /* r1+0x4 */, float y /* r1+0x8 */) {}

// Erased
static void menuItem_setColorLow(struct SMenuItem * item /* r1+0x0 */, float bright /* r1+0x4 */, float alpha /* r1+0x8 */) {}

// Erased
static void menuItem_setColorHi(struct SMenuItem * item /* r1+0x0 */, float bright /* r1+0x4 */, float alpha /* r1+0x8 */) {}

// Erased
static void menuItem_setColor_cursor(struct SMenuItem * item /* r1+0x0 */) {}

// Erased
static void menuItem_setColor_cursor2(struct SMenuItem * item /* r1+0x8 */, float red /* r1+0xC */, float green /* r1+0x10 */, float blue /* r1+0x14 */) {
    // Local variables
    float rgb[3]; // r1+0x24
}

// Erased
static void menuItem_setColor_fade(struct SMenuItem * item /* r1+0x0 */) {}

// Erased
static void menuItem_setPrim(struct SMenuItem * st /* r1+0x8 */, union_drmario_gc_c_202 * * gpp /* r1+0xC */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r5
    union_drmario_gc_c_202 * _g; // r9
}

@enum$110dm_title_main_c;
// Range: 0x2E764 -> 0x2E838
static @enum$110dm_title_main_c menuItem_outOfScreen(struct SMenuItem * st /* r1+0x8 */, int width /* r1+0xC */, int height /* r1+0x10 */) {}

// Range: 0x2E838 -> 0x2EB70
static int menuItem_drawTex(struct SMenuItem * st /* r7 */, union_drmario_gc_c_202 * * gpp /* r4 */, struct_tex_func_c_1287 * tex /* r5 */, int cached /* r6 */) {}

// Erased
static int menuItem_drawTex2(struct SMenuItem * st /* r28 */, union_drmario_gc_c_202 * * gpp /* r29 */, struct_tex_func_c_1287 * tex /* r30 */, int cached /* r31 */, float x /* r1+0x18 */, float y /* r1+0x1C */, float sx /* r1+0x20 */, float sy /* r1+0x24 */) {}

// Range: 0x2EB70 -> 0x2EF5C
static int menuItem_drawAlphaTex(struct SMenuItem * st /* r11 */, union_drmario_gc_c_202 * * gpp /* r4 */, struct_tex_func_c_1287 * texC /* r9 */, struct_tex_func_c_1287 * texA /* r6 */, int cached /* r1+0x28 */) {
    // Local variables
    int width; // r10
    int height; // r5
}

// Erased
static int menuItem_drawItem(struct SMenuItem * st /* r12 */, union_drmario_gc_c_202 * * gpp /* r4 */, struct_tex_func_c_1287 * tex /* r5 */, int cached /* r6 */, int itemCount /* r7 */, int itemIndex /* r8 */) {
    // Local variables
    int height; // r11
}

// Erased
static int menuItem_drawItem2(struct SMenuItem * st /* r25 */, union_drmario_gc_c_202 * * gpp /* r26 */, struct_tex_func_c_1287 * tex /* r27 */, int cached /* r28 */, int itemCount /* r29 */, int itemIndex /* r30 */, float x /* r1+0x20 */, float y /* r1+0x24 */, float sx /* r1+0x28 */, float sy /* r1+0x2C */) {}

// Erased
static int menuItem_drawAlphaItem(struct SMenuItem * st /* r30 */, union_drmario_gc_c_202 * * gpp /* r4 */, struct_tex_func_c_1287 * texC /* r5 */, struct_tex_func_c_1287 * texA /* r6 */, int cached /* r7 */, int itemCount /* r8 */, int itemIndex /* r9 */) {
    // Local variables
    int width; // r12
    int height; // r31
}

// Erased
static int menuItem_drawAlphaItem2(struct SMenuItem * st /* r30 */, union_drmario_gc_c_202 * * gpp /* r4 */, struct_tex_func_c_1287 * texC /* r5 */, struct_tex_func_c_1287 * texA /* r6 */, int cached /* r7 */, int itemCount /* r8 */, int itemIndex /* r9 */) {
    // Local variables
    int width; // r31
    int height; // r1+0x8
}

static union_drmario_gc_c_202 fade_normal_texture_init_dl[3]; // size: 0x18, address: 0x1480
static union_drmario_gc_c_202 fade_alpha_texture_init_dl[3]; // size: 0x18, address: 0x1498
static union_drmario_gc_c_202 fade_intensity_texture_init_dl[5]; // size: 0x28, address: 0x14B0
static union_drmario_gc_c_202 fade_fillrect_init_dl[5]; // size: 0x28, address: 0x14D8
static union_drmario_gc_c_202 fade_shadow_texture_init_dl[4]; // size: 0x20, address: 0x1500
static unsigned char _timeAttack_levelTable[3]; // size: 0x3, address: 0x1520
static char _mesP1[31]; // size: 0x1F, address: 0x1524
static char _mes2P[31]; // size: 0x1F, address: 0x1544
static char _mes4P[31]; // size: 0x1F, address: 0x1564
static char _mesOpt[33]; // size: 0x21, address: 0x1584
static char _mesSt[280]; // size: 0x118, address: 0x15A8
static char _mesLv[298]; // size: 0x12A, address: 0x16C0
static char _mesVsCom[333]; // size: 0x14D, address: 0x17EC
static char _mesVcFlash[282]; // size: 0x11A, address: 0x193C
static char _mesLvTaiQ[407]; // size: 0x197, address: 0x1A58
static char _mesLvTimeAt[249]; // size: 0xF9, address: 0x1BF0
static char _mesNs1[111]; // size: 0x6F, address: 0x1CEC
static char _mesNs2[29]; // size: 0x1D, address: 0x1D5C
static char _mesVsMan[282]; // size: 0x11A, address: 0x1D7C
static char _mesVmFlash[253]; // size: 0xFD, address: 0x1E98
static char _mesVmTimeAt[263]; // size: 0x107, address: 0x1F98
static char _mesVsNum[23]; // size: 0x17, address: 0x20A0
static char _mesVs4P[357]; // size: 0x165, address: 0x20B8
static char _mes4PTag[563]; // size: 0x233, address: 0x2220
static char _mes4PFlash[334]; // size: 0x14E, address: 0x2454
static char _mesRec[37]; // size: 0x25, address: 0x25A4
static char _mesTutol[77]; // size: 0x4D, address: 0x25CC
static char _mesName[51]; // size: 0x33, address: 0x261C
static char _mesVsCnt[49]; // size: 0x31, address: 0x2650
static char _mesSnd[95]; // size: 0x5F, address: 0x2684
static char _mesBak[45]; // size: 0x2D, address: 0x26E4
static char _mesRecMs1[37]; // size: 0x25, address: 0x2714
static char _mesRecMs2[41]; // size: 0x29, address: 0x273C
static char _mesRule1[39]; // size: 0x27, address: 0x2768
static char _mesRule2[51]; // size: 0x33, address: 0x2790
static char _mesRule3[55]; // size: 0x37, address: 0x27C4
static char _mesRule4[55]; // size: 0x37, address: 0x27FC
static char _mesKotu[43]; // size: 0x2B, address: 0x2834
static char _mesNameSel[31]; // size: 0x1F, address: 0x2860
static char _mesNameErase[109]; // size: 0x6D, address: 0x2880
static char _mesNameErase2[27]; // size: 0x1B, address: 0x28F0
static char _mesVsCnt2[35]; // size: 0x23, address: 0x290C
static char _mesSound[71]; // size: 0x47, address: 0x2930
static char _mesDoErase[99]; // size: 0x63, address: 0x2978
static char _mesDoErase1[35]; // size: 0x23, address: 0x29DC
static char _mesNoCont2[51]; // size: 0x33, address: 0x2A00
static char _mesNoCont3[53]; // size: 0x35, address: 0x2A34
static char _mesNoCont4[51]; // size: 0x33, address: 0x2A6C
static char _mesMisc[45]; // size: 0x2D, address: 0x2AA0
static char _mesScore[63]; // size: 0x3F, address: 0x2AD0
static char _mesScoreOnOff[37]; // size: 0x25, address: 0x2B10
static char _mesStereo[37]; // size: 0x25, address: 0x2B38
static char _mesMono[37]; // size: 0x25, address: 0x2B60
static char _mesWriting[71]; // size: 0x47, address: 0x2B88
static char _mesDeleting[73]; // size: 0x49, address: 0x2BD0
static unsigned char _gameLvItemColor[3][2][4]; // size: 0x18, address: 0x2C1C
static unsigned char _musicItemColor[2][4]; // size: 0x8, address: 0x2C34
@enum$856main_menu_c;
// Range: 0x2EF5C -> 0x2F02C
static void menuTitle_setTitle(struct_main_menu_c_2833 * st /* r1+0x0 */, @enum$856main_menu_c mode /* r1+0x4 */) {
    // Local variables
    int titleNo; // r6
}

// Erased
static void menuTitle_init(struct_main_menu_c_2833 * st /* r3 */, void * global /* r1+0xC */, int x /* r23 */, int y /* r24 */) {
    // Local variables
    struct SMenuItem * item; // r26
    int i; // r25
}

// Erased
static void menuTitle_update(struct_main_menu_c_2833 * st /* r1+0x8 */, struct SMenuItem * parent /* r29 */) {}

// Range: 0x2F02C -> 0x2F310
static void menuTitle_draw(struct_main_menu_c_2833 * st /* r31 */, union_drmario_gc_c_202 * * gpp /* r17 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x28
    struct_tex_func_c_1287 * texC; // r19
    int i; // r18
    int j; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
}

static int _menuCursor_cursor_4_pattern[30]; // size: 0x78, address: 0x2C3C
// Erased
static void menuCursor_setFingerPos(struct_main_menu_c_3746 * st /* r1+0x8 */, int x /* r1+0xC */, int y /* r1+0x10 */) {
    // Local variables
    struct SMenuItem * item; // r8
}

// Erased
static void menuCursor_setPlayerPos(struct_main_menu_c_3746 * st /* r1+0x8 */, int x /* r1+0xC */, int y /* r1+0x10 */) {
    // Local variables
    struct SMenuItem * item; // r8
}

static float _color$1040[4][3]; // size: 0x30, address: 0x2CB4
@enum$1025main_menu_c;
// Range: 0x2F310 -> 0x2F5E0
static void menuCursor_init2(struct_main_menu_c_3746 * st /* r29 */, void * global /* r1+0xC */, @enum$1025main_menu_c type /* r30 */, int playerCount /* r1+0x14 */, int cpuCount /* r1+0x18 */, int playerNo /* r28 */, int x /* r9 */, int y /* r10 */, int w /* r1+0x98 */, int h /* r31 */) {
    // Local variables
    int i; // r1+0x8

    // References
    // -> static float _color$1040[4][3];
}

// Erased
static void menuCursor_init(struct_main_menu_c_3746 * st /* r3 */, void * global /* r4 */, @enum$1025main_menu_c type /* r5 */, int playerNo /* r6 */, int x /* r7 */, int y /* r10 */, int w /* r1+0x28 */, int h /* r1+0x2C */) {}

// Range: 0x2F5E0 -> 0x2F6BC
static void menuCursor_update(struct_main_menu_c_3746 * st /* r30 */, struct SMenuItem * parent /* r31 */) {
    // Local variables
    int i; // r1+0x8
}

static int _pnts$1106[9][8]; // size: 0x120, address: 0x2CF0
// Range: 0x2F6BC -> 0x302F4
static void menuCursor_draw1(struct_main_menu_c_3746 * * stAry /* r1+0x6C */, int count /* r1+0x70 */, union_drmario_gc_c_202 * * gpp /* r1+0x74 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r31
    struct_main_menu_c_3746 * st; // r27
    struct SMenuItem * item; // r29
    struct_tex_func_c_1287 * texC; // r1+0x8
    int i; // r18
    int j; // r1+0x7C
    int k; // r1+0x8
    int cached; // r14
    union_drmario_gc_c_202 * _g; // r7
    union_drmario_gc_c_202 * _g; // r6
    union_drmario_gc_c_202 * _g; // r6
    int kado; // r20
    int pattern; // r1+0x78
    int px[4]; // r1+0x5C
    int py[4]; // r1+0x4C
    int tx[3]; // r1+0x40
    int ty[3]; // r1+0x34
    int dx[3]; // r1+0x28
    int size; // r1+0x8
    union_drmario_gc_c_202 * _g; // r6
    union_drmario_gc_c_202 * _g; // r4
    union_drmario_gc_c_202 * _g; // r5
    union_drmario_gc_c_202 * _g; // r7
    union_drmario_gc_c_202 * _g; // r4
    union_drmario_gc_c_202 * _g; // r5
    union_drmario_gc_c_202 * _g; // r6
    int * pnts; // r1+0x8
    union_drmario_gc_c_202 * _g; // r6
    union_drmario_gc_c_202 * _g; // r8
    union_drmario_gc_c_202 * _g; // r9
    int x0; // r9
    int y0; // r1+0x8
    int x1; // r7
    int y1; // r1+0x8
    union_drmario_gc_c_202 * _g; // r8
    union_drmario_gc_c_202 * _g; // r6
    union_drmario_gc_c_202 * _g; // r5

    // References
    // -> static int _pnts$1106[9][8];
    // -> static int _menuCursor_cursor_4_pattern[30];
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
}

static int _type$1345[4][4]; // size: 0x40, address: 0x2E18
// Range: 0x302F4 -> 0x306A0
static void menuCursor_draw2(struct_main_menu_c_3746 * * stAry /* r14 */, int count /* r18 */, union_drmario_gc_c_202 * * gpp /* r1+0x2C */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x28
    struct_main_menu_c_3746 * st; // r1+0x8
    struct_tex_func_c_1287 * texC; // r15
    struct_tex_func_c_1287 * texA; // r1+0x8
    int i; // r19
    int j; // r25
    int k; // r1+0x8
    int cached; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static int _type$1345[4][4];
    // -> static union [anonymous] fade_alpha_texture_init_dl[3];
}

// Erased
static void menuCursor_draw(struct_main_menu_c_3746 * * stAry /* r29 */, int count /* r30 */, union_drmario_gc_c_202 * * gpp /* r31 */) {}

// Erased
static void menuBottle_init(struct_main_menu_c_7733 * st /* r31 */, void * global /* r1+0xC */, int x /* r5 */, int y /* r6 */) {}

// Erased
static void menuBottle_update(struct_main_menu_c_7733 * st /* r30 */, struct SMenuItem * parent /* r31 */) {}

static unsigned short cap_pos$1442[22][13]; // size: 0x23C, address: 0x2E58
// Range: 0x306A0 -> 0x30BFC
static void menuBottle_draw(struct_main_menu_c_7733 * st /* r30 */, union_drmario_gc_c_202 * * gpp /* r29 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r20
    struct_tex_func_c_1287 * tex; // r1+0x8
    union_drmario_gc_c_202 * _g; // r3
    struct SMenuItem * item; // r31
    unsigned short * caps; // r4
    int c; // r5
    int x; // r6
    int y; // r7
    int px; // r8
    int py; // r9
    int ty; // r10
    int cap; // r1+0x8
    union_drmario_gc_c_202 * _g; // r6
    union_drmario_gc_c_202 * _g; // r7
    union_drmario_gc_c_202 * _g; // r8
    union_drmario_gc_c_202 * _g; // r4
    union_drmario_gc_c_202 * _g; // r5
    union_drmario_gc_c_202 * _g; // r8
    union_drmario_gc_c_202 * _g; // r5
    union_drmario_gc_c_202 * _g; // r18
    union_drmario_gc_c_202 * _g; // r6
    union_drmario_gc_c_202 * _g; // r7
    union_drmario_gc_c_202 * _g; // r12
    union_drmario_gc_c_202 * _g; // r18
    union_drmario_gc_c_202 * _g; // r19
    union_drmario_gc_c_202 * _g; // r21
    union_drmario_gc_c_202 * _g; // r20
    union_drmario_gc_c_202 * _g; // r11
    union_drmario_gc_c_202 * _g; // r3

    // References
    // -> static unsigned short cap_pos$1442[22][13];
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
}

static float _lvGauge_step[3]; // size: 0xC, address: 0x3094
static int _size$1542[3][2]; // size: 0x18, address: 0x30A0
static @enum$1025main_menu_c _type$1543[3]; // size: 0xC, address: 0x30B8
struct SMenuLvGauge {
    // total size: 0x300
    void * global; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    int levelMax; // offset 0x8, size 0x4
    int level; // offset 0xC, size 0x4
    struct SMenuItem miBase[1]; // offset 0x10, size 0x90
    struct_main_menu_c_3746 cursor[1]; // offset 0xA0, size 0x260
};
// Erased
static void menuLvGauge_init(struct SMenuLvGauge * st /* r30 */, void * global /* r31 */, int size /* r28 */, int playerNo /* r29 */, int level /* r1+0x20 */, int x /* r8 */, int y /* r9 */) {
    // References
    // -> static @enum$1025main_menu_c _type$1543[3];
    // -> static int _size$1542[3][2];
}

// Erased
static void menuLvGauge_input(struct SMenuLvGauge * st /* r30 */, int playerNo /* r4 */) {
    // Local variables
    int rep; // r1+0x8
    int vec; // r4
}

// Erased
static void menuLvGauge_update(struct SMenuLvGauge * st /* r31 */, struct SMenuItem * parent /* r29 */) {
    // Local variables
    struct SMenuItem * item; // r5

    // References
    // -> static float _lvGauge_step[3];
}

// Range: 0x30BFC -> 0x30EAC
static void menuLvGauge_draw1(struct SMenuLvGauge * * stAry /* r3 */, int count /* r1+0xC */, union_drmario_gc_c_202 * * gpp /* r1+0x10 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r10
    struct SMenuLvGauge * st; // r11
    int i; // r1+0x8
    union_drmario_gc_c_202 * _g; // r7
    int x; // r28
    int y; // r29
    int w; // r9
    int h; // r12
    union_drmario_gc_c_202 * _g; // r10
    union_drmario_gc_c_202 * _g; // r30
    union_drmario_gc_c_202 * _g; // r30

    // References
    // -> static float _lvGauge_step[3];
    // -> static union [anonymous] fade_fillrect_init_dl[5];
}

// Erased
static void menuLvGauge_draw2(struct SMenuLvGauge * * stAry /* r28 */, int count /* r29 */, union_drmario_gc_c_202 * * gpp /* r30 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x1C
    int i; // r3
    int * listp; // r4
    void * list; // r31
}

// Erased
static void menuLvGauge_draw(struct SMenuLvGauge * * stAry /* r28 */, int count /* r29 */, union_drmario_gc_c_202 * * gpp /* r30 */) {}

// Erased
static void menuYN_setFade(struct_main_menu_c_12798 * st /* r1+0x0 */, int dir /* r1+0x4 */, float time /* r1+0x8 */) {
    // Local variables
    struct SMenuItem * item; // r5
}

// Erased
static void menuYN_setFadeDir(struct_main_menu_c_12798 * st /* r1+0x0 */, int dir /* r1+0x4 */) {}

static int _yn$1691[2][2]; // size: 0x10, address: 0x30C8
// Range: 0x30EAC -> 0x31074
static void menuYN_init(struct_main_menu_c_12798 * st /* r30 */, void * global /* r31 */, int x /* r5 */, int y /* r6 */) {
    // Local variables
    struct SMenuItem * item; // r6
    int i; // r27

    // References
    // -> static int _yn$1691[2][2];
}

// Range: 0x31074 -> 0x31118
static @enum$110dm_title_main_c menuYN_input(struct_main_menu_c_12798 * st /* r31 */, int playerNo /* r4 */) {
    // Local variables
    int trg; // r1+0x8
    int sel; // r5
}

// Erased
static void menuYN_update(struct_main_menu_c_12798 * st /* r31 */, struct SMenuItem * parent /* r28 */) {}

static char * _yn$1767[2]; // size: 0x8, address: 0x21D64
// Range: 0x31118 -> 0x31350
static void menuYN_draw(struct_main_menu_c_12798 * st /* r29 */, union_drmario_gc_c_202 * * gpp /* r30 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x14
    struct SMenuItem * item; // r31
    void * list[1]; // r1+0x10
    float x; // f31
    int i; // r31
    int j; // r23
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static char * _yn$1767[2];
    // -> static union [anonymous] fade_intensity_texture_init_dl[5];
}

// Erased
static void menuMes_setFade(struct_main_menu_c_13982 * st /* r1+0x0 */, int dir /* r1+0x4 */, float time /* r1+0x8 */) {}

// Erased
static void menuMes_setFadeDir(struct_main_menu_c_13982 * st /* r1+0x0 */, int dir /* r1+0x4 */) {}

// Range: 0x31350 -> 0x314E4
static void menuMes_init(struct_main_menu_c_13982 * st /* r24 */, void * global /* r25 */, void * hpp /* r26 */, int col /* r27 */, int row /* r28 */, int x /* r22 */, int y /* r23 */) {
    // Local variables
    struct SMenuItem * item; // r4
    void * hp; // r29
}

// Erased
static void menuMes_setStr(struct_main_menu_c_13982 * st /* r30 */, const char * str /* r31 */) {}

// Erased
static void menuMes_update(struct_main_menu_c_13982 * st /* r29 */, struct SMenuItem * parent /* r30 */) {}

// Erased
static void menuMes_draw(struct_main_menu_c_13982 * st /* r1+0x8 */, union_drmario_gc_c_202 * * gpp /* r30 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x1C
    struct SMenuItem * item; // r8
    struct_main_story_c_451 * wnd; // r31
    void * list[1]; // r1+0x18
    int w; // r5
    int h; // r6
}

// Erased
static void menuSpeedAsk_init(struct_main_menu_c_14719 * st /* r3 */, void * global /* r1+0xC */, int size /* r1+0x10 */, int speed /* r1+0x14 */, int x /* r7 */, int y /* r8 */) {}

// Erased
static void menuSpeedAsk_update(struct_main_menu_c_14719 * st /* r30 */, struct SMenuItem * parent /* r31 */) {}

static int _tex$1865[4][2]; // size: 0x20, address: 0x30EC
static int _row$1866[4]; // size: 0x10, address: 0x310C
// Range: 0x314E4 -> 0x31810
static void menuSpeedAsk_draw(struct_main_menu_c_14719 * * stAry /* r1+0x2C */, int count /* r1+0x30 */, union_drmario_gc_c_202 * * gpp /* r1+0x34 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x28
    struct_main_menu_c_14719 * st; // r1+0x8
    struct_tex_func_c_1287 * texC; // r20
    struct_tex_func_c_1287 * texA; // r22
    int i; // r15
    int j; // r19
    int k; // r24
    int cached; // r25
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static int _tex$1865[4][2];
    // -> static int _row$1866[4];
    // -> static union [anonymous] fade_alpha_texture_init_dl[3];
}

static int _size$1948[4][2]; // size: 0x20, address: 0x311C
static @enum$1025main_menu_c _type$1949[4]; // size: 0x10, address: 0x21D6C
static signed char _pos$1959[4][2]; // size: 0x8, address: 0x313C
// Range: 0x31810 -> 0x31ADC
static void menuSpeedItem_init(struct_main_menu_c_15312 * st /* r23 */, void * global /* r24 */, int size /* r25 */, int playerNo /* r26 */, int speed /* r1+0x20 */, int x /* r8 */, int y /* r9 */, int step /* r22 */) {
    // Local variables
    struct SMenuItem * item; // r27
    int i; // r21
    int j; // r1+0x10
    int k; // r1+0x10

    // References
    // -> static @enum$1025main_menu_c _type$1949[4];
    // -> static int _size$1948[4][2];
    // -> static signed char _pos$1959[4][2];
    // -> static unsigned char _gameLvItemColor[3][2][4];
}

// Erased
static void menuSpeedItem_input(struct_main_menu_c_15312 * st /* r30 */, int playerNo /* r4 */) {
    // Local variables
    int rep; // r1+0x8
    int vec; // r4
    int select; // r1+0x8
}

// Range: 0x31ADC -> 0x31E40
static void menuSpeedItem_update(struct_main_menu_c_15312 * st /* r26 */, struct SMenuItem * parent /* r27 */) {
    // Local variables
    struct SMenuItem * item; // r29
    float * color; // r6
    int i; // r28
    int j; // r1+0x8

    // References
    // -> static unsigned char _gameLvItemColor[3][2][4];
}

// Range: 0x31E40 -> 0x32724
static void menuSpeedItem_draw1(struct_main_menu_c_15312 * * stAry /* r16 */, int count /* r17 */, union_drmario_gc_c_202 * * gpp /* r15 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x50
    struct_main_menu_c_15312 * st; // r31
    struct SMenuItem * item; // r22
    struct_tex_func_c_1287 * texC; // r30
    int i; // r25
    int j; // r23
    int k; // r24
    int cached; // r24
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static union [anonymous] fade_intensity_texture_init_dl[5];
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
}

// Erased
static void menuSpeedItem_draw2(struct_main_menu_c_15312 * * stAry /* r28 */, int count /* r29 */, union_drmario_gc_c_202 * * gpp /* r30 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x1C
    void * list; // r31
    int i; // r4
    int * listp; // r3
}

// Erased
static void menuSpeedItem_draw(struct_main_menu_c_15312 * * stAry /* r28 */, int count /* r29 */, union_drmario_gc_c_202 * * gpp /* r30 */) {}

// Range: 0x32724 -> 0x329BC
static void menuMusicItem_init(struct_main_menu_c_16788 * st /* r29 */, void * global /* r30 */, int musicNo /* r1+0x18 */, int x /* r6 */, int y /* r7 */) {
    // Local variables
    struct SMenuItem * item; // r22
    int i; // r22
    int j; // r1+0x10
    int k; // r1+0x10

    // References
    // -> static unsigned char _musicItemColor[2][4];
}

static int _seq$2327[4]; // size: 0x10, address: 0x3158
// Range: 0x329BC -> 0x32A94
static void menuMusicItem_input(struct_main_menu_c_16788 * st /* r29 */, int playerNo /* r4 */) {
    // Local variables
    int rep; // r1+0x8
    int vec; // r30

    // References
    // -> static int _seq$2327[4];
}

// Range: 0x32A94 -> 0x32DF4
static void menuMusicItem_update(struct_main_menu_c_16788 * st /* r27 */, struct SMenuItem * parent /* r28 */) {
    // Local variables
    struct SMenuItem * item; // r30
    float * color; // r6
    int i; // r29
    int j; // r1+0x8

    // References
    // -> static unsigned char _musicItemColor[2][4];
}

// Range: 0x32DF4 -> 0x330E8
static void menuMusicItem_draw1(struct_main_menu_c_16788 * * stAry /* r18 */, int count /* r28 */, union_drmario_gc_c_202 * * gpp /* r17 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x28
    struct_main_menu_c_16788 * st; // r5
    struct SMenuItem * item; // r21
    struct_tex_func_c_1287 * texC; // r20
    int i; // r31
    int j; // r30
    int cached; // r29
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static union [anonymous] fade_intensity_texture_init_dl[5];
}

// Range: 0x330E8 -> 0x33250
static void menuMusicItem_draw2(struct_main_menu_c_16788 * * stAry /* r28 */, int count /* r29 */, union_drmario_gc_c_202 * * gpp /* r30 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x1C
    void * list; // r31
    int i; // r4
    int * listp; // r3
}

// Erased
static void menuMusicItem_draw(struct_main_menu_c_16788 * * stAry /* r28 */, int count /* r29 */, union_drmario_gc_c_202 * * gpp /* r30 */) {}

// Erased
static void menuNumber_init(struct_main_menu_c_18067 * st /* r29 */, void * global /* r1+0xC */, int size /* r1+0x10 */, int column /* r1+0x14 */, int number /* r1+0x18 */, int x /* r30 */, int y /* r31 */) {}

// Range: 0x33250 -> 0x333D0
static void menuNumber_update(struct_main_menu_c_18067 * st /* r30 */, struct SMenuItem * parent /* r31 */) {
    // Local variables
    int i; // r11
    int n; // r12
}

static int _tbl$2516[10]; // size: 0x28, address: 0x3168
static int _step$2517[2]; // size: 0x8, address: 0x3190
// Range: 0x333D0 -> 0x338D0
static void menuNumber_draw(struct_main_menu_c_18067 * * stAry /* r1+0x2C */, int count /* r1+0x30 */, union_drmario_gc_c_202 * * gpp /* r1+0x34 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x28
    struct_main_menu_c_18067 * st; // r29
    struct SMenuItem * item; // r30
    struct_tex_func_c_1287 * texC; // r24
    struct_tex_func_c_1287 * texA; // r25
    int i; // r21
    int j; // r14
    int k; // r31
    int s; // r19
    int width; // r9
    int height; // r5
    int cached; // r27
    int zero; // r26
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static int _tbl$2516[10];
    // -> static int _step$2517[2];
    // -> static union [anonymous] fade_alpha_texture_init_dl[3];
}

// Erased
static void menuComLvPanel_setFade(struct_main_menu_c_18657 * st /* r1+0x0 */, int dir /* r1+0x4 */, float time /* r1+0x8 */) {
    // Local variables
    struct SMenuItem * item; // r6
}

// Erased
static void menuComLvPanel_setFadeDir(struct_main_menu_c_18657 * st /* r1+0x0 */, int dir /* r1+0x4 */) {}

// Erased
static void menuComLvPanel_setPos(struct_main_menu_c_18657 * st /* r1+0x8 */, int x /* r1+0xC */, int y /* r1+0x10 */) {
    // Local variables
    struct SMenuItem * item; // r3
}

// Erased
static void menuComLvPanel_init(struct_main_menu_c_18657 * st /* r31 */, void * global /* r1+0xC */, int level /* r1+0x10 */, int x /* r6 */, int y /* r7 */) {}

// Erased
static void menuComLvPanel_update(struct_main_menu_c_18657 * st /* r30 */, struct SMenuItem * parent /* r31 */) {}

// Range: 0x338D0 -> 0x33FB0
static void menuComLvPanel_draw(struct_main_menu_c_18657 * * stAry /* r1+0x40 */, int count /* r1+0x44 */, union_drmario_gc_c_202 * * gpp /* r1+0x48 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x3C
    struct_main_menu_c_18657 * st; // r25
    struct SMenuItem * item; // r26
    struct_tex_func_c_1287 * texC; // r1+0x8
    int i; // r14
    int j; // r23
    int cached; // r15
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
}

static float _color$2791[3]; // size: 0xC, address: 0x31A0
// Range: 0x33FB0 -> 0x34148
static void menuCont_setFade(struct_main_menu_c_19923 * st /* r1+0x8 */, int dir /* r1+0xC */, float time /* r1+0x10 */) {
    // Local variables
    struct SMenuItem * list[8]; // r1+0x1C
    struct SMenuItem * item; // r9
    int i; // r1+0x8
    int j; // r30

    // References
    // -> static float _color$2791[3];
}

// Erased
static void menuCont_setFrame(struct_main_menu_c_19923 * st /* r1+0x8 */, int dir /* r1+0xC */, int time /* r1+0x10 */) {
    // Local variables
    struct SMenuItem * item; // r7
}

static int _posDesc$2860[5][2]; // size: 0x28, address: 0x31B4
static int _posLine$2861[1][2]; // size: 0x8, address: 0x31DC
// Range: 0x34148 -> 0x34318
static void menuCont_init(struct_main_menu_c_19923 * st /* r31 */, void * global /* r1+0xC */, int x /* r5 */, int y /* r6 */) {
    // Local variables
    struct SMenuItem * item; // r24
    int i; // r23

    // References
    // -> static int _posLine$2861[1][2];
    // -> static int _posDesc$2860[5][2];
}

// Erased
static @enum$110dm_title_main_c menuCont_input(struct_main_menu_c_19923 * st /* r1+0x0 */) {
    // Local variables
    struct SMenuItem * item; // r5
}

// Erased
static void menuCont_update(struct_main_menu_c_19923 * st /* r28 */, struct SMenuItem * parent /* r29 */) {}

static int _line$2914[1]; // size: 0x4, address: 0x31E4
static int _desc$2915[2]; // size: 0x8, address: 0x31E8
// Range: 0x34318 -> 0x34F68
static void menuCont_draw(struct_main_menu_c_19923 * st /* r31 */, union_drmario_gc_c_202 * * gpp /* r30 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x74
    struct SMenuItem * item; // r20
    struct_tex_func_c_1287 * texC; // r21
    struct_tex_func_c_1287 * texA; // r3
    int i; // r7
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static union [anonymous] fade_alpha_texture_init_dl[3];
    // -> static int _desc$2915[2];
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
    // -> static int _line$2914[1];
    // -> static union [anonymous] fade_intensity_texture_init_dl[5];
}

// Erased
static void menuMainPanel_setFrame(struct_main_menu_c_21240 * st /* r1+0x0 */, int dir /* r1+0x4 */, float time /* r1+0x8 */) {
    // Local variables
    struct SMenuItem * item; // r6
}

// Range: 0x34F68 -> 0x35080
static void menuMainPanel_init(struct_main_menu_c_21240 * st /* r31 */, void * global /* r26 */, int count /* r27 */, int select /* r6 */, const int * indexes /* r30 */, int x /* r29 */, int y /* r28 */) {
    // Local variables
    int i; // r1+0x10
}

// Range: 0x35080 -> 0x35138
static @enum$110dm_title_main_c menuMainPanel_input(struct_main_menu_c_21240 * st /* r30 */, int playerNo /* r4 */) {
    // Local variables
    int rep; // r1+0x8
    int vec; // r5
    int select; // r1+0x8
}

// Erased
static void menuMainPanel_update(struct_main_menu_c_21240 * st /* r28 */, struct SMenuItem * parent /* r29 */) {}

static int _panel$3220[5]; // size: 0x14, address: 0x31F0
// Range: 0x35138 -> 0x35650
static void menuMainPanel_draw(struct_main_menu_c_21240 * st /* r30 */, union_drmario_gc_c_202 * * gpp /* r31 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x3C
    struct_tex_func_c_1287 * texC; // r20
    void * list[1]; // r1+0x38
    int i; // r19
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static int _panel$3220[5];
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
}

// Erased
static void menuNameSelPanel_setFrame(struct_main_menu_c_21936 * st /* r1+0x0 */, int dir /* r1+0x4 */, float time /* r1+0x8 */) {
    // Local variables
    struct SMenuItem * item; // r6
}

unsigned char evs_select_name_no[]; // size: 0x0, address: 0x190B0
// Range: 0x35650 -> 0x35744
static void menuNameSelPanel_clear(struct_main_menu_c_21936 * st /* r1+0x0 */, int guestFlag /* r1+0x4 */, int playerCount /* r1+0x8 */) {
    // Local variables
    int i; // r1+0x0

    // References
    // -> unsigned char evs_select_name_no[];
}

// Range: 0x35744 -> 0x359B8
static void menuNameSelPanel_init(struct_main_menu_c_21936 * st /* r20 */, void * global /* r21 */, int guestFlag /* r22 */, int playerCount /* r23 */, int x /* r7 */, int y /* r8 */) {
    // Local variables
    int i; // r25
    struct SMenuItem * item; // r24
}

// Erased
static int menuNameSelPanel_checkSelected(struct_main_menu_c_21936 * st /* r3 */, int playerNo /* r1+0x4 */, int nameNo /* r1+0x8 */) {
    // Local variables
    int i; // r6
}

// Range: 0x359B8 -> 0x35D98
static void menuNameSelPanel_input1(struct_main_menu_c_21936 * st /* r20 */, int playerNo /* r21 */) {
    // Local variables
    int rep; // r1+0x8
    int trg; // r1+0x8
    int vec; // r5
    int sound; // r25
    int select; // r24
    int ix; // r3
    int iy; // r24
    int vx; // r23
    int vy; // r22
}

// Range: 0x35D98 -> 0x35E8C
static @enum$110dm_title_main_c menuNameSelPanel_input(struct_main_menu_c_21936 * st /* r28 */) {
    // Local variables
    int i; // r30
    int ok; // r29
}

// Range: 0x35E8C -> 0x36108
static void menuNameSelPanel_update(struct_main_menu_c_21936 * st /* r28 */, struct SMenuItem * parent /* r25 */) {
    // Local variables
    int i; // r5
    int j; // r10
}

static int _texEndOrGuest$3608[2]; // size: 0x8, address: 0x3204
struct_dm_game_main_c_10035 evs_mem_data[9]; // size: 0x750, address: 0x549C0
// Range: 0x36108 -> 0x36B5C
static void menuNameSelPanel_draw(struct_main_menu_c_21936 * st /* r22 */, union_drmario_gc_c_202 * * gpp /* r1+0x50 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x4C
    struct SMenuItem * item; // r31
    struct_tex_func_c_1287 * texC; // r20
    unsigned char * name; // r1+0x8
    void * list; // r1+0x54
    int i; // r21
    int j; // r4
    int cached; // r23
    int * listp; // r19
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> struct [anonymous] evs_mem_data[9];
    // -> static union [anonymous] fade_intensity_texture_init_dl[5];
    // -> static int _texEndOrGuest$3608[2];
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
}

// Erased
static void menuNameOpPanel_setFrame(struct_main_menu_c_23524 * st /* r1+0x0 */, int dir /* r1+0x4 */, float time /* r1+0x8 */) {
    // Local variables
    struct SMenuItem * item; // r6
}

static char _name$3803[4]; // size: 0x4, address: 0x3210
// Range: 0x36B5C -> 0x36C60
static void menuNameOpPanel_init(struct_main_menu_c_23524 * st /* r31 */, void * global /* r27 */, int type /* r1+0x18 */, int select /* r1+0x1C */, const char * name /* r7 */, int x /* r8 */, int y /* r9 */) {
    // Local variables
    int i; // r1+0x10

    // References
    // -> static char _name$3803[4];
}

// Range: 0x36C60 -> 0x36D10
static @enum$110dm_title_main_c menuNameOpPanel_input(struct_main_menu_c_23524 * st /* r30 */, int playerNo /* r4 */) {
    // Local variables
    int rep; // r1+0x8
    int vec; // r5
}

// Erased
static void menuNameOpPanel_update(struct_main_menu_c_23524 * st /* r28 */, struct SMenuItem * parent /* r29 */) {}

static int _panel$3859[2][2]; // size: 0x10, address: 0x3214
// Range: 0x36D10 -> 0x37568
static void menuNameOpPanel_draw(struct_main_menu_c_23524 * st /* r31 */, union_drmario_gc_c_202 * * gpp /* r30 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x50
    struct SMenuItem * item; // r17
    struct_tex_func_c_1287 * texC; // r18
    void * list[1]; // r1+0x4C
    int i; // r29
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static union [anonymous] fade_intensity_texture_init_dl[5];
    // -> static int _panel$3859[2][2];
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
}

// Erased
static void menuSndSelPanel_setFrame(struct_main_menu_c_24740 * st /* r1+0x0 */, int dir /* r1+0x4 */, float time /* r1+0x8 */) {
    // Local variables
    struct SMenuItem * item; // r6
}

static int _pos$4015[2]; // size: 0x8, address: 0x3224
static int _y$4020[4]; // size: 0x10, address: 0x322C
// Range: 0x37568 -> 0x376B0
static void menuSndSelPanel_init(struct_main_menu_c_24740 * st /* r30 */, void * global /* r31 */, int select /* r1+0x18 */, int x /* r6 */, int y /* r7 */) {
    // Local variables
    int i; // r23

    // References
    // -> static int _pos$4015[2];
    // -> static int _y$4020[4];
}

static unsigned char _tbl$4036[103]; // size: 0x67, address: 0x323C
// Range: 0x376B0 -> 0x37828
static @enum$110dm_title_main_c menuSndSelPanel_input(struct_main_menu_c_24740 * st /* r30 */, int playerNo /* r4 */) {
    // Local variables
    int rep; // r1+0x8
    int vec; // r5
    int sound; // r31

    // References
    // -> static unsigned char _tbl$4036[103];
}

// Erased
static void menuSndSelPanel_update(struct_main_menu_c_24740 * st /* r29 */, struct SMenuItem * parent /* r26 */) {
    // Local variables
    int i; // r30
}

static int _panel$4108[4]; // size: 0x10, address: 0x32A4
// Range: 0x37828 -> 0x38250
static void menuSndSelPanel_draw(struct_main_menu_c_24740 * st /* r30 */, union_drmario_gc_c_202 * * gpp /* r29 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x70
    struct SMenuItem * item; // r31
    struct_tex_func_c_1287 * texC; // r19
    void * list[4]; // r1+0x60
    float x; // f30
    float y; // f31
    int i; // r31
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static int _panel$4108[4];
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
}

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
// Erased
static void _menuPlay2Panel_loadAnime(void * arg /* r31 */) {
    // Local variables
    struct_main_menu_c_25635 * st; // r1+0x8
    void * heap; // r1+0xC
}

static float _lvNumScale$4308[2][2]; // size: 0x10, address: 0x32C0
static int _player$4309[2][2]; // size: 0x10, address: 0x32D0
static int _lvNum$4310[2][2]; // size: 0x10, address: 0x32E0
static int _lvGauge$4311[2][2]; // size: 0x10, address: 0x32F0
static int _speedAsk$4312[2][2]; // size: 0x10, address: 0x3300
static int _speedItem$4313[2][2]; // size: 0x10, address: 0x3310
static int _glvAsk$4314[2][2]; // size: 0x10, address: 0x3320
static int _glvItem$4315[2][2]; // size: 0x10, address: 0x3330
static int _okY$4316[2]; // size: 0x8, address: 0x3340
static int _cursor$4317[2][2][4]; // size: 0x40, address: 0x3348
// Range: 0x38250 -> 0x386D4
static void menuPlay2Panel_init(struct_main_menu_c_25635 * st /* r23 */, void * global /* r30 */, void * hpp /* r31 */, int size /* r24 */, int playerCount /* r18 */, int cpuCount /* r19 */, int playerNo /* r25 */, int cpuFlag /* r20 */, int charNo /* r26 */, int virusLevel /* r27 */, int gameSpeed /* r28 */, int x /* r21 */, int y /* r22 */) {
    // Local variables
    struct SMenuItem * item; // r5
    void * hp; // r29
    int i; // r22

    // References
    // -> static int _cursor$4317[2][2][4];
    // -> static int _okY$4316[2];
    // -> static int _speedItem$4313[2][2];
    // -> static int _speedAsk$4312[2][2];
    // -> static float _lvNumScale$4308[2][2];
    // -> static int _lvNum$4310[2][2];
    // -> static @enum$1025main_menu_c _type$1543[3];
    // -> static int _size$1542[3][2];
    // -> static int _lvGauge$4311[2][2];
    // -> static int _glvItem$4315[2][2];
    // -> static int _glvAsk$4314[2][2];
    // -> static int _player$4309[2][2];
}

// Range: 0x386D4 -> 0x38724
static void menuPlay2Panel_copyConfig(struct_main_menu_c_25635 * st /* r1+0x0 */, struct_main_menu_c_25635 * from /* r1+0x4 */) {}

// Range: 0x38724 -> 0x38804
static void menuPlay2Panel_copyCursor(struct_main_menu_c_25635 * st /* r1+0x0 */, struct_main_menu_c_25635 * from /* r1+0x4 */) {
    // Local variables
    int i; // r1+0x0
}

// Range: 0x38804 -> 0x38AE4
static void menuPlay2Panel_input(struct_main_menu_c_25635 * st /* r24 */, int playerNo /* r25 */, int topFlag /* r26 */, int bottomFlag /* r27 */) {
    // Local variables
    int rep; // r1+0x8
    int trg; // r1+0x8
    int vec; // r5
    int sound; // r28
}

// Range: 0x38AE4 -> 0x39094
static void menuPlay2Panel_update(struct_main_menu_c_25635 * st /* r30 */, struct SMenuItem * parent /* r31 */) {
    // Local variables
    struct SMenuItem * item; // r5
    int i; // r1+0x8

    // References
    // -> static float _lvGauge_step[3];
}

static int _charTbl$4601[15]; // size: 0x3C, address: 0x3388
static int _type$4602[4][4]; // size: 0x40, address: 0x33C4
static int _texPanelP4$4617[2]; // size: 0x8, address: 0x3404
static int _texPanelP2$4618[2]; // size: 0x8, address: 0x340C
// Range: 0x39094 -> 0x3A0F8
static void menuPlay2Panel_draw(struct_main_menu_c_25635 * * stAry /* r14 */, int count /* r24 */, union_drmario_gc_c_202 * * gpp /* r1+0xCC */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0xC8
    struct_main_menu_c_25635 * st; // r31
    struct SMenuItem * item; // r30
    struct_tex_func_c_1287 * texC; // r25
    struct_tex_func_c_1287 * texA; // r1+0x8
    int i; // r27
    int j; // r22
    int cached; // r1+0x8
    int * list[8]; // r1+0xA8
    int * listp[8]; // r1+0x88
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static union [anonymous] fade_alpha_texture_init_dl[3];
    // -> static int _type$4602[4][4];
    // -> static int _charTbl$4601[15];
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
    // -> static int _texPanelP2$4618[2];
    // -> static int _texPanelP4$4617[2];
}

static unsigned char _bgDataNo_to_stageNo[10][2]; // size: 0x14, address: 0x3418
// Erased
static void menuPlay2PanelSub_setFrame(struct_main_menu_c_27914 * st /* r1+0x0 */, int dir /* r1+0x4 */, float time /* r1+0x8 */) {
    // Local variables
    struct SMenuItem * item; // r6
}

// Erased
static void menuPlay2PanelSub_setStageBgFrame(struct_main_menu_c_27914 * st /* r1+0x0 */, int dir /* r1+0x4 */, float time /* r1+0x8 */, float vec /* r1+0xC */) {
    // Local variables
    struct SMenuItem * item; // r5
}

static int _bgCursor$4920[2][2]; // size: 0x10, address: 0x342C
static int _cursor$4921[2][4]; // size: 0x20, address: 0x343C
// Range: 0x3A0F8 -> 0x3A344
static void menuPlay2PanelSub_init(struct_main_menu_c_27914 * st /* r30 */, void * global /* r31 */, int stageNo /* r24 */, int musicNo /* r23 */, int x /* r8 */, int y /* r9 */) {
    // Local variables
    struct SMenuItem * item; // r8
    int i; // r23

    // References
    // -> static int _cursor$4921[2][4];
    // -> static int _bgCursor$4920[2][2];
}

// Range: 0x3A344 -> 0x3A5B4
static @enum$110dm_title_main_c menuPlay2PanelSub_input(struct_main_menu_c_27914 * st /* r27 */, int playerNo /* r28 */) {
    // Local variables
    int rep; // r1+0x8
    int trg; // r1+0x8
    int vec; // r4
    int sound; // r29
}

// Range: 0x3A5B4 -> 0x3A940
static void menuPlay2PanelSub_update(struct_main_menu_c_27914 * st /* r30 */, struct SMenuItem * parent /* r31 */) {
    // Local variables
    struct SMenuItem * item; // r4
    int i; // r26
}

// Range: 0x3A940 -> 0x3B358
static void menuPlay2PanelSub_draw(struct_main_menu_c_27914 * st /* r30 */, union_drmario_gc_c_202 * * gpp /* r31 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x80
    struct SMenuItem * item; // r29
    struct_tex_func_c_1287 * texC; // r21
    void * list[8]; // r1+0x60
    int i; // r1+0x8
    int j; // r20
    int cached; // r20
    float x; // f31
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
}

@enum$856main_menu_c _menuMain_lastMode; // size: 0x4, address: 0x55344
static char * _tblMain$5279[4]; // size: 0x10, address: 0x21DF0
static char * _tblPlay1$5280[6]; // size: 0x18, address: 0x21E00
static char * _tblPlay2$5281[3]; // size: 0xC, address: 0x21E18
static char * _tblBaTyp$5282[3]; // size: 0xC, address: 0x21E24
static char * _tblOpt$5283[5]; // size: 0x14, address: 0x21E30
static char * _tblTutol$5284[5]; // size: 0x14, address: 0x21E44
static char * _tblSound$5285[4]; // size: 0x10, address: 0x21E58
static char * _tblMisc$5286[3]; // size: 0xC, address: 0x21E68
static char * _loopTbl$5287[16]; // size: 0x40, address: 0x21E74
// Range: 0x3B358 -> 0x3B53C
static @enum$110dm_title_main_c menuMain_setMsgStr(struct_main_menu_c_29690 * st /* r30 */, @enum$856main_menu_c mode /* r1+0xC */, int select /* r1+0x10 */) {
    // Local variables
    const char * * tbl; // r6
    const char * mes; // r27
    @enum$110dm_title_main_c res; // r31
    int i; // r26

    // References
    // -> static char * _loopTbl$5287[16];
    // -> static char _mesNs2[29];
    // -> static char _mesNs1[111];
    // -> static char _mesDoErase1[35];
    // -> static char _mesDoErase[99];
    // -> static char _mesVsCnt2[35];
    // -> static char _mesNameErase2[27];
    // -> static char _mesNameErase[109];
    // -> static char _mesNameSel[31];
    // -> static char _mesRecMs2[41];
    // -> static char _mesRecMs1[37];
    // -> static char * _tblSound$5285[4];
    // -> static char * _tblTutol$5284[5];
    // -> static char * _tblBaTyp$5282[3];
    // -> static char _mesScoreOnOff[37];
    // -> static char * _tblMisc$5286[3];
    // -> static char * _tblOpt$5283[5];
    // -> static char _mesVsNum[23];
    // -> static char * _tblPlay2$5281[3];
    // -> static char * _tblPlay1$5280[6];
    // -> static char * _tblMain$5279[4];
}

static int _root$5339[4]; // size: 0x10, address: 0x346C
static int _play1$5340[6]; // size: 0x18, address: 0x347C
static int _play2$5341[3]; // size: 0xC, address: 0x3494
static int _play4$5342[4]; // size: 0x10, address: 0x34A0
static int _play4type$5343[3]; // size: 0xC, address: 0x34B0
static int _option$5344[5]; // size: 0x14, address: 0x34BC
static int _recMs$5345[2]; // size: 0x8, address: 0x34D0
static int _recMs1$5346[6]; // size: 0x18, address: 0x34D8
static int _recMs2$5347[3]; // size: 0xC, address: 0x34F0
static int _tutorial$5348[5]; // size: 0x14, address: 0x34FC
static int _count$5349[3]; // size: 0xC, address: 0x3510
static int _backup$5350[2]; // size: 0x8, address: 0x351C
static int _misc$5351[3]; // size: 0xC, address: 0x3524
static int _score$5352[2]; // size: 0x8, address: 0x3530
// Range: 0x3B53C -> 0x3B6C4
static void menuMain_initPanel(struct_main_menu_c_29690 * st /* r8 */, @enum$856main_menu_c mode /* r1+0xC */, int panelSw /* r1+0x10 */, int select /* r6 */) {
    // Local variables
    const int * table; // r7
    int count; // r1+0x8

    // References
    // -> static int _root$5339[4];
    // -> static int _score$5352[2];
    // -> static int _misc$5351[3];
    // -> static int _backup$5350[2];
    // -> static int _count$5349[3];
    // -> static int _tutorial$5348[5];
    // -> static int _recMs2$5347[3];
    // -> static int _recMs1$5346[6];
    // -> static int _recMs$5345[2];
    // -> static int _play4type$5343[3];
    // -> static int _option$5344[5];
    // -> static int _play4$5342[4];
    // -> static int _play2$5341[3];
    // -> static int _play1$5340[6];
}

int _menuMain_lastDepth; // size: 0x4, address: 0x55348
int _menuMain_lastSelect[8]; // size: 0x20, address: 0x5534C
// Range: 0x3B6C4 -> 0x3BC18
static void menuMain_init(struct_main_menu_c_29690 * st /* r28 */, void * global /* r29 */, void * hpp /* r30 */) {
    // Local variables
    struct SMenuItem * item; // r6
    int i; // r1+0x8

    // References
    // -> int _menuMain_lastSelect[8];
    // -> int _menuMain_lastDepth;
    // -> @enum$856main_menu_c _menuMain_lastMode;
}

// Erased
static void menuMain_waitCancel(struct_main_menu_c_29690 * st /* r31 */) {
    // Local variables
    int trg; // r1+0x8
}

// Erased
static void _menuMain_updateCallback(void * args /* r3 */) {}

static @enum$856main_menu_c tbl$5517[4]; // size: 0x10, address: 0x3548
static int _n$5535[6]; // size: 0x18, address: 0x3558
static @enum$856main_menu_c _mode$5538[6]; // size: 0x18, address: 0x3570
static @enum$856main_menu_c mode$5557[3]; // size: 0xC, address: 0x3588
static char _mode$5570[4]; // size: 0x4, address: 0x3594
static char * mes$5577[3]; // size: 0xC, address: 0x221FC
static @enum$856main_menu_c _tbl$5598[3][2]; // size: 0x18, address: 0x3598
static @enum$856main_menu_c _tblLS$5599[3][3]; // size: 0x24, address: 0x35B0
static @enum$856main_menu_c _tblVM$5600[3][3]; // size: 0x24, address: 0x35D4
static @enum$856main_menu_c _tblVC$5601[3][2]; // size: 0x18, address: 0x35F8
static @enum$856main_menu_c tbl$5648[5]; // size: 0x14, address: 0x3610
static @enum$856main_menu_c tbl$5664[3]; // size: 0xC, address: 0x3624
static char _team$5687[3][4]; // size: 0xC, address: 0x3630
static @enum$856main_menu_c _mode$5688[3]; // size: 0xC, address: 0x363C
static @enum$856main_menu_c _game$5689[3]; // size: 0xC, address: 0x3648
static @enum$856main_menu_c _mode$5701[2]; // size: 0x8, address: 0x3654
static @enum$856main_menu_c _mode1$5709[6]; // size: 0x18, address: 0x365C
static @enum$856main_menu_c _mode2$5710[3]; // size: 0xC, address: 0x3674
static int tbl$5735[2]; // size: 0x8, address: 0x3680
unsigned char evs_playmax; // size: 0x1, address: 0x190BC
@enum$107dm_title_main_c;
@enum$107dm_title_main_c evs_gamemode; // size: 0x4, address: 0x190B4
unsigned char evs_playcnt; // size: 0x1, address: 0x487A
signed char evs_story_flg; // size: 0x1, address: 0x18F91
@enum$106dm_title_main_c;
@enum$106dm_title_main_c evs_gamesel; // size: 0x4, address: 0x190B8
@enum$99dm_game_main_c;
@enum$98dm_game_main_c;
struct_dm_game_main_c_171 game_state_data[4]; // size: 0xF10, address: 0x1A1B8
int evs_vs_count; // size: 0x4, address: 0x4888
unsigned char evs_stereo; // size: 0x1, address: 0x4878
unsigned char evs_score_flag; // size: 0x1, address: 0x487F
signed char evs_manual_no; // size: 0x1, address: 0x18F95
// Range: 0x3BC18 -> 0x3D5B8
static void menuMain_input(struct_main_menu_c_29690 * st /* r29 */) {
    // Local variables
    struct_main_menu_c_21240 * panel; // r27
    int trg; // r1+0x8
    int i; // r1+0x8
    int select; // r19
    int sound; // r18
    int nameDir; // r26
    int panelDir; // r25
    int nameSelDir; // r24
    int wndDir; // r23
    int kasaDir; // r22
    int contDir; // r20
    int ynDir; // r31
    int mesDir; // r21
    int sndSelDir; // r30
    @enum$856main_menu_c mode; // r4
    int flow[2]; // r1+0x3C
    @enum$856main_menu_c * modes; // r1+0x8
    @enum$856main_menu_c mode; // r4
    float time; // f31
    int playerCount; // r5
    float time; // f31

    // References
    // -> int _menuMain_lastSelect[8];
    // -> int _menuMain_lastDepth;
    // -> @enum$856main_menu_c _menuMain_lastMode;
    // -> unsigned char evs_select_name_no[];
    // -> struct [anonymous] evs_mem_data[9];
    // -> unsigned char evs_stereo;
    // -> static int tbl$5735[2];
    // -> int evs_vs_count;
    // -> signed char evs_manual_no;
    // -> static @enum$856main_menu_c _mode2$5710[3];
    // -> static @enum$856main_menu_c _mode1$5709[6];
    // -> static @enum$856main_menu_c _mode$5701[2];
    // -> static @enum$856main_menu_c _mode$5688[3];
    // -> static @enum$856main_menu_c _game$5689[3];
    // -> @enum$107dm_title_main_c evs_gamemode;
    // -> struct [anonymous] game_state_data[4];
    // -> static char _team$5687[3][4];
    // -> unsigned char evs_score_flag;
    // -> static @enum$856main_menu_c tbl$5664[3];
    // -> static @enum$856main_menu_c tbl$5648[5];
    // -> static @enum$856main_menu_c _tblVC$5601[3][2];
    // -> static @enum$856main_menu_c _tblVM$5600[3][3];
    // -> static @enum$856main_menu_c _tblLS$5599[3][3];
    // -> static @enum$856main_menu_c _tbl$5598[3][2];
    // -> static char * mes$5577[3];
    // -> @enum$106dm_title_main_c evs_gamesel;
    // -> signed char evs_story_flg;
    // -> unsigned char evs_playcnt;
    // -> static char _mode$5570[4];
    // -> unsigned char evs_playmax;
    // -> static @enum$856main_menu_c mode$5557[3];
    // -> static @enum$856main_menu_c _mode$5538[6];
    // -> static int _n$5535[6];
    // -> static char _mesNoCont2[51];
    // -> static @enum$856main_menu_c tbl$5517[4];
}

// Range: 0x3D5B8 -> 0x3DBB8
static void menuMain_update(struct_main_menu_c_29690 * st /* r31 */) {
    // Local variables
    struct_main_menu_c_21240 * panel; // r30
    struct SMenuItem * miRoot; // r29
    struct SMenuItem * item; // r24
    int i; // r23
}

static int _pat$6137[6]; // size: 0x18, address: 0x3698
// Range: 0x3DBB8 -> 0x3E894
static void menuMain_drawKaSaMaRu(struct_main_menu_c_29690 * st /* r31 */, union_drmario_gc_c_202 * * gpp /* r15 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0xB4
    union_main_story_c_778 * mp; // r30
    union_tex_func_c_1051 * vp; // r1+0xB0
    struct SMenuItem * item; // r18
    struct_tex_func_c_1287 * texC; // r1+0x18
    struct_tex_func_c_1287 * texA; // r1+0x18
    int i; // r23
    int width; // r19
    int height; // r20
    int size; // r1+0x18
    float mfRot[4][4]; // r1+0x70
    float amp; // f31
    float angle[3]; // r1+0x64
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    union_drmario_gc_c_202 * _g; // r1+0x18
    int gapW; // r21
    int gapH; // r20
    union_drmario_gc_c_202 * _g; // r1+0x18

    // References
    // -> static union [anonymous] fade_intensity_texture_init_dl[5];
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
    // -> static union [anonymous] fade_alpha_texture_init_dl[3];
    // -> static int _pat$6137[6];
}

// Range: 0x3E894 -> 0x3ED5C
static void menuMain_draw(struct_main_menu_c_29690 * st /* r29 */, union_drmario_gc_c_202 * * gpp /* r30 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x34
    struct_tex_func_c_1287 * texC; // r31
    int i; // r28
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
}

static int _pos$6413[2][9][2]; // size: 0x90, address: 0x36D4
// Erased
static void menuStory_getCharPos(int charNo /* r1+0x0 */, int stageNo /* r4 */, int plane /* r1+0x8 */, int * x /* r1+0xC */, int * y /* r1+0x10 */) {
    // Local variables
    int i; // r8

    // References
    // -> static int _pos$6413[2][9][2];
}

// Erased
static void menuStory_setFrame(struct_main_menu_c_34862 * st /* r1+0x0 */, int dir /* r1+0x4 */, float time /* r1+0x8 */) {
    // Local variables
    struct SMenuItem * item; // r6
}

// Erased
static void _menuStory_loadAnime(void * arg /* r3 */) {
    // Local variables
    struct_main_menu_c_34862 * st; // r29
    void * heap; // r1+0xC
    int i; // r28
}

static int _posChar$6445[2][2]; // size: 0x10, address: 0x3764
static int _posBgCursor$6446[2][2]; // size: 0x10, address: 0x3774
static int _cursor$6447[3][4]; // size: 0x30, address: 0x3784
// Range: 0x3ED5C -> 0x3F2D8
static void menuStory_init(struct_main_menu_c_34862 * st /* r28 */, void * global /* r29 */, void * hpp /* r30 */) {
    // Local variables
    struct_dm_game_main_c_10035 * mc; // r1+0x10
    struct_dm_game_main_c_13768 * cfg; // r27
    void * hp; // r31
    struct SMenuItem * item; // r20
    int i; // r1+0x10
    int x; // r4
    int y; // r5

    // References
    // -> static int _cursor$6447[3][4];
    // -> static int _pos$6413[2][9][2];
    // -> static int _posBgCursor$6446[2][2];
    // -> static int _posChar$6445[2][2];
    // -> unsigned char evs_select_name_no[];
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void menuStory_waitCancel(struct_main_menu_c_34862 * st /* r31 */) {
    // Local variables
    int trg; // r1+0x8
}

// Erased
static int menuStory_getLevel(struct_main_menu_c_34862 * st /* r1+0x0 */) {
    // Local variables
    int level; // r4
}

// Erased
static int menuStory_getStageMax(struct_main_menu_c_34862 * st /* r1+0x0 */) {}

signed char evs_story_level; // size: 0x1, address: 0x4880
signed char evs_story_no; // size: 0x1, address: 0x18F92
unsigned char evs_one_game_flg; // size: 0x1, address: 0x18F93
int story_proc_no; // size: 0x4, address: 0x154C
unsigned long evs_game_time; // size: 0x4, address: 0x190AC
unsigned long evs_high_score; // size: 0x4, address: 0x18F98
// Range: 0x3F2D8 -> 0x3F8B8
static void menuStory_input(struct_main_menu_c_34862 * st /* r30 */) {
    // Local variables
    struct_dm_game_main_c_13768 * cfg; // r27
    struct SMenuItem * item; // r5
    int rep; // r1+0x8
    int trg; // r1+0x8
    int i; // r1+0x8
    int vec; // r4
    int select; // r1+0x8
    int sound; // r26
    @enum$110dm_title_main_c special; // r31

    // References
    // -> unsigned long evs_high_score;
    // -> struct [anonymous] evs_mem_data[9];
    // -> signed char evs_story_level;
    // -> unsigned long evs_game_time;
    // -> int story_proc_no;
    // -> unsigned char evs_one_game_flg;
    // -> struct [anonymous] game_state_data[4];
    // -> signed char evs_story_no;
    // -> unsigned char evs_select_name_no[];
}

// Range: 0x3F8B8 -> 0x401F8
static void menuStory_update(struct_main_menu_c_34862 * st /* r27 */) {
    // Local variables
    struct SMenuItem * miRoot; // r28
    struct SMenuItem * item; // r25
    int i; // r5
    int j; // r1+0x8

    // References
    // -> static int _pos$6413[2][9][2];
}

static int _map$6928[2][2]; // size: 0x10, address: 0x37B4
static int _cover$6929[2][2]; // size: 0x10, address: 0x37C4
static int _filter$6930[2][2][9]; // size: 0x90, address: 0x37D4
static int _wchar$6931[2]; // size: 0x8, address: 0x3864
// Range: 0x401F8 -> 0x41658
static void menuStory_draw(struct_main_menu_c_34862 * st /* r30 */, union_drmario_gc_c_202 * * gpp /* r1+0xC8 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0xC4
    struct_tex_func_c_1287 * texC; // r21
    struct_tex_func_c_1287 * texA; // r21
    struct SMenuItem * item; // r31
    void * list[8]; // r1+0xA4
    int i; // r22
    int cached; // r24
    union_drmario_gc_c_202 * _g; // r1+0x8
    float x; // f31
    float y; // f30
    int alpha; // r26
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    int x; // r1+0x8
    int w; // r27
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static union [anonymous] fade_alpha_texture_init_dl[3];
    // -> static int _wchar$6931[2];
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
    // -> static int _filter$6930[2][2][9];
    // -> static int _cover$6929[2][2];
    // -> static union [anonymous] fade_intensity_texture_init_dl[5];
    // -> static int _map$6928[2][2];
    // -> static union [anonymous] fade_shadow_texture_init_dl[4];
}

// Erased
static void menuLvSel_setFrame(struct_main_menu_c_38849 * st /* r1+0x0 */, int dir /* r1+0x4 */, float time /* r1+0x8 */) {
    // Local variables
    struct SMenuItem * item; // r6
}

static int _cursor$7325[3][4]; // size: 0x30, address: 0x3880
// Range: 0x41658 -> 0x41A90
static void menuLvSel_init(struct_main_menu_c_38849 * st /* r27 */, void * global /* r28 */, void * hpp /* r29 */) {
    // Local variables
    struct_dm_game_main_c_10035 * mc; // r1+0x10
    struct_dm_game_main_c_13768 * cfg; // r31
    void * hp; // r30
    int i; // r1+0x10
    int yi; // r1+0x10

    // References
    // -> static int _cursor$7325[3][4];
    // -> static @enum$1025main_menu_c _type$1543[3];
    // -> static int _size$1542[3][2];
    // -> unsigned char evs_select_name_no[];
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void menuLvSel_waitCancel(struct_main_menu_c_38849 * st /* r31 */) {
    // Local variables
    int trg; // r1+0x8
}

unsigned char evs_seqnumb; // size: 0x1, address: 0x18F90
unsigned char evs_seqence; // size: 0x1, address: 0x4879
// Range: 0x41A90 -> 0x41EB8
static void menuLvSel_input(struct_main_menu_c_38849 * st /* r27 */) {
    // Local variables
    struct_dm_game_main_c_13768 * cfg; // r29
    struct_dm_game_main_c_171 * state; // r1+0x8
    int rep; // r1+0x8
    int trg; // r1+0x8
    int vec; // r4
    int sound; // r28

    // References
    // -> unsigned long evs_game_time;
    // -> unsigned char evs_seqnumb;
    // -> unsigned char evs_seqence;
    // -> static unsigned char _timeAttack_levelTable[3];
    // -> struct [anonymous] game_state_data[4];
    // -> unsigned char evs_select_name_no[];
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x41EB8 -> 0x4240C
static void menuLvSel_update(struct_main_menu_c_38849 * st /* r31 */) {
    // Local variables
    struct SMenuItem * miRoot; // r28
    int i; // r27

    // References
    // -> static float _lvGauge_step[3];
    // -> static unsigned char _timeAttack_levelTable[3];
}

// Range: 0x4240C -> 0x43274
static void menuLvSel_draw(struct_main_menu_c_38849 * st /* r31 */, union_drmario_gc_c_202 * * gpp /* r30 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0xE4
    struct_tex_func_c_1287 * texC; // r27
    void * list[8]; // r1+0xC4
    int i; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    float x; // f31

    // References
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
}

// Erased
static void menuChSel_setFrame(struct_main_menu_c_40555 * st /* r1+0x0 */, int dir /* r1+0x4 */, float time /* r1+0x8 */) {
    // Local variables
    struct SMenuItem * item; // r6
}

static int _pos$7882[4][2]; // size: 0x20, address: 0x38B4
struct_record_c_66 evs_cfg_4p; // size: 0x16, address: 0x55110
// Range: 0x43274 -> 0x43710
static void menuChSel_init(struct_main_menu_c_40555 * st /* r27 */, void * global /* r28 */) {
    // Local variables
    struct SMenuItem * item; // r4
    int i; // r8
    int charNo; // r29
    @enum$856main_menu_c mode; // r1+0x10

    // References
    // -> static int _pos$7882[4][2];
    // -> struct [anonymous] evs_mem_data[9];
    // -> unsigned char evs_select_name_no[];
    // -> struct [anonymous] evs_cfg_4p;
    // -> struct [anonymous] game_state_data[4];
}

// Range: 0x43710 -> 0x43760
static @enum$110dm_title_main_c menuChSel_checkSelected(struct_main_menu_c_40555 * st /* r3 */, int playerNo /* r1+0x4 */, int charNo /* r1+0x8 */, int depth /* r1+0xC */) {
    // Local variables
    int i; // r7
}

unsigned char evs_secret_flg[]; // size: 0x0, address: 0x4884
// Erased
static @enum$110dm_title_main_c menuChSel_checkMoveable(struct_main_menu_c_40555 * st /* r3 */, int playerNo /* r1+0x4 */, int charNo /* r1+0x8 */) {
    // References
    // -> unsigned char evs_secret_flg[];
}

// Range: 0x43760 -> 0x43ADC
static void menuChSel_input1(struct_main_menu_c_40555 * st /* r25 */, int playerNo /* r26 */, int contNo /* r21 */) {
    // Local variables
    int rep; // r1+0x8
    int trg; // r1+0x8
    int lvl; // r1+0x8
    int sound; // r28
    int sel; // r6
    int dx; // r30
    int dy; // r27
    int ix; // r21
    int iy; // r22
    int ch; // r23

    // References
    // -> unsigned char evs_secret_flg[];
}

// Range: 0x43ADC -> 0x43C04
static void menuChSel_inputMan(struct_main_menu_c_40555 * st /* r30 */) {
    // Local variables
    int i; // r28
    int ok; // r31
    int cancel; // r27
}

// Range: 0x43C04 -> 0x43D00
static void menuChSel_inputCom(struct_main_menu_c_40555 * st /* r31 */) {
    // Local variables
    int i; // r29
    int pre; // r28
    int playerNo; // r27
    int select; // r26
}

static int _charTbl$8108[15]; // size: 0x3C, address: 0x38D4
// Range: 0x43D00 -> 0x43FFC
static void menuChSel_input(struct_main_menu_c_40555 * st /* r29 */) {
    // Local variables
    struct_dm_game_main_c_13768 * cfg; // r5
    @enum$856main_menu_c mode; // r30
    int i; // r6

    // References
    // -> static int _charTbl$8108[15];
    // -> struct [anonymous] game_state_data[4];
    // -> struct [anonymous] evs_cfg_4p;
    // -> struct [anonymous] evs_mem_data[9];
    // -> unsigned char evs_select_name_no[];
}

static unsigned char _star$8183[15]; // size: 0xF, address: 0x3910
// Range: 0x43FFC -> 0x44494
static void menuChSel_update(struct_main_menu_c_40555 * st /* r27 */) {
    // Local variables
    struct SMenuItem * miRoot; // r21
    int i; // r21
    struct_main_menu_c_3746 * cur; // r28

    // References
    // -> static unsigned char _star$8183[15];
}

static int _tex$8297[2]; // size: 0x8, address: 0x3920
static int _pos$8298[2][2]; // size: 0x10, address: 0x3928
// Range: 0x44494 -> 0x44F60
static void menuChSel_draw(struct_main_menu_c_40555 * st /* r31 */, union_drmario_gc_c_202 * * gpp /* r19 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x9C
    struct SMenuItem * item; // r27
    struct_tex_func_c_1287 * texC; // r20
    void * list[15]; // r1+0x60
    int i; // r26
    union_drmario_gc_c_202 * _g; // r1+0x8
    float x; // f31
    float y; // f30
    union_drmario_gc_c_202 * _g; // r1+0x8
    int x; // r1+0x8
    int y; // r4
    int w; // r1+0x8
    int h; // r21
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
    // -> static union [anonymous] fade_fillrect_init_dl[5];
    // -> static int _tex$8297[2];
    // -> static int _pos$8298[2][2];
    // -> unsigned char evs_secret_flg[];
}

static int _moveTbl$8521[2]; // size: 0x8, address: 0x3938
// Erased
static void menuPlay2_setFrame(struct_main_menu_c_42569 * st /* r3 */, int dir /* r1+0xC */, float time /* r1+0x10 */) {
    // Local variables
    struct SMenuItem * item; // r8
    int i; // r11

    // References
    // -> static int _moveTbl$8521[2];
}

static int _onaji$8534[2][2]; // size: 0x10, address: 0x3940
static int _panel2$8535[2][2]; // size: 0x10, address: 0x3950
static int _panel4$8536[4][2]; // size: 0x20, address: 0x3960
// Range: 0x44F60 -> 0x454D8
static void menuPlay2_init(struct_main_menu_c_42569 * st /* r26 */, void * global /* r27 */, void * hpp /* r28 */) {
    // Local variables
    struct_dm_game_main_c_13768 * cfg; // r3
    struct_dm_game_main_c_171 * state; // r1+0x20
    int i; // r20
    int j; // r31
    int backNo; // r30
    int musicNo; // r29

    // References
    // -> static int _moveTbl$8521[2];
    // -> static int _onaji$8534[2][2];
    // -> static int _panel4$8536[4][2];
    // -> struct [anonymous] evs_cfg_4p;
    // -> struct [anonymous] game_state_data[4];
    // -> static int _panel2$8535[2][2];
    // -> unsigned char evs_select_name_no[];
    // -> struct [anonymous] evs_mem_data[9];
}

// Erased
static void menuPlay2_waitCancel(struct_main_menu_c_42569 * st /* r31 */) {
    // Local variables
    int trg; // r1+0x8
}

// Erased
static @enum$110dm_title_main_c menuPlay2_checkInputMaster(struct_main_menu_c_42569 * st /* r6 */, int playerNo /* r1+0xC */, int contNo /* r5 */) {
    // Local variables
    struct_main_menu_c_25635 * panel; // r31
    int key; // r1+0x8
}

// Erased
static void menuPlay2_applyMasterConfig(struct_main_menu_c_42569 * st /* r3 */, int playerNo /* r1+0x4 */) {
    // Local variables
    struct_main_menu_c_25635 * master; // r5
    struct_main_menu_c_25635 * panel; // r6
    int i; // r7
}

// Erased
static void menuPlay2_applyMasterCursor(struct_main_menu_c_42569 * st /* r28 */, int playerNo /* r1+0xC */) {
    // Local variables
    struct_main_menu_c_25635 * master; // r30
    struct_main_menu_c_25635 * panel; // r3
    int i; // r29
}

// Range: 0x454D8 -> 0x45834
static void menuPlay2_inputMan(struct_main_menu_c_42569 * st /* r31 */) {
    // Local variables
    struct_main_menu_c_25635 * panel; // r3
    int i; // r27
    int ok; // r26
    int cancel; // r25
    int playerNo; // r1+0x8
    @enum$856main_menu_c mode; // r25

    // References
    // -> static int _moveTbl$8521[2];
}

// Range: 0x45834 -> 0x45964
static void menuPlay2_inputCpu(struct_main_menu_c_42569 * st /* r29 */) {
    // Local variables
    struct_main_menu_c_25635 * panel; // r27
    int i; // r31
    int pre; // r30
    int playerNo; // r26
}

// Range: 0x45964 -> 0x45F08
static void menuPlay2_input(struct_main_menu_c_42569 * st /* r31 */) {
    // Local variables
    struct_dm_game_main_c_13768 * cfg; // r8
    struct_main_menu_c_25635 * panel; // r9
    int i; // r5
    int trg; // r1+0x8
    int lvl; // r1+0x8

    // References
    // -> unsigned long evs_game_time;
    // -> unsigned char evs_seqnumb;
    // -> unsigned char evs_seqence;
    // -> signed char evs_story_no;
    // -> static unsigned char _bgDataNo_to_stageNo[10][2];
    // -> int story_proc_no;
    // -> static unsigned char _timeAttack_levelTable[3];
    // -> struct [anonymous] game_state_data[4];
    // -> struct [anonymous] evs_cfg_4p;
    // -> unsigned char evs_select_name_no[];
    // -> struct [anonymous] evs_mem_data[9];
}

// Range: 0x45F08 -> 0x46084
static void menuPlay2_update(struct_main_menu_c_42569 * st /* r30 */) {
    // Local variables
    struct SMenuItem * miRoot; // r31
    int i; // r28
}

// Range: 0x46084 -> 0x463D8
static void menuPlay2_draw(struct_main_menu_c_42569 * st /* r28 */, union_drmario_gc_c_202 * * gpp /* r29 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x24
    struct_tex_func_c_1287 * texC; // r31
    int i; // r6
    int * list; // r30
    int * listp; // r3
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
}

static char * _nameEntry_charTable[3]; // size: 0xC, address: 0x22D64
// Erased
static void menuNmEnt_setFrame(struct_main_menu_c_47001 * st /* r1+0x0 */, int dir /* r1+0x4 */, float time /* r1+0x8 */) {
    // Local variables
    struct SMenuItem * item; // r6
}

// Range: 0x463D8 -> 0x4663C
static void menuNmEnt_init(struct_main_menu_c_47001 * st /* r29 */, void * global /* r30 */) {
    // Local variables
    struct_dm_game_main_c_10035 * mc; // r25
    int i; // r26

    // References
    // -> struct [anonymous] evs_mem_data[9];
    // -> unsigned char evs_select_name_no[];
}

// Erased
static void _menuNmEnt_updateCallback(void * args /* r3 */) {}

unsigned char __ctype_map[]; // size: 0x0, address: 0x0
// Range: 0x4663C -> 0x46E54
static void menuNmEnt_input(struct_main_menu_c_47001 * st /* r27 */) {
    // Local variables
    int rep; // r1+0x8
    int trg; // r1+0x8
    int i; // r4
    int vx; // r19
    int vy; // r18
    int sound; // r31
    int exitDir; // r30
    int p; // r29
    int ix; // r17
    int iy; // r16
    int flag; // r28
    char * c; // r1+0x8
    int v; // r1+0x8
    char * c; // r3
    struct_dm_game_main_c_10035 * mc; // r19
    struct_dm_game_main_c_10035 * mc; // r19
    @enum$856main_menu_c mode; // r16
    struct_dm_game_main_c_10035 * mc; // r19

    // References
    // -> struct [anonymous] evs_mem_data[9];
    // -> unsigned char evs_select_name_no[];
    // -> static char * _nameEntry_charTable[3];
    // -> unsigned char __ctype_map[];
}

// Range: 0x46E54 -> 0x470CC
static void menuNmEnt_update(struct_main_menu_c_47001 * st /* r31 */) {
    // Local variables
    struct SMenuItem * miRoot; // r29
    float y; // f1
}

// Range: 0x470CC -> 0x47AC8
static void menuNmEnt_draw(struct_main_menu_c_47001 * st /* r31 */, union_drmario_gc_c_202 * * gpp /* r30 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x50
    struct_tex_func_c_1287 * texC; // r26
    struct_tex_func_c_1287 * texA; // r25
    void * list[1]; // r1+0x4C
    char * tbl; // r29
    int i; // r25
    int j; // r24
    int tx; // r23
    int ty; // r22
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static union [anonymous] fade_alpha_texture_init_dl[3];
    // -> static char * _nameEntry_charTable[3];
    // -> static union [anonymous] fade_intensity_texture_init_dl[5];
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
}

// Erased
static void menuRankBase_init(struct_main_menu_c_48985 * st /* r3 */, void * global /* r1+0xC */, int x /* r5 */, int y /* r6 */) {}

// Erased
static void menuRankBase_update(struct_main_menu_c_48985 * st /* r30 */, struct SMenuItem * parent /* r31 */) {}

union_drmario_gc_c_202 normal_texture_init_dl[]; // size: 0x0, address: 0x4208
// Range: 0x47AC8 -> 0x47D88
static void menuRankBase_draw(struct_main_menu_c_48985 * * stAry /* r17 */, int count /* r28 */, union_drmario_gc_c_202 * * gpp /* r16 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x28
    struct_main_menu_c_48985 * st; // r5
    struct SMenuItem * item; // r19
    struct_tex_func_c_1287 * texC; // r18
    int i; // r31
    int j; // r30
    int cached; // r29
    float y; // f31
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> union [anonymous] normal_texture_init_dl[];
}

// Erased
static void menuRankNum_init(struct_main_menu_c_49702 * st /* r3 */, void * global /* r1+0xC */, int number /* r1+0x10 */, int x /* r6 */, int y /* r7 */) {}

// Erased
static void menuRankNum_update(struct_main_menu_c_49702 * st /* r30 */, struct SMenuItem * parent /* r31 */) {}

union_drmario_gc_c_202 alpha_texture_init_dl[]; // size: 0x0, address: 0x41A0
// Range: 0x47D88 -> 0x48358
static void menuRankNum_draw(struct_main_menu_c_49702 * * stAry /* r1+0x40 */, int count /* r1+0x44 */, union_drmario_gc_c_202 * * gpp /* r1+0x48 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x3C
    struct_main_menu_c_49702 * st; // r27
    struct SMenuItem * item; // r31
    struct_tex_func_c_1287 * texC; // r27
    struct_tex_func_c_1287 * texA; // r22
    int i; // r17
    int j; // r20
    int cached; // r26
    int init; // r23
    float x; // f31
    float y; // f30
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> union [anonymous] alpha_texture_init_dl[];
    // -> union [anonymous] normal_texture_init_dl[];
}

static unsigned char _color$9658[8][3]; // size: 0x18, address: 0x3980
@enum$9657main_menu_c;
// Range: 0x48358 -> 0x484F4
static void menuRankFig_init(struct_main_menu_c_50604 * st /* r31 */, void * global /* r1+0xC */, @enum$9657main_menu_c column /* r1+0x10 */, int number /* r1+0x14 */, int color /* r30 */, int x /* r8 */, int y /* r9 */) {
    // Local variables
    struct SMenuItem * item; // r7
    const unsigned char * colorP; // r8

    // References
    // -> static unsigned char _color$9658[8][3];
}

// Range: 0x484F4 -> 0x4891C
static void menuRankFig_update(struct_main_menu_c_50604 * st /* r30 */, struct SMenuItem * parent /* r31 */) {
    // Local variables
    int i; // r1+0x8
    int n; // r1+0x8
}

static char _code$9711[42]; // size: 0x2A, address: 0x22EA0
static int _posX_0$9712[10]; // size: 0x28, address: 0x3998
static int _posX_1$9713[5]; // size: 0x14, address: 0x39C0
static int _posX_2$9714[6]; // size: 0x18, address: 0x39D4
static int _posX_4$9715[6]; // size: 0x18, address: 0x39EC
static int * _posX_tbl$9716[7]; // size: 0x1C, address: 0x22ECC
// Range: 0x4891C -> 0x48CC4
static void menuRankFig_draw(struct_main_menu_c_50604 * * stAry /* r1+0x30 */, int count /* r1+0x34 */, union_drmario_gc_c_202 * * gpp /* r1+0x38 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x2C
    struct_main_menu_c_50604 * st; // r24
    struct SMenuItem * item; // r31
    int i; // r20
    int j; // r14
    int k; // r27
    int code; // r21
    float step; // f31
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static int * _posX_tbl$9716[7];
    // -> static char _code$9711[42];
}

static unsigned char _color$9791[3]; // size: 0x3, address: 0x3A08
// Range: 0x48CC4 -> 0x48DC8
static void menuRankName_init(struct_main_menu_c_51179 * st /* r1+0x8 */, void * global /* r1+0xC */, const char * name /* r1+0x10 */, int x /* r6 */, int y /* r7 */) {
    // Local variables
    struct SMenuItem * item; // r31
    int i; // r1+0x8

    // References
    // -> static unsigned char _color$9791[3];
}

// Erased
static void menuRankName_update(struct_main_menu_c_51179 * st /* r30 */, struct SMenuItem * parent /* r31 */) {}

// Range: 0x48DC8 -> 0x490B4
static void menuRankName_draw(struct_main_menu_c_51179 * * stAry /* r16 */, int count /* r31 */, union_drmario_gc_c_202 * * gpp /* r15 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x2C
    struct_main_menu_c_51179 * st; // r1+0x8
    struct SMenuItem * item; // r19
    float x; // f31
    int i; // r18
    int j; // r17
    union_drmario_gc_c_202 * _g; // r1+0x8
}

// Erased
static void menuRankLabel_init(struct_main_menu_c_51729 * st /* r3 */, void * global /* r1+0xC */, int type /* r1+0x10 */, int index /* r1+0x14 */, int x /* r7 */, int y /* r8 */) {}

// Erased
static void menuRankLabel_update(struct_main_menu_c_51729 * st /* r30 */, struct SMenuItem * parent /* r31 */) {}

static int _rows$9879[4]; // size: 0x10, address: 0x3A14
static int _tex$9880[3]; // size: 0xC, address: 0x3A24
static int _choice$9881[7]; // size: 0x1C, address: 0x3A30
// Range: 0x490B4 -> 0x49788
static void menuRankLabel_draw(struct_main_menu_c_51729 * * stAry /* r1+0x54 */, int count /* r1+0x58 */, union_drmario_gc_c_202 * * gpp /* r1+0x5C */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x50
    struct_main_menu_c_51729 * st; // r3
    struct SMenuItem * item; // r31
    struct_tex_func_c_1287 * texC; // r26
    int i; // r21
    int j; // r22
    int k; // r18
    int rows; // r23
    int cached; // r27
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static int _choice$9881[7];
    // -> static int _rows$9879[4];
    // -> static int _tex$9880[3];
    // -> union [anonymous] normal_texture_init_dl[];
}

// Erased
static void menuRankHeader_init(struct_main_menu_c_52297 * st /* r22 */, void * global /* r23 */, const int * labelType /* r24 */, const int * labelIndex /* r28 */, const int * labelX /* r27 */, const int * labelY /* r26 */, int labelCount /* r25 */, int x /* r10 */, int y /* r1+0x58 */) {
    // Local variables
    int i; // r26
}

// Erased
static void menuRankHeader_update(struct_main_menu_c_52297 * st /* r28 */, struct SMenuItem * parent /* r29 */) {
    // Local variables
    int i; // r29
}

// Range: 0x49788 -> 0x4984C
static void menuRankHeader_draw(struct_main_menu_c_52297 * * stAry /* r29 */, int count /* r31 */, union_drmario_gc_c_202 * * gpp /* r30 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x14
    struct_main_menu_c_52297 * st; // r1+0x8
    int i; // r1+0x8
    int j; // r4
    int k; // r8
    int * list; // r31
    int * listp; // r3
}

// Erased
static void menuRankPanel_initSt(struct_main_menu_c_52848 * st /* r26 */, void * global /* r27 */, int rank /* r25 */, const char * name /* r24 */, int score /* r28 */, int time /* r29 */, int stage /* r30 */, int x /* r10 */, int y /* r3 */) {
    // Local variables
    int col; // r5
    int pos; // r8

    // References
    // -> static unsigned char _color$9791[3];
}

// Erased
static void menuRankPanel_initLs(struct_main_menu_c_52848 * st /* r27 */, void * global /* r28 */, int rank /* r26 */, const char * name /* r25 */, int level /* r29 */, int score /* r30 */, int x /* r9 */, int y /* r10 */) {
    // References
    // -> static unsigned char _color$9791[3];
}

// Erased
static void menuRankPanel_initLsTq(struct_main_menu_c_52848 * st /* r27 */, void * global /* r28 */, int rank /* r26 */, const char * name /* r25 */, int time /* r29 */, int score /* r30 */, int x /* r9 */, int y /* r10 */) {
    // References
    // -> static unsigned char _color$9791[3];
}

// Erased
static void menuRankPanel_initLsTa(struct_main_menu_c_52848 * st /* r25 */, void * global /* r26 */, int rank /* r24 */, const char * name /* r23 */, int score /* r27 */, int time /* r28 */, int erase /* r29 */, int level /* r30 */, int x /* r11 */, int y /* r3 */) {
    // Local variables
    int col; // r5
    int pos; // r8

    // References
    // -> static unsigned char _color$9791[3];
}

// Erased
static void menuRankPanel_initVs1(struct_main_menu_c_52848 * st /* r26 */, void * global /* r27 */, int rank /* r25 */, const char * name /* r24 */, int ratio /* r28 */, int win /* r29 */, int lose /* r30 */, int x /* r10 */, int y /* r3 */) {
    // References
    // -> static unsigned char _color$9791[3];
}

// Range: 0x4984C -> 0x499B4
static void menuRankPanel_update(struct_main_menu_c_52848 * st /* r29 */, struct SMenuItem * parent /* r30 */) {}

// Range: 0x499B4 -> 0x49E34
static void menuRankPanel_draw(struct_main_menu_c_52848 * * stAry /* r27 */, int count /* r28 */, union_drmario_gc_c_202 * * gpp /* r29 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x74
    struct_main_menu_c_52848 * st; // r31
    int i; // r4
    int * list; // r30
    int * listp; // r3
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
// Range: 0x49E34 -> 0x49F58
static void menuRank_setNameBaseScale(struct_main_menu_c_54546 * st /* r1+0x8 */, int dir /* r1+0xC */, float time /* r1+0x10 */) {
    // Local variables
    struct SMenuItem * item; // r5
    struct SMenuItem * list[3]; // r1+0x14
    int i; // r1+0x8
}

// Range: 0x49F58 -> 0x4A170
static void menuRank_setSlide(struct_main_menu_c_54546 * st /* r1+0x8 */, int buf /* r1+0xC */, int dir /* r1+0x10 */, float time /* r1+0x14 */, float vec /* r1+0x18 */) {
    // Local variables
    struct_main_menu_c_54928 * ct; // r3
    struct SMenuItem * item; // r7
    int i; // r9
}

static int _pos$10346[2]; // size: 0x8, address: 0x3A60
// Range: 0x4A170 -> 0x4A484
static void menuRank_setFrame(struct_main_menu_c_54546 * st /* r1+0x8 */, int buf /* r1+0xC */, int dir /* r1+0x10 */, float time /* r1+0x14 */) {
    // Local variables
    struct_main_menu_c_54928 * ct; // r4
    struct SMenuItem * item; // r8
    int i; // r1+0x8

    // References
    // -> static int _pos$10346[2];
}

// Erased
static void menuRank_initCommon(struct_main_menu_c_54546 * st /* r30 */) {}

static int _hedAllType$10392[4]; // size: 0x10, address: 0x3A6C
static int _hedStoryId$10393[4]; // size: 0x10, address: 0x3A7C
static int _hedStoryX$10394[4]; // size: 0x10, address: 0x3A8C
static int _hedStoryY$10395[4]; // size: 0x10, address: 0x3A9C
static int _hedLevelId$10396[3]; // size: 0xC, address: 0x3AAC
static int _hedLevelX$10397[3]; // size: 0xC, address: 0x3AB8
static int _hedLevelY$10398[3]; // size: 0xC, address: 0x3AC4
static int _hed1PTaiQId$10399[3]; // size: 0xC, address: 0x3AD0
static int _hed1PTaiQX$10400[3]; // size: 0xC, address: 0x3ADC
static int _hed1PTaiQY$10401[3]; // size: 0xC, address: 0x3AE8
static int _hed1PTimeAtId$10402[4]; // size: 0x10, address: 0x3AF4
static int _hed1PTimeAtX$10403[4]; // size: 0x10, address: 0x3B04
static int _hed1PTimeAtY$10404[4]; // size: 0x10, address: 0x3B14
static int _hedVsId$10405[4]; // size: 0x10, address: 0x3B24
static int _hedVsX$10406[4]; // size: 0x10, address: 0x3B34
static int _hedVsY$10407[4]; // size: 0x10, address: 0x3B44
// Range: 0x4A484 -> 0x4AD00
static void menuRank_setPanel(struct_main_menu_c_54546 * st /* r25 */, int buf /* r1+0xC */, @enum$856main_menu_c mode /* r15 */, int level /* r1+0x24 */) {
    // Local variables
    struct_main_menu_c_54928 * ct; // r1+0x28
    struct SRankSortInfo * si; // r30
    int * headerId; // r18
    int * headerX; // r14
    int * headerY; // r16
    int i; // r27
    int titleNo; // r1+0x8
    int headerSize; // r20
    struct_dm_game_main_c_10035 * mc; // r20
    struct_record_c_74 * ms; // r3
    struct_record_c_81 * ml; // r3
    struct_record_c_88 * mq; // r3
    struct_record_c_96 * ma; // r3
    int sortId; // r24
    unsigned short * vsRes; // r22
    unsigned short * vsAve; // r19
    unsigned char * vsRnk; // r16

    // References
    // -> struct [anonymous] evs_mem_data[9];
    // -> static int _hedAllType$10392[4];
    // -> static int _hedVsY$10407[4];
    // -> static int _hedVsX$10406[4];
    // -> static int _hedVsId$10405[4];
    // -> static int _hed1PTimeAtY$10404[4];
    // -> static int _hed1PTimeAtX$10403[4];
    // -> static int _hed1PTimeAtId$10402[4];
    // -> static int _hed1PTaiQY$10401[3];
    // -> static int _hed1PTaiQX$10400[3];
    // -> static int _hed1PTaiQId$10399[3];
    // -> static int _hedLevelY$10398[3];
    // -> static int _hedLevelX$10397[3];
    // -> static int _hedLevelId$10396[3];
    // -> static int _hedStoryY$10395[4];
    // -> static int _hedStoryX$10394[4];
    // -> static int _hedStoryId$10393[4];
}

static int _lr$10544[2][2]; // size: 0x10, address: 0x3B54
// Range: 0x4AD00 -> 0x4AEB0
static void menuRank_init(struct_main_menu_c_54546 * st /* r31 */, void * global /* r4 */) {
    // Local variables
    int i; // r28

    // References
    // -> static int _lr$10544[2][2];
}

// Range: 0x4AEB0 -> 0x4B0D0
static void menuRank_input(struct_main_menu_c_54546 * st /* r29 */) {
    // Local variables
    struct_main_menu_c_54928 * ct; // r28
    int trg; // r1+0x8
    int vx; // r31
    int sound; // r30
    struct SMenuItem * item; // r3
}

// Range: 0x4B0D0 -> 0x4B28C
static void menuRank_update(struct_main_menu_c_54546 * st /* r31 */) {
    // Local variables
    struct SMenuItem * miRoot; // r27
    int i; // r26
    int j; // r27
    struct_main_menu_c_54928 * ct; // r25
    int buf; // r1+0x8
}

static int _dir$10660[2]; // size: 0x8, address: 0x3B64
// Range: 0x4B28C -> 0x4BAEC
static void menuRank_draw(struct_main_menu_c_54546 * st /* r31 */, union_drmario_gc_c_202 * * gpp /* r16 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x8C
    struct SMenuItem * item; // r25
    struct_tex_func_c_1287 * texC; // r15
    void * list[16]; // r1+0x4C
    int i; // r24
    int j; // r23
    float x; // f30
    float y; // f31
    union_drmario_gc_c_202 * _g; // r1+0x8
    int level; // r5
    struct_main_menu_c_54928 * ct; // r17
    int buf; // r1+0x8

    // References
    // -> static int _dir$10660[2];
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
}

@enum$856main_menu_c _menuAll_lastMode; // size: 0x4, address: 0x5536C
struct SMenuAll {
    // total size: 0x15A38
    union_main_story_c_778 mtxBuf[3][16]; // offset 0x0, size 0xC00
    union_tex_func_c_1051 vtxBuf[3][512]; // offset 0xC00, size 0x6000
    union_main_story_c_778 * mtxPtr[3]; // offset 0x6C00, size 0xC
    union_tex_func_c_1051 * vtxPtr[3]; // offset 0x6C0C, size 0xC
    void * heapAll; // offset 0x6C18, size 0x4
    int heapSize; // offset 0x6C1C, size 0x4
    void * heapTop[2]; // offset 0x6C20, size 0x8
    void * heapEnd[2]; // offset 0x6C28, size 0x8
    struct_tex_func_c_1287 * texChar; // offset 0x6C30, size 0x4
    struct_tex_func_c_1287 * texCommon; // offset 0x6C34, size 0x4
    struct_tex_func_c_1287 * texCredit; // offset 0x6C38, size 0x4
    struct_tex_func_c_1287 * texLevel; // offset 0x6C3C, size 0x4
    struct_tex_func_c_1287 * texMain; // offset 0x6C40, size 0x4
    struct_tex_func_c_1287 * texName; // offset 0x6C44, size 0x4
    struct_tex_func_c_1287 * texP2; // offset 0x6C48, size 0x4
    struct_tex_func_c_1287 * texP4; // offset 0x6C4C, size 0x4
    struct_tex_func_c_1287 * texRank; // offset 0x6C50, size 0x4
    struct_tex_func_c_1287 * texSetup; // offset 0x6C54, size 0x4
    struct_tex_func_c_1287 * texStory; // offset 0x6C58, size 0x4
    struct_tex_func_c_1287 * texGameAl; // offset 0x6C5C, size 0x4
    struct_tex_func_c_1287 * texGameP1; // offset 0x6C60, size 0x4
    struct_tex_func_c_1287 * texCont; // offset 0x6C64, size 0x4
    struct_tex_func_c_1287 * texTutol; // offset 0x6C68, size 0x4
    struct_tex_func_c_1287 * texKasa; // offset 0x6C6C, size 0x4
    struct SMenuItem miRoot[1]; // offset 0x6C70, size 0x90
    struct_main_menu_c_2833 title[1]; // offset 0x6D00, size 0x130
    union_main_menu_c_59153 context[2]; // offset 0x6E30, size 0xEB48
    int nowContext; // offset 0x15978, size 0x4
    int oldContext; // offset 0x1597C, size 0x4
    @enum$856main_menu_c oldMode; // offset 0x15980, size 0x4
    @enum$856main_menu_c nowMode; // offset 0x15984, size 0x4
    @enum$856main_menu_c newMode; // offset 0x15988, size 0x4
    int nextMain; // offset 0x1598C, size 0x4
    int eepRom; // offset 0x15990, size 0x4
    float fadeRatio; // offset 0x15994, size 0x4
    float fadeStep; // offset 0x15998, size 0x4
    @enum$110dm_title_main_c mainFirst; // offset 0x1599C, size 0x4
    @enum$110dm_title_main_c grapFirst; // offset 0x159A0, size 0x4
    unsigned long mainCount; // offset 0x159A4, size 0x4
    unsigned long grapCount; // offset 0x159A8, size 0x4
    unsigned long graphicThreadPri; // offset 0x159AC, size 0x4
    struct_record_c_1843 writingMsg; // offset 0x159B0, size 0x88
};
// Range: 0x4BAEC -> 0x4BB88
static void _eep_writingCallback(void * arg /* r30 */) {
    // Local variables
    struct SMenuAll * st; // r1+0x8
}

// Range: 0x4BB88 -> 0x4BBDC
static int yama_eep_retrace(void * global /* r31 */) {
    // Local variables
    struct SMenuAll * st; // r1+0x8
}

// Erased
static void _eep_writePlayer(void * arg /* r3 */) {
    // Local variables
    struct SMenuAll * st; // r31
}

// Erased
static void _eep_eraseData(void * arg /* r3 */) {
    // Local variables
    struct SMenuAll * st; // r31
}

// Erased
static void _eep_retrace(void * global /* r3 */) {
    // Local variables
    struct SMenuAll * st; // r30
}

// Range: 0x4BBDC -> 0x4BC8C
static void _eepWritePlayer(void * global /* r3 */) {
    // Local variables
    struct SMenuAll * st; // r30

    // References
    // -> static char _mesWriting[71];
}

// Range: 0x4BC8C -> 0x4BD3C
static void _eepErasePlayer(void * global /* r3 */) {
    // Local variables
    struct SMenuAll * st; // r30

    // References
    // -> static char _mesDeleting[73];
}

// Range: 0x4BD3C -> 0x4BDEC
static void _eepEraseData(void * global /* r3 */) {
    // Local variables
    struct SMenuAll * st; // r30

    // References
    // -> static char _mesDeleting[73];
}

// Range: 0x4BDEC -> 0x4BE10
static void _waitRetrace() {}

unsigned long gfx_gtask_no; // size: 0x4, address: 0x1E9A0
// Range: 0x4BE10 -> 0x4BE2C
static union_main_story_c_778 * * _getMtxPtr(void * global /* r4 */) {
    // References
    // -> unsigned long gfx_gtask_no;
}

// Range: 0x4BE2C -> 0x4BE48
static union_tex_func_c_1051 * * _getVtxPtr(void * global /* r4 */) {
    // References
    // -> unsigned long gfx_gtask_no;
}

// Range: 0x4BE48 -> 0x4BE58
static struct_tex_func_c_1287 * _getTexChar(void * global /* r1+0x0 */, int index /* r1+0x4 */) {}

// Range: 0x4BE58 -> 0x4BE68
static struct_tex_func_c_1287 * _getTexCommon(void * global /* r1+0x0 */, int index /* r1+0x4 */) {}

// Erased
static struct_tex_func_c_1287 * _getTexCredit(void * global /* r1+0x0 */, int index /* r1+0x4 */) {}

// Range: 0x4BE68 -> 0x4BE78
static struct_tex_func_c_1287 * _getTexLevel(void * global /* r1+0x0 */, int index /* r1+0x4 */) {}

// Range: 0x4BE78 -> 0x4BE88
static struct_tex_func_c_1287 * _getTexMain(void * global /* r1+0x0 */, int index /* r1+0x4 */) {}

// Range: 0x4BE88 -> 0x4BE98
static struct_tex_func_c_1287 * _getTexName(void * global /* r1+0x0 */, int index /* r1+0x4 */) {}

// Range: 0x4BE98 -> 0x4BEA8
static struct_tex_func_c_1287 * _getTexP2(void * global /* r1+0x0 */, int index /* r1+0x4 */) {}

// Range: 0x4BEA8 -> 0x4BEB8
static struct_tex_func_c_1287 * _getTexP4(void * global /* r1+0x0 */, int index /* r1+0x4 */) {}

// Range: 0x4BEB8 -> 0x4BEC8
static struct_tex_func_c_1287 * _getTexRank(void * global /* r1+0x0 */, int index /* r1+0x4 */) {}

// Range: 0x4BEC8 -> 0x4BED8
static struct_tex_func_c_1287 * _getTexSetup(void * global /* r1+0x0 */, int index /* r1+0x4 */) {}

// Range: 0x4BED8 -> 0x4BEE8
static struct_tex_func_c_1287 * _getTexStory(void * global /* r1+0x0 */, int index /* r1+0x4 */) {}

// Range: 0x4BEE8 -> 0x4BEF8
static struct_tex_func_c_1287 * _getTexGameAl(void * global /* r1+0x0 */, int index /* r1+0x4 */) {}

// Range: 0x4BEF8 -> 0x4BF08
static struct_tex_func_c_1287 * _getTexGameP1(void * global /* r1+0x0 */, int index /* r1+0x4 */) {}

// Range: 0x4BF08 -> 0x4BF18
static struct_tex_func_c_1287 * _getTexCont(void * global /* r1+0x0 */, int index /* r1+0x4 */) {}

// Range: 0x4BF18 -> 0x4BF28
static struct_tex_func_c_1287 * _getTexTutol(void * global /* r1+0x0 */, int index /* r1+0x4 */) {}

// Range: 0x4BF28 -> 0x4BF38
static struct_tex_func_c_1287 * _getTexKasa(void * global /* r1+0x0 */, int index /* r1+0x4 */) {}

// Range: 0x4BF38 -> 0x4BF40
static struct SMenuItem * _getRootItem(void * global /* r3 */) {}

unsigned short joynew[5]; // size: 0xA, address: 0x1CD88
unsigned char main_joy[4]; // size: 0x4, address: 0x1CE68
// Range: 0x4BF40 -> 0x4BF68
static int _getKeyLvl(int contNo /* r1+0x4 */) {
    // References
    // -> unsigned char main_joy[4];
    // -> unsigned short joynew[5];
}

unsigned short joyupd[5]; // size: 0xA, address: 0x1CDA0
// Range: 0x4BF68 -> 0x4BF90
static int _getKeyTrg(int contNo /* r1+0x4 */) {
    // References
    // -> unsigned char main_joy[4];
    // -> unsigned short joyupd[5];
}

unsigned short joycur[5]; // size: 0xA, address: 0x1CDAC
// Range: 0x4BF90 -> 0x4BFB8
static int _getKeyRep(int contNo /* r1+0x4 */) {
    // References
    // -> unsigned char main_joy[4];
    // -> unsigned short joycur[5];
}

// Range: 0x4BFB8 -> 0x4BFC4
static @enum$856main_menu_c _getMode(void * global /* r1+0x0 */) {}

// Range: 0x4BFC4 -> 0x4BFD0
static @enum$856main_menu_c _getModeOld(void * global /* r1+0x0 */) {}

// Range: 0x4BFD0 -> 0x4BFDC
static void _setMode(void * global /* r1+0x0 */, @enum$856main_menu_c mode /* r1+0x4 */) {}

// Range: 0x4BFDC -> 0x4BFE8
static void _setNextMain(void * global /* r1+0x0 */, int nextMain /* r1+0x4 */) {}

// Range: 0x4BFE8 -> 0x4C00C
static void _setTitle(void * global /* r3 */, @enum$856main_menu_c mode /* r4 */) {
    // Local variables
    struct SMenuAll * st; // r1+0x8
}

// Range: 0x4C00C -> 0x4C05C
static void _setFadeDir(void * global /* r1+0x0 */, int dir /* r1+0x4 */) {
    // Local variables
    struct SMenuAll * st; // r1+0x0
}

void * _romDataTbl[][2]; // size: 0x0, address: 0x1DB58
unsigned char evs_level_21; // size: 0x1, address: 0x18F94
// Range: 0x4C05C -> 0x4C3CC
static void menuAll_init(struct SMenuAll * st /* r29 */, void * hpp /* r30 */) {
    // Local variables
    void * hp; // r1+0x24
    void * (* tbl)[2]; // r1+0x8
    int i; // r1+0x8

    // References
    // -> unsigned char evs_one_game_flg;
    // -> struct [anonymous] game_state_data[4];
    // -> @enum$856main_menu_c _menuAll_lastMode;
    // -> unsigned char evs_level_21;
    // -> void * _romDataTbl[][2];
}

// Erased
static void menuAll_exit(struct SMenuAll * st /* r1+0x0 */) {
    // References
    // -> @enum$856main_menu_c _menuAll_lastMode;
}

// Range: 0x4C3CC -> 0x4C5A4
static void menuAll_waitCancel(struct SMenuAll * st /* r1+0x8 */) {
    // Local variables
    int cur; // r5

    // References
    // -> unsigned char main_joy[4];
    // -> unsigned short joyupd[5];
}

// Range: 0x4C5A4 -> 0x4C738
static void menuAll_changeMenu(struct SMenuAll * st /* r30 */) {
    // Local variables
    int cur; // r1+0x8
}

// Range: 0x4C738 -> 0x4C9D8
static void menuAll_input(struct SMenuAll * st /* r4 */) {
    // Local variables
    int cur; // r1+0x8

    // References
    // -> unsigned char main_joy[4];
    // -> unsigned short joyupd[5];
}

// Range: 0x4C9D8 -> 0x4CC2C
static void menuAll_update(struct SMenuAll * st /* r31 */) {
    // Local variables
    struct SMenuItem * item; // r5
    @enum$856main_menu_c mode; // r1+0x8
    int i; // r28
    int j; // r1+0x8
    float fade; // r1+0x8
}

// Range: 0x4CC2C -> 0x4D108
static void menuAll_drawBg(struct SMenuAll * st /* r25 */, union_drmario_gc_c_202 * * gpp /* r31 */) {
    // Local variables
    union_drmario_gc_c_202 * gp; // r1+0x64
    struct SMenuItem * item; // r28
    struct_tex_func_c_1287 * tex; // r27
    int i; // r26
    int cached; // r25
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> static union [anonymous] fade_normal_texture_init_dl[3];
}

union_drmario_gc_c_202 * gp; // size: 0x4, address: 0x1E9A4
// Range: 0x4D108 -> 0x4D36C
static void menuAll_draw(struct SMenuAll * st /* r25 */, union_drmario_gc_c_202 * * gpp /* r26 */) {
    // Local variables
    @enum$856main_menu_c mode; // r1+0x8
    int i; // r27
    int j; // r1+0x8
    int fade; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> union [anonymous] * gp;
    // -> unsigned long gfx_gtask_no;
}

unsigned char * Heap_bufferp; // size: 0x4, address: 0x18
@enum$98dm_title_main_c;
@enum$98dm_title_main_c main_old; // size: 0x4, address: 0x18F88
struct SMenuAll * watchMenu; // size: 0x4, address: 0x55370
unsigned short joyflg[4]; // size: 0x8, address: 0x1CE38
unsigned short joycur1; // size: 0x2, address: 0x1CE4C
unsigned short joycur2; // size: 0x2, address: 0x1CE4E
union_drmario_gc_c_202 gfx_glist[3][9216]; // size: 0x36000, address: 0x1E9A8
@enum$101main_story_c;
@enum$101main_story_c graphic_no; // size: 0x4, address: 0x1E994
unsigned long pendingGFX; // size: 0x4, address: 0x1E998
unsigned short joyold[5]; // size: 0xA, address: 0x1CD94
// Range: 0x4D36C -> 0x4D5F4
int main_menu() {
    // Local variables
    void * heap; // r1+0x1C
    struct SMenuAll * st; // r23

    // References
    // -> @enum$856main_menu_c _menuAll_lastMode;
    // -> @enum$101main_story_c graphic_no;
    // -> unsigned short joycur[5];
    // -> unsigned short joyupd[5];
    // -> unsigned short joyold[5];
    // -> unsigned short joynew[5];
    // -> unsigned long pendingGFX;
    // -> unsigned long gfx_gtask_no;
    // -> union [anonymous] gfx_glist[3][9216];
    // -> union [anonymous] * gp;
    // -> unsigned short joycur2;
    // -> unsigned short joycur1;
    // -> unsigned short joyflg[4];
    // -> unsigned char evs_playmax;
    // -> struct SMenuAll * watchMenu;
    // -> int _menuMain_lastSelect[8];
    // -> int _menuMain_lastDepth;
    // -> @enum$856main_menu_c _menuMain_lastMode;
    // -> @enum$98dm_title_main_c main_old;
    // -> unsigned char * Heap_bufferp;
}

// Range: 0x4D5F4 -> 0x4D71C
void graphic_menu() {
    // Local variables
    struct SMenuAll * st; // r27
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> union [anonymous] * gp;
    // -> unsigned long gfx_gtask_no;
    // -> union [anonymous] gfx_glist[3][9216];
    // -> struct SMenuAll * watchMenu;
}


