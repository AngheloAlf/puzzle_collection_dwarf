/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\peel.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0007FBA0 -> 0x0007FE50
*/
enum /* @enum$94peel_c */ {
    PT_NONE = -1,
    PT_PICK = 0,
    PT_SPIN = 1,
    PT_DROP = 2,
    PT_LEFT = 3,
    PT_RIGHT = 4,
    PT_RISE = 5,
    PT_MOSAIC = 6,
    PT_PICKLAST_ = 7,
    PT_WAVE = 8,
    PT_DOOR_LR = 9,
    PT_DOOR_UD = 10,
    PT_SPLIT_LR = 11,
    PT_SPLIT_UD = 12,
    PT_SCATTER = 13,
    PT_FADE = 14,
};
static enum /* @enum$94peel_c */ {
    PT_NONE = -1,
    PT_PICK = 0,
    PT_SPIN = 1,
    PT_DROP = 2,
    PT_LEFT = 3,
    PT_RIGHT = 4,
    PT_RISE = 5,
    PT_MOSAIC = 6,
    PT_PICKLAST_ = 7,
    PT_WAVE = 8,
    PT_DOOR_LR = 9,
    PT_DOOR_UD = 10,
    PT_SPLIT_LR = 11,
    PT_SPLIT_UD = 12,
    PT_SCATTER = 13,
    PT_FADE = 14,
} geTypePeel; // size: 0x4, address: 0xF4480
static int gbFadeAlpha; // size: 0x4, address: 0xF4484
static int gnAlphaPeel; // size: 0x4, address: 0xF4488
static union {
    struct {
        // total size: 0x10
        signed short ob[3]; // offset 0x0, size 0x6
        unsigned short flag; // offset 0x6, size 0x2
        signed short tc[2]; // offset 0x8, size 0x4
        unsigned char cn[4]; // offset 0xC, size 0x4
    } v; // offset 0x0, size 0x10
    struct {
        // total size: 0x10
        signed short ob[3]; // offset 0x0, size 0x6
        unsigned short flag; // offset 0x6, size 0x2
        signed short tc[2]; // offset 0x8, size 0x4
        signed char n[3]; // offset 0xC, size 0x3
        unsigned char a; // offset 0xF, size 0x1
    } n; // offset 0x0, size 0x10
    long long force_structure_alignment; // offset 0x0, size 0x8
} * gapVtxPeel[2]; // size: 0x8, address: 0xF448C
static void * gaTile[48]; // size: 0xC0, address: 0xF4494
static int gnWaveData; // size: 0x4, address: 0xF4554
static char * gacWaveData; // size: 0x4, address: 0xF4558
// Range: 0x7FBA0 -> 0x7FBA4
void peelTick() {}

// Range: 0x7FBA4 -> 0x7FBC4
void peelStop() {
    // References
    // -> static int gnAlphaPeel;
    // -> static enum /* @enum$94peel_c */ {
    PT_NONE = -1,
    PT_PICK = 0,
    PT_SPIN = 1,
    PT_DROP = 2,
    PT_LEFT = 3,
    PT_RIGHT = 4,
    PT_RISE = 5,
    PT_MOSAIC = 6,
    PT_PICKLAST_ = 7,
    PT_WAVE = 8,
    PT_DOOR_LR = 9,
    PT_DOOR_UD = 10,
    PT_SPLIT_LR = 11,
    PT_SPLIT_UD = 12,
    PT_SCATTER = 13,
    PT_FADE = 14,
} geTypePeel;
}

// Range: 0x7FBC4 -> 0x7FC2C
int peelActive() {
    // References
    // -> static enum /* @enum$94peel_c */ {
    PT_NONE = -1,
    PT_PICK = 0,
    PT_SPIN = 1,
    PT_DROP = 2,
    PT_LEFT = 3,
    PT_RIGHT = 4,
    PT_RISE = 5,
    PT_MOSAIC = 6,
    PT_PICKLAST_ = 7,
    PT_WAVE = 8,
    PT_DOOR_LR = 9,
    PT_DOOR_UD = 10,
    PT_SPLIT_LR = 11,
    PT_SPLIT_UD = 12,
    PT_SCATTER = 13,
    PT_FADE = 14,
} geTypePeel;
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
    struct {
        // total size: 0x10
        int iFile; // offset 0x0, size 0x4
        int nSize; // offset 0x4, size 0x4
        int nBase; // offset 0x8, size 0x4
        int nOffset; // offset 0xC, size 0x4
    } file; // r1+0x24
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
    // -> static enum /* @enum$94peel_c */ {
    PT_NONE = -1,
    PT_PICK = 0,
    PT_SPIN = 1,
    PT_DROP = 2,
    PT_LEFT = 3,
    PT_RIGHT = 4,
    PT_RISE = 5,
    PT_MOSAIC = 6,
    PT_PICKLAST_ = 7,
    PT_WAVE = 8,
    PT_DOOR_LR = 9,
    PT_DOOR_UD = 10,
    PT_SPLIT_LR = 11,
    PT_SPLIT_UD = 12,
    PT_SCATTER = 13,
    PT_FADE = 14,
} geTypePeel;
    // -> static int gbFadeAlpha;
}


