/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\peel.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0007FBA0 -> 0x0007FE50
*/
@enum$94peel_c;
static @enum$94peel_c geTypePeel; // size: 0x4, address: 0xF4480
static int gbFadeAlpha; // size: 0x4, address: 0xF4484
static int gnAlphaPeel; // size: 0x4, address: 0xF4488
static union_pon_gc_tex_c_1219 * gapVtxPeel[2]; // size: 0x8, address: 0xF448C
static void * gaTile[48]; // size: 0xC0, address: 0xF4494
static int gnWaveData; // size: 0x4, address: 0xF4554
static char * gacWaveData; // size: 0x4, address: 0xF4558
// Range: 0x7FBA0 -> 0x7FBA4
void peelTick() {}

// Range: 0x7FBA4 -> 0x7FBC4
void peelStop() {
    // References
    // -> static int gnAlphaPeel;
    // -> static @enum$94peel_c geTypePeel;
}

// Range: 0x7FBC4 -> 0x7FC2C
int peelActive() {
    // References
    // -> static @enum$94peel_c geTypePeel;
    // -> static int gnAlphaPeel;
    // -> static int gbFadeAlpha;
}

unsigned short cfb_16_a[]; // size: 0x0, address: 0x27028
unsigned short cfb_16_b[]; // size: 0x0, address: 0x1828
void * gpHeapPeel; // size: 0x4, address: 0xF455C
// Range: 0x7FC2C -> 0x7FE50
void peelSetup() {
    // Local variables
    int iTile; // r3
    struct_bitmap_c_43 file; // r1+0x24
    char * pHeap; // r1+0x8
    int iScreen; // r1+0x8
    unsigned long * pScreen; // r3

    // References
    // -> static int gnWaveData;
    // -> void * gpHeapPeel;
    // -> static void * gaTile[48];
    // -> static char * gacWaveData;
    // -> static union [anonymous] * gapVtxPeel[2];
    // -> unsigned short cfb_16_a[];
    // -> unsigned short cfb_16_b[];
    // -> static @enum$94peel_c geTypePeel;
    // -> static int gbFadeAlpha;
}

// Erased
static void peelReset() {}


