/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\lws.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0000CF70 -> 0x0000D610
*/
static struct_lws_c_8 AnimProc[64]; // size: 0x1000, address: 0x190C0
union_main_story_c_778 * pObjectMtx; // size: 0x4, address: 0x8E08
// Range: 0xCF70 -> 0xD610
int lws_anim(union_drmario_gc_c_202 * * glp /* r1+0xDC */, long (* pm)[4] /* r1+0xE0 */, struct {
    // total size: 0x18
    int first_frame; // offset 0x0, size 0x4
    int last_frame; // offset 0x4, size 0x4
    int frame_rate; // offset 0x8, size 0x4
    int obj_count; // offset 0xC, size 0x4
    struct_lws_c_365 * obj; // offset 0x10, size 0x4
    struct_lws_c_379 * key; // offset 0x14, size 0x4
} * pSceneData /* r21 */, int frame /* r30 */, unsigned long baseAddr /* r14 */) {
    // Local variables
    union_drmario_gc_c_202 * pgfx; // r27
    struct_lws_c_365 * pObj; // r29
    struct_lws_c_379 * pKey; // r5
    struct_lws_c_379 * pKey1; // r9
    struct_lws_c_379 * pKey2; // r3
    int i; // r16
    int key; // r6
    int ret; // r1+0xE8
    float lx; // f31
    float ly; // f30
    float lz; // f29
    float rx; // f28
    float ry; // f27
    float rz; // f26
    float sx; // f25
    float sy; // f24
    float sz; // f23
    float step; // f1
    long ilx; // r1+0xE4
    long ily; // r24
    long ilz; // r25
    signed short irx; // r28
    signed short iry; // r26
    signed short irz; // r1+0x8
    long m[4][4]; // r1+0x9C
    long ms[4][4]; // r1+0x5C
    long mt[4][4]; // r1+0x1C
    union_drmario_gc_c_202 * _g; // r3
    union_drmario_gc_c_202 * _g; // r4

    // References
    // -> union [anonymous] * pObjectMtx;
    // -> static struct [anonymous] AnimProc[64];
}


