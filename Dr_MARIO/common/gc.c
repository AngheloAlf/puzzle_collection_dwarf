/*
    Compile unit: C:\users\tsuji\common\gc.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0005B748 -> 0x0005D44C
*/
static unsigned int alloc_counter; // size: 0x4, address: 0x208420
int __OSCurrHeap; // size: 0x4, address: 0x0
// Range: 0x5B748 -> 0x5B78C
void * DoMalloc(unsigned long size /* r4 */) {
    // Local variables
    void * p; // r3

    // References
    // -> static unsigned int alloc_counter;
    // -> int __OSCurrHeap;
}

// Range: 0x5B78C -> 0x5B7D0
void DoFree(void * addr /* r4 */) {
    // References
    // -> static unsigned int alloc_counter;
    // -> int __OSCurrHeap;
}

// Range: 0x5B7D0 -> 0x5B7E0
int DoGetRestAlloc() {
    // References
    // -> static unsigned int alloc_counter;
}

static unsigned long aramMemArray[2]; // size: 0x8, address: 0x208424
static unsigned long lastsong_id; // size: 0x4, address: 0x20842C
static int songgroup; // size: 0x4, address: 0x208430
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
static struct SND_AUX_REVERBHI revH; // size: 0x1E0, address: 0x208434
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
static struct SND_AUX_CHORUS cho; // size: 0x9C, address: 0x208614
struct SND_HOOKS {
    // total size: 0x8
    void * (* malloc)(unsigned long); // offset 0x0, size 0x4
    void (* free)(void *); // offset 0x4, size 0x4
};
// Range: 0x5B7E0 -> 0x5B8D4
void gc_soundInit() {
    // Local variables
    struct SND_HOOKS hooks; // r1+0x14

    // References
    // -> static struct SND_AUX_CHORUS cho;
    // -> static struct SND_AUX_REVERBHI revH;
    // -> static int songgroup;
    // -> static unsigned long aramMemArray[2];
    // -> static unsigned long lastsong_id;
}

// Range: 0x5B8D4 -> 0x5B918
void gc_soundQuit() {
    // Local variables
    unsigned long length; // r1+0x8

    // References
    // -> static struct SND_AUX_REVERBHI revH;
    // -> static struct SND_AUX_CHORUS cho;
}

void * songTbl[]; // size: 0x0, address: 0xF4
// Range: 0x5B918 -> 0x5B99C
unsigned int gc_songPlay(int seq /* r30 */) {
    // References
    // -> static unsigned long lastsong_id;
    // -> static int songgroup;
    // -> void * songTbl[];
}

// Range: 0x5B99C -> 0x5B9C8
void _gc_songStop(int sid /* r3 */) {}

// Range: 0x5B9C8 -> 0x5BA0C
void gc_songStop() {
    // References
    // -> static unsigned long lastsong_id;
}

// Range: 0x5BA0C -> 0x5BA40
int _gc_songGetValid(int sid /* r3 */) {}

static int new_seq_id; // size: 0x4, address: 0x2086B0
static int out_seq_id; // size: 0x4, address: 0x2086B4
// Range: 0x5BA40 -> 0x5BA68
int _gc_sePlay(int sndNo /* r3 */, unsigned char vol /* r4 */, unsigned char pan /* r5 */) {}

// Range: 0x5BA68 -> 0x5BAC8
void _gc_songFadeSong(int sid /* r6 */, unsigned char vol /* r4 */, unsigned short time /* r5 */) {}

// Range: 0x5BAC8 -> 0x5BB68
void gc_soundSetOutputMode(unsigned char mode /* r1+0x8 */) {}

// Range: 0x5BB68 -> 0x5BB88
void gc_soundAllStop() {}

// Range: 0x5BB88 -> 0x5BBA8
int gc_soundAllStop_check() {}

void (* DVDError_DispFunction)(); // size: 0x4, address: 0x24BE0
static int dvd_lastReadLength; // size: 0x4, address: 0x2086B8
static unsigned char DVD_Error_ThreadStack[4096]; // size: 0x1000, address: 0x2086BC
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
static struct OSThread DVD_Error_Thread; // size: 0x318, address: 0x2096C0
static int flag$238; // size: 0x4, address: 0x24BE4
// Range: 0x5BBA8 -> 0x5BC18
static void * DVD_Error_Disp_thread() {
    // Local variables
    int errortype; // r29

    // References
    // -> void (* DVDError_DispFunction)();
    // -> static int flag$238;
}

// Range: 0x5BC18 -> 0x5BC40
void SetDVDError_DispFunction(void (* func)() /* r1+0x0 */) {
    // References
    // -> void (* DVDError_DispFunction)();
}

struct DVDDiskID {
    // total size: 0x20
    char gameName[4]; // offset 0x0, size 0x4
    char company[2]; // offset 0x4, size 0x2
    unsigned char diskNumber; // offset 0x6, size 0x1
    unsigned char gameVersion; // offset 0x7, size 0x1
    unsigned char streaming; // offset 0x8, size 0x1
    unsigned char streamingBufSize; // offset 0x9, size 0x1
    unsigned char padding[22]; // offset 0xA, size 0x16
};
struct DVDCommandBlock {
    // total size: 0x30
    struct DVDCommandBlock * next; // offset 0x0, size 0x4
    struct DVDCommandBlock * prev; // offset 0x4, size 0x4
    unsigned long command; // offset 0x8, size 0x4
    long state; // offset 0xC, size 0x4
    unsigned long offset; // offset 0x10, size 0x4
    unsigned long length; // offset 0x14, size 0x4
    void * addr; // offset 0x18, size 0x4
    unsigned long currTransferSize; // offset 0x1C, size 0x4
    unsigned long transferredSize; // offset 0x20, size 0x4
    struct DVDDiskID * id; // offset 0x24, size 0x4
    void (* callback)(long, struct DVDCommandBlock *); // offset 0x28, size 0x4
    void * userData; // offset 0x2C, size 0x4
};
struct DVDFileInfo {
    // total size: 0x3C
    struct DVDCommandBlock cb; // offset 0x0, size 0x30
    unsigned long startAddr; // offset 0x30, size 0x4
    unsigned long length; // offset 0x34, size 0x4
    void (* callback)(long, struct DVDFileInfo *); // offset 0x38, size 0x4
};
// Range: 0x5BC40 -> 0x5BE0C
void * _gc_DVDRead(char * filename /* r25 */, int * buffer /* r27 */, int offset /* r28 */, int size /* r26 */, int * result /* r29 */) {
    // Local variables
    struct DVDFileInfo handle; // r1+0x20
    unsigned long length; // r3
    unsigned long round_length; // r26
    unsigned char * bufferp; // r30

    // References
    // -> static struct OSThread DVD_Error_Thread;
    // -> static unsigned int alloc_counter;
    // -> int __OSCurrHeap;
    // -> static int dvd_lastReadLength;
    // -> static unsigned char DVD_Error_ThreadStack[4096];
    // -> void (* DVDError_DispFunction)();
}

// Range: 0x5BE0C -> 0x5BE7C
int gc_GetDVDDrive() {}

// Range: 0x5BE7C -> 0x5BE9C
long long gc_OSGetTime() {}

static void * EFB_bufferp; // size: 0x4, address: 0x2099D8
// Range: 0x5BE9C -> 0x5BF48
void gc_getEFB_init() {
    // References
    // -> static void * EFB_bufferp;
    // -> static unsigned int alloc_counter;
    // -> int __OSCurrHeap;
}

// Range: 0x5BF48 -> 0x5BFA4
void gc_getEFB_exit() {
    // References
    // -> static void * EFB_bufferp;
    // -> static unsigned int alloc_counter;
    // -> int __OSCurrHeap;
}

// Range: 0x5BFA4 -> 0x5BFB4
void * gc_getEFB_getBuffer() {
    // References
    // -> static void * EFB_bufferp;
}

// Range: 0x5BFB4 -> 0x5C080
void * gc_getEFB_RGBA16() {
    // Local variables
    int x; // r31
    int y; // r30
    union_gc_c_105 un; // r1+0x8
    unsigned short * p; // r29

    // References
    // -> static void * EFB_bufferp;
}

static int gc_memoryCard_exi; // size: 0x4, address: 0x2099DC
static long gc_sectorSize; // size: 0x4, address: 0x2099E0
static int gc_memoryCard_pullFlag; // size: 0x4, address: 0x2099E4
static int memoryCard_data_cached; // size: 0x4, address: 0x2099E8
static unsigned char memoryCard_data[40959]; // size: 0x9FFF, address: 0x209A00
static unsigned char gc_card_workarea[2][40960]; // size: 0x14000, address: 0x213A00
static unsigned char memoryCard_comment[65]; // size: 0x41, address: 0x24C40
// Range: 0x5C080 -> 0x5C1C8
static int gc_memoryCard_errorCheck(int errno /* r3 */, char * commandStr /* r6 */) {}

static int gc_AsyncEndFlag; // size: 0x4, address: 0x227A00
static int gc_AsyncResult; // size: 0x4, address: 0x227A04
// Range: 0x5C1C8 -> 0x5C210
static void (* gc_AsyncCallback(long result /* r4 */))(long, long) {
    // References
    // -> static int gc_AsyncEndFlag;
    // -> static int gc_AsyncResult;
}

// Range: 0x5C210 -> 0x5C234
static void (* gc_detachCallback())(long, long) {
    // References
    // -> static int gc_memoryCard_pullFlag;
    // -> static int memoryCard_data_cached;
}

// Range: 0x5C234 -> 0x5C3A0
static int gc_memoryCard_mountAsync(int slot /* r29 */, void (* callBack)() /* r30 */) {
    // Local variables
    int brk; // r3

    // References
    // -> static int gc_AsyncResult;
    // -> static int gc_AsyncEndFlag;
    // -> static int gc_memoryCard_exi;
    // -> static unsigned char gc_card_workarea[2][40960];
}

// Range: 0x5C3A0 -> 0x5C3C0
int gc_memoryCard_sizeAdjust(int size /* r3 */) {
    // Local variables
    int a; // r1+0x0
}

struct CARDFileInfo {
    // total size: 0x14
    long chan; // offset 0x0, size 0x4
    long fileNo; // offset 0x4, size 0x4
    long offset; // offset 0x8, size 0x4
    long length; // offset 0xC, size 0x4
    unsigned short iBlock; // offset 0x10, size 0x2
    unsigned short __padding; // offset 0x12, size 0x2
};
// Range: 0x5C3C0 -> 0x5C528
static int _gc_memoryCardReadAsync(char * fileName /* r26 */, char * buffer /* r27 */, int size /* r28 */, void (* callBack)() /* r29 */) {
    // Local variables
    int brk; // r3
    struct CARDFileInfo fileInfo; // r1+0x18

    // References
    // -> static int gc_AsyncResult;
    // -> static int gc_memoryCard_exi;
    // -> static int gc_AsyncEndFlag;
    // -> static int gc_memoryCard_pullFlag;
}

// Range: 0x5C528 -> 0x5C608
static int gc_memoryCardCreateAsync(char * fileName /* r25 */, int size /* r26 */, struct CARDFileInfo * fileInfo /* r27 */, void (* callBack)() /* r28 */) {
    // Local variables
    int brk; // r3

    // References
    // -> static int gc_AsyncResult;
    // -> static int gc_memoryCard_exi;
    // -> static int gc_AsyncEndFlag;
    // -> static int gc_memoryCard_pullFlag;
}

// Range: 0x5C608 -> 0x5C6D8
static int gc_memoryCardDeleteAsync(char * fileName /* r27 */, void (* callBack)() /* r28 */) {
    // Local variables
    int brk; // r3

    // References
    // -> static int gc_AsyncResult;
    // -> static int gc_memoryCard_exi;
    // -> static int gc_AsyncEndFlag;
    // -> static int gc_memoryCard_pullFlag;
}

// Range: 0x5C6D8 -> 0x5C7B0
static int gc_memoryCardRenameAsync(char * oldName /* r26 */, char * newName /* r27 */, void (* callBack)() /* r28 */) {
    // Local variables
    int brk; // r3

    // References
    // -> static int gc_AsyncResult;
    // -> static int gc_memoryCard_exi;
    // -> static int gc_AsyncEndFlag;
    // -> static int gc_memoryCard_pullFlag;
}

unsigned char TEX_banner[3072]; // size: 0xC00, address: 0x0
unsigned char TLU_banner[512]; // size: 0x200, address: 0x0
unsigned char TEX_icon0[1024]; // size: 0x400, address: 0x0
unsigned char TEX_icon1[1024]; // size: 0x400, address: 0x0
unsigned char TEX_icon2[1024]; // size: 0x400, address: 0x0
unsigned char TLU_icon0[512]; // size: 0x200, address: 0x0
// Range: 0x5C7B0 -> 0x5CA08
static int gc_memoryCardStatus_set(struct CARDStat * stat /* r31 */) {
    // Local variables
    int index; // r1+0x8

    // References
    // -> unsigned char TLU_icon0[512];
    // -> static unsigned char memoryCard_data[40959];
    // -> unsigned char TEX_icon2[1024];
    // -> unsigned char TEX_icon1[1024];
    // -> unsigned char TEX_icon0[1024];
    // -> unsigned char TLU_banner[512];
    // -> unsigned char TEX_banner[3072];
    // -> static unsigned char memoryCard_comment[65];
}

struct CARDStat {
    // total size: 0x6C
    char fileName[32]; // offset 0x0, size 0x20
    unsigned long length; // offset 0x20, size 0x4
    unsigned long time; // offset 0x24, size 0x4
    unsigned char gameName[4]; // offset 0x28, size 0x4
    unsigned char company[2]; // offset 0x2C, size 0x2
    unsigned char bannerFormat; // offset 0x2E, size 0x1
    unsigned char __padding; // offset 0x2F, size 0x1
    unsigned long iconAddr; // offset 0x30, size 0x4
    unsigned short iconFormat; // offset 0x34, size 0x2
    unsigned short iconSpeed; // offset 0x36, size 0x2
    unsigned long commentAddr; // offset 0x38, size 0x4
    unsigned long offsetBanner; // offset 0x3C, size 0x4
    unsigned long offsetBannerTlut; // offset 0x40, size 0x4
    unsigned long offsetIcon[8]; // offset 0x44, size 0x20
    unsigned long offsetIconTlut; // offset 0x64, size 0x4
    unsigned long offsetData; // offset 0x68, size 0x4
};
// Range: 0x5CA08 -> 0x5CC5C
static int _gc_memoryCardWriteAsync(char * fileName /* r25 */, char * buffer /* r27 */, int size /* r28 */, void (* callBack)() /* r29 */) {
    // Local variables
    int brk; // r3
    int fileNo; // r26
    struct CARDFileInfo fileInfo; // r1+0x88
    struct CARDStat cardStat; // r1+0x1C

    // References
    // -> static int gc_AsyncResult;
    // -> static int gc_memoryCard_exi;
    // -> static int gc_AsyncEndFlag;
    // -> static int gc_memoryCard_pullFlag;
}

// Range: 0x5CC5C -> 0x5CD6C
static int _gc_memoryCardLoadAsync(void (* callBack)() /* r28 */) {
    // Local variables
    int res; // r3

    // References
    // -> static int gc_memoryCard_exi;
    // -> static unsigned char memoryCard_data[40959];
    // -> static int gc_memoryCard_pullFlag;
}

// Range: 0x5CD6C -> 0x5CE28
int gc_memoryCardLoad(int gameNo /* r1+0x8 */, char * buffer /* r29 */) {
    // References
    // -> static unsigned char memoryCard_data[40959];
    // -> static int gc_memoryCard_pullFlag;
}

// Range: 0x5CE28 -> 0x5CF8C
int gc_memoryCardSaveAsync(int gameNo /* r1+0x8 */, char * buffer /* r26 */, void (* callBack)() /* r27 */) {
    // Local variables
    int offset; // r29
    int size; // r28
    int res; // r3

    // References
    // -> static int gc_memoryCard_exi;
    // -> static unsigned char memoryCard_data[40959];
    // -> static int gc_memoryCard_pullFlag;
}

// Range: 0x5CF8C -> 0x5CFB0
int gc_memoryCardSave(int gameNo /* r3 */, char * buffer /* r4 */) {}

static int memoryCard_slotStatus[2]; // size: 0x8, address: 0x227A08
struct OSCalendarTime {
    // total size: 0x28
    int sec; // offset 0x0, size 0x4
    int min; // offset 0x4, size 0x4
    int hour; // offset 0x8, size 0x4
    int mday; // offset 0xC, size 0x4
    int mon; // offset 0x10, size 0x4
    int year; // offset 0x14, size 0x4
    int wday; // offset 0x18, size 0x4
    int yday; // offset 0x1C, size 0x4
    int msec; // offset 0x20, size 0x4
    int usec; // offset 0x24, size 0x4
};
// Range: 0x5CFB0 -> 0x5CFDC
void gc_resetSystem() {}

static unsigned char threadStack[4096]; // size: 0x1000, address: 0x227A10
static struct OSThread thread; // size: 0x318, address: 0x228A10
static int threadGameNo; // size: 0x4, address: 0x228D28
static void * threadFileName; // size: 0x4, address: 0x228D2C
static void * threadBuffer; // size: 0x4, address: 0x228D30
static int threadResult; // size: 0x4, address: 0x228D34
static int threadFirstFlag; // size: 0x4, address: 0x228D38
static int threadOffset; // size: 0x4, address: 0x228D3C
static int threadSize; // size: 0x4, address: 0x228D40
// Range: 0x5CFDC -> 0x5D020
int gc_thread_getResultCode() {
    // References
    // -> static int threadResult;
    // -> static struct OSThread thread;
}

// Range: 0x5D020 -> 0x5D064
static void _gc_thread_memoryCardSave() {
    // References
    // -> static int threadResult;
    // -> static int threadGameNo;
    // -> static void * threadBuffer;
}

// Range: 0x5D064 -> 0x5D138
int gc_thread_memoryCardSave(int gameNo /* r29 */, char * buffer /* r30 */) {
    // References
    // -> static int threadFirstFlag;
    // -> static struct OSThread thread;
    // -> static unsigned char threadStack[4096];
    // -> static void * threadBuffer;
    // -> static int threadGameNo;
    // -> static int threadResult;
}

// Range: 0x5D138 -> 0x5D18C
static void __gc_thread_DVDRead() {
    // Local variables
    int result; // r1+0xC

    // References
    // -> static int threadResult;
    // -> static int threadSize;
    // -> static int threadOffset;
    // -> static void * threadBuffer;
    // -> static void * threadFileName;
}

// Range: 0x5D18C -> 0x5D260
int _gc_thread_DVDRead(char * filename /* r27 */, void * buffer /* r28 */, int offset /* r29 */, int size /* r30 */) {
    // References
    // -> static int threadFirstFlag;
    // -> static struct OSThread thread;
    // -> static unsigned char threadStack[4096];
    // -> static int threadSize;
    // -> static int threadOffset;
    // -> static void * threadBuffer;
    // -> static void * threadFileName;
    // -> static int threadResult;
}

static unsigned char assert_string[512]; // size: 0x200, address: 0x228D44
// Range: 0x5D260 -> 0x5D44C
void gc_assert(int data_n /* r25 */, void * file /* r26 */, int line /* r27 */, char * s /* r28 */, int data1 /* r29 */, int data2 /* r30 */, int data3 /* r31 */) {
    // References
    // -> static unsigned char assert_string[512];
}

