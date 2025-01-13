/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\font.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x000272A0 -> 0x00028714
*/
unsigned char font_a_tex[23184]; // size: 0x5A90, address: 0x5308
unsigned char font_2_tex[46368]; // size: 0xB520, address: 0xAD98
unsigned char font_e_tex[5640]; // size: 0x1608, address: 0x162B8
unsigned char font_e2_tex[11280]; // size: 0x2C10, address: 0x178C0
static unsigned short font_grade_tex[36]; // size: 0x48, address: 0x1A4D0
unsigned char font_e_tbl[254]; // size: 0xFE, address: 0x1A518
unsigned char font_e2_tbl[254]; // size: 0xFE, address: 0x1A618
unsigned short char_code_tbl[6239]; // size: 0x30BE, address: 0x1A718
static unsigned short code2kanji_tbl[240]; // size: 0x1E0, address: 0x1D7D8
// Range: 0x272A0 -> 0x27308
int fontStr_nextChar(const unsigned char * str /* r1+0x0 */) {
    // Local variables
    int n; // r1+0x0
}

// Range: 0x27308 -> 0x27354
int fontStr_length(const unsigned char * str /* r30 */) {
    // Local variables
    int i; // r31
    int n; // r1+0x8
}

// Range: 0x27354 -> 0x2739C
int fontStr_charSize(const unsigned char * str /* r1+0x8 */, int type /* r4 */) {
    // Local variables
    int i; // r1+0x14
    int w; // r1+0x10
    int c; // r3
}

// Range: 0x2739C -> 0x27400
int font2index(unsigned char * charcode /* r1+0x0 */) {
    // Local variables
    int n; // r4

    // References
    // -> unsigned short char_code_tbl[6239];
}

static unsigned char * _tbl$133[2]; // size: 0x8, address: 0x1D9B8
// Range: 0x27400 -> 0x27430
void ascii2index(int code /* r3 */, int type /* r1+0x4 */, int * index /* r1+0x8 */, int * width /* r1+0xC */) {
    // Local variables
    const unsigned char * tbl; // r4

    // References
    // -> static unsigned char * _tbl$133[2];
}

static union_drmario_gc_c_0 init_dl$135[5]; // size: 0x28, address: 0x1208
// Range: 0x27430 -> 0x27454
void font16_initDL(union_drmario_gc_c_0 * * gpp /* r1+0x0 */) {
    // Local variables
    union_drmario_gc_c_0 * _g; // r1+0x0

    // References
    // -> static union [anonymous] init_dl$135[5];
}

// Range: 0x27454 -> 0x27520
void font16_initDL2(union_drmario_gc_c_0 * * gpp /* r1+0x0 */) {
    // Local variables
    union_drmario_gc_c_0 * gp; // r4
    union_drmario_gc_c_0 * _g; // r4
    union_drmario_gc_c_0 * _g; // r4
    union_drmario_gc_c_0 * _g; // r4
    union_drmario_gc_c_0 * _g; // r5
    union_drmario_gc_c_0 * _g; // r4
    union_drmario_gc_c_0 * _g; // r7
    union_drmario_gc_c_0 * _g; // r4
    union_drmario_gc_c_0 * _g; // r4

    // References
    // -> static unsigned short font_grade_tex[36];
    // -> static union [anonymous] init_dl$135[5];
}

// Range: 0x27520 -> 0x2759C
void fontXX_draw(union_drmario_gc_c_0 * * gpp /* r3 */, float x /* f1 */, float y /* f2 */, float w /* f3 */, float h /* f4 */, unsigned char * charcode /* r1+0x1C */) {
    // References
    // -> unsigned short char_code_tbl[6239];
}

// Range: 0x2759C -> 0x278B8
int fontXX_drawID(union_drmario_gc_c_0 * * gpp /* r1+0x8 */, float x /* r1+0xC */, float y /* r1+0x10 */, float w /* r1+0x14 */, float h /* r1+0x18 */, int index /* r1+0x1C */) {
    // Local variables
    unsigned char * tex; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8

    // References
    // -> unsigned char font_a_tex[23184];
}

// Range: 0x278B8 -> 0x27934
void fontXX_draw2(union_drmario_gc_c_0 * * gpp /* r3 */, float x /* f1 */, float y /* f2 */, float w /* f3 */, float h /* f4 */, unsigned char * charcode /* r1+0x1C */) {
    // References
    // -> unsigned short char_code_tbl[6239];
}

// Range: 0x27934 -> 0x27E4C
int fontXX_drawID2(union_drmario_gc_c_0 * * gpp /* r1+0x8 */, float x /* r1+0xC */, float y /* r1+0x10 */, float w /* r1+0x14 */, float h /* r1+0x18 */, int index /* r1+0x1C */) {
    // Local variables
    unsigned char * tex; // r1+0x8
    int i; // r4
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8

    // References
    // -> unsigned char font_2_tex[46368];
}

// Range: 0x27E4C -> 0x27E84
void fontAsc_draw(union_drmario_gc_c_0 * * gpp /* r3 */, float x /* f1 */, float y /* f2 */, float w /* f3 */, float h /* f4 */, unsigned char * charcode /* r1+0x1C */) {
    // Local variables
    int index; // r4

    // References
    // -> static unsigned char * _tbl$133[2];
}

// Range: 0x27E84 -> 0x281DC
int fontAsc_drawID(union_drmario_gc_c_0 * * gpp /* r1+0x8 */, float x /* r1+0xC */, float y /* r1+0x10 */, float w /* r1+0x14 */, float h /* r1+0x18 */, int index /* r1+0x1C */) {
    // Local variables
    unsigned char * tex; // r1+0x8
    int blk; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8

    // References
    // -> unsigned char font_e_tex[5640];
}

// Range: 0x281DC -> 0x28214
void fontAsc_draw2(union_drmario_gc_c_0 * * gpp /* r3 */, float x /* f1 */, float y /* f2 */, float w /* f3 */, float h /* f4 */, unsigned char * charcode /* r1+0x1C */) {
    // Local variables
    int index; // r4

    // References
    // -> static unsigned char * _tbl$133[2];
}

// Range: 0x28214 -> 0x28714
int fontAsc_drawID2(union_drmario_gc_c_0 * * gpp /* r1+0x8 */, float x /* r1+0xC */, float y /* r1+0x10 */, float w /* r1+0x14 */, float h /* r1+0x18 */, int index /* r1+0x1C */) {
    // Local variables
    unsigned char * tex; // r1+0x8
    int i; // r4
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8

    // References
    // -> unsigned char font_e2_tex[11280];
}


