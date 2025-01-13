/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\menu.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x000669AC -> 0x00077ED4
*/
static int gnSkipFrame; // size: 0x4, address: 0xE8280
static int gbAudioChanged; // size: 0x4, address: 0xE8284
static int gbGame3D; // size: 0x4, address: 0xE8288
static int gnCheatMenu; // size: 0x4, address: 0xE828C
static int giScreenMenu; // size: 0x4, address: 0xE8290
static int giScreenMenuLast; // size: 0x4, address: 0xE8294
static int gnPlayerCount; // size: 0x4, address: 0xE8298
static int ganPick[4]; // size: 0x10, address: 0xE829C
static int gnCountMenu; // size: 0x4, address: 0xE82AC
static @enum$105menu_c gaeTypeMenu[32]; // size: 0x80, address: 0xE82B0
static int gn2D3D; // size: 0x4, address: 0xE8330
static int giName; // size: 0x4, address: 0xE8334
static int gaiName[4]; // size: 0x10, address: 0xE8338
static signed short ganName[7]; // size: 0xE, address: 0xE8348
@enum$104menu_c;
static @enum$104menu_c geLanguageMenu; // size: 0x4, address: 0xE8358
static int gnTagDialog; // size: 0x4, address: 0xE835C
static int giPlayerDialog; // size: 0x4, address: 0xE8360
static int gnCountNameEntry; // size: 0x4, address: 0xE8364
static int gnTickCountDialog; // size: 0x4, address: 0xE8368
static int gnTickFade; // size: 0x4, address: 0xE836C
static int gnMaskVoice; // size: 0x4, address: 0xE8370
static int gnTickCountMenu; // size: 0x4, address: 0xE8374
static unsigned int anTagBlinkLast[4]; // size: 0x10, address: 0xE8378
static struct {
    // total size: 0xA0
    int iFrame; // offset 0x0, size 0x4
    int iObject; // offset 0x4, size 0x4
    signed short nSizeScan; // offset 0x8, size 0x2
    int nType; // offset 0xC, size 0x4
    int nTick; // offset 0x10, size 0x4
    int nTranslucent; // offset 0x14, size 0x4
    int nBitmapCount; // offset 0x18, size 0x4
    int * anPositionX; // offset 0x1C, size 0x4
    int * anPositionY; // offset 0x20, size 0x4
    int * anFrameDelay; // offset 0x24, size 0x4
    struct {
        // total size: 0xC
        int nData; // offset 0x0, size 0x4
        int nRGBA; // offset 0x4, size 0x4
        signed short nDeltaX; // offset 0x8, size 0x2
        signed short nDeltaY; // offset 0xA, size 0x2
    } * aScan; // offset 0x28, size 0x4
    struct {
        // total size: 0x1C
        int nType; // offset 0x0, size 0x4
        int nStride; // offset 0x4, size 0x4
        void * aPixel; // offset 0x8, size 0x4
        int nSizeX; // offset 0xC, size 0x4
        int nSizeY; // offset 0x10, size 0x4
        int nSizeOriginalX; // offset 0x14, size 0x4
        unsigned short * aColorPalette; // offset 0x18, size 0x4
    } * * apBitmap; // offset 0x2C, size 0x4
    void * apPixel[2]; // offset 0x30, size 0x8
    union {
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short tmemW; // offset 0x1C, size 0x2
            unsigned short tmemH; // offset 0x1E, size 0x2
            unsigned short tmemLoadSH; // offset 0x20, size 0x2
            unsigned short tmemLoadTH; // offset 0x22, size 0x2
            unsigned short tmemSizeW; // offset 0x24, size 0x2
            unsigned short tmemSize; // offset 0x26, size 0x2
        } b; // offset 0x0, size 0x28
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short scaleW; // offset 0x1C, size 0x2
            unsigned short scaleH; // offset 0x1E, size 0x2
            long imageYorig; // offset 0x20, size 0x4
            unsigned char padding[4]; // offset 0x24, size 0x4
        } s; // offset 0x0, size 0x28
        long long force_structure_alignment; // offset 0x0, size 0x8
    } aObject[2]; // offset 0x38, size 0x50
    int nScaleX; // offset 0x88, size 0x4
    int nScaleY; // offset 0x8C, size 0x4
    unsigned short nScrollX; // offset 0x90, size 0x2
    unsigned short nScrollY; // offset 0x92, size 0x2
    unsigned int nColor0; // offset 0x94, size 0x4
    unsigned int nColor1; // offset 0x98, size 0x4
} * gpImageMark; // size: 0x4, address: 0xE8388
static struct {
    // total size: 0xA0
    int iFrame; // offset 0x0, size 0x4
    int iObject; // offset 0x4, size 0x4
    signed short nSizeScan; // offset 0x8, size 0x2
    int nType; // offset 0xC, size 0x4
    int nTick; // offset 0x10, size 0x4
    int nTranslucent; // offset 0x14, size 0x4
    int nBitmapCount; // offset 0x18, size 0x4
    int * anPositionX; // offset 0x1C, size 0x4
    int * anPositionY; // offset 0x20, size 0x4
    int * anFrameDelay; // offset 0x24, size 0x4
    struct {
        // total size: 0xC
        int nData; // offset 0x0, size 0x4
        int nRGBA; // offset 0x4, size 0x4
        signed short nDeltaX; // offset 0x8, size 0x2
        signed short nDeltaY; // offset 0xA, size 0x2
    } * aScan; // offset 0x28, size 0x4
    struct {
        // total size: 0x1C
        int nType; // offset 0x0, size 0x4
        int nStride; // offset 0x4, size 0x4
        void * aPixel; // offset 0x8, size 0x4
        int nSizeX; // offset 0xC, size 0x4
        int nSizeY; // offset 0x10, size 0x4
        int nSizeOriginalX; // offset 0x14, size 0x4
        unsigned short * aColorPalette; // offset 0x18, size 0x4
    } * * apBitmap; // offset 0x2C, size 0x4
    void * apPixel[2]; // offset 0x30, size 0x8
    union {
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short tmemW; // offset 0x1C, size 0x2
            unsigned short tmemH; // offset 0x1E, size 0x2
            unsigned short tmemLoadSH; // offset 0x20, size 0x2
            unsigned short tmemLoadTH; // offset 0x22, size 0x2
            unsigned short tmemSizeW; // offset 0x24, size 0x2
            unsigned short tmemSize; // offset 0x26, size 0x2
        } b; // offset 0x0, size 0x28
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short scaleW; // offset 0x1C, size 0x2
            unsigned short scaleH; // offset 0x1E, size 0x2
            long imageYorig; // offset 0x20, size 0x4
            unsigned char padding[4]; // offset 0x24, size 0x4
        } s; // offset 0x0, size 0x28
        long long force_structure_alignment; // offset 0x0, size 0x8
    } aObject[2]; // offset 0x38, size 0x50
    int nScaleX; // offset 0x88, size 0x4
    int nScaleY; // offset 0x8C, size 0x4
    unsigned short nScrollX; // offset 0x90, size 0x2
    unsigned short nScrollY; // offset 0x92, size 0x2
    unsigned int nColor0; // offset 0x94, size 0x4
    unsigned int nColor1; // offset 0x98, size 0x4
} * gpImageCheck; // size: 0x4, address: 0xE838C
static unsigned int gnTickMenu; // size: 0x4, address: 0xE8390
static unsigned int gnFrameCount; // size: 0x4, address: 0xE8394
static int gbHideResume; // size: 0x4, address: 0xE8398
static int giMenuTestMusic; // size: 0x4, address: 0xE839C
static int giMenuTestEffect; // size: 0x4, address: 0xE83A0
@enum$107menu_c;
static @enum$107menu_c geMenuSoundType; // size: 0x4, address: 0xE83A4
@enum$108menu_c;
static @enum$108menu_c geMenuSoundMute; // size: 0x4, address: 0xE83A8
static int gnControlCPU; // size: 0x4, address: 0xE83AC
@enum$105menu_c;
static @enum$105menu_c geGameType; // size: 0x4, address: 0xE83B0
int gaPlayerFor4PSetLevel[4][12]; // size: 0xC0, address: 0xB10D0
int from_title; // size: 0x4, address: 0xB1190
// Range: 0x669AC -> 0x66A38
void SetMenuReInit() {
    // References
    // -> int from_title;
    // -> static @enum$108menu_c geMenuSoundMute;
    // -> static @enum$107menu_c geMenuSoundType;
    // -> static @enum$104menu_c geLanguageMenu;
}

struct block_t {
    // total size: 0x2C
    int state; // offset 0x0, size 0x4
    int delay; // offset 0x4, size 0x4
    int disappear; // offset 0x8, size 0x4
    int drop; // offset 0xC, size 0x4
    int type; // offset 0x10, size 0x4
    int bomb; // offset 0x14, size 0x4
    int sound; // offset 0x18, size 0x4
    int currRow; // offset 0x1C, size 0x4
    int chain_flag; // offset 0x20, size 0x4
    int frame_n; // offset 0x24, size 0x4
    int frame_d; // offset 0x28, size 0x4
};
struct attack_t {
    // total size: 0x50
    int state; // offset 0x0, size 0x4
    int type; // offset 0x4, size 0x4
    int disappear; // offset 0x8, size 0x4
    int delay; // offset 0xC, size 0x4
    int counter; // offset 0x10, size 0x4
    int level; // offset 0x14, size 0x4
    int start; // offset 0x18, size 0x4
    int end; // offset 0x1C, size 0x4
    int expression; // offset 0x20, size 0x4
    int currRow; // offset 0x24, size 0x4
    int slot; // offset 0x28, size 0x4
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } rect; // offset 0x30, size 0x18
    int ChainCriminalPlayerNo; // offset 0x48, size 0x4
    int ComboCriminalPlayerNo; // offset 0x4C, size 0x4
};
struct icon_t {
    // total size: 0x68
    int flag; // offset 0x0, size 0x4
    int type; // offset 0x4, size 0x4
    int total; // offset 0x8, size 0x4
    int from_x; // offset 0xC, size 0x4
    int from_y; // offset 0x10, size 0x4
    int to_x; // offset 0x14, size 0x4
    int to_y; // offset 0x18, size 0x4
    int count; // offset 0x1C, size 0x4
    int distance; // offset 0x20, size 0x4
    union {
        union {
            struct {
                // total size: 0x18
                signed short objX; // offset 0x0, size 0x2
                unsigned short scaleW; // offset 0x2, size 0x2
                unsigned short imageW; // offset 0x4, size 0x2
                unsigned short paddingX; // offset 0x6, size 0x2
                signed short objY; // offset 0x8, size 0x2
                unsigned short scaleH; // offset 0xA, size 0x2
                unsigned short imageH; // offset 0xC, size 0x2
                unsigned short paddingY; // offset 0xE, size 0x2
                unsigned short imageStride; // offset 0x10, size 0x2
                unsigned short imageAdrs; // offset 0x12, size 0x2
                unsigned char imageFmt; // offset 0x14, size 0x1
                unsigned char imageSiz; // offset 0x15, size 0x1
                unsigned char imagePal; // offset 0x16, size 0x1
                unsigned char imageFlags; // offset 0x17, size 0x1
            } s; // offset 0x0, size 0x18
            long long force_structure_alignment; // offset 0x0, size 0x8
        } rect; // offset 0x0, size 0x18
        union {
            long m[4][4]; // offset 0x0, size 0x40
            long long force_structure_alignment; // offset 0x0, size 0x8
        } move; // offset 0x0, size 0x40
    } thing; // offset 0x28, size 0x40
};
struct explode_t {
    // total size: 0x30
    int type; // offset 0x0, size 0x4
    int frame; // offset 0x4, size 0x4
    int pos; // offset 0x8, size 0x4
    int x; // offset 0xC, size 0x4
    int y; // offset 0x10, size 0x4
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } rect; // offset 0x18, size 0x18
};
struct chain_t {
    // total size: 0x8
    int x_num; // offset 0x0, size 0x4
    int old_chain; // offset 0x4, size 0x4
};
struct state_t {
    // total size: 0x38
    int comboFlash; // offset 0x0, size 0x4
    int comboFace; // offset 0x4, size 0x4
    int comboExplode; // offset 0x8, size 0x4
    int blockDropDelay; // offset 0xC, size 0x4
    int attackDropDelay; // offset 0x10, size 0x4
    int nextLevel; // offset 0x14, size 0x4
    int currLevel; // offset 0x18, size 0x4
    int rand; // offset 0x1C, size 0x4
    int newBlock; // offset 0x20, size 0x4
    unsigned long timer; // offset 0x24, size 0x4
    unsigned long speed; // offset 0x28, size 0x4
    int death; // offset 0x2C, size 0x4
    int current_raise; // offset 0x30, size 0x4
    int raise; // offset 0x34, size 0x4
};
struct extra_t {
    // total size: 0x1C
    int level; // offset 0x0, size 0x4
    int win; // offset 0x4, size 0x4
    int maxGarbage; // offset 0x8, size 0x4
    int clearGarbage; // offset 0xC, size 0x4
    int matchGarbage; // offset 0x10, size 0x4
    int queueGarbage; // offset 0x14, size 0x4
    int wellGarbage; // offset 0x18, size 0x4
};
struct menu_t {
    // total size: 0x18
    int game; // offset 0x0, size 0x4
    int stage; // offset 0x4, size 0x4
    int speed; // offset 0x8, size 0x4
    int misc; // offset 0xC, size 0x4
    int ai; // offset 0x10, size 0x4
    int player; // offset 0x14, size 0x4
};
struct tetWell {
    // total size: 0x57C0
    struct block_t block[12][18]; // offset 0x0, size 0x2520
    struct attack_t attack[40]; // offset 0x2520, size 0xC80
    struct icon_t icon[10]; // offset 0x31A0, size 0x410
    struct explode_t explosion[50]; // offset 0x35B0, size 0x960
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } block_rect[12][6]; // offset 0x3F10, size 0x6C0
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } new_block_rect[6]; // offset 0x45D0, size 0x90
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } left2D; // offset 0x4660, size 0x18
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } right2D; // offset 0x4678, size 0x18
    char visible[12][18]; // offset 0x4690, size 0xD8
    float translation; // offset 0x4768, size 0x4
    struct block_t new_block[18]; // offset 0x476C, size 0x318
    struct chain_t reaction; // offset 0x4A84, size 0x8
    int score; // offset 0x4A8C, size 0x4
    int raise; // offset 0x4A90, size 0x4
    int danger; // offset 0x4A94, size 0x4
    int alert; // offset 0x4A98, size 0x4
    int defrost; // offset 0x4A9C, size 0x4
    int chain_garbage; // offset 0x4AA0, size 0x4
    int collision; // offset 0x4AA4, size 0x4
    struct state_t state; // offset 0x4AA8, size 0x38
    struct extra_t extra; // offset 0x4AE0, size 0x1C
    int bot_height; // offset 0x4AFC, size 0x4
    struct menu_t menu; // offset 0x4B00, size 0x18
    struct attack_t attack4p[40]; // offset 0x4B18, size 0xC80
    int LastChainType; // offset 0x5798, size 0x4
    int LastComboType; // offset 0x579C, size 0x4
    int LastEXComboType; // offset 0x57A0, size 0x4
    int ChainAttackWhom; // offset 0x57A4, size 0x4
    int ComboAttackWhom; // offset 0x57A8, size 0x4
    int LastAttackWhom; // offset 0x57AC, size 0x4
    int RankingSignRaise; // offset 0x57B0, size 0x4
    int RankingSignColor; // offset 0x57B4, size 0x4
    int EntryNo; // offset 0x57B8, size 0x4
};
enum pStateEnum {
    dead = 0,
    no_entry = 1,
    gameclear = 2,
    alive = 3,
    revival = 4,
};
struct cursor_t {
    // total size: 0x110
    int state; // offset 0x0, size 0x4
    int delay; // offset 0x4, size 0x4
    int waiting; // offset 0x8, size 0x4
    int extra_wait; // offset 0xC, size 0x4
    int x; // offset 0x10, size 0x4
    int y; // offset 0x14, size 0x4
    int sx; // offset 0x18, size 0x4
    int sy; // offset 0x1C, size 0x4
    int frame_n; // offset 0x20, size 0x4
    int frame_d; // offset 0x24, size 0x4
    int target[43]; // offset 0x28, size 0xAC
    int store[5]; // offset 0xD4, size 0x14
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } rect; // offset 0xE8, size 0x18
    enum pStateEnum pstate; // offset 0x100, size 0x4
    int GameEnd_Value; // offset 0x104, size 0x4
    int AttackWhomLockOnto; // offset 0x108, size 0x4
};
struct gamepad_t {
    // total size: 0x10
    int position; // offset 0x0, size 0x4
    unsigned short touch_button; // offset 0x4, size 0x2
    unsigned short hold_button; // offset 0x6, size 0x2
    int hold; // offset 0x8, size 0x4
    unsigned short cont_button; // offset 0xC, size 0x2
    unsigned short button; // offset 0xE, size 0x2
};
struct flic_t {
    // total size: 0x20
    int duration; // offset 0x0, size 0x4
    int counter; // offset 0x4, size 0x4
    int type; // offset 0x8, size 0x4
    int layer; // offset 0xC, size 0x4
    int palette; // offset 0x10, size 0x4
    int index; // offset 0x14, size 0x4
    int texture; // offset 0x18, size 0x4
    int next_flic; // offset 0x1C, size 0x4
};
struct action_t {
    // total size: 0xC
    int current_flic; // offset 0x0, size 0x4
    int posX; // offset 0x4, size 0x4
    int posY; // offset 0x8, size 0x4
};
struct text_t {
    // total size: 0x20
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } word; // offset 0x0, size 0x18
    int texture; // offset 0x18, size 0x4
};
struct help_t {
    // total size: 0x8
    int selection; // offset 0x0, size 0x4
    int current_pos; // offset 0x4, size 0x4
};
struct player_t {
    // total size: 0x880
    char id; // offset 0x0, size 0x1
    signed short name[7]; // offset 0x2, size 0xE
    int kPLAYER1E_2Dscore; // offset 0x10, size 0x4
    int kPLAYER1E_3Dscore; // offset 0x14, size 0x4
    int kPLAYER1T_2Dscore; // offset 0x18, size 0x4
    int kPLAYER1T_3Dscore; // offset 0x1C, size 0x4
    int kPLAYER1C_2Dscore; // offset 0x20, size 0x4
    int kPLAYER1C_2Dlastscore; // offset 0x24, size 0x4
    int kPLAYER1C_3Dscore; // offset 0x28, size 0x4
    int kPLAYER1C_3Dlastscore; // offset 0x2C, size 0x4
    char kPLAYER1C_2Dhour; // offset 0x30, size 0x1
    char kPLAYER1C_2Dminute; // offset 0x31, size 0x1
    char kPLAYER1C_2Dsecond; // offset 0x32, size 0x1
    char kPLAYER1C_2Dround[6]; // offset 0x33, size 0x6
    int kPLAYER1C_2Dtime[32]; // offset 0x3C, size 0x80
    char kPLAYER1C_3Dhour; // offset 0xBC, size 0x1
    char kPLAYER1C_3Dminute; // offset 0xBD, size 0x1
    char kPLAYER1C_3Dsecond; // offset 0xBE, size 0x1
    char kPLAYER1C_3Dround[6]; // offset 0xBF, size 0x6
    int kPLAYER1C_3Dtime[32]; // offset 0xC8, size 0x80
    char kPLAYER1P_hour; // offset 0x148, size 0x1
    char kPLAYER1P_minute; // offset 0x149, size 0x1
    char kPLAYER1P_second; // offset 0x14A, size 0x1
    char kPLAYER1P_easy1[6]; // offset 0x14B, size 0x6
    char kPLAYER1P_hard1[6]; // offset 0x151, size 0x6
    char kPLAYER1P_easy2[6]; // offset 0x157, size 0x6
    char kPLAYER1P_hard2[6]; // offset 0x15D, size 0x6
    char kPLAYER1P_special[12]; // offset 0x163, size 0xC
    char kPLAYER1V_kEASY; // offset 0x16F, size 0x1
    char kPLAYER1V_kNORMAL; // offset 0x170, size 0x1
    char kPLAYER1V_kHARD; // offset 0x171, size 0x1
    char kPLAYER1V_kSHARD; // offset 0x172, size 0x1
    char kPLAYER1V_kULTRA; // offset 0x173, size 0x1
    char kPLAYER1V_kEASY_continue; // offset 0x174, size 0x1
    char kPLAYER1V_kNORMAL_continue; // offset 0x175, size 0x1
    char kPLAYER1V_kHARD_continue; // offset 0x176, size 0x1
    char kPLAYER1V_kSHARD_continue; // offset 0x177, size 0x1
    char kPLAYER1V_kULTRA_continue; // offset 0x178, size 0x1
    signed short kPLAYER1V_kEASY_character; // offset 0x17A, size 0x2
    signed short kPLAYER1V_kNORMAL_character; // offset 0x17C, size 0x2
    signed short kPLAYER1V_kHARD_character; // offset 0x17E, size 0x2
    signed short kPLAYER1V_kSHARD_character; // offset 0x180, size 0x2
    signed short kPLAYER1V_kULTRA_character; // offset 0x182, size 0x2
    signed short k2D_combo; // offset 0x184, size 0x2
    signed short k2D_comboMode; // offset 0x186, size 0x2
    signed short k2D_chain; // offset 0x188, size 0x2
    signed short k2D_chainMode; // offset 0x18A, size 0x2
    signed short k3D_combo; // offset 0x18C, size 0x2
    signed short k3D_comboMode; // offset 0x18E, size 0x2
    signed short k3D_chain; // offset 0x190, size 0x2
    signed short k3D_chainMode; // offset 0x192, size 0x2
    char kPLAYER2V_2Dwin[8]; // offset 0x194, size 0x8
    char kPLAYER2V_2Dlose[8]; // offset 0x19C, size 0x8
    char kPLAYER2V_3Dwin[8]; // offset 0x1A4, size 0x8
    char kPLAYER2V_3Dlose[8]; // offset 0x1AC, size 0x8
    char kPLAYER2T_2Dwin[8]; // offset 0x1B4, size 0x8
    char kPLAYER2T_2Dlose[8]; // offset 0x1BC, size 0x8
    char kPLAYER2T_3Dwin[8]; // offset 0x1C4, size 0x8
    char kPLAYER2T_3Dlose[8]; // offset 0x1CC, size 0x8
    char kPLAYER2L_2Dwin[8]; // offset 0x1D4, size 0x8
    char kPLAYER2L_2Dlose[8]; // offset 0x1DC, size 0x8
    char kPLAYER2L_3Dwin[8]; // offset 0x1E4, size 0x8
    char kPLAYER2L_3Dlose[8]; // offset 0x1EC, size 0x8
    unsigned char kPLAYER1PE_editor[1650]; // offset 0x1F4, size 0x672
    signed short menu_setting[12]; // offset 0x866, size 0x18
};
struct MultiModeData_t {
    // total size: 0x168
    int Ranking[4]; // offset 0x0, size 0x10
    union {
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short tmemW; // offset 0x1C, size 0x2
            unsigned short tmemH; // offset 0x1E, size 0x2
            unsigned short tmemLoadSH; // offset 0x20, size 0x2
            unsigned short tmemLoadTH; // offset 0x22, size 0x2
            unsigned short tmemSizeW; // offset 0x24, size 0x2
            unsigned short tmemSize; // offset 0x26, size 0x2
        } b; // offset 0x0, size 0x28
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short scaleW; // offset 0x1C, size 0x2
            unsigned short scaleH; // offset 0x1E, size 0x2
            long imageYorig; // offset 0x20, size 0x4
            unsigned char padding[4]; // offset 0x24, size 0x4
        } s; // offset 0x0, size 0x28
        long long force_structure_alignment; // offset 0x0, size 0x8
    } sign[4]; // offset 0x10, size 0xA0
    union {
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short tmemW; // offset 0x1C, size 0x2
            unsigned short tmemH; // offset 0x1E, size 0x2
            unsigned short tmemLoadSH; // offset 0x20, size 0x2
            unsigned short tmemLoadTH; // offset 0x22, size 0x2
            unsigned short tmemSizeW; // offset 0x24, size 0x2
            unsigned short tmemSize; // offset 0x26, size 0x2
        } b; // offset 0x0, size 0x28
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short scaleW; // offset 0x1C, size 0x2
            unsigned short scaleH; // offset 0x1E, size 0x2
            long imageYorig; // offset 0x20, size 0x4
            unsigned char padding[4]; // offset 0x24, size 0x4
        } s; // offset 0x0, size 0x28
        long long force_structure_alignment; // offset 0x0, size 0x8
    } alpha[4]; // offset 0xB0, size 0xA0
    union {
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short tsize; // offset 0xA, size 0x2
            unsigned short tline; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } block; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short twidth; // offset 0xA, size 0x2
            unsigned short theight; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tile; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short phead; // offset 0x8, size 0x2
            unsigned short pnum; // offset 0xA, size 0x2
            unsigned short zero; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tlut; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } signLUT; // offset 0x150, size 0x18
};
struct Game {
    // total size: 0x21C08
    struct tetWell tetrisWell[4]; // offset 0x0, size 0x15F00
    struct cursor_t cursorBlock[4]; // offset 0x15F00, size 0x440
    struct gamepad_t controller[4]; // offset 0x16340, size 0x40
    struct flic_t flic[340]; // offset 0x16380, size 0x2A80
    struct action_t action[40]; // offset 0x18E00, size 0x1E0
    union {
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short tsize; // offset 0xA, size 0x2
            unsigned short tline; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } block; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short twidth; // offset 0xA, size 0x2
            unsigned short theight; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tile; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short phead; // offset 0x8, size 0x2
            unsigned short pnum; // offset 0xA, size 0x2
            unsigned short zero; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tlut; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } gLUT[40]; // offset 0x18FE0, size 0x3C0
    union {
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short tmemW; // offset 0x1C, size 0x2
            unsigned short tmemH; // offset 0x1E, size 0x2
            unsigned short tmemLoadSH; // offset 0x20, size 0x2
            unsigned short tmemLoadTH; // offset 0x22, size 0x2
            unsigned short tmemSizeW; // offset 0x24, size 0x2
            unsigned short tmemSize; // offset 0x26, size 0x2
        } b; // offset 0x0, size 0x28
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short scaleW; // offset 0x1C, size 0x2
            unsigned short scaleH; // offset 0x1E, size 0x2
            long imageYorig; // offset 0x20, size 0x4
            unsigned char padding[4]; // offset 0x24, size 0x4
        } s; // offset 0x0, size 0x28
        long long force_structure_alignment; // offset 0x0, size 0x8
    } gBG[200]; // offset 0x193A0, size 0x1F40
    union {
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short tsize; // offset 0xA, size 0x2
            unsigned short tline; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } block; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short twidth; // offset 0xA, size 0x2
            unsigned short theight; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tile; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short phead; // offset 0x8, size 0x2
            unsigned short pnum; // offset 0xA, size 0x2
            unsigned short zero; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tlut; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } gTEXT[80]; // offset 0x1B2E0, size 0x780
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } gSPRITE[160]; // offset 0x1BA60, size 0xF00
    int currentText; // offset 0x1C960, size 0x4
    struct text_t drawText[70]; // offset 0x1C968, size 0x8C0
    union {
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short tmemW; // offset 0x1C, size 0x2
            unsigned short tmemH; // offset 0x1E, size 0x2
            unsigned short tmemLoadSH; // offset 0x20, size 0x2
            unsigned short tmemLoadTH; // offset 0x22, size 0x2
            unsigned short tmemSizeW; // offset 0x24, size 0x2
            unsigned short tmemSize; // offset 0x26, size 0x2
        } b; // offset 0x0, size 0x28
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short scaleW; // offset 0x1C, size 0x2
            unsigned short scaleH; // offset 0x1E, size 0x2
            long imageYorig; // offset 0x20, size 0x4
            unsigned char padding[4]; // offset 0x24, size 0x4
        } s; // offset 0x0, size 0x28
        long long force_structure_alignment; // offset 0x0, size 0x8
    } frame; // offset 0x1D228, size 0x28
    union {
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short tsize; // offset 0xA, size 0x2
            unsigned short tline; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } block; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short twidth; // offset 0xA, size 0x2
            unsigned short theight; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tile; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short phead; // offset 0x8, size 0x2
            unsigned short pnum; // offset 0xA, size 0x2
            unsigned short zero; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tlut; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } frameLUT; // offset 0x1D250, size 0x18
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } shadeBOX[4]; // offset 0x1D268, size 0x60
    union {
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short tmemW; // offset 0x1C, size 0x2
            unsigned short tmemH; // offset 0x1E, size 0x2
            unsigned short tmemLoadSH; // offset 0x20, size 0x2
            unsigned short tmemLoadTH; // offset 0x22, size 0x2
            unsigned short tmemSizeW; // offset 0x24, size 0x2
            unsigned short tmemSize; // offset 0x26, size 0x2
        } b; // offset 0x0, size 0x28
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short scaleW; // offset 0x1C, size 0x2
            unsigned short scaleH; // offset 0x1E, size 0x2
            long imageYorig; // offset 0x20, size 0x4
            unsigned char padding[4]; // offset 0x24, size 0x4
        } s; // offset 0x0, size 0x28
        long long force_structure_alignment; // offset 0x0, size 0x8
    } bkground; // offset 0x1D2C8, size 0x28
    union {
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short tsize; // offset 0xA, size 0x2
            unsigned short tline; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } block; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short twidth; // offset 0xA, size 0x2
            unsigned short theight; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tile; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short phead; // offset 0x8, size 0x2
            unsigned short pnum; // offset 0xA, size 0x2
            unsigned short zero; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tlut; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } bkgroundLUT; // offset 0x1D2F0, size 0x18
    union {
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short tmemW; // offset 0x1C, size 0x2
            unsigned short tmemH; // offset 0x1E, size 0x2
            unsigned short tmemLoadSH; // offset 0x20, size 0x2
            unsigned short tmemLoadTH; // offset 0x22, size 0x2
            unsigned short tmemSizeW; // offset 0x24, size 0x2
            unsigned short tmemSize; // offset 0x26, size 0x2
        } b; // offset 0x0, size 0x28
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short scaleW; // offset 0x1C, size 0x2
            unsigned short scaleH; // offset 0x1E, size 0x2
            long imageYorig; // offset 0x20, size 0x4
            unsigned char padding[4]; // offset 0x24, size 0x4
        } s; // offset 0x0, size 0x28
        long long force_structure_alignment; // offset 0x0, size 0x8
    } sign[8]; // offset 0x1D308, size 0x140
    union {
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short tmemW; // offset 0x1C, size 0x2
            unsigned short tmemH; // offset 0x1E, size 0x2
            unsigned short tmemLoadSH; // offset 0x20, size 0x2
            unsigned short tmemLoadTH; // offset 0x22, size 0x2
            unsigned short tmemSizeW; // offset 0x24, size 0x2
            unsigned short tmemSize; // offset 0x26, size 0x2
        } b; // offset 0x0, size 0x28
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short scaleW; // offset 0x1C, size 0x2
            unsigned short scaleH; // offset 0x1E, size 0x2
            long imageYorig; // offset 0x20, size 0x4
            unsigned char padding[4]; // offset 0x24, size 0x4
        } s; // offset 0x0, size 0x28
        long long force_structure_alignment; // offset 0x0, size 0x8
    } alpha[4]; // offset 0x1D448, size 0xA0
    union {
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short tsize; // offset 0xA, size 0x2
            unsigned short tline; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } block; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short twidth; // offset 0xA, size 0x2
            unsigned short theight; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tile; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short phead; // offset 0x8, size 0x2
            unsigned short pnum; // offset 0xA, size 0x2
            unsigned short zero; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tlut; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } signLUT; // offset 0x1D4E8, size 0x18
    int miscToggle; // offset 0x1D500, size 0x4
    union {
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short tmemW; // offset 0x1C, size 0x2
            unsigned short tmemH; // offset 0x1E, size 0x2
            unsigned short tmemLoadSH; // offset 0x20, size 0x2
            unsigned short tmemLoadTH; // offset 0x22, size 0x2
            unsigned short tmemSizeW; // offset 0x24, size 0x2
            unsigned short tmemSize; // offset 0x26, size 0x2
        } b; // offset 0x0, size 0x28
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short scaleW; // offset 0x1C, size 0x2
            unsigned short scaleH; // offset 0x1E, size 0x2
            long imageYorig; // offset 0x20, size 0x4
            unsigned char padding[4]; // offset 0x24, size 0x4
        } s; // offset 0x0, size 0x28
        long long force_structure_alignment; // offset 0x0, size 0x8
    } misc[4]; // offset 0x1D508, size 0xA0
    union {
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short tsize; // offset 0xA, size 0x2
            unsigned short tline; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } block; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short tmem; // offset 0x8, size 0x2
            unsigned short twidth; // offset 0xA, size 0x2
            unsigned short theight; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tile; // offset 0x0, size 0x18
        struct {
            // total size: 0x18
            unsigned long type; // offset 0x0, size 0x4
            unsigned long long * image; // offset 0x4, size 0x4
            unsigned short phead; // offset 0x8, size 0x2
            unsigned short pnum; // offset 0xA, size 0x2
            unsigned short zero; // offset 0xC, size 0x2
            unsigned short sid; // offset 0xE, size 0x2
            unsigned long flag; // offset 0x10, size 0x4
            unsigned long mask; // offset 0x14, size 0x4
        } tlut; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } miscLUT[4]; // offset 0x1D5A8, size 0x60
    int totalPlayer; // offset 0x1D608, size 0x4
    int dimension; // offset 0x1D60C, size 0x4
    int seed; // offset 0x1D610, size 0x4
    int hour; // offset 0x1D614, size 0x4
    int minute; // offset 0x1D618, size 0x4
    int second; // offset 0x1D61C, size 0x4
    struct help_t help; // offset 0x1D620, size 0x8
    struct menu_t menu[4]; // offset 0x1D628, size 0x60
    struct player_t player[8]; // offset 0x1D688, size 0x4400
    int LastAlivePlayer; // offset 0x21A88, size 0x4
    int NoEntryPlayer; // offset 0x21A8C, size 0x4
    struct MultiModeData_t MultiModeData; // offset 0x21A90, size 0x168
    char kPLAYER4VTL_2D1st[4]; // offset 0x21BF8, size 0x4
    char kPLAYER4VTL_2D2nd[4]; // offset 0x21BFC, size 0x4
    char kPLAYER4VTL_2D3rd[4]; // offset 0x21C00, size 0x4
    char kPLAYER4VTL_2D4th[4]; // offset 0x21C04, size 0x4
};
struct Game gTheGame; // size: 0x21C08, address: 0xF4EC8
// Range: 0x66A38 -> 0x66AFC
static void menuInit() {
    // Local variables
    int iName; // r29

    // References
    // -> static @enum$108menu_c geMenuSoundMute;
    // -> static @enum$107menu_c geMenuSoundType;
    // -> static int gnCheatMenu;
    // -> struct Game gTheGame;
    // -> static int gaiName[4];
    // -> static int giMenuTestEffect;
    // -> static int giMenuTestMusic;
}

int gbOpenTitle; // size: 0x4, address: 0x116FE4
unsigned short gGameStatus; // size: 0x2, address: 0xF4E9C
int gOverflowFlag; // size: 0x4, address: 0xDF5A0
// Range: 0x66AFC -> 0x66B78
static int menuWipeUserData() {
    // Local variables
    int iData; // r1+0x8

    // References
    // -> static int gnControlCPU;
    // -> int gOverflowFlag;
    // -> unsigned short gGameStatus;
    // -> int gbOpenTitle;
    // -> static int gnCheatMenu;
}

// Range: 0x66B78 -> 0x66CAC
static int menuInitUserData(struct {
    // total size: 0xB8
    unsigned int iSlot; // offset 0x0, size 0x4
    unsigned int nMark; // offset 0x4, size 0x4
    unsigned int nCheat1; // offset 0x8, size 0x4
    unsigned int nCheat2; // offset 0xC, size 0x4
    unsigned int nSizePut; // offset 0x10, size 0x4
    unsigned int nMaskSlot; // offset 0x14, size 0x4
    unsigned short nStatus; // offset 0x18, size 0x2
    unsigned int nControl; // offset 0x1C, size 0x4
    unsigned int nOverflow; // offset 0x20, size 0x4
    @enum$107menu_c eSoundType; // offset 0x24, size 0x4
    @enum$108menu_c eSoundMute; // offset 0x28, size 0x4
    int aiSlot[8]; // offset 0x2C, size 0x20
    unsigned short anName[8][6]; // offset 0x4C, size 0x60
    unsigned int nSize1; // offset 0xAC, size 0x4
    unsigned int nSize0; // offset 0xB0, size 0x4
    unsigned int nCode; // offset 0xB4, size 0x4
} * pData /* r29 */, int bWipe /* r1+0xC */) {
    // Local variables
    int iName; // r30

    // References
    // -> struct Game gTheGame;
    // -> static int gnControlCPU;
    // -> int gOverflowFlag;
    // -> static @enum$108menu_c geMenuSoundMute;
    // -> static @enum$107menu_c geMenuSoundType;
    // -> unsigned short gGameStatus;
    // -> int gbOpenTitle;
    // -> static int gnCheatMenu;
}

static unsigned char _cache$158[16384]; // size: 0x4000, address: 0xE83C0
// Range: 0x66CAC -> 0x66E20
static int menuLoadUserData(struct {
    // total size: 0xB8
    unsigned int iSlot; // offset 0x0, size 0x4
    unsigned int nMark; // offset 0x4, size 0x4
    unsigned int nCheat1; // offset 0x8, size 0x4
    unsigned int nCheat2; // offset 0xC, size 0x4
    unsigned int nSizePut; // offset 0x10, size 0x4
    unsigned int nMaskSlot; // offset 0x14, size 0x4
    unsigned short nStatus; // offset 0x18, size 0x2
    unsigned int nControl; // offset 0x1C, size 0x4
    unsigned int nOverflow; // offset 0x20, size 0x4
    @enum$107menu_c eSoundType; // offset 0x24, size 0x4
    @enum$108menu_c eSoundMute; // offset 0x28, size 0x4
    int aiSlot[8]; // offset 0x2C, size 0x20
    unsigned short anName[8][6]; // offset 0x4C, size 0x60
    unsigned int nSize1; // offset 0xAC, size 0x4
    unsigned int nSize0; // offset 0xB0, size 0x4
    unsigned int nCode; // offset 0xB4, size 0x4
} * pData /* r31 */) {
    // Local variables
    int bFlag1; // r5
    int bFlag2; // r6
    struct {
        // total size: 0xB8
        unsigned int iSlot; // offset 0x0, size 0x4
        unsigned int nMark; // offset 0x4, size 0x4
        unsigned int nCheat1; // offset 0x8, size 0x4
        unsigned int nCheat2; // offset 0xC, size 0x4
        unsigned int nSizePut; // offset 0x10, size 0x4
        unsigned int nMaskSlot; // offset 0x14, size 0x4
        unsigned short nStatus; // offset 0x18, size 0x2
        unsigned int nControl; // offset 0x1C, size 0x4
        unsigned int nOverflow; // offset 0x20, size 0x4
        @enum$107menu_c eSoundType; // offset 0x24, size 0x4
        @enum$108menu_c eSoundMute; // offset 0x28, size 0x4
        int aiSlot[8]; // offset 0x2C, size 0x20
        unsigned short anName[8][6]; // offset 0x4C, size 0x60
        unsigned int nSize1; // offset 0xAC, size 0x4
        unsigned int nSize0; // offset 0xB0, size 0x4
        unsigned int nCode; // offset 0xB4, size 0x4
    } data0; // r1+0xC4
    struct {
        // total size: 0xB8
        unsigned int iSlot; // offset 0x0, size 0x4
        unsigned int nMark; // offset 0x4, size 0x4
        unsigned int nCheat1; // offset 0x8, size 0x4
        unsigned int nCheat2; // offset 0xC, size 0x4
        unsigned int nSizePut; // offset 0x10, size 0x4
        unsigned int nMaskSlot; // offset 0x14, size 0x4
        unsigned short nStatus; // offset 0x18, size 0x2
        unsigned int nControl; // offset 0x1C, size 0x4
        unsigned int nOverflow; // offset 0x20, size 0x4
        @enum$107menu_c eSoundType; // offset 0x24, size 0x4
        @enum$108menu_c eSoundMute; // offset 0x28, size 0x4
        int aiSlot[8]; // offset 0x2C, size 0x20
        unsigned short anName[8][6]; // offset 0x4C, size 0x60
        unsigned int nSize1; // offset 0xAC, size 0x4
        unsigned int nSize0; // offset 0xB0, size 0x4
        unsigned int nCode; // offset 0xB4, size 0x4
    } data1; // r1+0xC

    // References
    // -> static unsigned char _cache$158[16384];
}

static unsigned char _cache$187[16384]; // size: 0x4000, address: 0xEC3C0
// Range: 0x66E20 -> 0x66FE4
static int menuSaveUserData(struct {
    // total size: 0xB8
    unsigned int iSlot; // offset 0x0, size 0x4
    unsigned int nMark; // offset 0x4, size 0x4
    unsigned int nCheat1; // offset 0x8, size 0x4
    unsigned int nCheat2; // offset 0xC, size 0x4
    unsigned int nSizePut; // offset 0x10, size 0x4
    unsigned int nMaskSlot; // offset 0x14, size 0x4
    unsigned short nStatus; // offset 0x18, size 0x2
    unsigned int nControl; // offset 0x1C, size 0x4
    unsigned int nOverflow; // offset 0x20, size 0x4
    @enum$107menu_c eSoundType; // offset 0x24, size 0x4
    @enum$108menu_c eSoundMute; // offset 0x28, size 0x4
    int aiSlot[8]; // offset 0x2C, size 0x20
    unsigned short anName[8][6]; // offset 0x4C, size 0x60
    unsigned int nSize1; // offset 0xAC, size 0x4
    unsigned int nSize0; // offset 0xB0, size 0x4
    unsigned int nCode; // offset 0xB4, size 0x4
} * pData /* r29 */, int iUser /* r28 */) {
    // Local variables
    int iSlot; // r30
    int iSlotLast; // r5

    // References
    // -> static unsigned char _cache$187[16384];
    // -> struct Game gTheGame;
}

static int bHold$207; // size: 0x4, address: 0xF03C0
@enum$105menu_c geTypeMenu; // size: 0x4, address: 0xF03C4
int ganButton[8]; // size: 0x20, address: 0xF03C8
int giButton; // size: 0x4, address: 0xF03E8
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
struct SfxInitStruct SFX_INIT_TABLE[527]; // size: 0x20F0, address: 0xE0D78
// Range: 0x66FE4 -> 0x674A8
static int menuTickCheat(int * anButtonHold /* r26 */, int * anButtonTouch /* r27 */) {
    // Local variables
    int bFlag; // r29
    int nWipe; // r28

    // References
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int gnSkipFrame;
    // -> static int gnCheatMenu;
    // -> int ganButton[8];
    // -> int giButton;
    // -> @enum$105menu_c geTypeMenu;
    // -> static int giScreenMenu;
    // -> static int bHold$207;
    // -> struct Game gTheGame;
}

int gMain; // size: 0x4, address: 0xDF59C
// Range: 0x674A8 -> 0x675B8
static int menuStageClearXtra() {
    // Local variables
    char * anData; // r4
    int iName; // r1+0x8
    int iScreen; // r1+0x10
    int iCursorX; // r1+0xC
    int iCursorY; // r1+0x8

    // References
    // -> struct Game gTheGame;
    // -> int gMain;
    // -> static int gaiName[4];
}

// Range: 0x675B8 -> 0x676D4
static int menuStageClearLast() {
    // Local variables
    char * anData; // r4
    int iName; // r1+0x8
    int iScreen; // r1+0x10
    int iCursorX; // r1+0xC
    int iCursorY; // r1+0x8

    // References
    // -> struct Game gTheGame;
    // -> int gMain;
    // -> static int gaiName[4];
}

@enum$328menu_c;
// Range: 0x676D4 -> 0x67814
static int menuTestPuzzleStage(@enum$328menu_c eStage /* r1+0x0 */) {
    // Local variables
    char * pData; // r5
    int iName; // r1+0x0
    int nCount; // r1+0x0
    int iBit; // r6

    // References
    // -> struct Game gTheGame;
    // -> static int gaiName[4];
    // -> static int gnCheatMenu;
    // -> int gbOpenTitle;
}

@enum$354menu_c;
// Range: 0x67814 -> 0x6797C
static int menuTestVsCPUContinue(@enum$354menu_c eStage /* r1+0x0 */) {
    // Local variables
    int iName; // r1+0x0

    // References
    // -> struct Game gTheGame;
    // -> static int gaiName[4];
}

int gReset; // size: 0x4, address: 0xDF598
// Range: 0x6797C -> 0x679F8
static int menuNest(@enum$105menu_c eType /* r30 */) {
    // References
    // -> static int gnCountMenu;
    // -> static @enum$105menu_c gaeTypeMenu[32];
}

// Range: 0x679F8 -> 0x67C34
static void menuUpdateName() {
    // Local variables
    int iScreen; // r1+0x8
    int iName; // r29

    // References
    // -> struct Game gTheGame;
    // -> static int gaiName[4];
}

// Range: 0x67C34 -> 0x67F90
int menuDeleteNameMain(int iNameWipe /* r30 */, int saveflag /* r31 */) {
    // Local variables
    int iSlot; // r5
    int iPlayer; // r6
    int iName; // r7
    struct player_t * pPlayer; // r8
    struct {
        // total size: 0xB8
        unsigned int iSlot; // offset 0x0, size 0x4
        unsigned int nMark; // offset 0x4, size 0x4
        unsigned int nCheat1; // offset 0x8, size 0x4
        unsigned int nCheat2; // offset 0xC, size 0x4
        unsigned int nSizePut; // offset 0x10, size 0x4
        unsigned int nMaskSlot; // offset 0x14, size 0x4
        unsigned short nStatus; // offset 0x18, size 0x2
        unsigned int nControl; // offset 0x1C, size 0x4
        unsigned int nOverflow; // offset 0x20, size 0x4
        @enum$107menu_c eSoundType; // offset 0x24, size 0x4
        @enum$108menu_c eSoundMute; // offset 0x28, size 0x4
        int aiSlot[8]; // offset 0x2C, size 0x20
        unsigned short anName[8][6]; // offset 0x4C, size 0x60
        unsigned int nSize1; // offset 0xAC, size 0x4
        unsigned int nSize0; // offset 0xB0, size 0x4
        unsigned int nCode; // offset 0xB4, size 0x4
    } data; // r1+0x10

    // References
    // -> struct Game gTheGame;
}

// Range: 0x67F90 -> 0x67FE0
static void menuShowDialog(int nTagDialog /* r3 */, int iPlayer /* r1+0xC */) {
    // References
    // -> static int gnTickCountDialog;
    // -> static int giScreenMenu;
    // -> static int giPlayerDialog;
    // -> static int gnTagDialog;
}

// Range: 0x67FE0 -> 0x683CC
static void menuTickDialog(int iPlayer /* r27 */, int * anCommand /* r26 */) {
    // Local variables
    int bWave; // r26
    int nTag; // r25
    int nButton; // r1+0x14

    // References
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int gnSkipFrame;
    // -> static int gnCheatMenu;
    // -> @enum$105menu_c geTypeMenu;
    // -> static int gnTickCountDialog;
    // -> static int gnTagDialog;
    // -> static int giScreenMenu;
    // -> static int gnCountMenu;
    // -> static @enum$105menu_c gaeTypeMenu[32];
    // -> int gReset;
    // -> int gMain;
    // -> static int gaiName[4];
    // -> struct Game gTheGame;
    // -> static signed short ganName[7];
    // -> static int giName;
    // -> static int giPlayerDialog;
}

// Range: 0x683CC -> 0x68640
static int menuSetScreen(@enum$105menu_c eType /* r28 */, int bBack /* r25 */) {
    // Local variables
    int bFlag; // r1+0x8
    @enum$105menu_c eTypeLast; // r30
    struct {
        // total size: 0x18
        char * szName; // offset 0x0, size 0x4
        void (* pfInit)(int, @enum$105menu_c); // offset 0x4, size 0x4
        void (* pfDraw)(union {
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
        } * *, int, int); // offset 0x8, size 0x4
        void (* pfTick)(int, int, int *); // offset 0xC, size 0x4
        @enum$105menu_c eType; // offset 0x10, size 0x4
        @enum$105menu_c eTypeNext; // offset 0x14, size 0x4
    } * pMenuData; // r1+0x14
    int nPlayerCount; // r29
    int iScreen; // r3
    int iScreenMenu; // r1+0x10
    int nMode; // r26

    // References
    // -> static int gbAudioChanged;
    // -> static unsigned int anTagBlinkLast[4];
    // -> static int gnPlayerCount;
    // -> static int giScreenMenu;
    // -> static int giScreenMenuLast;
    // -> @enum$105menu_c geTypeMenu;
    // -> static int ganPick[4];
    // -> static unsigned int gnTickMenu;
}

static unsigned char aiFrameEye[5]; // size: 0x5, address: 0xB11A8
// Range: 0x68640 -> 0x6883C
int menuWinkFace(int nTagImage /* r28 */, int iScreen /* r29 */, int iPlayer /* r1+0x10 */) {
    // Local variables
    int bLast; // r30
    struct {
        // total size: 0xA0
        int iFrame; // offset 0x0, size 0x4
        int iObject; // offset 0x4, size 0x4
        signed short nSizeScan; // offset 0x8, size 0x2
        int nType; // offset 0xC, size 0x4
        int nTick; // offset 0x10, size 0x4
        int nTranslucent; // offset 0x14, size 0x4
        int nBitmapCount; // offset 0x18, size 0x4
        int * anPositionX; // offset 0x1C, size 0x4
        int * anPositionY; // offset 0x20, size 0x4
        int * anFrameDelay; // offset 0x24, size 0x4
        struct {
            // total size: 0xC
            int nData; // offset 0x0, size 0x4
            int nRGBA; // offset 0x4, size 0x4
            signed short nDeltaX; // offset 0x8, size 0x2
            signed short nDeltaY; // offset 0xA, size 0x2
        } * aScan; // offset 0x28, size 0x4
        struct {
            // total size: 0x1C
            int nType; // offset 0x0, size 0x4
            int nStride; // offset 0x4, size 0x4
            void * aPixel; // offset 0x8, size 0x4
            int nSizeX; // offset 0xC, size 0x4
            int nSizeY; // offset 0x10, size 0x4
            int nSizeOriginalX; // offset 0x14, size 0x4
            unsigned short * aColorPalette; // offset 0x18, size 0x4
        } * * apBitmap; // offset 0x2C, size 0x4
        void * apPixel[2]; // offset 0x30, size 0x8
        union {
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short tmemW; // offset 0x1C, size 0x2
                unsigned short tmemH; // offset 0x1E, size 0x2
                unsigned short tmemLoadSH; // offset 0x20, size 0x2
                unsigned short tmemLoadTH; // offset 0x22, size 0x2
                unsigned short tmemSizeW; // offset 0x24, size 0x2
                unsigned short tmemSize; // offset 0x26, size 0x2
            } b; // offset 0x0, size 0x28
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short scaleW; // offset 0x1C, size 0x2
                unsigned short scaleH; // offset 0x1E, size 0x2
                long imageYorig; // offset 0x20, size 0x4
                unsigned char padding[4]; // offset 0x24, size 0x4
            } s; // offset 0x0, size 0x28
            long long force_structure_alignment; // offset 0x0, size 0x8
        } aObject[2]; // offset 0x38, size 0x50
        int nScaleX; // offset 0x88, size 0x4
        int nScaleY; // offset 0x8C, size 0x4
        unsigned short nScrollX; // offset 0x90, size 0x2
        unsigned short nScrollY; // offset 0x92, size 0x2
        unsigned int nColor0; // offset 0x94, size 0x4
        unsigned int nColor1; // offset 0x98, size 0x4
    } * pImage; // r1+0x18
    int nTick; // r30
    int iFrame; // r1+0x14
    int nTagLast; // r27

    // References
    // -> static unsigned char aiFrameEye[5];
    // -> static unsigned int anTagBlinkLast[4];
}

// Range: 0x6883C -> 0x68890
static void menuInitOptions(int iScreen /* r1+0x8 */) {}

// Range: 0x68890 -> 0x68ECC
static void menuInitRound(int iScreen /* r23 */, @enum$105menu_c eTypeLast /* r24 */) {
    // Local variables
    char * pData; // r28
    int iName; // r4
    int iRound; // r27
    int nBase; // r26
    int nLevel; // r26
    int nTagLast; // r25

    // References
    // -> int gbOpenTitle;
    // -> struct Game gTheGame;
    // -> @enum$105menu_c geTypeMenu;
    // -> static int gaiName[4];
}

long last_sfx_handle; // size: 0x4, address: 0xF46F0
// Range: 0x68ECC -> 0x69164
static void menuTickRound(int iPlayer /* r27 */, int * anCommand /* r28 */) {
    // Local variables
    int iVoice; // r30
    int nTagArea; // r1+0x1C
    int nTagFace; // r29
    int iCursorX; // r1+0x18
    int iCursorY; // r1+0x14

    // References
    // -> static int giScreenMenu;
    // -> long last_sfx_handle;
    // -> @enum$105menu_c geTypeMenu;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
}

// Range: 0x69164 -> 0x691E4
static void menuTickController(int nFrame /* r29 */, int iPlayer /* r30 */, int * anCommand /* r31 */) {
    // References
    // -> struct Game gTheGame;
}

@enum$106menu_c;
// Range: 0x691E4 -> 0x692E8
static void menuLoad1PStandard(int iName /* r1+0x8 */, @enum$106menu_c eGame /* r1+0xC */) {
    // Local variables
    int iScreen; // r1+0x10
    unsigned int nData; // r31
    int iCursorX; // r5
    int iCursorY; // r6

    // References
    // -> struct Game gTheGame;
}

// Range: 0x692E8 -> 0x69428
static void menuSave1PStandard(int iName /* r29 */, @enum$106menu_c eGame /* r30 */) {
    // Local variables
    int iScreen; // r1+0x18
    unsigned int nData; // r31
    int iCursorX; // r1+0x14
    int iCursorY; // r1+0x10

    // References
    // -> struct Game gTheGame;
}

// Range: 0x69428 -> 0x695E0
static void menuTickCharacterSelect1P(int iPlayer /* r28 */, int * anCommand /* r27 */) {
    // Local variables
    struct {
        // total size: 0xA0
        int iFrame; // offset 0x0, size 0x4
        int iObject; // offset 0x4, size 0x4
        signed short nSizeScan; // offset 0x8, size 0x2
        int nType; // offset 0xC, size 0x4
        int nTick; // offset 0x10, size 0x4
        int nTranslucent; // offset 0x14, size 0x4
        int nBitmapCount; // offset 0x18, size 0x4
        int * anPositionX; // offset 0x1C, size 0x4
        int * anPositionY; // offset 0x20, size 0x4
        int * anFrameDelay; // offset 0x24, size 0x4
        struct {
            // total size: 0xC
            int nData; // offset 0x0, size 0x4
            int nRGBA; // offset 0x4, size 0x4
            signed short nDeltaX; // offset 0x8, size 0x2
            signed short nDeltaY; // offset 0xA, size 0x2
        } * aScan; // offset 0x28, size 0x4
        struct {
            // total size: 0x1C
            int nType; // offset 0x0, size 0x4
            int nStride; // offset 0x4, size 0x4
            void * aPixel; // offset 0x8, size 0x4
            int nSizeX; // offset 0xC, size 0x4
            int nSizeY; // offset 0x10, size 0x4
            int nSizeOriginalX; // offset 0x14, size 0x4
            unsigned short * aColorPalette; // offset 0x18, size 0x4
        } * * apBitmap; // offset 0x2C, size 0x4
        void * apPixel[2]; // offset 0x30, size 0x8
        union {
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short tmemW; // offset 0x1C, size 0x2
                unsigned short tmemH; // offset 0x1E, size 0x2
                unsigned short tmemLoadSH; // offset 0x20, size 0x2
                unsigned short tmemLoadTH; // offset 0x22, size 0x2
                unsigned short tmemSizeW; // offset 0x24, size 0x2
                unsigned short tmemSize; // offset 0x26, size 0x2
            } b; // offset 0x0, size 0x28
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short scaleW; // offset 0x1C, size 0x2
                unsigned short scaleH; // offset 0x1E, size 0x2
                long imageYorig; // offset 0x20, size 0x4
                unsigned char padding[4]; // offset 0x24, size 0x4
            } s; // offset 0x0, size 0x28
            long long force_structure_alignment; // offset 0x0, size 0x8
        } aObject[2]; // offset 0x38, size 0x50
        int nScaleX; // offset 0x88, size 0x4
        int nScaleY; // offset 0x8C, size 0x4
        unsigned short nScrollX; // offset 0x90, size 0x2
        unsigned short nScrollY; // offset 0x92, size 0x2
        unsigned int nColor0; // offset 0x94, size 0x4
        unsigned int nColor1; // offset 0x98, size 0x4
    } * pImage; // r1+0x1C
    int iCharacter; // r28
    int nTag; // r27
    int nTagWink; // r29
    int iCursorX; // r1+0x18
    int iCursorY; // r1+0x14

    // References
    // -> static int gaiName[4];
    // -> @enum$105menu_c geTypeMenu;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int giScreenMenu;
}

// Range: 0x695E0 -> 0x6979C
void menuPlayEffect2P(int nStage /* r1+0x8 */, int iPlayer /* r31 */) {
    // Local variables
    long hWave; // r3

    // References
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
}

static int gnCharacterMax; // size: 0x4, address: 0xF03EC
static int gnTickCharacter; // size: 0x4, address: 0xF03F0
static int gnSpecialCharacter; // size: 0x4, address: 0xF03F4
// Range: 0x6979C -> 0x69860
static void menuInitCharacterShow(int iScreen /* r30 */) {
    // Local variables
    int nTagArea; // r1+0x1C
    int iCursorX; // r1+0x18
    int iCursorY; // r1+0x14
    int iCharacter; // r31
    int iScreenLast; // r1+0x10

    // References
    // -> static int gnSpecialCharacter;
    // -> static int gnTickCharacter;
}

// Range: 0x69860 -> 0x69CC0
static void menuTickCharacterShow(int iPlayer /* r26 */, int * anCommand /* r27 */) {
    // Local variables
    int nTagArea; // r1+0x34
    int nTagText; // r25
    unsigned int nType; // r1+0x30
    int iCursorX; // r1+0x2C
    int iCursorY; // r1+0x28
    int iScreen; // r1+0x24
    int iCharacter; // r28
    int iCursorLastX; // r1+0x8
    int iCursorLastY; // r1+0x8

    // References
    // -> static int giScreenMenu;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int gnSkipFrame;
    // -> static int gnSpecialCharacter;
    // -> static int gnTickCharacter;
    // -> static int gnCheatMenu;
    // -> int gbOpenTitle;
    // -> static int gnCharacterMax;
}

// Range: 0x69CC0 -> 0x69EB0
static void menuLoad2P(int iName /* r1+0x8 */, @enum$106menu_c eGame /* r1+0xC */, int iPlayer /* r31 */) {
    // Local variables
    int iScreen; // r1+0x14
    int nTagArea; // r29
    char * szName; // r6
    unsigned int nData; // r29
    int iCursorX; // r5
    int iCursorY; // r28

    // References
    // -> struct Game gTheGame;
}

// Range: 0x69EB0 -> 0x6A064
static void menuSave2P(int iName /* r29 */, @enum$106menu_c eGame /* r30 */, int iPlayer /* r27 */) {
    // Local variables
    int iScreen; // r1+0x20
    int nTagArea; // r1+0x1C
    char * szName; // r4
    unsigned int nData; // r31
    int iCursorX; // r1+0x18
    int iCursorY; // r1+0x14

    // References
    // -> struct Game gTheGame;
}

// Range: 0x6A064 -> 0x6A24C
static void menuInitCharacterSelect2P(int iScreen /* r28 */) {
    // Local variables
    int iCharacter; // r30
    int nCharacter; // r1+0x14
    int iPlayer; // r30
    int nTagArea; // r1+0x10
    int iFrame; // r29

    // References
    // -> static int gnPlayerCount;
    // -> static int gnCharacterMax;
    // -> static int gnCheatMenu;
    // -> int gbOpenTitle;
    // -> static int gnSpecialCharacter;
}

// Range: 0x6A24C -> 0x6A58C
static void menuTickCharacterSelect2P(int iPlayer /* r21 */, int * anCommand /* r22 */) {
    // Local variables
    struct {
        // total size: 0xA0
        int iFrame; // offset 0x0, size 0x4
        int iObject; // offset 0x4, size 0x4
        signed short nSizeScan; // offset 0x8, size 0x2
        int nType; // offset 0xC, size 0x4
        int nTick; // offset 0x10, size 0x4
        int nTranslucent; // offset 0x14, size 0x4
        int nBitmapCount; // offset 0x18, size 0x4
        int * anPositionX; // offset 0x1C, size 0x4
        int * anPositionY; // offset 0x20, size 0x4
        int * anFrameDelay; // offset 0x24, size 0x4
        struct {
            // total size: 0xC
            int nData; // offset 0x0, size 0x4
            int nRGBA; // offset 0x4, size 0x4
            signed short nDeltaX; // offset 0x8, size 0x2
            signed short nDeltaY; // offset 0xA, size 0x2
        } * aScan; // offset 0x28, size 0x4
        struct {
            // total size: 0x1C
            int nType; // offset 0x0, size 0x4
            int nStride; // offset 0x4, size 0x4
            void * aPixel; // offset 0x8, size 0x4
            int nSizeX; // offset 0xC, size 0x4
            int nSizeY; // offset 0x10, size 0x4
            int nSizeOriginalX; // offset 0x14, size 0x4
            unsigned short * aColorPalette; // offset 0x18, size 0x4
        } * * apBitmap; // offset 0x2C, size 0x4
        void * apPixel[2]; // offset 0x30, size 0x8
        union {
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short tmemW; // offset 0x1C, size 0x2
                unsigned short tmemH; // offset 0x1E, size 0x2
                unsigned short tmemLoadSH; // offset 0x20, size 0x2
                unsigned short tmemLoadTH; // offset 0x22, size 0x2
                unsigned short tmemSizeW; // offset 0x24, size 0x2
                unsigned short tmemSize; // offset 0x26, size 0x2
            } b; // offset 0x0, size 0x28
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short scaleW; // offset 0x1C, size 0x2
                unsigned short scaleH; // offset 0x1E, size 0x2
                long imageYorig; // offset 0x20, size 0x4
                unsigned char padding[4]; // offset 0x24, size 0x4
            } s; // offset 0x0, size 0x28
            long long force_structure_alignment; // offset 0x0, size 0x8
        } aObject[2]; // offset 0x38, size 0x50
        int nScaleX; // offset 0x88, size 0x4
        int nScaleY; // offset 0x8C, size 0x4
        unsigned short nScrollX; // offset 0x90, size 0x2
        unsigned short nScrollY; // offset 0x92, size 0x2
        unsigned int nColor0; // offset 0x94, size 0x4
        unsigned int nColor1; // offset 0x98, size 0x4
    } * pImage; // r1+0x28
    int nStage; // r28
    int nTag; // r22
    @enum$106menu_c eGame; // r27
    int nCursorX; // r1+0x24
    int nCursorY; // r1+0x20
    int iCursorX; // r1+0x1C
    int iCursorY; // r1+0x18
    int nTagArea; // r1+0x14
    int nTagWink1; // r26
    int nTagWink2; // r25
    int nTagCursor1; // r24
    int nTagCursor2; // r23

    // References
    // -> static int gaiName[4];
    // -> @enum$105menu_c geTypeMenu;
    // -> static int ganPick[4];
    // -> static int giScreenMenu;
    // -> static int gnPlayerCount;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int gnCharacterMax;
}

// Range: 0x6A58C -> 0x6A6D0
static void pon_menuLoad4P(int iName /* r1+0x8 */, @enum$106menu_c eGame /* r1+0xC */, int iPlayer /* r29 */) {
    // Local variables
    int iScreen; // r1+0x1C
    int nTagArea; // r30
    unsigned int nData; // r28
    int iCursorX; // r5
    int iCursorY; // r27
    int nMSAT_Player; // r27
    int nMSAT_Level; // r30

    // References
    // -> struct Game gTheGame;
}

// Range: 0x6A6D0 -> 0x6A824
static void pon_menuSave4P(int iName /* r29 */, @enum$106menu_c eGame /* r30 */, int iPlayer /* r26 */) {
    // Local variables
    int iScreen; // r1+0x20
    int nTagArea; // r1+0x1C
    unsigned int nData; // r31
    int iCursorX; // r1+0x18
    int iCursorY; // r1+0x14
    int nMSAT_Player; // r28
    int nMSAT_Level; // r27

    // References
    // -> struct Game gTheGame;
}

int gnPlayer1Controll; // size: 0x4, address: 0xF4EBC
int gaMultiEntryFlag[4]; // size: 0x10, address: 0xF03F8
// Range: 0x6A824 -> 0x6AA58
static void pon_menuInitCharacterSelect4P(int iScreen /* r25 */) {
    // Local variables
    int iCharacter; // r24
    int nCharacter; // r1+0x24
    int iPlayer; // r24
    int nTagArea; // r1+0x20
    int iFrame; // r26
    int iCursorX; // r1+0x1C
    int iCursorY; // r1+0x18
    int nMSAT_Player; // r4

    // References
    // -> static int gnPlayerCount;
    // -> static int giScreenMenuLast;
    // -> static int ganPick[4];
    // -> int gaMultiEntryFlag[4];
    // -> int gaPlayerFor4PSetLevel[4][12];
    // -> struct Game gTheGame;
    // -> int gnPlayer1Controll;
    // -> static int gnCharacterMax;
    // -> static int gnSpecialCharacter;
}

unsigned long nBaseColorArray[16][4]; // size: 0x100, address: 0xB125C
union {
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
} tex_vtx[4][4]; // size: 0x100, address: 0xDD0
// Range: 0x6AA58 -> 0x6B004
static void pon_menuTickCharacterSelect4P(int iPlayer /* r29 */, int * anCommand /* r24 */) {
    // Local variables
    struct {
        // total size: 0xA0
        int iFrame; // offset 0x0, size 0x4
        int iObject; // offset 0x4, size 0x4
        signed short nSizeScan; // offset 0x8, size 0x2
        int nType; // offset 0xC, size 0x4
        int nTick; // offset 0x10, size 0x4
        int nTranslucent; // offset 0x14, size 0x4
        int nBitmapCount; // offset 0x18, size 0x4
        int * anPositionX; // offset 0x1C, size 0x4
        int * anPositionY; // offset 0x20, size 0x4
        int * anFrameDelay; // offset 0x24, size 0x4
        struct {
            // total size: 0xC
            int nData; // offset 0x0, size 0x4
            int nRGBA; // offset 0x4, size 0x4
            signed short nDeltaX; // offset 0x8, size 0x2
            signed short nDeltaY; // offset 0xA, size 0x2
        } * aScan; // offset 0x28, size 0x4
        struct {
            // total size: 0x1C
            int nType; // offset 0x0, size 0x4
            int nStride; // offset 0x4, size 0x4
            void * aPixel; // offset 0x8, size 0x4
            int nSizeX; // offset 0xC, size 0x4
            int nSizeY; // offset 0x10, size 0x4
            int nSizeOriginalX; // offset 0x14, size 0x4
            unsigned short * aColorPalette; // offset 0x18, size 0x4
        } * * apBitmap; // offset 0x2C, size 0x4
        void * apPixel[2]; // offset 0x30, size 0x8
        union {
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short tmemW; // offset 0x1C, size 0x2
                unsigned short tmemH; // offset 0x1E, size 0x2
                unsigned short tmemLoadSH; // offset 0x20, size 0x2
                unsigned short tmemLoadTH; // offset 0x22, size 0x2
                unsigned short tmemSizeW; // offset 0x24, size 0x2
                unsigned short tmemSize; // offset 0x26, size 0x2
            } b; // offset 0x0, size 0x28
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short scaleW; // offset 0x1C, size 0x2
                unsigned short scaleH; // offset 0x1E, size 0x2
                long imageYorig; // offset 0x20, size 0x4
                unsigned char padding[4]; // offset 0x24, size 0x4
            } s; // offset 0x0, size 0x28
            long long force_structure_alignment; // offset 0x0, size 0x8
        } aObject[2]; // offset 0x38, size 0x50
        int nScaleX; // offset 0x88, size 0x4
        int nScaleY; // offset 0x8C, size 0x4
        unsigned short nScrollX; // offset 0x90, size 0x2
        unsigned short nScrollY; // offset 0x92, size 0x2
        unsigned int nColor0; // offset 0x94, size 0x4
        unsigned int nColor1; // offset 0x98, size 0x4
    } * pImage; // r1+0x30
    int nStage; // r31
    int nTag; // r18
    @enum$106menu_c eGame; // r30
    int iCursorX; // r1+0x2C
    int iCursorY; // r1+0x28
    int nTagArea; // r1+0x24
    int nTagWink[4]; // r1+0x14
    int num; // r18
    int nGrayOutFlag; // r5
    int nWinkCheck; // r20

    // References
    // -> static int gaiName[4];
    // -> static @enum$105menu_c geGameType;
    // -> @enum$105menu_c geTypeMenu;
    // -> static int ganPick[4];
    // -> static int giScreenMenu;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int gnCharacterMax;
    // -> unsigned long nBaseColorArray[16][4];
    // -> union [anonymous] tex_vtx[4][4];
    // -> int gaMultiEntryFlag[4];
}

static @enum$354menu_c eStageLast$1434; // size: 0x4, address: 0xF0408
// Range: 0x6B004 -> 0x6B1F0
static void menuTick1PVS_Resume(int iScreen /* r31 */, int bFlag /* r1+0xC */) {
    // Local variables
    int iCursorX; // r1+0x14
    int iCursorY; // r1+0x10
    @enum$354menu_c eStage; // r29

    // References
    // -> static @enum$354menu_c eStageLast$1434;
    // -> static int gbHideResume;
}

// Range: 0x6B1F0 -> 0x6B480
static void menuTick1PVS(int nFrame /* r27 */, int iPlayer /* r30 */, int * anCommand /* r31 */) {
    // Local variables
    int nTag; // r1+0x28
    int iButton; // r28
    int iCursorX; // r1+0x24
    int iCursorY; // r1+0x20

    // References
    // -> struct Game gTheGame;
    // -> static int gaiName[4];
    // -> static int giScreenMenu;
}

// Range: 0x6B480 -> 0x6B880
static void menuInit1PVS(int iScreen /* r31 */) {
    // Local variables
    int nTag; // r1+0x24
    int iCursorX; // r1+0x20
    int iCursorY; // r1+0x1C

    // References
    // -> struct Game gTheGame;
    // -> static int gaiName[4];
    // -> static int gnCheatMenu;
    // -> int gbOpenTitle;
}

static int ganAnchorXY[20]; // size: 0x50, address: 0xB1364
// Range: 0x6B880 -> 0x6BDF0
static void menuDrawRound(union {
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
} * * ppGfx /* r27 */, int nTag /* r24 */) {
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
    } * pGfx; // r1+0x24
    int nOffset; // r1+0x1C
    char * acData; // r30
    struct {
        // total size: 0x1C
        int nType; // offset 0x0, size 0x4
        int nStride; // offset 0x4, size 0x4
        void * aPixel; // offset 0x8, size 0x4
        int nSizeX; // offset 0xC, size 0x4
        int nSizeY; // offset 0x10, size 0x4
        int nSizeOriginalX; // offset 0x14, size 0x4
        unsigned short * aColorPalette; // offset 0x18, size 0x4
    } * pBitmap; // r3
    @enum$105menu_c eTypeMenu; // r1+0x8
    int nX; // r8
    int nY; // r1+0x8
    int nAnchorX; // r29
    int nAnchorY; // r28
    int iName; // r4
    int iLevel; // r25
    int iData; // r6
    char acDataPuzzle[2]; // r1+0x14
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

    // References
    // -> static struct [anonymous] * gpImageCheck;
    // -> static struct [anonymous] * gpImageMark;
    // -> struct Game gTheGame;
    // -> static int gbGame3D;
    // -> static int gaiName[4];
    // -> static int ganAnchorXY[20];
    // -> @enum$105menu_c geTypeMenu;
    // -> static int gnCountMenu;
    // -> static @enum$105menu_c gaeTypeMenu[32];
}

// Range: 0x6BDF0 -> 0x6C280
static void menuInit1PPuzzle(int iScreen /* r31 */) {
    // Local variables
    int iCursorX; // r1+0x18
    int iCursorY; // r1+0x14

    // References
    // -> struct Game gTheGame;
    // -> static int gaiName[4];
}

// Range: 0x6C280 -> 0x6C540
static void menuTick1PPuzzle(int nFrame /* r28 */, int iPlayer /* r30 */, int * anCommand /* r29 */) {
    // Local variables
    int nTagArea; // r1+0x2C
    int iCursorX; // r1+0x28
    int iCursorY; // r1+0x24

    // References
    // -> struct Game gTheGame;
    // -> static int gaiName[4];
    // -> static int giScreenMenu;
}

static int iCursorLastX$1759; // size: 0x4, address: 0xF040C
// Range: 0x6C540 -> 0x6C888
static void menuTick1P2D3D_Resume(int iScreen /* r30 */, int bFlag /* r7 */) {
    // Local variables
    int iName; // r29
    int iData; // r6
    int iCursorX; // r1+0x14
    int iCursorY; // r1+0x10

    // References
    // -> static int iCursorLastX$1759;
    // -> static int gbHideResume;
    // -> struct Game gTheGame;
    // -> static int giScreenMenu;
    // -> static int gaiName[4];
}

// Range: 0x6C888 -> 0x6CA98
static void menuTick1P2D3D(int nFrame /* r28 */, int iPlayer /* r29 */, int * anCommand /* r30 */) {
    // Local variables
    int nTag; // r1+0x2C
    struct {
        // total size: 0xA0
        int iFrame; // offset 0x0, size 0x4
        int iObject; // offset 0x4, size 0x4
        signed short nSizeScan; // offset 0x8, size 0x2
        int nType; // offset 0xC, size 0x4
        int nTick; // offset 0x10, size 0x4
        int nTranslucent; // offset 0x14, size 0x4
        int nBitmapCount; // offset 0x18, size 0x4
        int * anPositionX; // offset 0x1C, size 0x4
        int * anPositionY; // offset 0x20, size 0x4
        int * anFrameDelay; // offset 0x24, size 0x4
        struct {
            // total size: 0xC
            int nData; // offset 0x0, size 0x4
            int nRGBA; // offset 0x4, size 0x4
            signed short nDeltaX; // offset 0x8, size 0x2
            signed short nDeltaY; // offset 0xA, size 0x2
        } * aScan; // offset 0x28, size 0x4
        struct {
            // total size: 0x1C
            int nType; // offset 0x0, size 0x4
            int nStride; // offset 0x4, size 0x4
            void * aPixel; // offset 0x8, size 0x4
            int nSizeX; // offset 0xC, size 0x4
            int nSizeY; // offset 0x10, size 0x4
            int nSizeOriginalX; // offset 0x14, size 0x4
            unsigned short * aColorPalette; // offset 0x18, size 0x4
        } * * apBitmap; // offset 0x2C, size 0x4
        void * apPixel[2]; // offset 0x30, size 0x8
        union {
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short tmemW; // offset 0x1C, size 0x2
                unsigned short tmemH; // offset 0x1E, size 0x2
                unsigned short tmemLoadSH; // offset 0x20, size 0x2
                unsigned short tmemLoadTH; // offset 0x22, size 0x2
                unsigned short tmemSizeW; // offset 0x24, size 0x2
                unsigned short tmemSize; // offset 0x26, size 0x2
            } b; // offset 0x0, size 0x28
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short scaleW; // offset 0x1C, size 0x2
                unsigned short scaleH; // offset 0x1E, size 0x2
                long imageYorig; // offset 0x20, size 0x4
                unsigned char padding[4]; // offset 0x24, size 0x4
            } s; // offset 0x0, size 0x28
            long long force_structure_alignment; // offset 0x0, size 0x8
        } aObject[2]; // offset 0x38, size 0x50
        int nScaleX; // offset 0x88, size 0x4
        int nScaleY; // offset 0x8C, size 0x4
        unsigned short nScrollX; // offset 0x90, size 0x2
        unsigned short nScrollY; // offset 0x92, size 0x2
        unsigned int nColor0; // offset 0x94, size 0x4
        unsigned int nColor1; // offset 0x98, size 0x4
    } * pImage; // r1+0x28
    int iCursorX; // r1+0x24
    int iCursorY; // r1+0x20

    // References
    // -> struct Game gTheGame;
    // -> static int gaiName[4];
    // -> static int giScreenMenu;
}

// Range: 0x6CA98 -> 0x6CB54
static void menuInit1P2D3D(int iScreen /* r31 */) {
    // References
    // -> struct Game gTheGame;
    // -> static int gaiName[4];
}

// Range: 0x6CB54 -> 0x6CC0C
static void menuInit1PXtra(int iScreen /* r31 */) {}

// Range: 0x6CC0C -> 0x6CCCC
static void menuTick1PXtra(int nFrame /* r29 */, int iPlayer /* r30 */, int * anCommand /* r31 */) {
    // References
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int giScreenMenu;
}

// Range: 0x6CCCC -> 0x6CD88
static void menuInit1PXtraTalk(int iScreen /* r30 */) {
    // Local variables
    int nTagText; // r31

    // References
    // -> struct Game gTheGame;
}

// Range: 0x6CD88 -> 0x6CE70
static void menuTick1PXtraTalk(int nFrame /* r27 */, int iPlayer /* r28 */, int * anCommand /* r30 */) {
    // Local variables
    int nTagText; // r29

    // References
    // -> static int giScreenMenu;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> struct Game gTheGame;
}

// Range: 0x6CE70 -> 0x6D120
static void menuInit1PClear(int iScreen /* r31 */) {
    // Local variables
    int * anTime; // r29
    int iScreenMode; // r1+0x18
    char nData; // r29
    char * anData; // r28
    int iCursorX; // r1+0x14
    int iCursorY; // r1+0x10
    int iName; // r28
    int iStage; // r1+0x8
    int iRound; // r27
    int iRoundLast; // r26
    int iStageLast; // r25
    int iStageBest; // r5

    // References
    // -> static int giScreenMenuLast;
    // -> struct Game gTheGame;
    // -> static int gbGame3D;
    // -> static int gaiName[4];
}

// Range: 0x6D120 -> 0x6D324
static void menuTick1PClear(int nFrame /* r27 */, int iPlayer /* r28 */, int * anCommand /* r29 */) {
    // Local variables
    char * anData; // r30
    int nTagArea; // r1+0x1C
    int iName; // r3
    int bFlag; // r4
    int iCursorX; // r1+0x18
    int iCursorY; // r1+0x14

    // References
    // -> static int giScreenMenu;
    // -> struct Game gTheGame;
    // -> static int gbGame3D;
    // -> static int gaiName[4];
}

// Range: 0x6D324 -> 0x6D388
static void menuInit1PStandard(int iScreen /* r31 */) {
    // References
    // -> static int gaiName[4];
    // -> @enum$105menu_c geTypeMenu;
}

// Range: 0x6D388 -> 0x6D4A0
static void menuDraw1PStandard(union {
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
} * * ppGfx /* r29 */, int iScreen /* r30 */, int nTag /* r1+0x10 */) {
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
    } * pGfx; // r31
    int iCursorX; // r1+0x18
    int iCursorY; // r1+0x14
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
    } * _g; // r3
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
    } * _g; // r5
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
    } * _g; // r5
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
    } * _g; // r5
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
    } * _g; // r5
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
    } * _g; // r7
}

// Range: 0x6D4A0 -> 0x6D67C
static void menuTick1PStandard(int nFrame /* r28 */, int iPlayer /* r29 */, int * anCommand /* r30 */) {
    // Local variables
    int nTag; // r1+0x20
    struct {
        // total size: 0xA0
        int iFrame; // offset 0x0, size 0x4
        int iObject; // offset 0x4, size 0x4
        signed short nSizeScan; // offset 0x8, size 0x2
        int nType; // offset 0xC, size 0x4
        int nTick; // offset 0x10, size 0x4
        int nTranslucent; // offset 0x14, size 0x4
        int nBitmapCount; // offset 0x18, size 0x4
        int * anPositionX; // offset 0x1C, size 0x4
        int * anPositionY; // offset 0x20, size 0x4
        int * anFrameDelay; // offset 0x24, size 0x4
        struct {
            // total size: 0xC
            int nData; // offset 0x0, size 0x4
            int nRGBA; // offset 0x4, size 0x4
            signed short nDeltaX; // offset 0x8, size 0x2
            signed short nDeltaY; // offset 0xA, size 0x2
        } * aScan; // offset 0x28, size 0x4
        struct {
            // total size: 0x1C
            int nType; // offset 0x0, size 0x4
            int nStride; // offset 0x4, size 0x4
            void * aPixel; // offset 0x8, size 0x4
            int nSizeX; // offset 0xC, size 0x4
            int nSizeY; // offset 0x10, size 0x4
            int nSizeOriginalX; // offset 0x14, size 0x4
            unsigned short * aColorPalette; // offset 0x18, size 0x4
        } * * apBitmap; // offset 0x2C, size 0x4
        void * apPixel[2]; // offset 0x30, size 0x8
        union {
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short tmemW; // offset 0x1C, size 0x2
                unsigned short tmemH; // offset 0x1E, size 0x2
                unsigned short tmemLoadSH; // offset 0x20, size 0x2
                unsigned short tmemLoadTH; // offset 0x22, size 0x2
                unsigned short tmemSizeW; // offset 0x24, size 0x2
                unsigned short tmemSize; // offset 0x26, size 0x2
            } b; // offset 0x0, size 0x28
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short scaleW; // offset 0x1C, size 0x2
                unsigned short scaleH; // offset 0x1E, size 0x2
                long imageYorig; // offset 0x20, size 0x4
                unsigned char padding[4]; // offset 0x24, size 0x4
            } s; // offset 0x0, size 0x28
            long long force_structure_alignment; // offset 0x0, size 0x8
        } aObject[2]; // offset 0x38, size 0x50
        int nScaleX; // offset 0x88, size 0x4
        int nScaleY; // offset 0x8C, size 0x4
        unsigned short nScrollX; // offset 0x90, size 0x2
        unsigned short nScrollY; // offset 0x92, size 0x2
        unsigned int nColor0; // offset 0x94, size 0x4
        unsigned int nColor1; // offset 0x98, size 0x4
    } * pImage; // r1+0x1C
    int iCursorX; // r1+0x18
    int iCursorY; // r1+0x14

    // References
    // -> static int gaiName[4];
    // -> @enum$105menu_c geTypeMenu;
    // -> static int giScreenMenu;
}

// Range: 0x6D67C -> 0x6D774
static void menuInit2PLevel(int iScreen /* r29 */) {
    // Local variables
    @enum$106menu_c eGame; // r30

    // References
    // -> struct Game gTheGame;
    // -> static int gaiName[4];
    // -> static @enum$105menu_c geGameType;
}

// Range: 0x6D774 -> 0x6DB58
static void menuTick2PLevel(int iPlayer /* r28 */, int * anCommand /* r29 */) {
    // Local variables
    int nTag; // r1+0x24
    int nRows; // r1+0x20
    int nColumns; // r1+0x1C
    @enum$106menu_c eGame; // r30
    int iCursorX; // r1+0x18
    int iCursorY; // r1+0x14

    // References
    // -> static int gaiName[4];
    // -> @enum$105menu_c geTypeMenu;
    // -> static int giScreenMenu;
    // -> static int gnTickFade;
    // -> static int gnSkipFrame;
    // -> static int ganPick[4];
}

int gValidCont_4pMenu; // size: 0x4, address: 0x116F88
unsigned char gValidControllers; // size: 0x1, address: 0x4CF60
// Range: 0x6DB58 -> 0x6DCEC
static void pon_menuInit4PLevel(int iScreen /* r29 */) {
    // Local variables
    @enum$106menu_c eGame; // r30

    // References
    // -> int gnPlayer1Controll;
    // -> unsigned char gValidControllers;
    // -> int gValidCont_4pMenu;
    // -> struct Game gTheGame;
    // -> static int gaiName[4];
    // -> static @enum$105menu_c geGameType;
}

// Range: 0x6DCEC -> 0x6DE7C
static void pon_menuTick4PLevel(int iPlayer /* r24 */, int * anCommand /* r25 */) {
    // Local variables
    @enum$106menu_c eGame; // r30
    int iCursorX; // r1+0x18
    int iCursorY; // r1+0x14
    int nMSAT_Player; // r23
    int nMSAT_Level; // r29
    int nMSTT_Level; // r28
    int nMSIT_Level; // r27
    int nMSIT_Player; // r26

    // References
    // -> static int gaiName[4];
    // -> static @enum$105menu_c geGameType;
    // -> static int giScreenMenu;
    // -> int gaPlayerFor4PSetLevel[4][12];
    // -> int gValidCont_4pMenu;
}

// Range: 0x6DE7C -> 0x6DEFC
static void menuInitSE2D3D() {
    // References
    // -> struct Game gTheGame;
    // -> static int gaiName[4];
}

// Range: 0x6DEFC -> 0x6E074
static void menuTickSE2D3D(int iPlayer /* r29 */, int * anCommand /* r30 */) {
    // Local variables
    int nTag; // r1+0x2C
    struct {
        // total size: 0xA0
        int iFrame; // offset 0x0, size 0x4
        int iObject; // offset 0x4, size 0x4
        signed short nSizeScan; // offset 0x8, size 0x2
        int nType; // offset 0xC, size 0x4
        int nTick; // offset 0x10, size 0x4
        int nTranslucent; // offset 0x14, size 0x4
        int nBitmapCount; // offset 0x18, size 0x4
        int * anPositionX; // offset 0x1C, size 0x4
        int * anPositionY; // offset 0x20, size 0x4
        int * anFrameDelay; // offset 0x24, size 0x4
        struct {
            // total size: 0xC
            int nData; // offset 0x0, size 0x4
            int nRGBA; // offset 0x4, size 0x4
            signed short nDeltaX; // offset 0x8, size 0x2
            signed short nDeltaY; // offset 0xA, size 0x2
        } * aScan; // offset 0x28, size 0x4
        struct {
            // total size: 0x1C
            int nType; // offset 0x0, size 0x4
            int nStride; // offset 0x4, size 0x4
            void * aPixel; // offset 0x8, size 0x4
            int nSizeX; // offset 0xC, size 0x4
            int nSizeY; // offset 0x10, size 0x4
            int nSizeOriginalX; // offset 0x14, size 0x4
            unsigned short * aColorPalette; // offset 0x18, size 0x4
        } * * apBitmap; // offset 0x2C, size 0x4
        void * apPixel[2]; // offset 0x30, size 0x8
        union {
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short tmemW; // offset 0x1C, size 0x2
                unsigned short tmemH; // offset 0x1E, size 0x2
                unsigned short tmemLoadSH; // offset 0x20, size 0x2
                unsigned short tmemLoadTH; // offset 0x22, size 0x2
                unsigned short tmemSizeW; // offset 0x24, size 0x2
                unsigned short tmemSize; // offset 0x26, size 0x2
            } b; // offset 0x0, size 0x28
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short scaleW; // offset 0x1C, size 0x2
                unsigned short scaleH; // offset 0x1E, size 0x2
                long imageYorig; // offset 0x20, size 0x4
                unsigned char padding[4]; // offset 0x24, size 0x4
            } s; // offset 0x0, size 0x28
            long long force_structure_alignment; // offset 0x0, size 0x8
        } aObject[2]; // offset 0x38, size 0x50
        int nScaleX; // offset 0x88, size 0x4
        int nScaleY; // offset 0x8C, size 0x4
        unsigned short nScrollX; // offset 0x90, size 0x2
        unsigned short nScrollY; // offset 0x92, size 0x2
        unsigned int nColor0; // offset 0x94, size 0x4
        unsigned int nColor1; // offset 0x98, size 0x4
    } * pImage; // r1+0x28
    int iCursorX; // r1+0x24
    int iCursorY; // r1+0x20

    // References
    // -> struct Game gTheGame;
    // -> static int gaiName[4];
    // -> static int giScreenMenu;
}

// Range: 0x6E074 -> 0x6E0CC
static void menuInitNamePick() {
    // References
    // -> struct Game gTheGame;
    // -> @enum$105menu_c geTypeMenu;
}

struct player_t * gPlayer[4]; // size: 0x10, address: 0x116F78
long last_song_handle; // size: 0x4, address: 0xF46E8
// Range: 0x6E0CC -> 0x6E5AC
static void menuTickNamePick(int iPlayer /* r27 */, int * anCommand /* r24 */) {
    // Local variables
    int iScreen; // r1+0x38
    int nTagArea; // r1+0x34
    int iName; // r23
    int bFlag; // r28
    int iCursorX; // r1+0x30
    int iCursorY; // r1+0x2C
    int nCursorX; // r1+0x28
    int nCursorY; // r1+0x24
    int iCursorX1; // r1+0x20
    int iCursorY1; // r1+0x1C
    int iCursorX2; // r1+0x18
    int iCursorY2; // r1+0x14
    int iPuzzle; // r23
    int bFull; // r24
    int bNone; // r25

    // References
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> long last_song_handle;
    // -> @enum$105menu_c geTypeMenu;
    // -> struct Game gTheGame;
    // -> struct player_t * gPlayer[4];
    // -> static int gaiName[4];
    // -> static int gnTickCountDialog;
    // -> static int giScreenMenu;
    // -> static int giPlayerDialog;
    // -> static int gnTagDialog;
    // -> static int giName;
    // -> static int gnPlayerCount;
}

// Range: 0x6E5AC -> 0x6E888
static void menuNameAdd(int nLanguage /* r26 */, int iCursorX /* r29 */, int iCursorY /* r27 */) {
    // Local variables
    unsigned int nCode; // r28
    unsigned int nFont; // r30

    // References
    // -> static signed short ganName[7];
    // -> static int giScreenMenu;
    // -> static int giName;
    // -> static @enum$104menu_c geLanguageMenu;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
}

// Range: 0x6E888 -> 0x6E9D0
static int menuDeadSpot(int nLanguage /* r1+0x0 */, int iCursorX /* r1+0x4 */, int iCursorY /* r1+0x8 */) {
    // References
    // -> static @enum$104menu_c geLanguageMenu;
}

// Range: 0x6E9D0 -> 0x6EDDC
static void menuTestNameEntryMove(int * anCommand /* r28 */) {
    // Local variables
    int nTagArea; // r1+0x20
    long hWave; // r28
    int nLanguage; // r30
    int nCount; // r29
    int iCursorX; // r1+0x1C
    int iCursorY; // r1+0x18

    // References
    // -> static int giScreenMenu;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
}

// Range: 0x6EDDC -> 0x6EE9C
static void menuInitNameEntry(int iScreen /* r29 */) {
    // References
    // -> static int gnCountNameEntry;
    // -> static signed short ganName[7];
    // -> static int giName;
}

static int nLanguageLast$2431; // size: 0x4, address: 0xB1410
// Range: 0x6EE9C -> 0x6F650
static void menuTickNameEntry(int nFrame /* r27 */, int iPlayer /* r26 */, int * anCommand /* r28 */) {
    // Local variables
    int nTagArea; // r1+0x1C
    int nLanguage; // r28
    int bFlag; // r27
    int iText; // r1+0x8
    int iCursorX; // r1+0x18
    int iCursorY; // r1+0x14

    // References
    // -> static int gnSkipFrame;
    // -> static int gnCountMenu;
    // -> static @enum$105menu_c gaeTypeMenu[32];
    // -> int gReset;
    // -> int gMain;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static signed short ganName[7];
    // -> static int giScreenMenu;
    // -> static int giName;
    // -> static int gnTickCountDialog;
    // -> static int giPlayerDialog;
    // -> static int gnTagDialog;
    // -> static int nLanguageLast$2431;
}

// Range: 0x6F650 -> 0x7040C
static void menuShowRecords(int iScreen /* r28 */) {
    // Local variables
    int iCursorX; // r1+0x2C
    int iCursorY; // r1+0x28
    int iSlot; // r30
    int iName; // r1+0x8
    int nTag; // r1+0x24
    int nCount; // r29
    int iFrame; // r5

    // References
    // -> static int giScreenMenu;
    // -> struct Game gTheGame;
    // -> static int gaiName[4];
    // -> static int gnCheatMenu;
    // -> int gbOpenTitle;
}

@enum$2697menu_c;
// Range: 0x7040C -> 0x7067C
static int menuFindRank(int * pnRank /* r1+0x8 */, int iName /* r1+0xC */, @enum$2697menu_c eType /* r1+0x10 */) {
    // Local variables
    int nRank; // r8
    int nSkip; // r9
    int iPlayer; // r9
    int bSwap; // r1+0x8
    int nData; // r5
    int iData0; // r9
    int iData1; // r5
    int anData[2][8]; // r1+0x14

    // References
    // -> struct Game gTheGame;
}

// Range: 0x7067C -> 0x7188C
static void menuUpdateRecords(int iScreen /* r29 */) {
    // Local variables
    int b3D; // r1+0x8
    int iSlot; // r17
    int iFrame; // r5
    struct player_t * pPlayer; // r1+0x8
    int nUpper; // r31
    int nLower; // r30
    signed short acName[7]; // r1+0x1C
    int nValue; // r1+0x18
    int nTag; // r1+0x14
    int iBit; // r6
    int iCursorX; // r1+0x10
    int iCursorY; // r1+0xC
    int iName; // r23
    int iNameH; // r22
    int iNameV; // r21
    int nCount; // r5
    int nCountH; // r20
    int nCountV; // r19

    // References
    // -> struct Game gTheGame;
    // -> static int giScreenMenu;
    // -> static int gaiName[4];
}

// Range: 0x7188C -> 0x718C0
static void menuInitRecords(int iScreen /* r31 */) {}

static int nTagLast$2925; // size: 0x4, address: 0xB1414
static int iCursorLastX$2926; // size: 0x4, address: 0xB1418
static int iCursorLastY$2927; // size: 0x4, address: 0xB141C
// Range: 0x718C0 -> 0x71B78
static void menuTickRecords(int nFrame /* r27 */, int iPlayer /* r28 */, int * anCommand /* r29 */) {
    // Local variables
    int iName; // r5
    struct {
        // total size: 0xA0
        int iFrame; // offset 0x0, size 0x4
        int iObject; // offset 0x4, size 0x4
        signed short nSizeScan; // offset 0x8, size 0x2
        int nType; // offset 0xC, size 0x4
        int nTick; // offset 0x10, size 0x4
        int nTranslucent; // offset 0x14, size 0x4
        int nBitmapCount; // offset 0x18, size 0x4
        int * anPositionX; // offset 0x1C, size 0x4
        int * anPositionY; // offset 0x20, size 0x4
        int * anFrameDelay; // offset 0x24, size 0x4
        struct {
            // total size: 0xC
            int nData; // offset 0x0, size 0x4
            int nRGBA; // offset 0x4, size 0x4
            signed short nDeltaX; // offset 0x8, size 0x2
            signed short nDeltaY; // offset 0xA, size 0x2
        } * aScan; // offset 0x28, size 0x4
        struct {
            // total size: 0x1C
            int nType; // offset 0x0, size 0x4
            int nStride; // offset 0x4, size 0x4
            void * aPixel; // offset 0x8, size 0x4
            int nSizeX; // offset 0xC, size 0x4
            int nSizeY; // offset 0x10, size 0x4
            int nSizeOriginalX; // offset 0x14, size 0x4
            unsigned short * aColorPalette; // offset 0x18, size 0x4
        } * * apBitmap; // offset 0x2C, size 0x4
        void * apPixel[2]; // offset 0x30, size 0x8
        union {
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short tmemW; // offset 0x1C, size 0x2
                unsigned short tmemH; // offset 0x1E, size 0x2
                unsigned short tmemLoadSH; // offset 0x20, size 0x2
                unsigned short tmemLoadTH; // offset 0x22, size 0x2
                unsigned short tmemSizeW; // offset 0x24, size 0x2
                unsigned short tmemSize; // offset 0x26, size 0x2
            } b; // offset 0x0, size 0x28
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short scaleW; // offset 0x1C, size 0x2
                unsigned short scaleH; // offset 0x1E, size 0x2
                long imageYorig; // offset 0x20, size 0x4
                unsigned char padding[4]; // offset 0x24, size 0x4
            } s; // offset 0x0, size 0x28
            long long force_structure_alignment; // offset 0x0, size 0x8
        } aObject[2]; // offset 0x38, size 0x50
        int nScaleX; // offset 0x88, size 0x4
        int nScaleY; // offset 0x8C, size 0x4
        unsigned short nScrollX; // offset 0x90, size 0x2
        unsigned short nScrollY; // offset 0x92, size 0x2
        unsigned int nColor0; // offset 0x94, size 0x4
        unsigned int nColor1; // offset 0x98, size 0x4
    } * pImage; // r1+0x20
    int nTag; // r1+0x1C
    int iCursorX; // r1+0x18
    int iCursorY; // r1+0x14

    // References
    // -> static int giScreenMenu;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int gaiName[4];
    // -> struct Game gTheGame;
    // -> static int iCursorLastY$2927;
    // -> static int iCursorLastX$2926;
    // -> static int nTagLast$2925;
}

// Range: 0x71B78 -> 0x71C3C
static void menuGetText(unsigned short * anText /* r1+0x0 */, int nValue /* r4 */) {
    // Local variables
    int nDigit; // r1+0x0
    int bFlag; // r5
}

@enum$2991menu_c;
static @enum$2991menu_c geMenuSignDisplay; // size: 0x4, address: 0xF0410
// Range: 0x71C3C -> 0x71CF4
static void menuInitPageSettings(int iScreen /* r31 */) {
    // Local variables
    unsigned short anText[33]; // r1+0x10

    // References
    // -> static @enum$2991menu_c geMenuSignDisplay;
    // -> unsigned short gGameStatus;
}

static int FirstGameSetting; // size: 0x4, address: 0xB1420
static unsigned short GameSettingState; // size: 0x2, address: 0xF0414
// Range: 0x71CF4 -> 0x7215C
static void menuTickPageSettings(int iPlayer /* r27 */, int * anCommand /* r28 */) {
    // Local variables
    int bFlag; // r29
    int iCursorX; // r1+0x58
    int iCursorY; // r1+0x54
    unsigned short anText[32]; // r1+0x14

    // References
    // -> static int giScreenMenu;
    // -> int gOverflowFlag;
    // -> static int gnControlCPU;
    // -> unsigned short gGameStatus;
    // -> static @enum$2991menu_c geMenuSignDisplay;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int FirstGameSetting;
    // -> static unsigned short GameSettingState;
    // -> static int gnSkipFrame;
}

// Range: 0x7215C -> 0x722E0
static void menuUpdateSound() {
    // Local variables
    int iScreen; // r1+0x48
    unsigned short anText[32]; // r1+0x8

    // References
    // -> static int giMenuTestMusic;
    // -> static int giMenuTestEffect;
    // -> static @enum$108menu_c geMenuSoundMute;
    // -> static @enum$107menu_c geMenuSoundType;
}

// Range: 0x722E0 -> 0x72580
static void menuTickPageSound(int iPlayer /* r28 */, int * anCommand /* r29 */) {
    // Local variables
    int bFlag; // r30
    int iCursorX; // r1+0x18
    int iCursorY; // r1+0x14

    // References
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int gnSkipFrame;
    // -> static int giMenuTestMusic;
    // -> static int gbAudioChanged;
    // -> static int giMenuTestEffect;
    // -> static @enum$108menu_c geMenuSoundMute;
    // -> static @enum$107menu_c geMenuSoundType;
    // -> static int giScreenMenu;
}

// Range: 0x72580 -> 0x72584
static void menuTickPageScreen() {}

int gDemo; // size: 0x4, address: 0xF4EAC
int gSelection; // size: 0x4, address: 0xF4E94
struct command_t {
    // total size: 0xC
    int function; // offset 0x0, size 0x4
    int para1; // offset 0x4, size 0x4
    int para2; // offset 0x8, size 0x4
};
struct ai_t {
    // total size: 0x128
    int cursor_x; // offset 0x0, size 0x4
    int cursor_y; // offset 0x4, size 0x4
    int think; // offset 0x8, size 0x4
    int speed; // offset 0xC, size 0x4
    int delay; // offset 0x10, size 0x4
    unsigned char character; // offset 0x14, size 0x1
    signed char choice; // offset 0x15, size 0x1
    int step; // offset 0x18, size 0x4
    int chain; // offset 0x1C, size 0x4
    int garbage; // offset 0x20, size 0x4
    int t; // offset 0x24, size 0x4
    int b; // offset 0x28, size 0x4
    int l; // offset 0x2C, size 0x4
    int r; // offset 0x30, size 0x4
    int direction; // offset 0x34, size 0x4
    int where; // offset 0x38, size 0x4
    int from; // offset 0x3C, size 0x4
    int to; // offset 0x40, size 0x4
    struct command_t command[15]; // offset 0x44, size 0xB4
    int com_head; // offset 0xF8, size 0x4
    int com_tail; // offset 0xFC, size 0x4
    int total_command; // offset 0x100, size 0x4
    char move[25]; // offset 0x104, size 0x19
    int move_head; // offset 0x120, size 0x4
    int move_tail; // offset 0x124, size 0x4
};
struct ai_t brainbrain[4]; // size: 0x4A0, address: 0x116AD0
// Range: 0x72584 -> 0x738F8
static void menuTickPlay(int * anCommand /* r1+0x10 */) {
    // Local variables
    int nTagArea; // r1+0x68
    int iName; // r1+0x8
    int bWipe; // r1+0x8
    int iCursorX; // r1+0x64
    int iCursorY; // r1+0x60
    int iScreen; // r1+0x5C
    int nDimension; // r25
    int nSpeed[4]; // r1+0x4C
    int nGame[4]; // r1+0x3C
    int nStage[4]; // r1+0x2C
    int nMisc[4]; // r1+0x1C
    int player; // r16
    int num; // r25

    // References
    // -> int gReset;
    // -> int gMain;
    // -> struct Game gTheGame;
    // -> int gSelection;
    // -> long last_song_handle;
    // -> static int gnCountMenu;
    // -> static int gn2D3D;
    // -> struct ai_t brainbrain[4];
    // -> int gaPlayerFor4PSetLevel[4][12];
    // -> static @enum$105menu_c geGameType;
    // -> static int gaiName[4];
    // -> @enum$105menu_c geTypeMenu;
    // -> static int gnControlCPU;
    // -> int gDemo;
    // -> struct player_t * gPlayer[4];
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static @enum$105menu_c gaeTypeMenu[32];
    // -> static int giScreenMenuLast;
}

static struct {
    // total size: 0x18
    char * szName; // offset 0x0, size 0x4
    void (* pfInit)(int, @enum$105menu_c); // offset 0x4, size 0x4
    void (* pfDraw)(union {
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
    } * *, int, int); // offset 0x8, size 0x4
    void (* pfTick)(int, int, int *); // offset 0xC, size 0x4
    @enum$105menu_c eType; // offset 0x10, size 0x4
    @enum$105menu_c eTypeNext; // offset 0x14, size 0x4
} gaMenuData[62]; // size: 0x5D0, address: 0xB1640
// Range: 0x738F8 -> 0x73948
static int menuFind(struct {
    // total size: 0x18
    char * szName; // offset 0x0, size 0x4
    void (* pfInit)(int, @enum$105menu_c); // offset 0x4, size 0x4
    void (* pfDraw)(union {
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
    } * *, int, int); // offset 0x8, size 0x4
    void (* pfTick)(int, int, int *); // offset 0xC, size 0x4
    @enum$105menu_c eType; // offset 0x10, size 0x4
    @enum$105menu_c eTypeNext; // offset 0x14, size 0x4
} * * ppData /* r1+0x0 */, @enum$105menu_c eType /* r1+0x4 */) {
    // Local variables
    int iMenu; // r6

    // References
    // -> static struct [anonymous] gaMenuData[62];
}

// Range: 0x73948 -> 0x73968
static void menuLoadData() {}

static unsigned char _cache$3481[16384]; // size: 0x4000, address: 0xF0420
// Range: 0x73968 -> 0x73D48
int menuLoadDataMain() {
    // Local variables
    struct {
        // total size: 0xB8
        unsigned int iSlot; // offset 0x0, size 0x4
        unsigned int nMark; // offset 0x4, size 0x4
        unsigned int nCheat1; // offset 0x8, size 0x4
        unsigned int nCheat2; // offset 0xC, size 0x4
        unsigned int nSizePut; // offset 0x10, size 0x4
        unsigned int nMaskSlot; // offset 0x14, size 0x4
        unsigned short nStatus; // offset 0x18, size 0x2
        unsigned int nControl; // offset 0x1C, size 0x4
        unsigned int nOverflow; // offset 0x20, size 0x4
        @enum$107menu_c eSoundType; // offset 0x24, size 0x4
        @enum$108menu_c eSoundMute; // offset 0x28, size 0x4
        int aiSlot[8]; // offset 0x2C, size 0x20
        unsigned short anName[8][6]; // offset 0x4C, size 0x60
        unsigned int nSize1; // offset 0xAC, size 0x4
        unsigned int nSize0; // offset 0xB0, size 0x4
        unsigned int nCode; // offset 0xB4, size 0x4
    } data; // r1+0x10
    int iSlot; // r27
    int iUser; // r26
    int iName; // r26
    int iScreen; // r1+0xC

    // References
    // -> struct Game gTheGame;
    // -> static signed short ganName[7];
    // -> static int gnControlCPU;
    // -> int gOverflowFlag;
    // -> unsigned short gGameStatus;
    // -> static @enum$108menu_c geMenuSoundMute;
    // -> static @enum$107menu_c geMenuSoundType;
    // -> int gbOpenTitle;
    // -> static int gnCheatMenu;
    // -> static unsigned char _cache$3481[16384];
}

// Range: 0x73D48 -> 0x73D6C
int menuSaveData(int iPlayer /* r3 */) {}

// Range: 0x73D6C -> 0x73DD0
int menuSaveDataMain(int iPlayer /* r31 */) {
    // Local variables
    struct {
        // total size: 0xB8
        unsigned int iSlot; // offset 0x0, size 0x4
        unsigned int nMark; // offset 0x4, size 0x4
        unsigned int nCheat1; // offset 0x8, size 0x4
        unsigned int nCheat2; // offset 0xC, size 0x4
        unsigned int nSizePut; // offset 0x10, size 0x4
        unsigned int nMaskSlot; // offset 0x14, size 0x4
        unsigned short nStatus; // offset 0x18, size 0x2
        unsigned int nControl; // offset 0x1C, size 0x4
        unsigned int nOverflow; // offset 0x20, size 0x4
        @enum$107menu_c eSoundType; // offset 0x24, size 0x4
        @enum$108menu_c eSoundMute; // offset 0x28, size 0x4
        int aiSlot[8]; // offset 0x2C, size 0x20
        unsigned short anName[8][6]; // offset 0x4C, size 0x60
        unsigned int nSize1; // offset 0xAC, size 0x4
        unsigned int nSize0; // offset 0xB0, size 0x4
        unsigned int nCode; // offset 0xB4, size 0x4
    } data; // r1+0xC
}

// Range: 0x73DD0 -> 0x74B6C
static void menuRestore(@enum$105menu_c eType /* r29 */) {
    // Local variables
    int nTagArea; // r21
    int iCursorX; // r21
    int iCursorY; // r22
    int iScreen; // r1+0x18
    int nDimension; // r20
    int nSpeed1; // r25
    int nGame1; // r28
    int nStage1; // r30
    int nPlayer1; // r1+0x1C
    int nSpeed2; // r19
    int nStage2; // r26
    int nPlayer2; // r14
    int nSpeed3; // r15
    int nStage3; // r23
    int nPlayer3; // r16
    int nSpeed4; // r17
    int nStage4; // r24
    int nPlayer4; // r18

    // References
    // -> static int gnSkipFrame;
    // -> static int gnCountMenu;
    // -> static @enum$105menu_c geGameType;
    // -> struct Game gTheGame;
    // -> static int gn2D3D;
}

int gDoMenu4pFlag; // size: 0x4, address: 0xF4EB8
// Range: 0x74B6C -> 0x7516C
static int menuMany() {
    // Local variables
    int nTagArea; // r1+0x14
    @enum$105menu_c eType; // r30
    int iCursorX; // r1+0x10
    int iCursorY; // r1+0xC

    // References
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int gnTickCountDialog;
    // -> static int giScreenMenu;
    // -> static int giPlayerDialog;
    // -> static int gnTagDialog;
    // -> struct Game gTheGame;
    // -> int gDoMenu4pFlag;
    // -> unsigned char gValidControllers;
    // -> static @enum$105menu_c geGameType;
    // -> @enum$105menu_c geTypeMenu;
}

// Range: 0x7516C -> 0x752D4
static void menuTickTimeout() {
    // Local variables
    int iVoice; // r30

    // References
    // -> static int gnMaskVoice;
    // -> static int gnTickCountMenu;
    // -> static int gnSkipFrame;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> struct Game gTheGame;
}

// Range: 0x752D4 -> 0x753CC
static void menuPlayOK(int iPlayer /* r1+0x8 */) {
    // Local variables
    int nTag; // r1+0xC

    // References
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> @enum$105menu_c geTypeMenu;
    // -> static int giScreenMenu;
    // -> static int gnPlayerCount;
}

// Range: 0x753CC -> 0x75820
static void menuPlayCursorWave(int iScreen /* r29 */, int iPlayer /* r30 */, int * anCommand /* r28 */) {
    // Local variables
    long hWave; // r3
    int nTag; // r1+0x28
    int iCursorX; // r1+0x24
    int iCursorY; // r1+0x20

    // References
    // -> @enum$105menu_c geTypeMenu;
    // -> static int gnPlayerCount;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int giScreenMenu;
    // -> static int gnCountNameEntry;
    // -> static int gnSkipFrame;
}

// Range: 0x75820 -> 0x75A44
int menuInitUser(int iUser /* r1+0x8 */) {
    // Local variables
    struct player_t * pPlayer; // r30

    // References
    // -> struct Game gTheGame;
}

unsigned int ganColorCharacter[68]; // size: 0x110, address: 0xB1DC0
char * * gaSegmentCharacter[17]; // size: 0x44, address: 0xB1ED0
static int giImageFairy; // size: 0x4, address: 0xF4420
static struct {
    // total size: 0xA0
    int iFrame; // offset 0x0, size 0x4
    int iObject; // offset 0x4, size 0x4
    signed short nSizeScan; // offset 0x8, size 0x2
    int nType; // offset 0xC, size 0x4
    int nTick; // offset 0x10, size 0x4
    int nTranslucent; // offset 0x14, size 0x4
    int nBitmapCount; // offset 0x18, size 0x4
    int * anPositionX; // offset 0x1C, size 0x4
    int * anPositionY; // offset 0x20, size 0x4
    int * anFrameDelay; // offset 0x24, size 0x4
    struct {
        // total size: 0xC
        int nData; // offset 0x0, size 0x4
        int nRGBA; // offset 0x4, size 0x4
        signed short nDeltaX; // offset 0x8, size 0x2
        signed short nDeltaY; // offset 0xA, size 0x2
    } * aScan; // offset 0x28, size 0x4
    struct {
        // total size: 0x1C
        int nType; // offset 0x0, size 0x4
        int nStride; // offset 0x4, size 0x4
        void * aPixel; // offset 0x8, size 0x4
        int nSizeX; // offset 0xC, size 0x4
        int nSizeY; // offset 0x10, size 0x4
        int nSizeOriginalX; // offset 0x14, size 0x4
        unsigned short * aColorPalette; // offset 0x18, size 0x4
    } * * apBitmap; // offset 0x2C, size 0x4
    void * apPixel[2]; // offset 0x30, size 0x8
    union {
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short tmemW; // offset 0x1C, size 0x2
            unsigned short tmemH; // offset 0x1E, size 0x2
            unsigned short tmemLoadSH; // offset 0x20, size 0x2
            unsigned short tmemLoadTH; // offset 0x22, size 0x2
            unsigned short tmemSizeW; // offset 0x24, size 0x2
            unsigned short tmemSize; // offset 0x26, size 0x2
        } b; // offset 0x0, size 0x28
        struct {
            // total size: 0x28
            unsigned short imageX; // offset 0x0, size 0x2
            unsigned short imageW; // offset 0x2, size 0x2
            signed short frameX; // offset 0x4, size 0x2
            unsigned short frameW; // offset 0x6, size 0x2
            unsigned short imageY; // offset 0x8, size 0x2
            unsigned short imageH; // offset 0xA, size 0x2
            signed short frameY; // offset 0xC, size 0x2
            unsigned short frameH; // offset 0xE, size 0x2
            unsigned long long * imagePtr; // offset 0x10, size 0x4
            unsigned short imageLoad; // offset 0x14, size 0x2
            unsigned char imageFmt; // offset 0x16, size 0x1
            unsigned char imageSiz; // offset 0x17, size 0x1
            unsigned short imagePal; // offset 0x18, size 0x2
            unsigned short imageFlip; // offset 0x1A, size 0x2
            unsigned short scaleW; // offset 0x1C, size 0x2
            unsigned short scaleH; // offset 0x1E, size 0x2
            long imageYorig; // offset 0x20, size 0x4
            unsigned char padding[4]; // offset 0x24, size 0x4
        } s; // offset 0x0, size 0x28
        long long force_structure_alignment; // offset 0x0, size 0x8
    } aObject[2]; // offset 0x38, size 0x50
    int nScaleX; // offset 0x88, size 0x4
    int nScaleY; // offset 0x8C, size 0x4
    unsigned short nScrollX; // offset 0x90, size 0x2
    unsigned short nScrollY; // offset 0x92, size 0x2
    unsigned int nColor0; // offset 0x94, size 0x4
    unsigned int nColor1; // offset 0x98, size 0x4
} * gapImageFairy[2]; // size: 0x8, address: 0xF4424
char * Pon_Image_Heap; // size: 0x4, address: 0x184
// Range: 0x75A44 -> 0x75B6C
void menuInitProfile(int iScreen /* r29 */, int iCharacter /* r30 */) {
    // Local variables
    void * pHeap; // r31
    int nOffsetData; // r1+0x14
    int nOffsetCLUT; // r1+0x10

    // References
    // -> char * Pon_Image_Heap;
    // -> static int giImageFairy;
    // -> static struct [anonymous] * gapImageFairy[2];
    // -> char * * gaSegmentCharacter[17];
}

// Range: 0x75B6C -> 0x75C64
void menuTickProfile(int iScreen /* r26 */, int iCharacter /* r4 */) {
    // Local variables
    int nTagText; // r27
    struct {
        // total size: 0xA0
        int iFrame; // offset 0x0, size 0x4
        int iObject; // offset 0x4, size 0x4
        signed short nSizeScan; // offset 0x8, size 0x2
        int nType; // offset 0xC, size 0x4
        int nTick; // offset 0x10, size 0x4
        int nTranslucent; // offset 0x14, size 0x4
        int nBitmapCount; // offset 0x18, size 0x4
        int * anPositionX; // offset 0x1C, size 0x4
        int * anPositionY; // offset 0x20, size 0x4
        int * anFrameDelay; // offset 0x24, size 0x4
        struct {
            // total size: 0xC
            int nData; // offset 0x0, size 0x4
            int nRGBA; // offset 0x4, size 0x4
            signed short nDeltaX; // offset 0x8, size 0x2
            signed short nDeltaY; // offset 0xA, size 0x2
        } * aScan; // offset 0x28, size 0x4
        struct {
            // total size: 0x1C
            int nType; // offset 0x0, size 0x4
            int nStride; // offset 0x4, size 0x4
            void * aPixel; // offset 0x8, size 0x4
            int nSizeX; // offset 0xC, size 0x4
            int nSizeY; // offset 0x10, size 0x4
            int nSizeOriginalX; // offset 0x14, size 0x4
            unsigned short * aColorPalette; // offset 0x18, size 0x4
        } * * apBitmap; // offset 0x2C, size 0x4
        void * apPixel[2]; // offset 0x30, size 0x8
        union {
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short tmemW; // offset 0x1C, size 0x2
                unsigned short tmemH; // offset 0x1E, size 0x2
                unsigned short tmemLoadSH; // offset 0x20, size 0x2
                unsigned short tmemLoadTH; // offset 0x22, size 0x2
                unsigned short tmemSizeW; // offset 0x24, size 0x2
                unsigned short tmemSize; // offset 0x26, size 0x2
            } b; // offset 0x0, size 0x28
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short scaleW; // offset 0x1C, size 0x2
                unsigned short scaleH; // offset 0x1E, size 0x2
                long imageYorig; // offset 0x20, size 0x4
                unsigned char padding[4]; // offset 0x24, size 0x4
            } s; // offset 0x0, size 0x28
            long long force_structure_alignment; // offset 0x0, size 0x8
        } aObject[2]; // offset 0x38, size 0x50
        int nScaleX; // offset 0x88, size 0x4
        int nScaleY; // offset 0x8C, size 0x4
        unsigned short nScrollX; // offset 0x90, size 0x2
        unsigned short nScrollY; // offset 0x92, size 0x2
        unsigned int nColor0; // offset 0x94, size 0x4
        unsigned int nColor1; // offset 0x98, size 0x4
    } * pImage; // r1+0x10

    // References
    // -> unsigned int ganColorCharacter[68];
}

// Range: 0x75C64 -> 0x75DBC
void menuDrawProfile(union {
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
} * * ppGfx /* r4 */, int nTag /* r1+0x10 */) {
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
    } * pGfx; // r3
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
    } * _g; // r3
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
    } * _g; // r7
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
    } * _g; // r10
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
    } * _g; // r11
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
    } * _g; // r3
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
    } * _g; // r3
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
    } * _g; // r8
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
    } * _g; // r3
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
    } * _g; // r7
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
    } * _g; // r8

    // References
    // -> static int giImageFairy;
    // -> static struct [anonymous] * gapImageFairy[2];
}

static int gnPositionFairyX; // size: 0x4, address: 0xF442C
static int gnPositionFairyY; // size: 0x4, address: 0xF4430
static int ganOffsetFairy[8]; // size: 0x20, address: 0xF4434
@enum$95menu_c;
// Range: 0x75DBC -> 0x75E4C
void menuInitFairy(@enum$95menu_c ePosition /* r1+0x0 */) {
    // References
    // -> static int gnPositionFairyY;
    // -> static int gnPositionFairyX;
}

// Range: 0x75E4C -> 0x762EC
void menuTickFairy(int iScreen /* r25 */, int nFrame /* r28 */, int nTagText /* r1+0x10 */, int nOffsetText /* r26 */, int nOffsetBox /* r29 */, @enum$95menu_c ePosition /* r1+0x1C */, int bArrow /* r27 */) {
    // Local variables
    struct {
        // total size: 0xA0
        int iFrame; // offset 0x0, size 0x4
        int iObject; // offset 0x4, size 0x4
        signed short nSizeScan; // offset 0x8, size 0x2
        int nType; // offset 0xC, size 0x4
        int nTick; // offset 0x10, size 0x4
        int nTranslucent; // offset 0x14, size 0x4
        int nBitmapCount; // offset 0x18, size 0x4
        int * anPositionX; // offset 0x1C, size 0x4
        int * anPositionY; // offset 0x20, size 0x4
        int * anFrameDelay; // offset 0x24, size 0x4
        struct {
            // total size: 0xC
            int nData; // offset 0x0, size 0x4
            int nRGBA; // offset 0x4, size 0x4
            signed short nDeltaX; // offset 0x8, size 0x2
            signed short nDeltaY; // offset 0xA, size 0x2
        } * aScan; // offset 0x28, size 0x4
        struct {
            // total size: 0x1C
            int nType; // offset 0x0, size 0x4
            int nStride; // offset 0x4, size 0x4
            void * aPixel; // offset 0x8, size 0x4
            int nSizeX; // offset 0xC, size 0x4
            int nSizeY; // offset 0x10, size 0x4
            int nSizeOriginalX; // offset 0x14, size 0x4
            unsigned short * aColorPalette; // offset 0x18, size 0x4
        } * * apBitmap; // offset 0x2C, size 0x4
        void * apPixel[2]; // offset 0x30, size 0x8
        union {
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short tmemW; // offset 0x1C, size 0x2
                unsigned short tmemH; // offset 0x1E, size 0x2
                unsigned short tmemLoadSH; // offset 0x20, size 0x2
                unsigned short tmemLoadTH; // offset 0x22, size 0x2
                unsigned short tmemSizeW; // offset 0x24, size 0x2
                unsigned short tmemSize; // offset 0x26, size 0x2
            } b; // offset 0x0, size 0x28
            struct {
                // total size: 0x28
                unsigned short imageX; // offset 0x0, size 0x2
                unsigned short imageW; // offset 0x2, size 0x2
                signed short frameX; // offset 0x4, size 0x2
                unsigned short frameW; // offset 0x6, size 0x2
                unsigned short imageY; // offset 0x8, size 0x2
                unsigned short imageH; // offset 0xA, size 0x2
                signed short frameY; // offset 0xC, size 0x2
                unsigned short frameH; // offset 0xE, size 0x2
                unsigned long long * imagePtr; // offset 0x10, size 0x4
                unsigned short imageLoad; // offset 0x14, size 0x2
                unsigned char imageFmt; // offset 0x16, size 0x1
                unsigned char imageSiz; // offset 0x17, size 0x1
                unsigned short imagePal; // offset 0x18, size 0x2
                unsigned short imageFlip; // offset 0x1A, size 0x2
                unsigned short scaleW; // offset 0x1C, size 0x2
                unsigned short scaleH; // offset 0x1E, size 0x2
                long imageYorig; // offset 0x20, size 0x4
                unsigned char padding[4]; // offset 0x24, size 0x4
            } s; // offset 0x0, size 0x28
            long long force_structure_alignment; // offset 0x0, size 0x8
        } aObject[2]; // offset 0x38, size 0x50
        int nScaleX; // offset 0x88, size 0x4
        int nScaleY; // offset 0x8C, size 0x4
        unsigned short nScrollX; // offset 0x90, size 0x2
        unsigned short nScrollY; // offset 0x92, size 0x2
        unsigned int nColor0; // offset 0x94, size 0x4
        unsigned int nColor1; // offset 0x98, size 0x4
    } * pImage; // r1+0x28
    int nOffset; // r24
    int iFrame; // r1+0x24
    float rOffset; // f4
    float rScale; // f1
    int nOffsetX; // r24
    int nOffsetY; // r6
    int nPositionX; // r5
    int nPositionY; // r6
    int nOffsetBoxX; // r29
    int nOffsetBoxY; // r28

    // References
    // -> static int gnPositionFairyY;
    // -> static int gnPositionFairyX;
    // -> int gSelection;
    // -> static int ganOffsetFairy[8];
    // -> static int gnSkipFrame;
}

// Range: 0x762EC -> 0x76410
void menuFindCharacterMax(int * piCharacter /* r1+0x0 */) {
    // Local variables
    int iPlayer; // r6
    int iCharacter; // r7
    struct player_t * pPlayer; // r4

    // References
    // -> struct Game gTheGame;
}

struct {
    // total size: 0x31B88
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
    } glist[14336]; // offset 0x0, size 0x1C000
    union {
        long m[4][4]; // offset 0x0, size 0x40
        long long force_structure_alignment; // offset 0x0, size 0x8
    } projection[4]; // offset 0x1C000, size 0x100
    union {
        long m[4][4]; // offset 0x0, size 0x40
        long long force_structure_alignment; // offset 0x0, size 0x8
    } viewing[4]; // offset 0x1C100, size 0x100
    union {
        long m[4][4]; // offset 0x0, size 0x40
        long long force_structure_alignment; // offset 0x0, size 0x8
    } trans[4]; // offset 0x1C200, size 0x100
    union {
        long m[4][4]; // offset 0x0, size 0x40
        long long force_structure_alignment; // offset 0x0, size 0x8
    } rotate[4]; // offset 0x1C300, size 0x100
    float degree[4]; // offset 0x1C400, size 0x10
    char frontTexture[4][10]; // offset 0x1C410, size 0x28
    char backTexture[4][10]; // offset 0x1C438, size 0x28
    int overflow; // offset 0x1C460, size 0x4
    struct block_t block[4][12][18]; // offset 0x1C464, size 0x9480
    struct attack_t attack[4][40]; // offset 0x258E8, size 0x3200
    struct icon_t icon[4][10]; // offset 0x28AE8, size 0x1040
    struct explode_t explosion[4][50]; // offset 0x29B28, size 0x2580
    struct cursor_t cursorBlock[4]; // offset 0x2C0A8, size 0x440
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } block_rect[4][12][6]; // offset 0x2C4E8, size 0x1B00
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } new_block_rect[4][6]; // offset 0x2DFE8, size 0x240
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } left2D[4]; // offset 0x2E228, size 0x60
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } right2D[4]; // offset 0x2E288, size 0x60
    char visible[4][12][18]; // offset 0x2E2E8, size 0x360
    union {
        long m[4][4]; // offset 0x0, size 0x40
        long long force_structure_alignment; // offset 0x0, size 0x8
    } left3D[4]; // offset 0x2E648, size 0x100
    union {
        long m[4][4]; // offset 0x0, size 0x40
        long long force_structure_alignment; // offset 0x0, size 0x8
    } right3D[4]; // offset 0x2E748, size 0x100
    struct flic_t flic[340]; // offset 0x2E848, size 0x2A80
    struct text_t drawText[70]; // offset 0x312C8, size 0x8C0
} * gpDynamicForMenu; // size: 0x4, address: 0xF4454
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
} * glistp; // size: 0x4, address: 0x50F48
// Range: 0x76410 -> 0x76588
void DrawMenu(struct {
    // total size: 0x31B88
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
    } glist[14336]; // offset 0x0, size 0x1C000
    union {
        long m[4][4]; // offset 0x0, size 0x40
        long long force_structure_alignment; // offset 0x0, size 0x8
    } projection[4]; // offset 0x1C000, size 0x100
    union {
        long m[4][4]; // offset 0x0, size 0x40
        long long force_structure_alignment; // offset 0x0, size 0x8
    } viewing[4]; // offset 0x1C100, size 0x100
    union {
        long m[4][4]; // offset 0x0, size 0x40
        long long force_structure_alignment; // offset 0x0, size 0x8
    } trans[4]; // offset 0x1C200, size 0x100
    union {
        long m[4][4]; // offset 0x0, size 0x40
        long long force_structure_alignment; // offset 0x0, size 0x8
    } rotate[4]; // offset 0x1C300, size 0x100
    float degree[4]; // offset 0x1C400, size 0x10
    char frontTexture[4][10]; // offset 0x1C410, size 0x28
    char backTexture[4][10]; // offset 0x1C438, size 0x28
    int overflow; // offset 0x1C460, size 0x4
    struct block_t block[4][12][18]; // offset 0x1C464, size 0x9480
    struct attack_t attack[4][40]; // offset 0x258E8, size 0x3200
    struct icon_t icon[4][10]; // offset 0x28AE8, size 0x1040
    struct explode_t explosion[4][50]; // offset 0x29B28, size 0x2580
    struct cursor_t cursorBlock[4]; // offset 0x2C0A8, size 0x440
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } block_rect[4][12][6]; // offset 0x2C4E8, size 0x1B00
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } new_block_rect[4][6]; // offset 0x2DFE8, size 0x240
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } left2D[4]; // offset 0x2E228, size 0x60
    union {
        struct {
            // total size: 0x18
            signed short objX; // offset 0x0, size 0x2
            unsigned short scaleW; // offset 0x2, size 0x2
            unsigned short imageW; // offset 0x4, size 0x2
            unsigned short paddingX; // offset 0x6, size 0x2
            signed short objY; // offset 0x8, size 0x2
            unsigned short scaleH; // offset 0xA, size 0x2
            unsigned short imageH; // offset 0xC, size 0x2
            unsigned short paddingY; // offset 0xE, size 0x2
            unsigned short imageStride; // offset 0x10, size 0x2
            unsigned short imageAdrs; // offset 0x12, size 0x2
            unsigned char imageFmt; // offset 0x14, size 0x1
            unsigned char imageSiz; // offset 0x15, size 0x1
            unsigned char imagePal; // offset 0x16, size 0x1
            unsigned char imageFlags; // offset 0x17, size 0x1
        } s; // offset 0x0, size 0x18
        long long force_structure_alignment; // offset 0x0, size 0x8
    } right2D[4]; // offset 0x2E288, size 0x60
    char visible[4][12][18]; // offset 0x2E2E8, size 0x360
    union {
        long m[4][4]; // offset 0x0, size 0x40
        long long force_structure_alignment; // offset 0x0, size 0x8
    } left3D[4]; // offset 0x2E648, size 0x100
    union {
        long m[4][4]; // offset 0x0, size 0x40
        long long force_structure_alignment; // offset 0x0, size 0x8
    } right3D[4]; // offset 0x2E748, size 0x100
    struct flic_t flic[340]; // offset 0x2E848, size 0x2A80
    struct text_t drawText[70]; // offset 0x312C8, size 0x8C0
} * pData /* r1+0x8 */) {
    // Local variables
    struct {
        // total size: 0x18
        char * szName; // offset 0x0, size 0x4
        void (* pfInit)(int, @enum$105menu_c); // offset 0x4, size 0x4
        void (* pfDraw)(union {
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
        } * *, int, int); // offset 0x8, size 0x4
        void (* pfTick)(int, int, int *); // offset 0xC, size 0x4
        @enum$105menu_c eType; // offset 0x10, size 0x4
        @enum$105menu_c eTypeNext; // offset 0x14, size 0x4
    } * pMenuData; // r29

    // References
    // -> union [anonymous] * glistp;
    // -> @enum$105menu_c geTypeMenu;
    // -> static struct [anonymous] gaMenuData[62];
    // -> static int gnCountMenu;
    // -> static @enum$105menu_c gaeTypeMenu[32];
    // -> int gReset;
    // -> static int gnSkipFrame;
    // -> struct [anonymous] * gpDynamicForMenu;
}

// Range: 0x76588 -> 0x77024
void DoMenu() {
    // Local variables
    int iPlayer; // r18
    int nTagArea; // r1+0x6C
    int nTypeArea; // r17
    struct {
        // total size: 0x18
        char * szName; // offset 0x0, size 0x4
        void (* pfInit)(int, @enum$105menu_c); // offset 0x4, size 0x4
        void (* pfDraw)(union {
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
        } * *, int, int); // offset 0x8, size 0x4
        void (* pfTick)(int, int, int *); // offset 0xC, size 0x4
        @enum$105menu_c eType; // offset 0x10, size 0x4
        @enum$105menu_c eTypeNext; // offset 0x14, size 0x4
    } * pMenuData; // r31
    int anButtonHold[4]; // r1+0x5C
    int anButtonTouch[4]; // r1+0x4C
    int anCommand[4]; // r1+0x3C
    int anCommandHack[4]; // r1+0x2C

    // References
    // -> static unsigned int gnFrameCount;
    // -> static int giScreenMenuLast;
    // -> static int giScreenMenu;
    // -> static int gnPlayerCount;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int gnSkipFrame;
    // -> static int gnCountMenu;
    // -> static @enum$105menu_c gaeTypeMenu[32];
    // -> int gReset;
    // -> int gMain;
    // -> static struct [anonymous] gaMenuData[62];
    // -> @enum$105menu_c geTypeMenu;
    // -> static int gnTickCountDialog;
    // -> static int giPlayerDialog;
    // -> static int gnTagDialog;
    // -> static int ganPick[4];
    // -> static unsigned int gnTickMenu;
    // -> struct Game gTheGame;
}

// Range: 0x77024 -> 0x77B40
void pon_DoMenu4p() {
    // Local variables
    int iPlayer; // r6
    int nTagArea; // r1+0x6C
    int nTypeArea; // r24
    struct {
        // total size: 0x18
        char * szName; // offset 0x0, size 0x4
        void (* pfInit)(int, @enum$105menu_c); // offset 0x4, size 0x4
        void (* pfDraw)(union {
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
        } * *, int, int); // offset 0x8, size 0x4
        void (* pfTick)(int, int, int *); // offset 0xC, size 0x4
        @enum$105menu_c eType; // offset 0x10, size 0x4
        @enum$105menu_c eTypeNext; // offset 0x14, size 0x4
    } * pMenuData; // r17
    int anButtonHold[4]; // r1+0x5C
    int anButtonTouch[4]; // r1+0x4C
    int anCommand[4]; // r1+0x3C
    int anCommandHack[4]; // r1+0x2C
    int num; // r3

    // References
    // -> static unsigned int gnFrameCount;
    // -> static int giScreenMenuLast;
    // -> static int giScreenMenu;
    // -> static int gnPlayerCount;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> int gDoMenu4pFlag;
    // -> @enum$105menu_c geTypeMenu;
    // -> static int gnSkipFrame;
    // -> static int gnCountMenu;
    // -> static @enum$105menu_c gaeTypeMenu[32];
    // -> int gReset;
    // -> int gMain;
    // -> int gnPlayer1Controll;
    // -> static int ganPick[4];
    // -> int gValidCont_4pMenu;
    // -> int gaMultiEntryFlag[4];
    // -> static unsigned int gnTickMenu;
    // -> static struct [anonymous] gaMenuData[62];
    // -> static int gnTagDialog;
    // -> static int gnTickCountDialog;
    // -> struct Game gTheGame;
}

// Range: 0x77B40 -> 0x77ED4
void InitMenu() {
    // Local variables
    void * pHeap; // r1+0x18
    @enum$105menu_c eType; // r28
    char * szNameFile; // r27
    int bLoad; // r26
    int bFlag; // r28

    // References
    // -> char * Pon_Image_Heap;
    // -> int from_title;
    // -> static int gnCountMenu;
    // -> struct Game gTheGame;
    // -> struct player_t * gPlayer[4];
    // -> static int gn2D3D;
    // -> static @enum$105menu_c gaeTypeMenu[32];
    // -> int gMain;
    // -> static int gnMaskVoice;
    // -> static int gnTickCountMenu;
    // -> static int gnTickCountDialog;
    // -> static @enum$108menu_c geMenuSoundMute;
    // -> static @enum$107menu_c geMenuSoundType;
    // -> static @enum$104menu_c geLanguageMenu;
    // -> static struct [anonymous] * gpImageCheck;
    // -> static struct [anonymous] * gpImageMark;
    // -> static int gnControlCPU;
    // -> static int gaiName[4];
    // -> static int giMenuTestEffect;
    // -> static int giMenuTestMusic;
    // -> static int gnTagDialog;
    // -> int ganButton[8];
    // -> int giButton;
    // -> static int gnPositionFairyY;
    // -> static int gnPositionFairyX;
    // -> static int gbAudioChanged;
    // -> static int giScreenMenuLast;
    // -> static int giScreenMenu;
    // -> @enum$105menu_c geTypeMenu;
    // -> static unsigned int gnTickMenu;
    // -> static int gnTickFade;
    // -> static unsigned int gnFrameCount;
    // -> static int gnSkipFrame;
}


