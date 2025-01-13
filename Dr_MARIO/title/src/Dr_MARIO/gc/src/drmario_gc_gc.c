/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\drmario_gc_gc.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00000434 -> 0x00000628
*/
static void * sampl_file; // size: 0x4, address: 0x20
unsigned char proj_file[3792]; // size: 0xED0, address: 0xE4FC4
unsigned char sdir_file[13828]; // size: 0x3604, address: 0xE5E94
unsigned char pool_file[44660]; // size: 0xAE74, address: 0xDA150
struct _SND_REVHI_DELAYLINE {
    // total size: 0x14
    long inPoint; // offset 0x0, size 0x4
    long outPoint; // offset 0x4, size 0x4
    long length; // offset 0x8, size 0x4
    float * inputs; // offset 0xC, size 0x4
    float lastOutput; // offset 0x10, size 0x4
};
struct _SND_REVHI_WORK {
    // total size: 0x1C4
    struct _SND_REVHI_DELAYLINE AP[9]; // offset 0x0, size 0xB4
    struct _SND_REVHI_DELAYLINE C[9]; // offset 0xB4, size 0xB4
    float allPassCoeff; // offset 0x168, size 0x4
    float combCoef[9]; // offset 0x16C, size 0x24
    float lpLastout[3]; // offset 0x190, size 0xC
    float level; // offset 0x19C, size 0x4
    float damping; // offset 0x1A0, size 0x4
    long preDelayTime; // offset 0x1A4, size 0x4
    float crosstalk; // offset 0x1A8, size 0x4
    float * preDelayLine[3]; // offset 0x1AC, size 0xC
    float * preDelayPtr[3]; // offset 0x1B8, size 0xC
};
struct SND_AUX_REVERBHI {
    // total size: 0x1E0
    struct _SND_REVHI_WORK rv; // offset 0x0, size 0x1C4
    unsigned char tempDisableFX; // offset 0x1C4, size 0x1
    float coloration; // offset 0x1C8, size 0x4
    float mix; // offset 0x1CC, size 0x4
    float time; // offset 0x1D0, size 0x4
    float damping; // offset 0x1D4, size 0x4
    float preDelay; // offset 0x1D8, size 0x4
    float crosstalk; // offset 0x1DC, size 0x4
};
struct _SND_CHORUS_SRCINFO {
    // total size: 0x24
    long * dest; // offset 0x0, size 0x4
    long * smpBase; // offset 0x4, size 0x4
    long * old; // offset 0x8, size 0x4
    unsigned long posLo; // offset 0xC, size 0x4
    unsigned long posHi; // offset 0x10, size 0x4
    unsigned long pitchLo; // offset 0x14, size 0x4
    unsigned long pitchHi; // offset 0x18, size 0x4
    unsigned long trigger; // offset 0x1C, size 0x4
    unsigned long target; // offset 0x20, size 0x4
};
struct _SND_CHORUS_WORK {
    // total size: 0x90
    long * lastLeft[3]; // offset 0x0, size 0xC
    long * lastRight[3]; // offset 0xC, size 0xC
    long * lastSur[3]; // offset 0x18, size 0xC
    unsigned char currentLast; // offset 0x24, size 0x1
    long oldLeft[4]; // offset 0x28, size 0x10
    long oldRight[4]; // offset 0x38, size 0x10
    long oldSur[4]; // offset 0x48, size 0x10
    unsigned long currentPosLo; // offset 0x58, size 0x4
    unsigned long currentPosHi; // offset 0x5C, size 0x4
    long pitchOffset; // offset 0x60, size 0x4
    unsigned long pitchOffsetPeriodCount; // offset 0x64, size 0x4
    unsigned long pitchOffsetPeriod; // offset 0x68, size 0x4
    struct _SND_CHORUS_SRCINFO src; // offset 0x6C, size 0x24
};
struct SND_AUX_CHORUS {
    // total size: 0x9C
    struct _SND_CHORUS_WORK work; // offset 0x0, size 0x90
    unsigned long baseDelay; // offset 0x90, size 0x4
    unsigned long variation; // offset 0x94, size 0x4
    unsigned long period; // offset 0x98, size 0x4
};
// Range: 0x434 -> 0x604
int soundSubInit(struct SND_AUX_REVERBHI * revH /* r29 */, struct SND_AUX_CHORUS * cho /* r30 */) {
    // Local variables
    int result; // r1+0x10

    // References
    // -> static void * sampl_file;
    // -> unsigned char pool_file[44660];
    // -> unsigned char sdir_file[13828];
    // -> unsigned char proj_file[3792];
}

// Range: 0x604 -> 0x628
void soundSubQuit() {}

void * songTbl[24]; // size: 0x60, address: 0xF4
int Sum; // size: 0x4, address: 0x24
unsigned char Stack[4096]; // size: 0x1000, address: 0x28

