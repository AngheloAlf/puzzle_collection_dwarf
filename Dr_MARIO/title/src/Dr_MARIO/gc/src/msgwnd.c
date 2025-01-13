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
void msgWnd_init(struct {
    // total size: 0x80
    void * heap; // offset 0x0, size 0x4
    struct {
        // total size: 0x10
        int top; // offset 0x0, size 0x4
        int end; // offset 0x4, size 0x4
        int width; // offset 0x8, size 0x4
        int color; // offset 0xC, size 0x4
    } * layout; // offset 0x4, size 0x4
    int layoutSize; // offset 0x8, size 0x4
    unsigned char * msgBuf; // offset 0xC, size 0x4
    int msgBufSize; // offset 0x10, size 0x4
    int msgBufTop; // offset 0x14, size 0x4
    int msgBufNow; // offset 0x18, size 0x4
    int contFlags; // offset 0x1C, size 0x4
    int fontType; // offset 0x20, size 0x4
    int centering; // offset 0x24, size 0x4
    int posX; // offset 0x28, size 0x4
    int posY; // offset 0x2C, size 0x4
    int fntW; // offset 0x30, size 0x4
    int fntH; // offset 0x34, size 0x4
    int colSize; // offset 0x38, size 0x4
    int colStep; // offset 0x3C, size 0x4
    int colNow; // offset 0x40, size 0x4
    int rowSize; // offset 0x44, size 0x4
    int rowStep; // offset 0x48, size 0x4
    int rowNow; // offset 0x4C, size 0x4
    float msgCount; // offset 0x50, size 0x4
    float msgSpeed; // offset 0x54, size 0x4
    float scrCount; // offset 0x58, size 0x4
    float scrSpeed; // offset 0x5C, size 0x4
    int msgIsEnd; // offset 0x60, size 0x4
    int isSpeak; // offset 0x64, size 0x4
    int topColor; // offset 0x68, size 0x4
    int keyWait; // offset 0x6C, size 0x4
    int countWait; // offset 0x70, size 0x4
    int alpha; // offset 0x74, size 0x4
    int scisFlag; // offset 0x78, size 0x4
    unsigned int grapCount; // offset 0x7C, size 0x4
} * st /* r3 */, void * heap /* r4 */, int cols /* r6 */, int rows /* r12 */, int x /* r11 */, int y /* r9 */) {
    // Local variables
    int size; // r10
}

// Range: 0x28770 -> 0x28844
void msgWnd_init2(struct {
    // total size: 0x80
    void * heap; // offset 0x0, size 0x4
    struct {
        // total size: 0x10
        int top; // offset 0x0, size 0x4
        int end; // offset 0x4, size 0x4
        int width; // offset 0x8, size 0x4
        int color; // offset 0xC, size 0x4
    } * layout; // offset 0x4, size 0x4
    int layoutSize; // offset 0x8, size 0x4
    unsigned char * msgBuf; // offset 0xC, size 0x4
    int msgBufSize; // offset 0x10, size 0x4
    int msgBufTop; // offset 0x14, size 0x4
    int msgBufNow; // offset 0x18, size 0x4
    int contFlags; // offset 0x1C, size 0x4
    int fontType; // offset 0x20, size 0x4
    int centering; // offset 0x24, size 0x4
    int posX; // offset 0x28, size 0x4
    int posY; // offset 0x2C, size 0x4
    int fntW; // offset 0x30, size 0x4
    int fntH; // offset 0x34, size 0x4
    int colSize; // offset 0x38, size 0x4
    int colStep; // offset 0x3C, size 0x4
    int colNow; // offset 0x40, size 0x4
    int rowSize; // offset 0x44, size 0x4
    int rowStep; // offset 0x48, size 0x4
    int rowNow; // offset 0x4C, size 0x4
    float msgCount; // offset 0x50, size 0x4
    float msgSpeed; // offset 0x54, size 0x4
    float scrCount; // offset 0x58, size 0x4
    float scrSpeed; // offset 0x5C, size 0x4
    int msgIsEnd; // offset 0x60, size 0x4
    int isSpeak; // offset 0x64, size 0x4
    int topColor; // offset 0x68, size 0x4
    int keyWait; // offset 0x6C, size 0x4
    int countWait; // offset 0x70, size 0x4
    int alpha; // offset 0x74, size 0x4
    int scisFlag; // offset 0x78, size 0x4
    unsigned int grapCount; // offset 0x7C, size 0x4
} * st /* r3 */, void * heap /* r1+0xC */, int bufSize /* r1+0x10 */, int cols /* r1+0x14 */, int rows /* r1+0x18 */, int x /* r1+0x1C */, int y /* r1+0x20 */) {
    // Local variables
    void * hp; // r1+0x8
}

// Range: 0x28844 -> 0x288A4
void msgWnd_clear(struct {
    // total size: 0x80
    void * heap; // offset 0x0, size 0x4
    struct {
        // total size: 0x10
        int top; // offset 0x0, size 0x4
        int end; // offset 0x4, size 0x4
        int width; // offset 0x8, size 0x4
        int color; // offset 0xC, size 0x4
    } * layout; // offset 0x4, size 0x4
    int layoutSize; // offset 0x8, size 0x4
    unsigned char * msgBuf; // offset 0xC, size 0x4
    int msgBufSize; // offset 0x10, size 0x4
    int msgBufTop; // offset 0x14, size 0x4
    int msgBufNow; // offset 0x18, size 0x4
    int contFlags; // offset 0x1C, size 0x4
    int fontType; // offset 0x20, size 0x4
    int centering; // offset 0x24, size 0x4
    int posX; // offset 0x28, size 0x4
    int posY; // offset 0x2C, size 0x4
    int fntW; // offset 0x30, size 0x4
    int fntH; // offset 0x34, size 0x4
    int colSize; // offset 0x38, size 0x4
    int colStep; // offset 0x3C, size 0x4
    int colNow; // offset 0x40, size 0x4
    int rowSize; // offset 0x44, size 0x4
    int rowStep; // offset 0x48, size 0x4
    int rowNow; // offset 0x4C, size 0x4
    float msgCount; // offset 0x50, size 0x4
    float msgSpeed; // offset 0x54, size 0x4
    float scrCount; // offset 0x58, size 0x4
    float scrSpeed; // offset 0x5C, size 0x4
    int msgIsEnd; // offset 0x60, size 0x4
    int isSpeak; // offset 0x64, size 0x4
    int topColor; // offset 0x68, size 0x4
    int keyWait; // offset 0x6C, size 0x4
    int countWait; // offset 0x70, size 0x4
    int alpha; // offset 0x74, size 0x4
    int scisFlag; // offset 0x78, size 0x4
    unsigned int grapCount; // offset 0x7C, size 0x4
} * st /* r1+0x0 */) {}

// Range: 0x288A4 -> 0x28ABC
static void msgWnd_layout(struct {
    // total size: 0x80
    void * heap; // offset 0x0, size 0x4
    struct {
        // total size: 0x10
        int top; // offset 0x0, size 0x4
        int end; // offset 0x4, size 0x4
        int width; // offset 0x8, size 0x4
        int color; // offset 0xC, size 0x4
    } * layout; // offset 0x4, size 0x4
    int layoutSize; // offset 0x8, size 0x4
    unsigned char * msgBuf; // offset 0xC, size 0x4
    int msgBufSize; // offset 0x10, size 0x4
    int msgBufTop; // offset 0x14, size 0x4
    int msgBufNow; // offset 0x18, size 0x4
    int contFlags; // offset 0x1C, size 0x4
    int fontType; // offset 0x20, size 0x4
    int centering; // offset 0x24, size 0x4
    int posX; // offset 0x28, size 0x4
    int posY; // offset 0x2C, size 0x4
    int fntW; // offset 0x30, size 0x4
    int fntH; // offset 0x34, size 0x4
    int colSize; // offset 0x38, size 0x4
    int colStep; // offset 0x3C, size 0x4
    int colNow; // offset 0x40, size 0x4
    int rowSize; // offset 0x44, size 0x4
    int rowStep; // offset 0x48, size 0x4
    int rowNow; // offset 0x4C, size 0x4
    float msgCount; // offset 0x50, size 0x4
    float msgSpeed; // offset 0x54, size 0x4
    float scrCount; // offset 0x58, size 0x4
    float scrSpeed; // offset 0x5C, size 0x4
    int msgIsEnd; // offset 0x60, size 0x4
    int isSpeak; // offset 0x64, size 0x4
    int topColor; // offset 0x68, size 0x4
    int keyWait; // offset 0x6C, size 0x4
    int countWait; // offset 0x70, size 0x4
    int alpha; // offset 0x74, size 0x4
    int scisFlag; // offset 0x78, size 0x4
    unsigned int grapCount; // offset 0x7C, size 0x4
} * st /* r20 */) {
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
void msgWnd_addStr(struct {
    // total size: 0x80
    void * heap; // offset 0x0, size 0x4
    struct {
        // total size: 0x10
        int top; // offset 0x0, size 0x4
        int end; // offset 0x4, size 0x4
        int width; // offset 0x8, size 0x4
        int color; // offset 0xC, size 0x4
    } * layout; // offset 0x4, size 0x4
    int layoutSize; // offset 0x8, size 0x4
    unsigned char * msgBuf; // offset 0xC, size 0x4
    int msgBufSize; // offset 0x10, size 0x4
    int msgBufTop; // offset 0x14, size 0x4
    int msgBufNow; // offset 0x18, size 0x4
    int contFlags; // offset 0x1C, size 0x4
    int fontType; // offset 0x20, size 0x4
    int centering; // offset 0x24, size 0x4
    int posX; // offset 0x28, size 0x4
    int posY; // offset 0x2C, size 0x4
    int fntW; // offset 0x30, size 0x4
    int fntH; // offset 0x34, size 0x4
    int colSize; // offset 0x38, size 0x4
    int colStep; // offset 0x3C, size 0x4
    int colNow; // offset 0x40, size 0x4
    int rowSize; // offset 0x44, size 0x4
    int rowStep; // offset 0x48, size 0x4
    int rowNow; // offset 0x4C, size 0x4
    float msgCount; // offset 0x50, size 0x4
    float msgSpeed; // offset 0x54, size 0x4
    float scrCount; // offset 0x58, size 0x4
    float scrSpeed; // offset 0x5C, size 0x4
    int msgIsEnd; // offset 0x60, size 0x4
    int isSpeak; // offset 0x64, size 0x4
    int topColor; // offset 0x68, size 0x4
    int keyWait; // offset 0x6C, size 0x4
    int countWait; // offset 0x70, size 0x4
    int alpha; // offset 0x74, size 0x4
    int scisFlag; // offset 0x78, size 0x4
    unsigned int grapCount; // offset 0x7C, size 0x4
} * st /* r29 */, const unsigned char * str /* r27 */) {
    // Local variables
    int strLen; // r31
    int bufLen; // r30
}

// Range: 0x28B94 -> 0x290C4
void msgWnd_update(struct {
    // total size: 0x80
    void * heap; // offset 0x0, size 0x4
    struct {
        // total size: 0x10
        int top; // offset 0x0, size 0x4
        int end; // offset 0x4, size 0x4
        int width; // offset 0x8, size 0x4
        int color; // offset 0xC, size 0x4
    } * layout; // offset 0x4, size 0x4
    int layoutSize; // offset 0x8, size 0x4
    unsigned char * msgBuf; // offset 0xC, size 0x4
    int msgBufSize; // offset 0x10, size 0x4
    int msgBufTop; // offset 0x14, size 0x4
    int msgBufNow; // offset 0x18, size 0x4
    int contFlags; // offset 0x1C, size 0x4
    int fontType; // offset 0x20, size 0x4
    int centering; // offset 0x24, size 0x4
    int posX; // offset 0x28, size 0x4
    int posY; // offset 0x2C, size 0x4
    int fntW; // offset 0x30, size 0x4
    int fntH; // offset 0x34, size 0x4
    int colSize; // offset 0x38, size 0x4
    int colStep; // offset 0x3C, size 0x4
    int colNow; // offset 0x40, size 0x4
    int rowSize; // offset 0x44, size 0x4
    int rowStep; // offset 0x48, size 0x4
    int rowNow; // offset 0x4C, size 0x4
    float msgCount; // offset 0x50, size 0x4
    float msgSpeed; // offset 0x54, size 0x4
    float scrCount; // offset 0x58, size 0x4
    float scrSpeed; // offset 0x5C, size 0x4
    int msgIsEnd; // offset 0x60, size 0x4
    int isSpeak; // offset 0x64, size 0x4
    int topColor; // offset 0x68, size 0x4
    int keyWait; // offset 0x6C, size 0x4
    int countWait; // offset 0x70, size 0x4
    int alpha; // offset 0x74, size 0x4
    int scisFlag; // offset 0x78, size 0x4
    unsigned int grapCount; // offset 0x7C, size 0x4
} * st /* r26 */) {
    // Local variables
    int space; // r29
    int width; // r1+0x8
    float fnt2scr; // f31

    // References
    // -> unsigned short joyupd[5];
    // -> unsigned char main_joy[4];
}

// Range: 0x290C4 -> 0x29AE0
void msgWnd_draw(struct {
    // total size: 0x80
    void * heap; // offset 0x0, size 0x4
    struct {
        // total size: 0x10
        int top; // offset 0x0, size 0x4
        int end; // offset 0x4, size 0x4
        int width; // offset 0x8, size 0x4
        int color; // offset 0xC, size 0x4
    } * layout; // offset 0x4, size 0x4
    int layoutSize; // offset 0x8, size 0x4
    unsigned char * msgBuf; // offset 0xC, size 0x4
    int msgBufSize; // offset 0x10, size 0x4
    int msgBufTop; // offset 0x14, size 0x4
    int msgBufNow; // offset 0x18, size 0x4
    int contFlags; // offset 0x1C, size 0x4
    int fontType; // offset 0x20, size 0x4
    int centering; // offset 0x24, size 0x4
    int posX; // offset 0x28, size 0x4
    int posY; // offset 0x2C, size 0x4
    int fntW; // offset 0x30, size 0x4
    int fntH; // offset 0x34, size 0x4
    int colSize; // offset 0x38, size 0x4
    int colStep; // offset 0x3C, size 0x4
    int colNow; // offset 0x40, size 0x4
    int rowSize; // offset 0x44, size 0x4
    int rowStep; // offset 0x48, size 0x4
    int rowNow; // offset 0x4C, size 0x4
    float msgCount; // offset 0x50, size 0x4
    float msgSpeed; // offset 0x54, size 0x4
    float scrCount; // offset 0x58, size 0x4
    float scrSpeed; // offset 0x5C, size 0x4
    int msgIsEnd; // offset 0x60, size 0x4
    int isSpeak; // offset 0x64, size 0x4
    int topColor; // offset 0x68, size 0x4
    int keyWait; // offset 0x6C, size 0x4
    int countWait; // offset 0x70, size 0x4
    int alpha; // offset 0x74, size 0x4
    int scisFlag; // offset 0x78, size 0x4
    unsigned int grapCount; // offset 0x7C, size 0x4
} * st /* r31 */, union {
    struct {
        // total size: 0x8
        unsigned int w0; // offset 0x0, size 0x4
        unsigned int w1; // offset 0x4, size 0x4
    } words; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int par : 8; // offset 0x0, size 0x4
        unsigned int len : 16; // offset 0x0, size 0x4
        unsigned int addr; // offset 0x4, size 0x4
    } dma; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad : 24; // offset 0x0, size 0x4
        struct {
            // total size: 0x4
            unsigned char flag; // offset 0x0, size 0x1
            unsigned char v[3]; // offset 0x1, size 0x3
        } tri; // offset 0x4, size 0x4
    } tri; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad : 24; // offset 0x0, size 0x4
        struct {
            // total size: 0x4
            unsigned char flag; // offset 0x0, size 0x1
            unsigned char v[3]; // offset 0x1, size 0x3
        } line; // offset 0x4, size 0x4
    } line; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad1 : 24; // offset 0x0, size 0x4
        int pad2 : 24; // offset 0x4, size 0x4
        unsigned int param : 8; // offset 0x4, size 0x4
    } popmtx; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad0 : 8; // offset 0x0, size 0x4
        int mw_index : 8; // offset 0x0, size 0x4
        int number : 8; // offset 0x0, size 0x4
        int pad1 : 8; // offset 0x4, size 0x4
        int base : 24; // offset 0x4, size 0x4
    } segment; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad0 : 8; // offset 0x0, size 0x4
        int sft : 8; // offset 0x0, size 0x4
        int len : 8; // offset 0x0, size 0x4
        unsigned int data : 32; // offset 0x4, size 0x4
    } setothermodeH; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad0 : 8; // offset 0x0, size 0x4
        int sft : 8; // offset 0x0, size 0x4
        int len : 8; // offset 0x0, size 0x4
        unsigned int data : 32; // offset 0x4, size 0x4
    } setothermodeL; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        unsigned char cmd; // offset 0x0, size 0x1
        unsigned char lodscale; // offset 0x1, size 0x1
        unsigned char tile; // offset 0x2, size 0x1
        unsigned char on; // offset 0x3, size 0x1
        unsigned short s; // offset 0x4, size 0x2
        unsigned short t; // offset 0x6, size 0x2
    } texture; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int pad1 : 24; // offset 0x0, size 0x4
        signed short pad2; // offset 0x4, size 0x2
        signed short scale; // offset 0x6, size 0x2
    } perspnorm; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int fmt : 3; // offset 0x0, size 0x4
        unsigned int siz : 2; // offset 0x0, size 0x4
        unsigned int pad : 7; // offset 0x0, size 0x4
        unsigned int wd : 12; // offset 0x0, size 0x4
        unsigned int dram; // offset 0x4, size 0x4
    } setimg; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int muxs0 : 24; // offset 0x0, size 0x4
        unsigned int muxs1 : 32; // offset 0x4, size 0x4
    } setcombine; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned char pad; // offset 0x1, size 0x1
        unsigned char prim_min_level; // offset 0x2, size 0x1
        unsigned char prim_level; // offset 0x3, size 0x1
        unsigned long color; // offset 0x4, size 0x4
    } setcolor; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        int x0 : 10; // offset 0x0, size 0x4
        int x0frac : 2; // offset 0x0, size 0x4
        int y0 : 10; // offset 0x0, size 0x4
        int y0frac : 2; // offset 0x0, size 0x4
        unsigned int pad : 8; // offset 0x4, size 0x4
        int x1 : 10; // offset 0x4, size 0x4
        int x1frac : 2; // offset 0x4, size 0x4
        int y1 : 10; // offset 0x4, size 0x4
        int y1frac : 2; // offset 0x4, size 0x4
    } fillrect; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int fmt : 3; // offset 0x0, size 0x4
        unsigned int siz : 2; // offset 0x0, size 0x4
        unsigned int pad0 : 1; // offset 0x0, size 0x4
        unsigned int line : 9; // offset 0x0, size 0x4
        unsigned int tmem : 9; // offset 0x0, size 0x4
        unsigned int pad1 : 5; // offset 0x4, size 0x4
        unsigned int tile : 3; // offset 0x4, size 0x4
        unsigned int palette : 4; // offset 0x4, size 0x4
        unsigned int ct : 1; // offset 0x4, size 0x4
        unsigned int mt : 1; // offset 0x4, size 0x4
        unsigned int maskt : 4; // offset 0x4, size 0x4
        unsigned int shiftt : 4; // offset 0x4, size 0x4
        unsigned int cs : 1; // offset 0x4, size 0x4
        unsigned int ms : 1; // offset 0x4, size 0x4
        unsigned int masks : 4; // offset 0x4, size 0x4
        unsigned int shifts : 4; // offset 0x4, size 0x4
    } settile; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int sl : 12; // offset 0x0, size 0x4
        unsigned int tl : 12; // offset 0x0, size 0x4
        int pad : 5; // offset 0x4, size 0x4
        unsigned int tile : 3; // offset 0x4, size 0x4
        unsigned int sh : 12; // offset 0x4, size 0x4
        unsigned int th : 12; // offset 0x4, size 0x4
    } loadtile; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int sl : 12; // offset 0x0, size 0x4
        unsigned int tl : 12; // offset 0x0, size 0x4
        int pad : 5; // offset 0x4, size 0x4
        unsigned int tile : 3; // offset 0x4, size 0x4
        unsigned int sh : 12; // offset 0x4, size 0x4
        unsigned int th : 12; // offset 0x4, size 0x4
    } settilesize; // offset 0x0, size 0x8
    struct {
        // total size: 0x8
        int cmd : 8; // offset 0x0, size 0x4
        unsigned int sl : 12; // offset 0x0, size 0x4
        unsigned int tl : 12; // offset 0x0, size 0x4
        int pad : 5; // offset 0x4, size 0x4
        unsigned int tile : 3; // offset 0x4, size 0x4
        unsigned int sh : 12; // offset 0x4, size 0x4
        unsigned int th : 12; // offset 0x4, size 0x4
    } loadtlut; // offset 0x0, size 0x8
    long long force_structure_alignment; // offset 0x0, size 0x8
} * * gpp /* r17 */) {
    // Local variables
    union {
        struct {
            // total size: 0x8
            unsigned int w0; // offset 0x0, size 0x4
            unsigned int w1; // offset 0x4, size 0x4
        } words; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int par : 8; // offset 0x0, size 0x4
            unsigned int len : 16; // offset 0x0, size 0x4
            unsigned int addr; // offset 0x4, size 0x4
        } dma; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad : 24; // offset 0x0, size 0x4
            struct {
                // total size: 0x4
                unsigned char flag; // offset 0x0, size 0x1
                unsigned char v[3]; // offset 0x1, size 0x3
            } tri; // offset 0x4, size 0x4
        } tri; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad : 24; // offset 0x0, size 0x4
            struct {
                // total size: 0x4
                unsigned char flag; // offset 0x0, size 0x1
                unsigned char v[3]; // offset 0x1, size 0x3
            } line; // offset 0x4, size 0x4
        } line; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad1 : 24; // offset 0x0, size 0x4
            int pad2 : 24; // offset 0x4, size 0x4
            unsigned int param : 8; // offset 0x4, size 0x4
        } popmtx; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int mw_index : 8; // offset 0x0, size 0x4
            int number : 8; // offset 0x0, size 0x4
            int pad1 : 8; // offset 0x4, size 0x4
            int base : 24; // offset 0x4, size 0x4
        } segment; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int sft : 8; // offset 0x0, size 0x4
            int len : 8; // offset 0x0, size 0x4
            unsigned int data : 32; // offset 0x4, size 0x4
        } setothermodeH; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int sft : 8; // offset 0x0, size 0x4
            int len : 8; // offset 0x0, size 0x4
            unsigned int data : 32; // offset 0x4, size 0x4
        } setothermodeL; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            unsigned char cmd; // offset 0x0, size 0x1
            unsigned char lodscale; // offset 0x1, size 0x1
            unsigned char tile; // offset 0x2, size 0x1
            unsigned char on; // offset 0x3, size 0x1
            unsigned short s; // offset 0x4, size 0x2
            unsigned short t; // offset 0x6, size 0x2
        } texture; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad1 : 24; // offset 0x0, size 0x4
            signed short pad2; // offset 0x4, size 0x2
            signed short scale; // offset 0x6, size 0x2
        } perspnorm; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int fmt : 3; // offset 0x0, size 0x4
            unsigned int siz : 2; // offset 0x0, size 0x4
            unsigned int pad : 7; // offset 0x0, size 0x4
            unsigned int wd : 12; // offset 0x0, size 0x4
            unsigned int dram; // offset 0x4, size 0x4
        } setimg; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int muxs0 : 24; // offset 0x0, size 0x4
            unsigned int muxs1 : 32; // offset 0x4, size 0x4
        } setcombine; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned char pad; // offset 0x1, size 0x1
            unsigned char prim_min_level; // offset 0x2, size 0x1
            unsigned char prim_level; // offset 0x3, size 0x1
            unsigned long color; // offset 0x4, size 0x4
        } setcolor; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int x0 : 10; // offset 0x0, size 0x4
            int x0frac : 2; // offset 0x0, size 0x4
            int y0 : 10; // offset 0x0, size 0x4
            int y0frac : 2; // offset 0x0, size 0x4
            unsigned int pad : 8; // offset 0x4, size 0x4
            int x1 : 10; // offset 0x4, size 0x4
            int x1frac : 2; // offset 0x4, size 0x4
            int y1 : 10; // offset 0x4, size 0x4
            int y1frac : 2; // offset 0x4, size 0x4
        } fillrect; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int fmt : 3; // offset 0x0, size 0x4
            unsigned int siz : 2; // offset 0x0, size 0x4
            unsigned int pad0 : 1; // offset 0x0, size 0x4
            unsigned int line : 9; // offset 0x0, size 0x4
            unsigned int tmem : 9; // offset 0x0, size 0x4
            unsigned int pad1 : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int palette : 4; // offset 0x4, size 0x4
            unsigned int ct : 1; // offset 0x4, size 0x4
            unsigned int mt : 1; // offset 0x4, size 0x4
            unsigned int maskt : 4; // offset 0x4, size 0x4
            unsigned int shiftt : 4; // offset 0x4, size 0x4
            unsigned int cs : 1; // offset 0x4, size 0x4
            unsigned int ms : 1; // offset 0x4, size 0x4
            unsigned int masks : 4; // offset 0x4, size 0x4
            unsigned int shifts : 4; // offset 0x4, size 0x4
        } settile; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } loadtile; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } settilesize; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } loadtlut; // offset 0x0, size 0x8
        long long force_structure_alignment; // offset 0x0, size 0x8
    } * gp; // r1+0x10
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
    union {
        struct {
            // total size: 0x8
            unsigned int w0; // offset 0x0, size 0x4
            unsigned int w1; // offset 0x4, size 0x4
        } words; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int par : 8; // offset 0x0, size 0x4
            unsigned int len : 16; // offset 0x0, size 0x4
            unsigned int addr; // offset 0x4, size 0x4
        } dma; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad : 24; // offset 0x0, size 0x4
            struct {
                // total size: 0x4
                unsigned char flag; // offset 0x0, size 0x1
                unsigned char v[3]; // offset 0x1, size 0x3
            } tri; // offset 0x4, size 0x4
        } tri; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad : 24; // offset 0x0, size 0x4
            struct {
                // total size: 0x4
                unsigned char flag; // offset 0x0, size 0x1
                unsigned char v[3]; // offset 0x1, size 0x3
            } line; // offset 0x4, size 0x4
        } line; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad1 : 24; // offset 0x0, size 0x4
            int pad2 : 24; // offset 0x4, size 0x4
            unsigned int param : 8; // offset 0x4, size 0x4
        } popmtx; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int mw_index : 8; // offset 0x0, size 0x4
            int number : 8; // offset 0x0, size 0x4
            int pad1 : 8; // offset 0x4, size 0x4
            int base : 24; // offset 0x4, size 0x4
        } segment; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int sft : 8; // offset 0x0, size 0x4
            int len : 8; // offset 0x0, size 0x4
            unsigned int data : 32; // offset 0x4, size 0x4
        } setothermodeH; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int sft : 8; // offset 0x0, size 0x4
            int len : 8; // offset 0x0, size 0x4
            unsigned int data : 32; // offset 0x4, size 0x4
        } setothermodeL; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            unsigned char cmd; // offset 0x0, size 0x1
            unsigned char lodscale; // offset 0x1, size 0x1
            unsigned char tile; // offset 0x2, size 0x1
            unsigned char on; // offset 0x3, size 0x1
            unsigned short s; // offset 0x4, size 0x2
            unsigned short t; // offset 0x6, size 0x2
        } texture; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad1 : 24; // offset 0x0, size 0x4
            signed short pad2; // offset 0x4, size 0x2
            signed short scale; // offset 0x6, size 0x2
        } perspnorm; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int fmt : 3; // offset 0x0, size 0x4
            unsigned int siz : 2; // offset 0x0, size 0x4
            unsigned int pad : 7; // offset 0x0, size 0x4
            unsigned int wd : 12; // offset 0x0, size 0x4
            unsigned int dram; // offset 0x4, size 0x4
        } setimg; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int muxs0 : 24; // offset 0x0, size 0x4
            unsigned int muxs1 : 32; // offset 0x4, size 0x4
        } setcombine; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned char pad; // offset 0x1, size 0x1
            unsigned char prim_min_level; // offset 0x2, size 0x1
            unsigned char prim_level; // offset 0x3, size 0x1
            unsigned long color; // offset 0x4, size 0x4
        } setcolor; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int x0 : 10; // offset 0x0, size 0x4
            int x0frac : 2; // offset 0x0, size 0x4
            int y0 : 10; // offset 0x0, size 0x4
            int y0frac : 2; // offset 0x0, size 0x4
            unsigned int pad : 8; // offset 0x4, size 0x4
            int x1 : 10; // offset 0x4, size 0x4
            int x1frac : 2; // offset 0x4, size 0x4
            int y1 : 10; // offset 0x4, size 0x4
            int y1frac : 2; // offset 0x4, size 0x4
        } fillrect; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int fmt : 3; // offset 0x0, size 0x4
            unsigned int siz : 2; // offset 0x0, size 0x4
            unsigned int pad0 : 1; // offset 0x0, size 0x4
            unsigned int line : 9; // offset 0x0, size 0x4
            unsigned int tmem : 9; // offset 0x0, size 0x4
            unsigned int pad1 : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int palette : 4; // offset 0x4, size 0x4
            unsigned int ct : 1; // offset 0x4, size 0x4
            unsigned int mt : 1; // offset 0x4, size 0x4
            unsigned int maskt : 4; // offset 0x4, size 0x4
            unsigned int shiftt : 4; // offset 0x4, size 0x4
            unsigned int cs : 1; // offset 0x4, size 0x4
            unsigned int ms : 1; // offset 0x4, size 0x4
            unsigned int masks : 4; // offset 0x4, size 0x4
            unsigned int shifts : 4; // offset 0x4, size 0x4
        } settile; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } loadtile; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } settilesize; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } loadtlut; // offset 0x0, size 0x8
        long long force_structure_alignment; // offset 0x0, size 0x8
    } * _g; // r1+0x8
    union {
        struct {
            // total size: 0x8
            unsigned int w0; // offset 0x0, size 0x4
            unsigned int w1; // offset 0x4, size 0x4
        } words; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int par : 8; // offset 0x0, size 0x4
            unsigned int len : 16; // offset 0x0, size 0x4
            unsigned int addr; // offset 0x4, size 0x4
        } dma; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad : 24; // offset 0x0, size 0x4
            struct {
                // total size: 0x4
                unsigned char flag; // offset 0x0, size 0x1
                unsigned char v[3]; // offset 0x1, size 0x3
            } tri; // offset 0x4, size 0x4
        } tri; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad : 24; // offset 0x0, size 0x4
            struct {
                // total size: 0x4
                unsigned char flag; // offset 0x0, size 0x1
                unsigned char v[3]; // offset 0x1, size 0x3
            } line; // offset 0x4, size 0x4
        } line; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad1 : 24; // offset 0x0, size 0x4
            int pad2 : 24; // offset 0x4, size 0x4
            unsigned int param : 8; // offset 0x4, size 0x4
        } popmtx; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int mw_index : 8; // offset 0x0, size 0x4
            int number : 8; // offset 0x0, size 0x4
            int pad1 : 8; // offset 0x4, size 0x4
            int base : 24; // offset 0x4, size 0x4
        } segment; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int sft : 8; // offset 0x0, size 0x4
            int len : 8; // offset 0x0, size 0x4
            unsigned int data : 32; // offset 0x4, size 0x4
        } setothermodeH; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int sft : 8; // offset 0x0, size 0x4
            int len : 8; // offset 0x0, size 0x4
            unsigned int data : 32; // offset 0x4, size 0x4
        } setothermodeL; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            unsigned char cmd; // offset 0x0, size 0x1
            unsigned char lodscale; // offset 0x1, size 0x1
            unsigned char tile; // offset 0x2, size 0x1
            unsigned char on; // offset 0x3, size 0x1
            unsigned short s; // offset 0x4, size 0x2
            unsigned short t; // offset 0x6, size 0x2
        } texture; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad1 : 24; // offset 0x0, size 0x4
            signed short pad2; // offset 0x4, size 0x2
            signed short scale; // offset 0x6, size 0x2
        } perspnorm; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int fmt : 3; // offset 0x0, size 0x4
            unsigned int siz : 2; // offset 0x0, size 0x4
            unsigned int pad : 7; // offset 0x0, size 0x4
            unsigned int wd : 12; // offset 0x0, size 0x4
            unsigned int dram; // offset 0x4, size 0x4
        } setimg; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int muxs0 : 24; // offset 0x0, size 0x4
            unsigned int muxs1 : 32; // offset 0x4, size 0x4
        } setcombine; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned char pad; // offset 0x1, size 0x1
            unsigned char prim_min_level; // offset 0x2, size 0x1
            unsigned char prim_level; // offset 0x3, size 0x1
            unsigned long color; // offset 0x4, size 0x4
        } setcolor; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int x0 : 10; // offset 0x0, size 0x4
            int x0frac : 2; // offset 0x0, size 0x4
            int y0 : 10; // offset 0x0, size 0x4
            int y0frac : 2; // offset 0x0, size 0x4
            unsigned int pad : 8; // offset 0x4, size 0x4
            int x1 : 10; // offset 0x4, size 0x4
            int x1frac : 2; // offset 0x4, size 0x4
            int y1 : 10; // offset 0x4, size 0x4
            int y1frac : 2; // offset 0x4, size 0x4
        } fillrect; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int fmt : 3; // offset 0x0, size 0x4
            unsigned int siz : 2; // offset 0x0, size 0x4
            unsigned int pad0 : 1; // offset 0x0, size 0x4
            unsigned int line : 9; // offset 0x0, size 0x4
            unsigned int tmem : 9; // offset 0x0, size 0x4
            unsigned int pad1 : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int palette : 4; // offset 0x4, size 0x4
            unsigned int ct : 1; // offset 0x4, size 0x4
            unsigned int mt : 1; // offset 0x4, size 0x4
            unsigned int maskt : 4; // offset 0x4, size 0x4
            unsigned int shiftt : 4; // offset 0x4, size 0x4
            unsigned int cs : 1; // offset 0x4, size 0x4
            unsigned int ms : 1; // offset 0x4, size 0x4
            unsigned int masks : 4; // offset 0x4, size 0x4
            unsigned int shifts : 4; // offset 0x4, size 0x4
        } settile; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } loadtile; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } settilesize; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } loadtlut; // offset 0x0, size 0x8
        long long force_structure_alignment; // offset 0x0, size 0x8
    } * _g; // r1+0x8
    union {
        struct {
            // total size: 0x8
            unsigned int w0; // offset 0x0, size 0x4
            unsigned int w1; // offset 0x4, size 0x4
        } words; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int par : 8; // offset 0x0, size 0x4
            unsigned int len : 16; // offset 0x0, size 0x4
            unsigned int addr; // offset 0x4, size 0x4
        } dma; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad : 24; // offset 0x0, size 0x4
            struct {
                // total size: 0x4
                unsigned char flag; // offset 0x0, size 0x1
                unsigned char v[3]; // offset 0x1, size 0x3
            } tri; // offset 0x4, size 0x4
        } tri; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad : 24; // offset 0x0, size 0x4
            struct {
                // total size: 0x4
                unsigned char flag; // offset 0x0, size 0x1
                unsigned char v[3]; // offset 0x1, size 0x3
            } line; // offset 0x4, size 0x4
        } line; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad1 : 24; // offset 0x0, size 0x4
            int pad2 : 24; // offset 0x4, size 0x4
            unsigned int param : 8; // offset 0x4, size 0x4
        } popmtx; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int mw_index : 8; // offset 0x0, size 0x4
            int number : 8; // offset 0x0, size 0x4
            int pad1 : 8; // offset 0x4, size 0x4
            int base : 24; // offset 0x4, size 0x4
        } segment; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int sft : 8; // offset 0x0, size 0x4
            int len : 8; // offset 0x0, size 0x4
            unsigned int data : 32; // offset 0x4, size 0x4
        } setothermodeH; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int sft : 8; // offset 0x0, size 0x4
            int len : 8; // offset 0x0, size 0x4
            unsigned int data : 32; // offset 0x4, size 0x4
        } setothermodeL; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            unsigned char cmd; // offset 0x0, size 0x1
            unsigned char lodscale; // offset 0x1, size 0x1
            unsigned char tile; // offset 0x2, size 0x1
            unsigned char on; // offset 0x3, size 0x1
            unsigned short s; // offset 0x4, size 0x2
            unsigned short t; // offset 0x6, size 0x2
        } texture; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad1 : 24; // offset 0x0, size 0x4
            signed short pad2; // offset 0x4, size 0x2
            signed short scale; // offset 0x6, size 0x2
        } perspnorm; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int fmt : 3; // offset 0x0, size 0x4
            unsigned int siz : 2; // offset 0x0, size 0x4
            unsigned int pad : 7; // offset 0x0, size 0x4
            unsigned int wd : 12; // offset 0x0, size 0x4
            unsigned int dram; // offset 0x4, size 0x4
        } setimg; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int muxs0 : 24; // offset 0x0, size 0x4
            unsigned int muxs1 : 32; // offset 0x4, size 0x4
        } setcombine; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned char pad; // offset 0x1, size 0x1
            unsigned char prim_min_level; // offset 0x2, size 0x1
            unsigned char prim_level; // offset 0x3, size 0x1
            unsigned long color; // offset 0x4, size 0x4
        } setcolor; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int x0 : 10; // offset 0x0, size 0x4
            int x0frac : 2; // offset 0x0, size 0x4
            int y0 : 10; // offset 0x0, size 0x4
            int y0frac : 2; // offset 0x0, size 0x4
            unsigned int pad : 8; // offset 0x4, size 0x4
            int x1 : 10; // offset 0x4, size 0x4
            int x1frac : 2; // offset 0x4, size 0x4
            int y1 : 10; // offset 0x4, size 0x4
            int y1frac : 2; // offset 0x4, size 0x4
        } fillrect; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int fmt : 3; // offset 0x0, size 0x4
            unsigned int siz : 2; // offset 0x0, size 0x4
            unsigned int pad0 : 1; // offset 0x0, size 0x4
            unsigned int line : 9; // offset 0x0, size 0x4
            unsigned int tmem : 9; // offset 0x0, size 0x4
            unsigned int pad1 : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int palette : 4; // offset 0x4, size 0x4
            unsigned int ct : 1; // offset 0x4, size 0x4
            unsigned int mt : 1; // offset 0x4, size 0x4
            unsigned int maskt : 4; // offset 0x4, size 0x4
            unsigned int shiftt : 4; // offset 0x4, size 0x4
            unsigned int cs : 1; // offset 0x4, size 0x4
            unsigned int ms : 1; // offset 0x4, size 0x4
            unsigned int masks : 4; // offset 0x4, size 0x4
            unsigned int shifts : 4; // offset 0x4, size 0x4
        } settile; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } loadtile; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } settilesize; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } loadtlut; // offset 0x0, size 0x8
        long long force_structure_alignment; // offset 0x0, size 0x8
    } * _g; // r1+0x8
    int nextChar; // r1+0x8
    int charSize; // r16
    int orgX; // r1+0x8
    int blink; // r7
    union {
        struct {
            // total size: 0x8
            unsigned int w0; // offset 0x0, size 0x4
            unsigned int w1; // offset 0x4, size 0x4
        } words; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int par : 8; // offset 0x0, size 0x4
            unsigned int len : 16; // offset 0x0, size 0x4
            unsigned int addr; // offset 0x4, size 0x4
        } dma; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad : 24; // offset 0x0, size 0x4
            struct {
                // total size: 0x4
                unsigned char flag; // offset 0x0, size 0x1
                unsigned char v[3]; // offset 0x1, size 0x3
            } tri; // offset 0x4, size 0x4
        } tri; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad : 24; // offset 0x0, size 0x4
            struct {
                // total size: 0x4
                unsigned char flag; // offset 0x0, size 0x1
                unsigned char v[3]; // offset 0x1, size 0x3
            } line; // offset 0x4, size 0x4
        } line; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad1 : 24; // offset 0x0, size 0x4
            int pad2 : 24; // offset 0x4, size 0x4
            unsigned int param : 8; // offset 0x4, size 0x4
        } popmtx; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int mw_index : 8; // offset 0x0, size 0x4
            int number : 8; // offset 0x0, size 0x4
            int pad1 : 8; // offset 0x4, size 0x4
            int base : 24; // offset 0x4, size 0x4
        } segment; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int sft : 8; // offset 0x0, size 0x4
            int len : 8; // offset 0x0, size 0x4
            unsigned int data : 32; // offset 0x4, size 0x4
        } setothermodeH; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int sft : 8; // offset 0x0, size 0x4
            int len : 8; // offset 0x0, size 0x4
            unsigned int data : 32; // offset 0x4, size 0x4
        } setothermodeL; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            unsigned char cmd; // offset 0x0, size 0x1
            unsigned char lodscale; // offset 0x1, size 0x1
            unsigned char tile; // offset 0x2, size 0x1
            unsigned char on; // offset 0x3, size 0x1
            unsigned short s; // offset 0x4, size 0x2
            unsigned short t; // offset 0x6, size 0x2
        } texture; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad1 : 24; // offset 0x0, size 0x4
            signed short pad2; // offset 0x4, size 0x2
            signed short scale; // offset 0x6, size 0x2
        } perspnorm; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int fmt : 3; // offset 0x0, size 0x4
            unsigned int siz : 2; // offset 0x0, size 0x4
            unsigned int pad : 7; // offset 0x0, size 0x4
            unsigned int wd : 12; // offset 0x0, size 0x4
            unsigned int dram; // offset 0x4, size 0x4
        } setimg; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int muxs0 : 24; // offset 0x0, size 0x4
            unsigned int muxs1 : 32; // offset 0x4, size 0x4
        } setcombine; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned char pad; // offset 0x1, size 0x1
            unsigned char prim_min_level; // offset 0x2, size 0x1
            unsigned char prim_level; // offset 0x3, size 0x1
            unsigned long color; // offset 0x4, size 0x4
        } setcolor; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int x0 : 10; // offset 0x0, size 0x4
            int x0frac : 2; // offset 0x0, size 0x4
            int y0 : 10; // offset 0x0, size 0x4
            int y0frac : 2; // offset 0x0, size 0x4
            unsigned int pad : 8; // offset 0x4, size 0x4
            int x1 : 10; // offset 0x4, size 0x4
            int x1frac : 2; // offset 0x4, size 0x4
            int y1 : 10; // offset 0x4, size 0x4
            int y1frac : 2; // offset 0x4, size 0x4
        } fillrect; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int fmt : 3; // offset 0x0, size 0x4
            unsigned int siz : 2; // offset 0x0, size 0x4
            unsigned int pad0 : 1; // offset 0x0, size 0x4
            unsigned int line : 9; // offset 0x0, size 0x4
            unsigned int tmem : 9; // offset 0x0, size 0x4
            unsigned int pad1 : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int palette : 4; // offset 0x4, size 0x4
            unsigned int ct : 1; // offset 0x4, size 0x4
            unsigned int mt : 1; // offset 0x4, size 0x4
            unsigned int maskt : 4; // offset 0x4, size 0x4
            unsigned int shiftt : 4; // offset 0x4, size 0x4
            unsigned int cs : 1; // offset 0x4, size 0x4
            unsigned int ms : 1; // offset 0x4, size 0x4
            unsigned int masks : 4; // offset 0x4, size 0x4
            unsigned int shifts : 4; // offset 0x4, size 0x4
        } settile; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } loadtile; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } settilesize; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } loadtlut; // offset 0x0, size 0x8
        long long force_structure_alignment; // offset 0x0, size 0x8
    } * _g; // r1+0x8
    union {
        struct {
            // total size: 0x8
            unsigned int w0; // offset 0x0, size 0x4
            unsigned int w1; // offset 0x4, size 0x4
        } words; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int par : 8; // offset 0x0, size 0x4
            unsigned int len : 16; // offset 0x0, size 0x4
            unsigned int addr; // offset 0x4, size 0x4
        } dma; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad : 24; // offset 0x0, size 0x4
            struct {
                // total size: 0x4
                unsigned char flag; // offset 0x0, size 0x1
                unsigned char v[3]; // offset 0x1, size 0x3
            } tri; // offset 0x4, size 0x4
        } tri; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad : 24; // offset 0x0, size 0x4
            struct {
                // total size: 0x4
                unsigned char flag; // offset 0x0, size 0x1
                unsigned char v[3]; // offset 0x1, size 0x3
            } line; // offset 0x4, size 0x4
        } line; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad1 : 24; // offset 0x0, size 0x4
            int pad2 : 24; // offset 0x4, size 0x4
            unsigned int param : 8; // offset 0x4, size 0x4
        } popmtx; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int mw_index : 8; // offset 0x0, size 0x4
            int number : 8; // offset 0x0, size 0x4
            int pad1 : 8; // offset 0x4, size 0x4
            int base : 24; // offset 0x4, size 0x4
        } segment; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int sft : 8; // offset 0x0, size 0x4
            int len : 8; // offset 0x0, size 0x4
            unsigned int data : 32; // offset 0x4, size 0x4
        } setothermodeH; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad0 : 8; // offset 0x0, size 0x4
            int sft : 8; // offset 0x0, size 0x4
            int len : 8; // offset 0x0, size 0x4
            unsigned int data : 32; // offset 0x4, size 0x4
        } setothermodeL; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            unsigned char cmd; // offset 0x0, size 0x1
            unsigned char lodscale; // offset 0x1, size 0x1
            unsigned char tile; // offset 0x2, size 0x1
            unsigned char on; // offset 0x3, size 0x1
            unsigned short s; // offset 0x4, size 0x2
            unsigned short t; // offset 0x6, size 0x2
        } texture; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int pad1 : 24; // offset 0x0, size 0x4
            signed short pad2; // offset 0x4, size 0x2
            signed short scale; // offset 0x6, size 0x2
        } perspnorm; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int fmt : 3; // offset 0x0, size 0x4
            unsigned int siz : 2; // offset 0x0, size 0x4
            unsigned int pad : 7; // offset 0x0, size 0x4
            unsigned int wd : 12; // offset 0x0, size 0x4
            unsigned int dram; // offset 0x4, size 0x4
        } setimg; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int muxs0 : 24; // offset 0x0, size 0x4
            unsigned int muxs1 : 32; // offset 0x4, size 0x4
        } setcombine; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned char pad; // offset 0x1, size 0x1
            unsigned char prim_min_level; // offset 0x2, size 0x1
            unsigned char prim_level; // offset 0x3, size 0x1
            unsigned long color; // offset 0x4, size 0x4
        } setcolor; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            int x0 : 10; // offset 0x0, size 0x4
            int x0frac : 2; // offset 0x0, size 0x4
            int y0 : 10; // offset 0x0, size 0x4
            int y0frac : 2; // offset 0x0, size 0x4
            unsigned int pad : 8; // offset 0x4, size 0x4
            int x1 : 10; // offset 0x4, size 0x4
            int x1frac : 2; // offset 0x4, size 0x4
            int y1 : 10; // offset 0x4, size 0x4
            int y1frac : 2; // offset 0x4, size 0x4
        } fillrect; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int fmt : 3; // offset 0x0, size 0x4
            unsigned int siz : 2; // offset 0x0, size 0x4
            unsigned int pad0 : 1; // offset 0x0, size 0x4
            unsigned int line : 9; // offset 0x0, size 0x4
            unsigned int tmem : 9; // offset 0x0, size 0x4
            unsigned int pad1 : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int palette : 4; // offset 0x4, size 0x4
            unsigned int ct : 1; // offset 0x4, size 0x4
            unsigned int mt : 1; // offset 0x4, size 0x4
            unsigned int maskt : 4; // offset 0x4, size 0x4
            unsigned int shiftt : 4; // offset 0x4, size 0x4
            unsigned int cs : 1; // offset 0x4, size 0x4
            unsigned int ms : 1; // offset 0x4, size 0x4
            unsigned int masks : 4; // offset 0x4, size 0x4
            unsigned int shifts : 4; // offset 0x4, size 0x4
        } settile; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } loadtile; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } settilesize; // offset 0x0, size 0x8
        struct {
            // total size: 0x8
            int cmd : 8; // offset 0x0, size 0x4
            unsigned int sl : 12; // offset 0x0, size 0x4
            unsigned int tl : 12; // offset 0x0, size 0x4
            int pad : 5; // offset 0x4, size 0x4
            unsigned int tile : 3; // offset 0x4, size 0x4
            unsigned int sh : 12; // offset 0x4, size 0x4
            unsigned int th : 12; // offset 0x4, size 0x4
        } loadtlut; // offset 0x0, size 0x8
        long long force_structure_alignment; // offset 0x0, size 0x8
    } * _g; // r1+0x8

    // References
    // -> unsigned char _msgColorTbl[8][3];
}

// Range: 0x29AE0 -> 0x29AE8
int msgWnd_isEnd(struct {
    // total size: 0x80
    void * heap; // offset 0x0, size 0x4
    struct {
        // total size: 0x10
        int top; // offset 0x0, size 0x4
        int end; // offset 0x4, size 0x4
        int width; // offset 0x8, size 0x4
        int color; // offset 0xC, size 0x4
    } * layout; // offset 0x4, size 0x4
    int layoutSize; // offset 0x8, size 0x4
    unsigned char * msgBuf; // offset 0xC, size 0x4
    int msgBufSize; // offset 0x10, size 0x4
    int msgBufTop; // offset 0x14, size 0x4
    int msgBufNow; // offset 0x18, size 0x4
    int contFlags; // offset 0x1C, size 0x4
    int fontType; // offset 0x20, size 0x4
    int centering; // offset 0x24, size 0x4
    int posX; // offset 0x28, size 0x4
    int posY; // offset 0x2C, size 0x4
    int fntW; // offset 0x30, size 0x4
    int fntH; // offset 0x34, size 0x4
    int colSize; // offset 0x38, size 0x4
    int colStep; // offset 0x3C, size 0x4
    int colNow; // offset 0x40, size 0x4
    int rowSize; // offset 0x44, size 0x4
    int rowStep; // offset 0x48, size 0x4
    int rowNow; // offset 0x4C, size 0x4
    float msgCount; // offset 0x50, size 0x4
    float msgSpeed; // offset 0x54, size 0x4
    float scrCount; // offset 0x58, size 0x4
    float scrSpeed; // offset 0x5C, size 0x4
    int msgIsEnd; // offset 0x60, size 0x4
    int isSpeak; // offset 0x64, size 0x4
    int topColor; // offset 0x68, size 0x4
    int keyWait; // offset 0x6C, size 0x4
    int countWait; // offset 0x70, size 0x4
    int alpha; // offset 0x74, size 0x4
    int scisFlag; // offset 0x78, size 0x4
    unsigned int grapCount; // offset 0x7C, size 0x4
} * st /* r3 */) {}

// Range: 0x29AE8 -> 0x29B24
void msgWnd_skip(struct {
    // total size: 0x80
    void * heap; // offset 0x0, size 0x4
    struct {
        // total size: 0x10
        int top; // offset 0x0, size 0x4
        int end; // offset 0x4, size 0x4
        int width; // offset 0x8, size 0x4
        int color; // offset 0xC, size 0x4
    } * layout; // offset 0x4, size 0x4
    int layoutSize; // offset 0x8, size 0x4
    unsigned char * msgBuf; // offset 0xC, size 0x4
    int msgBufSize; // offset 0x10, size 0x4
    int msgBufTop; // offset 0x14, size 0x4
    int msgBufNow; // offset 0x18, size 0x4
    int contFlags; // offset 0x1C, size 0x4
    int fontType; // offset 0x20, size 0x4
    int centering; // offset 0x24, size 0x4
    int posX; // offset 0x28, size 0x4
    int posY; // offset 0x2C, size 0x4
    int fntW; // offset 0x30, size 0x4
    int fntH; // offset 0x34, size 0x4
    int colSize; // offset 0x38, size 0x4
    int colStep; // offset 0x3C, size 0x4
    int colNow; // offset 0x40, size 0x4
    int rowSize; // offset 0x44, size 0x4
    int rowStep; // offset 0x48, size 0x4
    int rowNow; // offset 0x4C, size 0x4
    float msgCount; // offset 0x50, size 0x4
    float msgSpeed; // offset 0x54, size 0x4
    float scrCount; // offset 0x58, size 0x4
    float scrSpeed; // offset 0x5C, size 0x4
    int msgIsEnd; // offset 0x60, size 0x4
    int isSpeak; // offset 0x64, size 0x4
    int topColor; // offset 0x68, size 0x4
    int keyWait; // offset 0x6C, size 0x4
    int countWait; // offset 0x70, size 0x4
    int alpha; // offset 0x74, size 0x4
    int scisFlag; // offset 0x78, size 0x4
    unsigned int grapCount; // offset 0x7C, size 0x4
} * st /* r1+0x8 */) {}

// Range: 0x29B24 -> 0x29B2C
int msgWnd_isSpeaking(struct {
    // total size: 0x80
    void * heap; // offset 0x0, size 0x4
    struct {
        // total size: 0x10
        int top; // offset 0x0, size 0x4
        int end; // offset 0x4, size 0x4
        int width; // offset 0x8, size 0x4
        int color; // offset 0xC, size 0x4
    } * layout; // offset 0x4, size 0x4
    int layoutSize; // offset 0x8, size 0x4
    unsigned char * msgBuf; // offset 0xC, size 0x4
    int msgBufSize; // offset 0x10, size 0x4
    int msgBufTop; // offset 0x14, size 0x4
    int msgBufNow; // offset 0x18, size 0x4
    int contFlags; // offset 0x1C, size 0x4
    int fontType; // offset 0x20, size 0x4
    int centering; // offset 0x24, size 0x4
    int posX; // offset 0x28, size 0x4
    int posY; // offset 0x2C, size 0x4
    int fntW; // offset 0x30, size 0x4
    int fntH; // offset 0x34, size 0x4
    int colSize; // offset 0x38, size 0x4
    int colStep; // offset 0x3C, size 0x4
    int colNow; // offset 0x40, size 0x4
    int rowSize; // offset 0x44, size 0x4
    int rowStep; // offset 0x48, size 0x4
    int rowNow; // offset 0x4C, size 0x4
    float msgCount; // offset 0x50, size 0x4
    float msgSpeed; // offset 0x54, size 0x4
    float scrCount; // offset 0x58, size 0x4
    float scrSpeed; // offset 0x5C, size 0x4
    int msgIsEnd; // offset 0x60, size 0x4
    int isSpeak; // offset 0x64, size 0x4
    int topColor; // offset 0x68, size 0x4
    int keyWait; // offset 0x6C, size 0x4
    int countWait; // offset 0x70, size 0x4
    int alpha; // offset 0x74, size 0x4
    int scisFlag; // offset 0x78, size 0x4
    unsigned int grapCount; // offset 0x7C, size 0x4
} * st /* r3 */) {}

// Range: 0x29B2C -> 0x29B48
int msgWnd_isScroll(struct {
    // total size: 0x80
    void * heap; // offset 0x0, size 0x4
    struct {
        // total size: 0x10
        int top; // offset 0x0, size 0x4
        int end; // offset 0x4, size 0x4
        int width; // offset 0x8, size 0x4
        int color; // offset 0xC, size 0x4
    } * layout; // offset 0x4, size 0x4
    int layoutSize; // offset 0x8, size 0x4
    unsigned char * msgBuf; // offset 0xC, size 0x4
    int msgBufSize; // offset 0x10, size 0x4
    int msgBufTop; // offset 0x14, size 0x4
    int msgBufNow; // offset 0x18, size 0x4
    int contFlags; // offset 0x1C, size 0x4
    int fontType; // offset 0x20, size 0x4
    int centering; // offset 0x24, size 0x4
    int posX; // offset 0x28, size 0x4
    int posY; // offset 0x2C, size 0x4
    int fntW; // offset 0x30, size 0x4
    int fntH; // offset 0x34, size 0x4
    int colSize; // offset 0x38, size 0x4
    int colStep; // offset 0x3C, size 0x4
    int colNow; // offset 0x40, size 0x4
    int rowSize; // offset 0x44, size 0x4
    int rowStep; // offset 0x48, size 0x4
    int rowNow; // offset 0x4C, size 0x4
    float msgCount; // offset 0x50, size 0x4
    float msgSpeed; // offset 0x54, size 0x4
    float scrCount; // offset 0x58, size 0x4
    float scrSpeed; // offset 0x5C, size 0x4
    int msgIsEnd; // offset 0x60, size 0x4
    int isSpeak; // offset 0x64, size 0x4
    int topColor; // offset 0x68, size 0x4
    int keyWait; // offset 0x6C, size 0x4
    int countWait; // offset 0x70, size 0x4
    int alpha; // offset 0x74, size 0x4
    int scisFlag; // offset 0x78, size 0x4
    unsigned int grapCount; // offset 0x7C, size 0x4
} * st /* r1+0x0 */) {}

// Range: 0x29B48 -> 0x29B58
int msgWnd_getWidth(struct {
    // total size: 0x80
    void * heap; // offset 0x0, size 0x4
    struct {
        // total size: 0x10
        int top; // offset 0x0, size 0x4
        int end; // offset 0x4, size 0x4
        int width; // offset 0x8, size 0x4
        int color; // offset 0xC, size 0x4
    } * layout; // offset 0x4, size 0x4
    int layoutSize; // offset 0x8, size 0x4
    unsigned char * msgBuf; // offset 0xC, size 0x4
    int msgBufSize; // offset 0x10, size 0x4
    int msgBufTop; // offset 0x14, size 0x4
    int msgBufNow; // offset 0x18, size 0x4
    int contFlags; // offset 0x1C, size 0x4
    int fontType; // offset 0x20, size 0x4
    int centering; // offset 0x24, size 0x4
    int posX; // offset 0x28, size 0x4
    int posY; // offset 0x2C, size 0x4
    int fntW; // offset 0x30, size 0x4
    int fntH; // offset 0x34, size 0x4
    int colSize; // offset 0x38, size 0x4
    int colStep; // offset 0x3C, size 0x4
    int colNow; // offset 0x40, size 0x4
    int rowSize; // offset 0x44, size 0x4
    int rowStep; // offset 0x48, size 0x4
    int rowNow; // offset 0x4C, size 0x4
    float msgCount; // offset 0x50, size 0x4
    float msgSpeed; // offset 0x54, size 0x4
    float scrCount; // offset 0x58, size 0x4
    float scrSpeed; // offset 0x5C, size 0x4
    int msgIsEnd; // offset 0x60, size 0x4
    int isSpeak; // offset 0x64, size 0x4
    int topColor; // offset 0x68, size 0x4
    int keyWait; // offset 0x6C, size 0x4
    int countWait; // offset 0x70, size 0x4
    int alpha; // offset 0x74, size 0x4
    int scisFlag; // offset 0x78, size 0x4
    unsigned int grapCount; // offset 0x7C, size 0x4
} * st /* r1+0x0 */) {}

// Range: 0x29B58 -> 0x29B68
int msgWnd_getHeight(struct {
    // total size: 0x80
    void * heap; // offset 0x0, size 0x4
    struct {
        // total size: 0x10
        int top; // offset 0x0, size 0x4
        int end; // offset 0x4, size 0x4
        int width; // offset 0x8, size 0x4
        int color; // offset 0xC, size 0x4
    } * layout; // offset 0x4, size 0x4
    int layoutSize; // offset 0x8, size 0x4
    unsigned char * msgBuf; // offset 0xC, size 0x4
    int msgBufSize; // offset 0x10, size 0x4
    int msgBufTop; // offset 0x14, size 0x4
    int msgBufNow; // offset 0x18, size 0x4
    int contFlags; // offset 0x1C, size 0x4
    int fontType; // offset 0x20, size 0x4
    int centering; // offset 0x24, size 0x4
    int posX; // offset 0x28, size 0x4
    int posY; // offset 0x2C, size 0x4
    int fntW; // offset 0x30, size 0x4
    int fntH; // offset 0x34, size 0x4
    int colSize; // offset 0x38, size 0x4
    int colStep; // offset 0x3C, size 0x4
    int colNow; // offset 0x40, size 0x4
    int rowSize; // offset 0x44, size 0x4
    int rowStep; // offset 0x48, size 0x4
    int rowNow; // offset 0x4C, size 0x4
    float msgCount; // offset 0x50, size 0x4
    float msgSpeed; // offset 0x54, size 0x4
    float scrCount; // offset 0x58, size 0x4
    float scrSpeed; // offset 0x5C, size 0x4
    int msgIsEnd; // offset 0x60, size 0x4
    int isSpeak; // offset 0x64, size 0x4
    int topColor; // offset 0x68, size 0x4
    int keyWait; // offset 0x6C, size 0x4
    int countWait; // offset 0x70, size 0x4
    int alpha; // offset 0x74, size 0x4
    int scisFlag; // offset 0x78, size 0x4
    unsigned int grapCount; // offset 0x7C, size 0x4
} * st /* r1+0x0 */) {}


