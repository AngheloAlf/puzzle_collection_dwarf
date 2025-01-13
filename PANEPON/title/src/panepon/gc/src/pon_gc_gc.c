/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\pon_gc_gc.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x0000BA10 -> 0x0000C1D4
*/
// Range: 0xBA10 -> 0xBA30
long long pon_osGetTime() {}

// Range: 0xBA30 -> 0xBBFC
void pon_MaxSort(void * Score /* r1+0x8 */, void * SortScore /* r30 */, int ArrayMax /* r31 */, int ByteSize /* r29 */) {
    // Local variables
    int i; // r8
    int j; // r4
    int Bak; // r1+0x18
}

// Range: 0xBBFC -> 0xBDC8
void pon_MinSort(void * Score /* r1+0x8 */, void * SortScore /* r30 */, int ArrayMax /* r31 */, int ByteSize /* r29 */) {
    // Local variables
    int i; // r8
    int j; // r4
    int Bak; // r1+0x18
}

static void * sampl_file; // size: 0x4, address: 0x190
unsigned char panepon_proj[11452]; // size: 0x2CBC, address: 0x23150
unsigned char panepon_sdir[28516]; // size: 0x6F64, address: 0x25E10
unsigned char panepon_pool[95104]; // size: 0x17380, address: 0xBDD0
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
// Range: 0xBDC8 -> 0xBF98
int soundSubInit(struct SND_AUX_REVERBHI * revH /* r29 */, struct SND_AUX_CHORUS * cho /* r30 */) {
    // Local variables
    int result; // r1+0x10

    // References
    // -> static void * sampl_file;
    // -> unsigned char panepon_pool[95104];
    // -> unsigned char panepon_sdir[28516];
    // -> unsigned char panepon_proj[11452];
}

// Range: 0xBF98 -> 0xBF9C
void soundSubQuit() {}

void * songTbl[59]; // size: 0xEC, address: 0xCA0
static unsigned char threadStack[4096]; // size: 0x1000, address: 0x194
struct OSContext {
    // total size: 0x2C8
    unsigned long gpr[32]; // offset 0x0, size 0x80
    unsigned long cr; // offset 0x80, size 0x4
    unsigned long lr; // offset 0x84, size 0x4
    unsigned long ctr; // offset 0x88, size 0x4
    unsigned long xer; // offset 0x8C, size 0x4
    double fpr[32]; // offset 0x90, size 0x100
    unsigned long fpscr_pad; // offset 0x190, size 0x4
    unsigned long fpscr; // offset 0x194, size 0x4
    unsigned long srr0; // offset 0x198, size 0x4
    unsigned long srr1; // offset 0x19C, size 0x4
    unsigned short mode; // offset 0x1A0, size 0x2
    unsigned short state; // offset 0x1A2, size 0x2
    unsigned long gqr[8]; // offset 0x1A4, size 0x20
    unsigned long psf_pad; // offset 0x1C4, size 0x4
    double psf[32]; // offset 0x1C8, size 0x100
};
struct OSThreadQueue {
    // total size: 0x8
    struct OSThread * head; // offset 0x0, size 0x4
    struct OSThread * tail; // offset 0x4, size 0x4
};
struct OSThreadLink {
    // total size: 0x8
    struct OSThread * next; // offset 0x0, size 0x4
    struct OSThread * prev; // offset 0x4, size 0x4
};
struct OSMutexLink {
    // total size: 0x8
    struct OSMutex * next; // offset 0x0, size 0x4
    struct OSMutex * prev; // offset 0x4, size 0x4
};
struct OSMutex {
    // total size: 0x18
    struct OSThreadQueue queue; // offset 0x0, size 0x8
    struct OSThread * thread; // offset 0x8, size 0x4
    long count; // offset 0xC, size 0x4
    struct OSMutexLink link; // offset 0x10, size 0x8
};
struct OSMutexQueue {
    // total size: 0x8
    struct OSMutex * head; // offset 0x0, size 0x4
    struct OSMutex * tail; // offset 0x4, size 0x4
};
struct OSThread {
    // total size: 0x318
    struct OSContext context; // offset 0x0, size 0x2C8
    unsigned short state; // offset 0x2C8, size 0x2
    unsigned short attr; // offset 0x2CA, size 0x2
    long suspend; // offset 0x2CC, size 0x4
    long priority; // offset 0x2D0, size 0x4
    long base; // offset 0x2D4, size 0x4
    void * val; // offset 0x2D8, size 0x4
    struct OSThreadQueue * queue; // offset 0x2DC, size 0x4
    struct OSThreadLink link; // offset 0x2E0, size 0x8
    struct OSThreadQueue queueJoin; // offset 0x2E8, size 0x8
    struct OSMutex * mutex; // offset 0x2F0, size 0x4
    struct OSMutexQueue queueMutex; // offset 0x2F4, size 0x8
    struct OSThreadLink linkActive; // offset 0x2FC, size 0x8
    unsigned char * stackBase; // offset 0x304, size 0x4
    unsigned long * stackEnd; // offset 0x308, size 0x4
    long error; // offset 0x30C, size 0x4
    void * specific[2]; // offset 0x310, size 0x8
};
static struct OSThread thread; // size: 0x318, address: 0x1198
char * bin_file; // size: 0x4, address: 0x0
char * gc_vertex; // size: 0x4, address: 0x4
char * gc_ending; // size: 0x4, address: 0x8
char * gc_mini3d; // size: 0x4, address: 0x168
char * gc_pause1; // size: 0x4, address: 0x16C
// Range: 0xBF9C -> 0xC144
static void * Pon_DVDRead_boot_thread(void * param /* r29 */) {
    // Local variables
    int result; // r1+0x8

    // References
    // -> char * gc_pause1;
    // -> char * gc_mini3d;
    // -> char * gc_ending;
    // -> char * gc_vertex;
    // -> char * bin_file;
}

// Range: 0xC144 -> 0xC1AC
int Pon_DVDRead_boot_thread_start16() {
    // References
    // -> static struct OSThread thread;
    // -> static unsigned char threadStack[4096];
}

// Range: 0xC1AC -> 0xC1D4
int Pon_DVDRead_boot_thread_wait16() {
    // References
    // -> static struct OSThread thread;
}


