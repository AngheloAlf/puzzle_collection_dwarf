/*
    Compile unit: C:\users\tsuji\common\gc.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x000B0A28 -> 0x000B29B4
*/
static unsigned int alloc_counter; // size: 0x4, address: 0x117000
int __OSCurrHeap; // size: 0x4, address: 0x0
// Range: 0xB0A28 -> 0xB0A6C
void * DoMalloc(unsigned long size /* r4 */) {
    // Local variables
    void * p; // r3

    // References
    // -> static unsigned int alloc_counter;
    // -> int __OSCurrHeap;
}

// Range: 0xB0A6C -> 0xB0AB0
void DoFree(void * addr /* r4 */) {
    // References
    // -> static unsigned int alloc_counter;
    // -> int __OSCurrHeap;
}

// Range: 0xB0AB0 -> 0xB0AC0
int DoGetRestAlloc() {
    // References
    // -> static unsigned int alloc_counter;
}

static unsigned long aramMemArray[2]; // size: 0x8, address: 0x117004
static unsigned long lastsong_id; // size: 0x4, address: 0x11700C
static int songgroup; // size: 0x4, address: 0x117010
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
static struct SND_AUX_REVERBHI revH; // size: 0x1E0, address: 0x117014
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
static struct SND_AUX_CHORUS cho; // size: 0x9C, address: 0x1171F4
struct SND_HOOKS {
    // total size: 0x8
    void * (* malloc)(unsigned long); // offset 0x0, size 0x4
    void (* free)(void *); // offset 0x4, size 0x4
};
// Range: 0xB0AC0 -> 0xB0BB4
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

// Range: 0xB0BB4 -> 0xB0BF8
void gc_soundQuit() {
    // Local variables
    unsigned long length; // r1+0x8

    // References
    // -> static struct SND_AUX_REVERBHI revH;
    // -> static struct SND_AUX_CHORUS cho;
}

void * songTbl[]; // size: 0x0, address: 0xCA0
// Range: 0xB0BF8 -> 0xB0C7C
unsigned int gc_songPlay(int seq /* r30 */) {
    // References
    // -> static unsigned long lastsong_id;
    // -> static int songgroup;
    // -> void * songTbl[];
}

// Range: 0xB0C7C -> 0xB0CC0
void gc_songStop() {
    // References
    // -> static unsigned long lastsong_id;
}

// Range: 0xB0CC0 -> 0xB0CFC
void gc_songSpeed(unsigned short speed /* r4 */) {
    // References
    // -> static unsigned long lastsong_id;
}

// Range: 0xB0CFC -> 0xB0D30
int _gc_songGetValid(int sid /* r3 */) {}

static int new_seq_id; // size: 0x4, address: 0x117290
static int out_seq_id; // size: 0x4, address: 0x117294
// Range: 0xB0D30 -> 0xB0DE0
int gc_songCrossFade(int sid1 /* r27 */, int seq2 /* r28 */, int vol2 /* r29 */, int time /* r30 */) {
    // References
    // -> static unsigned long lastsong_id;
    // -> void * songTbl[];
    // -> static int songgroup;
    // -> static int out_seq_id;
}

// Range: 0xB0DE0 -> 0xB0E08
int _gc_sePlay(int sndNo /* r3 */, unsigned char vol /* r4 */, unsigned char pan /* r5 */) {}

// Range: 0xB0E08 -> 0xB0E28
int gc_seStop(int vid /* r3 */) {}

// Range: 0xB0E28 -> 0xB0E50
int gc_sePanning(int vid /* r3 */, unsigned char pan /* r4 */) {}

// Range: 0xB0E50 -> 0xB0E78
int gc_sePitch(int vid /* r3 */, unsigned short pb /* r4 */) {}

// Range: 0xB0E78 -> 0xB0ED0
void gc_soundSetVolume(unsigned char voiume /* r3 */, unsigned short time /* r4 */, unsigned char volGroup /* r1+0xC */) {}

// Range: 0xB0ED0 -> 0xB0F08
void _gc_songFadeOut(int sid /* r3 */, unsigned short time /* r4 */) {}

// Range: 0xB0F08 -> 0xB0F68
void _gc_songFadeSong(int sid /* r6 */, unsigned char vol /* r4 */, unsigned short time /* r5 */) {}

// Range: 0xB0F68 -> 0xB1008
void gc_soundSetOutputMode(unsigned char mode /* r1+0x8 */) {}

void (* DVDError_DispFunction)(); // size: 0x4, address: 0xE3000
static int dvd_lastReadLength; // size: 0x4, address: 0x117298
static unsigned char DVD_Error_ThreadStack[4096]; // size: 0x1000, address: 0x11729C
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
static struct OSThread DVD_Error_Thread; // size: 0x318, address: 0x1182A0
static int flag$238; // size: 0x4, address: 0xE3004
// Range: 0xB1008 -> 0xB1078
static void * DVD_Error_Disp_thread() {
    // Local variables
    int errortype; // r29

    // References
    // -> void (* DVDError_DispFunction)();
    // -> static int flag$238;
}

// Range: 0xB1078 -> 0xB10A0
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
// Range: 0xB10A0 -> 0xB10B0
int gc_DVDGet_lastReadLength() {
    // References
    // -> static int dvd_lastReadLength;
}

// Range: 0xB10B0 -> 0xB127C
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

// Range: 0xB127C -> 0xB12EC
int gc_GetDVDDrive() {}

static void * EFB_bufferp; // size: 0x4, address: 0x1185B8
// Range: 0xB12EC -> 0xB1348
void gc_getEFB_exit() {
    // References
    // -> static void * EFB_bufferp;
    // -> static unsigned int alloc_counter;
    // -> int __OSCurrHeap;
}

static int gc_memoryCard_exi; // size: 0x4, address: 0x1185BC
static long gc_sectorSize; // size: 0x4, address: 0x1185C0
static int gc_memoryCard_pullFlag; // size: 0x4, address: 0x1185C4
static int memoryCard_data_cached; // size: 0x4, address: 0x1185C8
static unsigned char memoryCard_data[40959]; // size: 0x9FFF, address: 0x1185E0
static unsigned char gc_card_workarea[2][40960]; // size: 0x14000, address: 0x1225E0
static unsigned char memoryCard_comment[65]; // size: 0x41, address: 0xE3060
// Range: 0xB1348 -> 0xB1490
static int gc_memoryCard_errorCheck(int errno /* r3 */, char * commandStr /* r6 */) {}

static int gc_AsyncEndFlag; // size: 0x4, address: 0x1365E0
static int gc_AsyncResult; // size: 0x4, address: 0x1365E4
// Range: 0xB1490 -> 0xB14D8
static void (* gc_AsyncCallback(long result /* r4 */))(long, long) {
    // References
    // -> static int gc_AsyncEndFlag;
    // -> static int gc_AsyncResult;
}

// Range: 0xB14D8 -> 0xB14FC
static void (* gc_detachCallback())(long, long) {
    // References
    // -> static int gc_memoryCard_pullFlag;
    // -> static int memoryCard_data_cached;
}

// Range: 0xB14FC -> 0xB1668
static int gc_memoryCard_mountAsync(int slot /* r29 */, void (* callBack)() /* r30 */) {
    // Local variables
    int brk; // r3

    // References
    // -> static int gc_AsyncResult;
    // -> static int gc_AsyncEndFlag;
    // -> static int gc_memoryCard_exi;
    // -> static unsigned char gc_card_workarea[2][40960];
}

// Range: 0xB1668 -> 0xB1674
void gc_memoryCardChange_slot(int slot /* r1+0x0 */) {
    // References
    // -> static int gc_memoryCard_exi;
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
// Range: 0xB1674 -> 0xB17DC
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

// Range: 0xB17DC -> 0xB18BC
static int gc_memoryCardCreateAsync(char * fileName /* r25 */, int size /* r26 */, struct CARDFileInfo * fileInfo /* r27 */, void (* callBack)() /* r28 */) {
    // Local variables
    int brk; // r3

    // References
    // -> static int gc_AsyncResult;
    // -> static int gc_memoryCard_exi;
    // -> static int gc_AsyncEndFlag;
    // -> static int gc_memoryCard_pullFlag;
}

// Range: 0xB18BC -> 0xB198C
static int gc_memoryCardDeleteAsync(char * fileName /* r27 */, void (* callBack)() /* r28 */) {
    // Local variables
    int brk; // r3

    // References
    // -> static int gc_AsyncResult;
    // -> static int gc_memoryCard_exi;
    // -> static int gc_AsyncEndFlag;
    // -> static int gc_memoryCard_pullFlag;
}

// Range: 0xB198C -> 0xB1A64
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
// Range: 0xB1A64 -> 0xB1CBC
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
// Range: 0xB1CBC -> 0xB1F10
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

// Range: 0xB1F10 -> 0xB2020
static int _gc_memoryCardLoadAsync(void (* callBack)() /* r28 */) {
    // Local variables
    int res; // r3

    // References
    // -> static int gc_memoryCard_exi;
    // -> static unsigned char memoryCard_data[40959];
    // -> static int gc_memoryCard_pullFlag;
}

// Range: 0xB2020 -> 0xB20DC
int gc_memoryCardLoad(int gameNo /* r1+0x8 */, char * buffer /* r29 */) {
    // References
    // -> static unsigned char memoryCard_data[40959];
    // -> static int gc_memoryCard_pullFlag;
}

// Range: 0xB20DC -> 0xB2240
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

// Range: 0xB2240 -> 0xB2264
int gc_memoryCardSave(int gameNo /* r3 */, char * buffer /* r4 */) {}

static int memoryCard_slotStatus[2]; // size: 0x8, address: 0x1365E8
// Range: 0xB2264 -> 0xB227C
void gc_memoryCardSelect_checkInit() {
    // References
    // -> static int memoryCard_slotStatus[2];
}

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
// Range: 0xB227C -> 0xB25E0
static void gc_memoryCardSelect_checkSub(int slot /* r24 */, struct {
    // total size: 0x2C
    int status; // offset 0x0, size 0x4
    int sec; // offset 0x4, size 0x4
    int min; // offset 0x8, size 0x4
    int hour; // offset 0xC, size 0x4
    int mday; // offset 0x10, size 0x4
    int mon; // offset 0x14, size 0x4
    int year; // offset 0x18, size 0x4
    int wday; // offset 0x1C, size 0x4
    long byteNotUsed; // offset 0x20, size 0x4
    long fileNotUsed; // offset 0x24, size 0x4
    int reserveFile; // offset 0x28, size 0x4
} * slotStatus /* r29 */) {
    // Local variables
    struct CARDStat cardStat; // r1+0x9C
    long long tempTm; // r0
    long long fileTm; // r0
    long long time; // r0
    struct OSCalendarTime td; // r1+0x6C

    // References
    // -> static int gc_memoryCard_exi;
    // -> static int gc_memoryCard_pullFlag;
    // -> static int memoryCard_slotStatus[2];
    // -> static long gc_sectorSize;
}

// Range: 0xB25E0 -> 0xB2620
void gc_memoryCardSelect_check(struct {
    // total size: 0x2C
    int status; // offset 0x0, size 0x4
    int sec; // offset 0x4, size 0x4
    int min; // offset 0x8, size 0x4
    int hour; // offset 0xC, size 0x4
    int mday; // offset 0x10, size 0x4
    int mon; // offset 0x14, size 0x4
    int year; // offset 0x18, size 0x4
    int wday; // offset 0x1C, size 0x4
    long byteNotUsed; // offset 0x20, size 0x4
    long fileNotUsed; // offset 0x24, size 0x4
    int reserveFile; // offset 0x28, size 0x4
} * slotA /* r3 */, struct {
    // total size: 0x2C
    int status; // offset 0x0, size 0x4
    int sec; // offset 0x4, size 0x4
    int min; // offset 0x8, size 0x4
    int hour; // offset 0xC, size 0x4
    int mday; // offset 0x10, size 0x4
    int mon; // offset 0x14, size 0x4
    int year; // offset 0x18, size 0x4
    int wday; // offset 0x1C, size 0x4
    long byteNotUsed; // offset 0x20, size 0x4
    long fileNotUsed; // offset 0x24, size 0x4
    int reserveFile; // offset 0x28, size 0x4
} * slotB /* r31 */) {}

// Range: 0xB2620 -> 0xB264C
void gc_resetSystem() {}

static unsigned char threadStack[4096]; // size: 0x1000, address: 0x1365F0
static struct OSThread thread; // size: 0x318, address: 0x1375F0
static int threadGameNo; // size: 0x4, address: 0x137908
static void * threadFileName; // size: 0x4, address: 0x13790C
static void * threadBuffer; // size: 0x4, address: 0x137910
static int threadResult; // size: 0x4, address: 0x137914
static int threadFirstFlag; // size: 0x4, address: 0x137918
static int threadOffset; // size: 0x4, address: 0x13791C
static int threadSize; // size: 0x4, address: 0x137920
// Range: 0xB264C -> 0xB2690
int gc_thread_getResultCode() {
    // References
    // -> static int threadResult;
    // -> static struct OSThread thread;
}

// Range: 0xB2690 -> 0xB26E4
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

// Range: 0xB26E4 -> 0xB27B8
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

// Range: 0xB27B8 -> 0xB27C8
void * gc_thread_DVDRead_alloc_getBuffer() {
    // References
    // -> static void * threadBuffer;
}

static unsigned char assert_string[512]; // size: 0x200, address: 0x137924
// Range: 0xB27C8 -> 0xB29B4
void gc_assert(int data_n /* r25 */, void * file /* r26 */, int line /* r27 */, char * s /* r28 */, int data1 /* r29 */, int data2 /* r30 */, int data3 /* r31 */) {
    // References
    // -> static unsigned char assert_string[512];
}

