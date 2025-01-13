/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\sfxlimit.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x000B03D8 -> 0x000B0988
*/
struct SongInitStruct {
    // total size: 0x4
    unsigned char bankRef; // offset 0x0, size 0x1
    unsigned char vol; // offset 0x1, size 0x1
    unsigned char pan; // offset 0x2, size 0x1
    unsigned char tempo; // offset 0x3, size 0x1
};
// Range: 0xB03D8 -> 0xB044C
long PlayMIDI(struct SongInitStruct * bgmArray /* r1+0x8 */, int songIndex /* r1+0xC */, int songBuffer /* r30 */, int crossfade /* r1+0x14 */) {
    // Local variables
    struct SongInitStruct * bgmPtr; // r31
}

struct SfxInitStruct {
    // total size: 0x10
    unsigned char bankRef; // offset 0x0, size 0x1
    signed short sfxRef; // offset 0x2, size 0x2
    unsigned char vol; // offset 0x4, size 0x1
    unsigned char pan; // offset 0x5, size 0x1
    unsigned char priority; // offset 0x6, size 0x1
    float pitch; // offset 0x8, size 0x4
    unsigned char pan_4p[4]; // offset 0xC, size 0x4
};
// Range: 0xB044C -> 0xB04D0
long PlaySE(struct SfxInitStruct * sfxArray /* r31 */, int sfxIndex /* r5 */) {
    // Local variables
    struct SfxInitStruct * sfxPtr; // r31
    long seHandle; // r31
}

int SFXBuf[5]; // size: 0x14, address: 0xF46F4
// Range: 0xB04D0 -> 0xB093C
static int SFXIndexN642GC(int sfxIndex /* r3 */) {
    // References
    // -> int SFXBuf[5];
}

long last_song_handle; // size: 0x4, address: 0xF46E8
// Range: 0xB093C -> 0xB0988
void SetMIDIParam(struct SongInitStruct * bgmArray /* r1+0xC */, int songIndex /* r1+0x10 */, int songBuffer /* r1+0x14 */) {
    // Local variables
    struct SongInitStruct * bgmPtr; // r31

    // References
    // -> long last_song_handle;
}


