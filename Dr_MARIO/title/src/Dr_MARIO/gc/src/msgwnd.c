/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\msgwnd.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00028714 -> 0x00029B68
*/
unsigned char _msgColorTbl[8][3]; // size: 0x18, address: 0x1260
unsigned char main_joy[4]; // size: 0x4, address: 0x1CE68
unsigned short joyupd[5]; // size: 0xA, address: 0x1CDA0
// Range: 0x28714 -> 0x28770
void msgWnd_init(struct_main_story_c_2 * st /* r3 */, void * heap /* r4 */, int cols /* r6 */, int rows /* r12 */, int x /* r11 */, int y /* r9 */) {
    // Local variables
    int size; // r10
}

// Range: 0x28770 -> 0x28844
void msgWnd_init2(struct_main_story_c_2 * st /* r3 */, void * heap /* r1+0xC */, int bufSize /* r1+0x10 */, int cols /* r1+0x14 */, int rows /* r1+0x18 */, int x /* r1+0x1C */, int y /* r1+0x20 */) {
    // Local variables
    void * hp; // r1+0x8
}

// Range: 0x28844 -> 0x288A4
void msgWnd_clear(struct_main_story_c_2 * st /* r1+0x0 */) {}

// Range: 0x288A4 -> 0x28ABC
static void msgWnd_layout(struct_main_story_c_2 * st /* r20 */) {
    // Local variables
    int loopFlag; // r26
    int top; // r25
    int col; // r24
    int row; // r23
    int space; // r19
    int width; // r1+0x8
    int color; // r22
    float fnt2scr; // f31
    int layoutFlag; // r21
    int step; // r18
}

// Range: 0x28ABC -> 0x28B94
void msgWnd_addStr(struct_main_story_c_2 * st /* r29 */, const unsigned char * str /* r27 */) {
    // Local variables
    int strLen; // r31
    int bufLen; // r30
}

// Range: 0x28B94 -> 0x290C4
void msgWnd_update(struct_main_story_c_2 * st /* r26 */) {
    // Local variables
    int space; // r29
    int width; // r1+0x8
    float fnt2scr; // f31

    // References
    // -> unsigned short joyupd[5];
    // -> unsigned char main_joy[4];
}

// Range: 0x290C4 -> 0x29AE0
void msgWnd_draw(struct_main_story_c_2 * st /* r31 */, union {
    struct_dm_game_main_c_33 words; // offset 0x0, size 0x8
    struct_dm_game_main_c_34 dma; // offset 0x0, size 0x8
    struct_dm_game_main_c_35 tri; // offset 0x0, size 0x8
    struct_dm_game_main_c_36 line; // offset 0x0, size 0x8
    struct_dm_game_main_c_37 popmtx; // offset 0x0, size 0x8
    struct_dm_game_main_c_38 segment; // offset 0x0, size 0x8
    struct_dm_game_main_c_39 setothermodeH; // offset 0x0, size 0x8
    struct_dm_game_main_c_39 setothermodeL; // offset 0x0, size 0x8
    struct_dm_game_main_c_40 texture; // offset 0x0, size 0x8
    struct_dm_game_main_c_41 perspnorm; // offset 0x0, size 0x8
    struct_dm_game_main_c_42 setimg; // offset 0x0, size 0x8
    struct_dm_game_main_c_43 setcombine; // offset 0x0, size 0x8
    struct_dm_game_main_c_44 setcolor; // offset 0x0, size 0x8
    struct_dm_game_main_c_45 fillrect; // offset 0x0, size 0x8
    struct_dm_game_main_c_46 settile; // offset 0x0, size 0x8
    struct_dm_game_main_c_47 loadtile; // offset 0x0, size 0x8
    struct_dm_game_main_c_47 settilesize; // offset 0x0, size 0x8
    struct_dm_game_main_c_47 loadtlut; // offset 0x0, size 0x8
    long long force_structure_alignment; // offset 0x0, size 0x8
} * * gpp /* r17 */) {
    // Local variables
    union_drmario_gc_c_0 * gp; // r1+0x10
    int now; // r28
    int col; // r27
    int row; // r26
    int rowSize; // r25
    int space; // r15
    int width; // r1+0x8
    int color; // r24
    int ascFntW; // r16
    float fnt2scr; // f31
    float scrY; // f30
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8
    int nextChar; // r1+0x8
    int charSize; // r16
    int orgX; // r1+0x8
    int blink; // r7
    union_drmario_gc_c_0 * _g; // r1+0x8
    union_drmario_gc_c_0 * _g; // r1+0x8

    // References
    // -> unsigned char _msgColorTbl[8][3];
}

// Range: 0x29AE0 -> 0x29AE8
int msgWnd_isEnd(struct_main_story_c_2 * st /* r3 */) {}

// Range: 0x29AE8 -> 0x29B24
void msgWnd_skip(struct_main_story_c_2 * st /* r1+0x8 */) {}

// Range: 0x29B24 -> 0x29B2C
int msgWnd_isSpeaking(struct_main_story_c_2 * st /* r3 */) {}

// Range: 0x29B2C -> 0x29B48
int msgWnd_isScroll(struct_main_story_c_2 * st /* r1+0x0 */) {}

// Range: 0x29B48 -> 0x29B58
int msgWnd_getWidth(struct_main_story_c_2 * st /* r1+0x0 */) {}

// Range: 0x29B58 -> 0x29B68
int msgWnd_getHeight(struct_main_story_c_2 * st /* r1+0x0 */) {}


