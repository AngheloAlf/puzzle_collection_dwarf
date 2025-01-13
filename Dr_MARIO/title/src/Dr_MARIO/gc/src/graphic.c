/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\graphic.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00026DA0 -> 0x000272A0
*/
unsigned long wb_flag; // size: 0x4, address: 0x1E990
@enum$101main_story_c;
@enum$101main_story_c graphic_no; // size: 0x4, address: 0x1E994
unsigned long pendingGFX; // size: 0x4, address: 0x1E998
void (* taskStartFrameCopyFunc)(); // size: 0x4, address: 0x1E99C
unsigned long gfx_gtask_no; // size: 0x4, address: 0x1E9A0
// Range: 0x26DA0 -> 0x26DBC
void gfxInit() {
    // References
    // -> unsigned long gfx_gtask_no;
    // -> @enum$101main_story_c graphic_no;
}

// Range: 0x26DBC -> 0x26DE8
void gfxproc() {
    // References
    // -> unsigned long pendingGFX;
}

// Range: 0x26DE8 -> 0x26EB8
static void gfxproc_onRetrace() {
    // References
    // -> unsigned long pendingGFX;
    // -> @enum$101main_story_c graphic_no;
}

void (* subproc_nuGfxFunc)(); // size: 0x4, address: 0x4
// Range: 0x26EB8 -> 0x26ECC
void gfxCreateGraphicThread() {
    // References
    // -> void (* subproc_nuGfxFunc)();
}

// Range: 0x26ECC -> 0x26ED8
void gfxTaskStartFrameCopyFunc_set(void (* frameCopyFunc)() /* r1+0x0 */) {
    // References
    // -> void (* taskStartFrameCopyFunc)();
}

long * env[70]; // size: 0x118, address: 0x18E70
// Range: 0x26ED8 -> 0x26FF4
void gfxTaskStart(union_drmario_gc_c_202 * gp /* r27 */, long glist_size /* r28 */, unsigned long flag /* r29 */) {
    // References
    // -> long * env[70];
    // -> unsigned long wb_flag;
    // -> unsigned long gfx_gtask_no;
    // -> void (* taskStartFrameCopyFunc)();
}

static struct_main_story_c_793 vp; // size: 0x10, address: 0x52F0
static int rdpinit_flag$161; // size: 0x4, address: 0x5300
union_drmario_gc_c_202 * gp; // size: 0x4, address: 0x1E9A4
union_drmario_gc_c_202 F3SetupRSP_dl[]; // size: 0x0, address: 0x24B10
union_drmario_gc_c_202 F3RDPinit_dl[]; // size: 0x0, address: 0x24A10
union_drmario_gc_c_202 F3SetupRDP_dl[]; // size: 0x0, address: 0x24AF0
// Range: 0x26FF4 -> 0x270D4
void F3RCPinitRtn() {
    // Local variables
    union_drmario_gc_c_202 * _g; // r1+0x0
    union_drmario_gc_c_202 * _g; // r1+0x0
    union_drmario_gc_c_202 * _g; // r1+0x0
    union_drmario_gc_c_202 * _g; // r1+0x0
    union_drmario_gc_c_202 * _g; // r1+0x0
    union_drmario_gc_c_202 * _g; // r1+0x0

    // References
    // -> union [anonymous] * gp;
    // -> union [anonymous] F3SetupRDP_dl[];
    // -> static int rdpinit_flag$161;
    // -> union [anonymous] F3RDPinit_dl[];
    // -> static struct [anonymous] vp;
    // -> union [anonymous] F3SetupRSP_dl[];
}

unsigned short * nuGfxCfb_ptr; // size: 0x4, address: 0x0
// Range: 0x270D4 -> 0x271A8
void F3ClearFZRtn(unsigned char f /* r1+0x0 */) {
    // Local variables
    union_drmario_gc_c_202 * _g; // r1+0x0
    union_drmario_gc_c_202 * _g; // r1+0x0
    union_drmario_gc_c_202 * _g; // r1+0x0
    union_drmario_gc_c_202 * _g; // r1+0x0
    union_drmario_gc_c_202 * _g; // r1+0x0
    union_drmario_gc_c_202 * _g; // r1+0x0

    // References
    // -> union [anonymous] * gp;
    // -> unsigned short * nuGfxCfb_ptr;
}

union_drmario_gc_c_202 S2RDPinit_dl[]; // size: 0x0, address: 0x24938
// Range: 0x271A8 -> 0x27228
void S2RDPinitRtn(unsigned char f /* r1+0x0 */) {
    // Local variables
    union_drmario_gc_c_202 * _g; // r1+0x0
    union_drmario_gc_c_202 * _g; // r1+0x0
    union_drmario_gc_c_202 * _g; // r1+0x0

    // References
    // -> union [anonymous] * gp;
    // -> union [anonymous] S2RDPinit_dl[];
}

union_drmario_gc_c_202 S2ClearCFB_dl[]; // size: 0x0, address: 0x249A0
// Range: 0x27228 -> 0x272A0
void S2ClearCFBRtn(unsigned char f /* r1+0x0 */) {
    // Local variables
    union_drmario_gc_c_202 * _g; // r1+0x0
    union_drmario_gc_c_202 * _g; // r1+0x0
    union_drmario_gc_c_202 * _g; // r1+0x0

    // References
    // -> union [anonymous] * gp;
    // -> union [anonymous] S2ClearCFB_dl[];
    // -> unsigned short * nuGfxCfb_ptr;
}

union_drmario_gc_c_202 gfx_glist[3][9216]; // size: 0x36000, address: 0x1E9A8

