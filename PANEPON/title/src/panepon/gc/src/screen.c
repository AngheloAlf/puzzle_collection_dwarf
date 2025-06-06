/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\screen.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0008373C -> 0x0008EFC4
*/
static void (* gpfDraw)(); // size: 0x4, address: 0xF4568
static void * gpHeap; // size: 0x4, address: 0xF456C
static void * gpHeapNext; // size: 0x4, address: 0xF4570
static int gnTickWait; // size: 0x4, address: 0xF4574
static int gbKillPeel; // size: 0x4, address: 0xF4578
static int gnMaskRate; // size: 0x4, address: 0xF457C
static int gnMaskRateDefault; // size: 0x4, address: 0xF4580
static int gnFrameSkip; // size: 0x4, address: 0xF4584
static int gnImageCount; // size: 0x4, address: 0xF4588
static struct_image_c_92 * * gapImage; // size: 0x4, address: 0xF458C
static char * * gapNameImage; // size: 0x4, address: 0xF4590
static int gnScreenCount; // size: 0x4, address: 0xF4594
static struct_screen_c_446 * gaScreen; // size: 0x4, address: 0xF4598
static int giFramePage; // size: 0x4, address: 0xF459C
static int giScreen; // size: 0x4, address: 0xF45A0
static int giScreenNext; // size: 0x4, address: 0xF45A4
static int giScreenPage; // size: 0x4, address: 0xF45A8
static int gnPlayerCount; // size: 0x4, address: 0xF45AC
static int gnPlayerCountNext; // size: 0x4, address: 0xF45B0
static int gnAlphaFade; // size: 0x4, address: 0xF45B4
@enum$95screen_c;
static @enum$95screen_c geModeFade; // size: 0x4, address: 0xF45B8
@enum$94peel_c;
static @enum$94peel_c geTypePeel; // size: 0x4, address: 0xF45BC
static unsigned int gnFrameCount; // size: 0x4, address: 0xF45C0
static int gnTagTextBase; // size: 0x4, address: 0xF45C4
static int gnCountTextTag; // size: 0x4, address: 0xF45C8
static struct_image_c_92 * gpImageOval; // size: 0x4, address: 0xF45CC
static struct_image_c_92 * gpImageAlign; // size: 0x4, address: 0xF45D0
static int gnTickText; // size: 0x4, address: 0xF45D4
static int gnTickWrap; // size: 0x4, address: 0xF45D8
static int gnCountLayers; // size: 0x4, address: 0xF45DC
@enum$94screen_c;
static @enum$94screen_c geTypeBack; // size: 0x4, address: 0xF45E0
static struct_image_c_92 * gpImagePageBack; // size: 0x4, address: 0xF45E4
static struct_image_c_92 * gpImagePageFront; // size: 0x4, address: 0xF45E8
static struct_image_c_92 * gpImageNo; // size: 0x4, address: 0xF45EC
static struct_image_c_92 * gpImageYes; // size: 0x4, address: 0xF45F0
static struct_image_c_92 * gpImageBack; // size: 0x4, address: 0xF45F4
static unsigned int gnColorBack0; // size: 0x4, address: 0xF45F8
static unsigned int gnColorBack1; // size: 0x4, address: 0xF45FC
static unsigned int gnColorBack2; // size: 0x4, address: 0xF4600
static unsigned int gnColorBack3; // size: 0x4, address: 0xF4604
static unsigned int gnColorBack4; // size: 0x4, address: 0xF4608
static unsigned int gnColorBack5; // size: 0x4, address: 0xF460C
static struct_image_c_92 * gpImageKanji; // size: 0x4, address: 0xF4610
static struct_image_c_92 * gpImageKatakana; // size: 0x4, address: 0xF4614
static struct_image_c_92 * gpImageHiragana; // size: 0x4, address: 0xF4618
static struct_image_c_92 * gpImageEnglish; // size: 0x4, address: 0xF461C
static struct_image_c_92 * gpImageDialogKanji; // size: 0x4, address: 0xF4620
static struct_image_c_92 * gpImageDialogKatakana; // size: 0x4, address: 0xF4624
static struct_image_c_92 * gpImageDialogHiragana; // size: 0x4, address: 0xF4628
static struct_image_c_92 * gpImageDialogEnglish; // size: 0x4, address: 0xF462C
static struct_image_c_92 * gpImageDigitsPink; // size: 0x4, address: 0xF4630
static struct_image_c_92 * gpImageDigitsBlue; // size: 0x4, address: 0xF4634
static struct_image_c_92 * gpImageDigitsNormPink; // size: 0x4, address: 0xF4638
static struct_image_c_92 * gpImageDigitsNormBlue; // size: 0x4, address: 0xF463C
static struct_image_c_92 * gpImageDigitsTinyPink; // size: 0x4, address: 0xF4640
static struct_image_c_92 * gpImageDigitsTinyBlue; // size: 0x4, address: 0xF4644
static struct_image_c_92 * gpImageDigitsItsyBitsy; // size: 0x4, address: 0xF4648
static struct_image_c_92 * gpImageDigitsXtraPink; // size: 0x4, address: 0xF464C
static struct_image_c_92 * gpImageDigitsXtraBlue; // size: 0x4, address: 0xF4650
static struct_image_c_92 * gpImageLabel; // size: 0x4, address: 0xF4654
static struct_image_c_92 * gpImageRecordKatakana; // size: 0x4, address: 0xF4658
static struct_image_c_92 * gpImageRecordHiragana; // size: 0x4, address: 0xF465C
static struct_image_c_92 * gpImageRecordEnglish; // size: 0x4, address: 0xF4660
static unsigned int ganTileDigits[10]; // size: 0x28, address: 0xB6A78
static unsigned int ganTileNormal[10]; // size: 0x28, address: 0xB6AA0
static signed short ganWave[16]; // size: 0x20, address: 0xF4664
static float garSlopePage[12]; // size: 0x30, address: 0xF4684
static float garOffsetPage[12]; // size: 0x30, address: 0xF46B4
static float garClipPage[48]; // size: 0xC0, address: 0xB6AC8
// Erased
static void screenTestHeap() {}

// Range: 0x8373C -> 0x8459C
static int screenGetTextData(struct_screen_c_2863 * pText /* r20 */, int iText /* r1+0xC */, struct_bitmap_c_332 * pTile /* r21 */, struct_image_c_92 * * ppImage /* r22 */, int * pnSpace /* r23 */, int bLoad /* r1+0x1C */) {
    // Local variables
    struct_image_c_92 * pImage; // r1+0x8
    int nSpace; // r29
    int nCode; // r28
    int nSizeX; // r27
    int nSizeY; // r26
    int iTileX; // r25
    int iTileY; // r24
    unsigned short nCharacter; // r1+0x8

    // References
    // -> static struct [anonymous] * gpImageDigitsXtraBlue;
    // -> static void * gpHeapNext;
    // -> static struct [anonymous] * gpImageDigitsXtraPink;
    // -> static struct [anonymous] * gpImageDigitsItsyBitsy;
    // -> static struct [anonymous] * gpImageDigitsTinyBlue;
    // -> static struct [anonymous] * gpImageDigitsTinyPink;
    // -> static struct [anonymous] * gpImageLabel;
    // -> static unsigned int ganTileNormal[10];
    // -> static struct [anonymous] * gpImageDigitsNormBlue;
    // -> static struct [anonymous] * gpImageDigitsNormPink;
    // -> static unsigned int ganTileDigits[10];
    // -> static struct [anonymous] * gpImageDigitsBlue;
    // -> static struct [anonymous] * gpImageDigitsPink;
    // -> static struct [anonymous] * gpImageEnglish;
    // -> static struct [anonymous] * gpImageDialogEnglish;
    // -> static struct [anonymous] * gpImageRecordEnglish;
    // -> static struct [anonymous] * gpImageHiragana;
    // -> static struct [anonymous] * gpImageDialogHiragana;
    // -> static struct [anonymous] * gpImageRecordHiragana;
    // -> static struct [anonymous] * gpImageKatakana;
    // -> static struct [anonymous] * gpImageDialogKatakana;
    // -> static struct [anonymous] * gpImageRecordKatakana;
    // -> static struct [anonymous] * gpImageKanji;
    // -> static struct [anonymous] * gpImageDialogKanji;
}

// Range: 0x8459C -> 0x84674
static int screenGetTextWidth(struct_screen_c_2863 * pText /* r25 */, int * pnWidth /* r26 */) {
    // Local variables
    struct_image_c_92 * pImage; // r1+0x24
    struct_bitmap_c_332 tile; // r1+0x14
    int nSize; // r30
    int nSizeBreak; // r29
    int iText; // r28
    int nSpace; // r1+0x10
    int bLast; // r27
    unsigned short nCharacter; // r1+0x8
}

// Range: 0x84674 -> 0x848A8
static int screenCenterText(struct_screen_c_2863 * pText /* r23 */) {
    // Local variables
    int bReturn; // r1+0x8
    int nHeight; // r31
    struct_image_c_92 * pImage; // r1+0x20
    struct_bitmap_c_332 tile; // r1+0x10
    int iText; // r30
    int iTextBreak; // r29
    int nSize; // r28
    int nSizeBreak; // r27
    unsigned short nCharacter; // r21
    int nSpace; // r1+0xC
    int iRow; // r26
    int bFlag; // r25
    int bLast; // r24
}

// Range: 0x848A8 -> 0x84EBC
static void screenDrawTextOval(struct_screen_c_2863 * pText /* r3 */, unsigned int nRGBA /* r26 */, union_pon_gc_c_173 * * ppGfx /* r29 */) {
    // Local variables
    union_pon_gc_c_173 * pGfx; // r31
    struct_bitmap_c_14 * pBitmap; // r1+0x8
    int nX; // r30
    int nY; // r27
    int nWidth; // r1+0x14
    union_pon_gc_c_173 * _g; // r3
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r7
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r7
    union_pon_gc_c_173 * _g; // r8
    union_pon_gc_c_173 * _g; // r7
    union_pon_gc_c_173 * _g; // r9
    union_pon_gc_c_173 * _g; // r6
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r4
    union_pon_gc_c_173 * _g; // r4
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r4
    union_pon_gc_c_173 * _g; // r6
    union_pon_gc_c_173 * _g; // r3
    union_pon_gc_c_173 * _g; // r6
    union_pon_gc_c_173 * _g; // r3
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r8
    union_pon_gc_c_173 * _g; // r7
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r7
    union_pon_gc_c_173 * _g; // r6
    union_pon_gc_c_173 * _g; // r7
    union_pon_gc_c_173 * _g; // r6
    union_pon_gc_c_173 * _g; // r4

    // References
    // -> static struct [anonymous] * gpImageOval;
}

// Range: 0x84EBC -> 0x86014
static void screenDrawText(struct_screen_c_2863 * pText /* r31 */, union_pon_gc_c_173 * * ppGfx /* r1+0x38 */, int iClip /* r1+0x3C */) {
    // Local variables
    union_pon_gc_c_173 * pGfx; // r1+0x34
    int bLoad; // r1+0x40
    struct_image_c_92 * pImage; // r1+0x30
    int nType; // r21
    int iSet; // r1+0x8
    int nCode; // r1+0x8
    int nFont; // r1+0x8
    struct_bitmap_c_332 tile; // r1+0x20
    int nLine; // r5
    int iText0; // r9
    int nClipX; // r3
    int nHeight; // r22
    unsigned int nRGBA; // r5
    int nVideoY; // r29
    int nX; // r23
    int nY; // r24
    int nSpace; // r1+0x18
    int iRow; // r3
    int iText; // r1+0x8
    int nPixels; // r1+0x14
    unsigned short nCharacter; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> static struct [anonymous] * gpImageLabel;
    // -> static struct [anonymous] * gpImageEnglish;
    // -> static struct [anonymous] * gpImageHiragana;
    // -> static struct [anonymous] * gpImageKanji;
    // -> static struct [anonymous] * gpImageKatakana;
    // -> static signed short ganWave[16];
    // -> static float garOffsetPage[12];
    // -> static float garSlopePage[12];
}

// Range: 0x86014 -> 0x86780
static void screenUpdateArea(struct_screen_c_17002 * pArea /* r25 */) {
    // Local variables
    float rStep; // f2
    struct_screen_c_2863 * pText; // r28
    int iText; // r27
    int iList; // r26

    // References
    // -> static int giScreen;
    // -> static struct [anonymous] * gaScreen;
    // -> static @enum$95screen_c geModeFade;
    // -> static int gnScreenCount;
}

// Range: 0x86780 -> 0x868E0
static int screenWipeImages() {
    // Local variables
    int iScreen; // r9
    int iArea; // r8
    int iImage; // r7
    int iDialog; // r8

    // References
    // -> static int gnScreenCount;
    // -> static struct [anonymous] * gaScreen;
    // -> static struct [anonymous] * gpImageDigitsItsyBitsy;
    // -> static struct [anonymous] * gpImageDigitsXtraBlue;
    // -> static struct [anonymous] * gpImageDigitsXtraPink;
    // -> static struct [anonymous] * gpImageDigitsTinyBlue;
    // -> static struct [anonymous] * gpImageDigitsTinyPink;
    // -> static struct [anonymous] * gpImageDigitsNormBlue;
    // -> static struct [anonymous] * gpImageDigitsNormPink;
    // -> static struct [anonymous] * gpImageDigitsBlue;
    // -> static struct [anonymous] * gpImageDigitsPink;
    // -> static struct [anonymous] * gpImageRecordEnglish;
    // -> static struct [anonymous] * gpImageRecordKatakana;
    // -> static struct [anonymous] * gpImageRecordHiragana;
    // -> static struct [anonymous] * gpImageDialogEnglish;
    // -> static struct [anonymous] * gpImageDialogKanji;
    // -> static struct [anonymous] * gpImageDialogKatakana;
    // -> static struct [anonymous] * gpImageDialogHiragana;
    // -> static struct [anonymous] * gpImageEnglish;
    // -> static struct [anonymous] * gpImageKanji;
    // -> static struct [anonymous] * gpImageKatakana;
    // -> static struct [anonymous] * gpImageHiragana;
    // -> static struct [anonymous] * gpImageLabel;
    // -> static struct [anonymous] * gpImageAlign;
    // -> static struct [anonymous] * gpImageBack;
    // -> static int gnImageCount;
    // -> static struct [anonymous] * * gapImage;
}

// Erased
static int screenLoadImage(struct_image_c_92 * * ppImage /* r29 */, int iImage /* r1+0xC */, void * ppHeap /* r5 */) {
    // Local variables
    @enum$94screen_c eType; // r3

    // References
    // -> static struct [anonymous] * * gapImage;
    // -> static char * * gapNameImage;
    // -> static @enum$94screen_c geTypeBack;
}

// Erased
static void GetaText() {}

struct OSThread_s {
    // total size: 0x1B0
    struct OSThread_s * next; // offset 0x0, size 0x4
    long priority; // offset 0x4, size 0x4
    struct OSThread_s * * queue; // offset 0x8, size 0x4
    struct OSThread_s * tlnext; // offset 0xC, size 0x4
    unsigned short state; // offset 0x10, size 0x2
    unsigned short flags; // offset 0x12, size 0x2
    long id; // offset 0x14, size 0x4
    int fp; // offset 0x18, size 0x4
    struct_controller_c_1238 * thprof; // offset 0x1C, size 0x4
    struct_controller_c_1406 context; // offset 0x20, size 0x190
};
struct OSMesgQueue_s {
    // total size: 0x18
    struct OSThread_s * mtqueue; // offset 0x0, size 0x4
    struct OSThread_s * fullqueue; // offset 0x4, size 0x4
    long validCount; // offset 0x8, size 0x4
    long first; // offset 0xC, size 0x4
    long msgCount; // offset 0x10, size 0x4
    void * msg; // offset 0x14, size 0x4
};
struct OSMesgQueue_s gfxFrameMsgQ; // size: 0x18, address: 0x50F4C
char * Pon_Image_Heap; // size: 0x4, address: 0x184
// Range: 0x868E0 -> 0x874EC
static void screenChange(int iScreen /* r29 */) {
    // Local variables
    int nFlag; // r26
    void * pHeap; // r1+0x18
    struct_screen_c_446 * pScreen; // r1+0x8
    int iArea0; // r6
    int iArea1; // r26
    int iArea2; // r27
    int iArea3; // r25
    int nArea0; // r7
    int nArea1; // r8
    int nArea2; // r9
    int nArea3; // r10
    struct_screen_c_17002 * pArea; // r1+0x8
    int iText; // r8
    struct_screen_c_17944 * pImage; // r25
    struct_screen_c_18042 * pDialog; // r25
    int iArea; // r11
    int iImage; // r26
    int iDialog; // r26

    // References
    // -> static int giScreen;
    // -> static int gnMaskRateDefault;
    // -> static int gnMaskRate;
    // -> static void * gpHeapNext;
    // -> static struct [anonymous] * * gapImage;
    // -> static char * * gapNameImage;
    // -> static @enum$94screen_c geTypeBack;
    // -> static struct [anonymous] * gpImageLabel;
    // -> static struct [anonymous] * gpImageRecordEnglish;
    // -> static struct [anonymous] * gpImageRecordHiragana;
    // -> static struct [anonymous] * gpImageRecordKatakana;
    // -> static struct [anonymous] * gpImageDigitsXtraBlue;
    // -> static struct [anonymous] * gpImageDigitsXtraPink;
    // -> static struct [anonymous] * gpImageDigitsItsyBitsy;
    // -> static struct [anonymous] * gpImageDigitsTinyBlue;
    // -> static struct [anonymous] * gpImageDigitsTinyPink;
    // -> static struct [anonymous] * gpImageDigitsNormBlue;
    // -> static struct [anonymous] * gpImageDigitsNormPink;
    // -> static struct [anonymous] * gpImageDigitsBlue;
    // -> static struct [anonymous] * gpImageDigitsPink;
    // -> static struct [anonymous] * gpImageDialogEnglish;
    // -> static struct [anonymous] * gpImageDialogKanji;
    // -> static struct [anonymous] * gpImageDialogKatakana;
    // -> static struct [anonymous] * gpImageDialogHiragana;
    // -> static struct [anonymous] * gpImageEnglish;
    // -> static struct [anonymous] * gpImageKanji;
    // -> static struct [anonymous] * gpImageKatakana;
    // -> static struct [anonymous] * gpImageHiragana;
    // -> char * Pon_Image_Heap;
    // -> struct OSMesgQueue_s gfxFrameMsgQ;
    // -> static void (* gpfDraw)();
    // -> static int gnFrameSkip;
    // -> static struct [anonymous] * gpImageAlign;
    // -> static void * gpHeap;
    // -> static @enum$95screen_c geModeFade;
    // -> static int gnTagTextBase;
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x874EC -> 0x87A60
static int screenLoadBack(@enum$94screen_c eType /* r3 */, void * ppHeap /* r29 */) {
    // Local variables
    char * szName; // r4

    // References
    // -> static int gnCountLayers;
    // -> static struct [anonymous] * gpImageBack;
    // -> static unsigned int gnColorBack0;
    // -> static void (* gpfDraw)();
    // -> static unsigned int gnColorBack5;
    // -> static unsigned int gnColorBack4;
    // -> static unsigned int gnColorBack3;
    // -> static unsigned int gnColorBack2;
    // -> static unsigned int gnColorBack1;
}

// Range: 0x87A60 -> 0x885A0
static int screenDrawBack(union_pon_gc_c_173 * * ppGfx /* r30 */) {
    // Local variables
    union_pon_gc_c_173 * pGfx; // r1+0xC
    int nX; // r1+0x8
    int nY; // r1+0x8
    int nOffset; // r21
    struct_bitmap_c_14 * pBitmap; // r27
    int iRow; // r21
    int iColumn; // r28
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> static unsigned int gnFrameCount;
    // -> static unsigned int gnColorBack5;
    // -> static struct [anonymous] * gpImageBack;
    // -> static int gnCountLayers;
    // -> static unsigned int gnColorBack4;
    // -> static unsigned int gnColorBack3;
    // -> static unsigned int gnColorBack2;
    // -> static unsigned int gnColorBack1;
    // -> static unsigned int gnColorBack0;
}

// Range: 0x885A0 -> 0x886B8
static void screenDrawPageText(union_pon_gc_c_173 * * ppGfx /* r29 */) {
    // Local variables
    int iText; // r27
    int nX; // r5
    int nY; // r6
    struct_screen_c_446 * pScreen; // r30
    struct_screen_c_2863 * pText; // r3

    // References
    // -> static int giFramePage;
    // -> static struct [anonymous] * gpImagePageBack;
    // -> static struct [anonymous] * gpImagePageFront;
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnFrameSkip;
    // -> static int giScreenPage;
}

// Range: 0x886B8 -> 0x88A64
static void screenDrawDialog(struct_screen_c_18042 * pDialog /* r1+0x0 */, union_pon_gc_c_173 * * ppGfx /* r1+0x4 */) {
    // Local variables
    union_pon_gc_c_173 * pGfx; // r5
    int nColorR; // r9
    union_pon_gc_c_173 * _g; // r9
    union_pon_gc_c_173 * _g; // r10
    union_pon_gc_c_173 * _g; // r9
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r5
    union_pon_gc_c_173 * _g; // r9
    union_pon_gc_c_173 * _g; // r8
    union_pon_gc_c_173 * _g; // r10
    union_pon_gc_c_173 * _g; // r6
    union_pon_gc_c_173 * _g; // r8
    union_pon_gc_c_173 * _g; // r8
    union_pon_gc_c_173 * _g; // r6
}

// Range: 0x88A64 -> 0x88C68
static void screenTickTextData() {
    // Local variables
    struct_screen_c_17002 * pArea; // r1+0x8
    int iArea; // r1+0x8
    int iText; // r1+0x8
    int iTextNext; // r9
    int nTag; // r28
    int nTagBase; // r1+0x8
    int nStepTag; // r1+0x8

    // References
    // -> static int gnMaskRate;
    // -> static int giScreen;
    // -> static int gnCountTextTag;
    // -> static struct [anonymous] * gaScreen;
    // -> static void (* gpfDraw)();
    // -> static int gnTagTextBase;
}

// Erased
static int screenDark() {
    // References
    // -> static int gnTickWait;
    // -> static @enum$95screen_c geModeFade;
}

// Range: 0x88C68 -> 0x88C88
int screenGetHeap(void * ppHeap /* r1+0x0 */) {
    // References
    // -> static void * gpHeapNext;
}

// Range: 0x88C88 -> 0x88CA8
int screenChangePending() {
    // References
    // -> static int giScreenNext;
}

// Range: 0x88CA8 -> 0x88CC8
int screenFlushing() {
    // References
    // -> static int gnFrameSkip;
}

unsigned char gValidControllers; // size: 0x1, address: 0x4CF60
// Range: 0x88CC8 -> 0x89764
void screenDraw(union_pon_gc_c_173 * * ppGfx /* r26 */, void (* pfDraw)() /* r27 */) {
    // Local variables
    union_pon_gc_c_173 * pGfx; // r1+0x14
    int nX; // r5
    int nY; // r6
    int iFrame; // r1+0x8
    struct_screen_c_446 * pScreen; // r29
    struct_screen_c_17002 * pArea; // r1+0x8
    struct_screen_c_2863 * pText; // r20
    struct_screen_c_17944 * pImage; // r28
    struct_screen_c_18042 * pDialog; // r23
    int bFlag; // r25
    int iArea; // r22
    int iText; // r22
    int iImage; // r22
    int iDialog; // r22
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8
    union_pon_gc_c_173 * _g; // r1+0x8

    // References
    // -> static int gnAlphaFade;
    // -> static @enum$95screen_c geModeFade;
    // -> static struct [anonymous] * gpImageNo;
    // -> static unsigned int gnFrameCount;
    // -> static struct [anonymous] * gpImageYes;
    // -> static int giScreen;
    // -> static struct [anonymous] * gpImageAlign;
    // -> static int gnPlayerCount;
    // -> unsigned char gValidControllers;
    // -> static int giScreenNext;
    // -> static struct [anonymous] * gaScreen;
    // -> static struct [anonymous] * gpImageBack;
    // -> static void (* gpfDraw)();
    // -> static int gnTickWait;
    // -> static int gnFrameSkip;
}

// Erased
static int screenFindArea(int iScreen /* r1+0x0 */, int nTagArea /* r1+0x4 */, struct_screen_c_17002 * * ppArea /* r1+0x8 */) {
    // Local variables
    int iArea; // r10

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Erased
static int screenFindText(int iScreen /* r1+0x0 */, int nTagText /* r1+0x4 */, struct_screen_c_2863 * * ppText /* r1+0x8 */) {
    // Local variables
    int iText; // r10

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x89764 -> 0x897F0
static int screenFindImage(int iScreen /* r1+0x0 */, int nTagImage /* r1+0x4 */, struct_screen_c_17944 * * ppImage /* r1+0x8 */) {
    // Local variables
    int iImage; // r10

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Erased
static int screenFindDialog(int iScreen /* r1+0x0 */, int nTagDialog /* r1+0x4 */, struct_screen_c_18042 * * ppDialog /* r1+0x8 */) {
    // Local variables
    int iDialog; // r10

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x897F0 -> 0x899F0
static int screenWrapCursor(struct_screen_c_17002 * pArea /* r1+0x8 */, int iCursorX /* r4 */, int iCursorY /* r5 */, int nMove /* r1+0x14 */) {
    // Local variables
    int iSlot; // r12
    int nCount; // r31
}

@enum$96screen_c;
// Range: 0x899F0 -> 0x89E5C
static int screenFindAreaNear(struct_screen_c_446 * pScreen /* r30 */, struct_screen_c_17002 * pArea /* r4 */, @enum$96screen_c eFind /* r31 */, int iPlayer /* r28 */) {
    // Local variables
    int nMaskPlayer; // r6
    int iArea; // r7
    int iAreaBest; // r29
    int nDeltaX; // r8
    int nDeltaY; // r9
    int nDeltaBest; // r10
    struct_screen_c_17002 * pAreaBest; // r26
}

// Erased
static int screenDecrementCursorY(struct_screen_c_17002 * pArea /* r3 */) {
    // Local variables
    int iSlot; // r5
}

// Erased
static int screenIncrementCursorY(struct_screen_c_17002 * pArea /* r3 */) {
    // Local variables
    int iSlot; // r5
}

// Erased
static int screenDecrementCursorX(struct_screen_c_17002 * pArea /* r3 */) {
    // Local variables
    int iSlot; // r5
}

// Erased
static int screenIncrementCursorX(struct_screen_c_17002 * pArea /* r3 */) {
    // Local variables
    int iSlot; // r5
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
struct SfxInitStruct SFX_INIT_TABLE[527]; // size: 0x20F0, address: 0xE0D78
// Range: 0x89E5C -> 0x8A39C
static void screenTickText(struct_screen_c_446 * pScreen /* r26 */) {
    // Local variables
    int bTalk; // r6
    int bWink; // r7
    int nTag; // r6
    int nCount; // r4
    struct_screen_c_2863 * pText; // r1+0x8
    struct_screen_c_17944 * pImage; // r1+0x8
    int nLine; // r10
    int iSet; // r1+0x8
    unsigned short nFont; // r3
    unsigned short nCode; // r6
    int iText; // r27
    int iImage; // r7
    int iFrame; // r8
    int iTalk; // r4

    // References
    // -> static unsigned int gnFrameCount;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static int gnTickText;
    // -> static int gnMaskRateDefault;
    // -> static int gnMaskRate;
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
    uObjSprite rect; // offset 0x30, size 0x18
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
    union_pon_gc_c_262 thing; // offset 0x28, size 0x40
};
struct explode_t {
    // total size: 0x30
    int type; // offset 0x0, size 0x4
    int frame; // offset 0x4, size 0x4
    int pos; // offset 0x8, size 0x4
    int x; // offset 0xC, size 0x4
    int y; // offset 0x10, size 0x4
    uObjSprite rect; // offset 0x18, size 0x18
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
    uObjSprite block_rect[12][6]; // offset 0x3F10, size 0x6C0
    uObjSprite new_block_rect[6]; // offset 0x45D0, size 0x90
    uObjSprite left2D; // offset 0x4660, size 0x18
    uObjSprite right2D; // offset 0x4678, size 0x18
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
    uObjSprite rect; // offset 0xE8, size 0x18
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
    uObjSprite word; // offset 0x0, size 0x18
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
    uObjBg sign[4]; // offset 0x10, size 0xA0
    uObjBg alpha[4]; // offset 0xB0, size 0xA0
    uObjTxtr signLUT; // offset 0x150, size 0x18
};
struct Game {
    // total size: 0x21C08
    struct tetWell tetrisWell[4]; // offset 0x0, size 0x15F00
    struct cursor_t cursorBlock[4]; // offset 0x15F00, size 0x440
    struct gamepad_t controller[4]; // offset 0x16340, size 0x40
    struct flic_t flic[340]; // offset 0x16380, size 0x2A80
    struct action_t action[40]; // offset 0x18E00, size 0x1E0
    uObjTxtr gLUT[40]; // offset 0x18FE0, size 0x3C0
    uObjBg gBG[200]; // offset 0x193A0, size 0x1F40
    uObjTxtr gTEXT[80]; // offset 0x1B2E0, size 0x780
    uObjSprite gSPRITE[160]; // offset 0x1BA60, size 0xF00
    int currentText; // offset 0x1C960, size 0x4
    struct text_t drawText[70]; // offset 0x1C968, size 0x8C0
    uObjBg frame; // offset 0x1D228, size 0x28
    uObjTxtr frameLUT; // offset 0x1D250, size 0x18
    uObjSprite shadeBOX[4]; // offset 0x1D268, size 0x60
    uObjBg bkground; // offset 0x1D2C8, size 0x28
    uObjTxtr bkgroundLUT; // offset 0x1D2F0, size 0x18
    uObjBg sign[8]; // offset 0x1D308, size 0x140
    uObjBg alpha[4]; // offset 0x1D448, size 0xA0
    uObjTxtr signLUT; // offset 0x1D4E8, size 0x18
    int miscToggle; // offset 0x1D500, size 0x4
    uObjBg misc[4]; // offset 0x1D508, size 0xA0
    uObjTxtr miscLUT[4]; // offset 0x1D5A8, size 0x60
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
// Range: 0x8A39C -> 0x8B4E8
void screenTick(int * anCommand /* r22 */) {
    // Local variables
    struct_screen_c_446 * pScreen; // r30
    struct_screen_c_2863 * pText; // r1+0x8
    struct_screen_c_17002 * pArea; // r31
    @enum$95screen_c eMode; // r21
    struct_screen_c_18042 * pDialog; // r1+0x8
    int iData; // r10
    int nResult; // r26
    int bFlag; // r6
    int iImage; // r20
    int iPlayer; // r27
    int iArea; // r1+0x8
    int iText; // r6
    int iDialog; // r7
    int iScreen; // r7

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
    // -> static int giScreen;
    // -> static @enum$95screen_c geModeFade;
    // -> static int gnPlayerCountNext;
    // -> static int gnPlayerCount;
    // -> static int giScreenNext;
    // -> static int gnAlphaFade;
    // -> static void (* gpfDraw)();
    // -> static int gnFrameSkip;
    // -> static int giScreenPage;
    // -> static int giFramePage;
    // -> static unsigned int gnFrameCount;
    // -> struct OSMesgQueue_s gfxFrameMsgQ;
    // -> static int gnTickWait;
    // -> static struct [anonymous] * gpImageAlign;
    // -> struct Game gTheGame;
}

// Range: 0x8B4E8 -> 0x8B8A0
int screenSet(char * szName /* r28 */, int nMode /* r30 */) {
    // Local variables
    int iScreen; // r1+0x10
    @enum$94peel_c eType; // r29
    int iImage; // r9
    int iImageLast; // r1+0x8

    // References
    // -> static int gnPlayerCountNext;
    // -> static int giScreenNext;
    // -> struct SfxInitStruct SFX_INIT_TABLE[527];
    // -> static @enum$95screen_c geModeFade;
    // -> static int giScreenPage;
    // -> static int giFramePage;
    // -> static int giScreen;
    // -> static int gnPlayerCount;
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnAlphaFade;
    // -> static int gnTickWait;
    // -> static @enum$94peel_c geTypePeel;
    // -> static int gbKillPeel;
    // -> static @enum$94screen_c geTypeBack;
}

// Range: 0x8B8A0 -> 0x8B8B0
int screenGet() {
    // References
    // -> static int giScreen;
}

// Range: 0x8B8B0 -> 0x8B92C
void screenSetBack(@enum$94screen_c eType /* r3 */) {
    // Local variables
    void * pHeap; // r1+0xC

    // References
    // -> static @enum$94screen_c geTypeBack;
    // -> char * Pon_Image_Heap;
    // -> static int giScreenNext;
}

// Range: 0x8B92C -> 0x8B950
void screenSetBackLayers(int nCount /* r3 */) {
    // References
    // -> static int gnCountLayers;
}

// Erased
static int screenMatchName(char * szName1 /* r1+0x0 */, char * szName2 /* r1+0x4 */) {
    // Local variables
    int iName; // r7
    int nName1; // r6
    int nName2; // r8
}

// Range: 0x8B950 -> 0x8BA10
int screenSetArea(int iScreen /* r1+0x0 */, int nTagArea /* r1+0x4 */, int iPlayer /* r1+0x8 */) {
    // Local variables
    int iArea; // r11
    int iAreaLast; // r12

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8BA10 -> 0x8BA98
int screenGetArea(int iScreen /* r1+0x0 */, int * pnTagArea /* r1+0x4 */, int iPlayer /* r1+0x8 */) {
    // Local variables
    int iArea; // r5

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8BA98 -> 0x8BB40
int screenHideArea(int iScreen /* r1+0x0 */, int nTagArea /* r1+0x4 */) {
    // Local variables
    struct_screen_c_17002 * pArea; // r4

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8BB40 -> 0x8BC04
int screenShowArea(int iScreen /* r1+0x8 */, int nTagArea /* r1+0xC */) {
    // Local variables
    struct_screen_c_17002 * pArea; // r3

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8BC04 -> 0x8BCA0
int screenGetAreaType(int iScreen /* r1+0x0 */, int nTag /* r1+0x4 */) {
    // Local variables
    struct_screen_c_17002 * pArea; // r4

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8BCA0 -> 0x8BD4C
int screenGetAreaExtents(int iScreen /* r1+0x0 */, int nTag /* r1+0x4 */, int * pnRows /* r1+0x8 */, int * pnColumns /* r1+0xC */) {
    // Local variables
    struct_screen_c_17002 * pArea; // r4

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8BD4C -> 0x8BD7C
int screenSlowText() {
    // References
    // -> static int gnMaskRate;
}

// Range: 0x8BD7C -> 0x8BDAC
int screenFastText() {
    // References
    // -> static int gnMaskRate;
}

// Range: 0x8BDAC -> 0x8BEB8
int screenTextDone(int iScreen /* r1+0x0 */, int nTagText /* r1+0x4 */) {
    // Local variables
    struct_screen_c_2863 * pText; // r10

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8BEB8 -> 0x8BFC0
int screenTextDonePage(int iScreen /* r1+0x0 */, int nTagText /* r1+0x4 */) {
    // Local variables
    struct_screen_c_2863 * pText; // r10

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8BFC0 -> 0x8C0E0
int screenHideText(int iScreen /* r28 */, int nTagText /* r4 */) {
    // Local variables
    int iText; // r31
    int bFlag; // r3
    int nTag0; // r30
    int nTag1; // r29
    struct_screen_c_2863 * pText; // r1+0x8

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8C0E0 -> 0x8C1F0
int screenShowText(int iScreen /* r25 */, int nTagText /* r4 */) {
    // Local variables
    int iText; // r28
    int bFlag; // r3
    int nTag0; // r27
    int nTag1; // r26
    struct_screen_c_2863 * pText; // r1+0x8

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnMaskRateDefault;
    // -> static int gnMaskRate;
    // -> static int gnTickText;
    // -> static int gnScreenCount;
}

// Range: 0x8C1F0 -> 0x8C208
int screenGetTextWait() {
    // Local variables
    int nWait; // r3

    // References
    // -> static int gnTickText;
}

// Range: 0x8C208 -> 0x8C410
int screenShowTextFull(int iScreen /* r1+0x0 */, int nTagText /* r1+0x4 */) {
    // Local variables
    struct_screen_c_2863 * pText; // r3
    int bFlag; // r10
    int nSizeText; // r5
    int iSet; // r1+0x0
    int nLine; // r11
    unsigned short nFont; // r4
    unsigned short nCode; // r7
    unsigned short iText; // r12

    // References
    // -> static int gnTickText;
    // -> static int gnMaskRateDefault;
    // -> static int gnMaskRate;
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8C410 -> 0x8C528
int screenHideImage(int iScreen /* r29 */, int nTagImage /* r4 */) {
    // Local variables
    int bFlag; // r3
    int iImage; // r25
    int nTag; // r4
    int nTag0; // r31
    int nTag1; // r30
    struct_screen_c_17944 * pImage; // r1+0x8

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8C528 -> 0x8C630
int screenShowImage(int iScreen /* r27 */, int nTagImage /* r4 */) {
    // Local variables
    int bFlag; // r3
    int iImage; // r30
    int nTag; // r4
    int nTag0; // r29
    int nTag1; // r28
    struct_screen_c_17944 * pImage; // r1+0x8

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8C630 -> 0x8C6E4
int screenGetImage(int iScreen /* r1+0x0 */, int nTagImage /* r1+0x4 */, struct_image_c_92 * * ppImage /* r1+0x8 */) {
    // Local variables
    struct_screen_c_17944 * pImage; // r4

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8C6E4 -> 0x8C828
int screenSetImageScale(int iScreen /* r31 */, int nTagImage /* r1+0xC */, float rScale /* f31 */) {
    // Local variables
    struct_screen_c_17944 * pImage; // r4

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8C828 -> 0x8C990
int screenSetImagePosition(int iScreen /* r29 */, int nTagImage /* r1+0xC */, int nX /* r30 */, int nY /* r31 */) {
    // Local variables
    struct_screen_c_17944 * pImage; // r4

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8C990 -> 0x8CA3C
int screenGetImagePosition(int iScreen /* r1+0x0 */, int nTagImage /* r1+0x4 */, int * pnX /* r1+0x8 */, int * pnY /* r1+0xC */) {
    // Local variables
    struct_screen_c_17944 * pImage; // r4

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8CA3C -> 0x8CB10
int screenHideSlot(int iScreen /* r1+0x0 */, int nTagArea /* r1+0x4 */, int iCursorX /* r1+0x8 */, int iCursorY /* r1+0xC */) {
    // Local variables
    int iSlot; // r1+0x0
    struct_screen_c_17002 * pArea; // r12

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8CB10 -> 0x8CBE4
int screenShowSlot(int iScreen /* r1+0x0 */, int nTagArea /* r1+0x4 */, int iCursorX /* r1+0x8 */, int iCursorY /* r1+0xC */) {
    // Local variables
    int iSlot; // r1+0x0
    struct_screen_c_17002 * pArea; // r12

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8CBE4 -> 0x8CCC0
int screenTestSlot(int iScreen /* r1+0x0 */, int nTagArea /* r1+0x4 */, int iCursorX /* r1+0x8 */, int iCursorY /* r1+0xC */) {
    // Local variables
    int iSlot; // r4
    struct_screen_c_17002 * pArea; // r4

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8CCC0 -> 0x8CD54
void screenSetFrame(int iScreen /* r1+0x0 */, int nTagImage /* r1+0x4 */, int iFrame /* r1+0x8 */) {
    // Local variables
    struct_screen_c_17944 * pImage; // r4

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8CD54 -> 0x8CDEC
void screenGetFrame(int iScreen /* r1+0x0 */, int nTagImage /* r1+0x4 */, int * piFrame /* r1+0x8 */) {
    // Local variables
    struct_screen_c_17944 * pImage; // r4

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8CDEC -> 0x8CF9C
void screenSetText(int iScreen /* r1+0x8 */, int nTagText /* r1+0xC */, unsigned short * anText /* r1+0x10 */) {
    // Local variables
    struct_screen_c_2863 * pText; // r3
    int iSource; // r9
    int iTarget; // r10

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
    // -> static int giScreen;
}

// Range: 0x8CF9C -> 0x8D070
void screenGetText(int iScreen /* r1+0x0 */, int nTagText /* r1+0x4 */, unsigned short * anText /* r5 */, int nSizeText /* r1+0xC */) {
    // Local variables
    int iText; // r8
    struct_screen_c_2863 * pText; // r12

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8D070 -> 0x8D118
int screenSetTextColor(int iScreen /* r1+0x0 */, int nTagText /* r1+0x4 */, unsigned int nColor0 /* r1+0x8 */, unsigned int nColor1 /* r1+0xC */) {
    // Local variables
    struct_screen_c_2863 * pText; // r12

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8D118 -> 0x8D1B8
int screenGetTextType(int iScreen /* r1+0x0 */, int nTagText /* r1+0x4 */, int * pnType /* r1+0x8 */) {
    // Local variables
    struct_screen_c_2863 * pText; // r4

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8D1B8 -> 0x8D258
int screenGetTextSize(int iScreen /* r1+0x0 */, int nTagText /* r1+0x4 */, int * pnSize /* r1+0x8 */) {
    // Local variables
    struct_screen_c_2863 * pText; // r4

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8D258 -> 0x8D3BC
void screenSetTextField(int iScreen /* r1+0x8 */, int nTagText /* r1+0xC */, unsigned short * anText /* r5 */) {
    // Local variables
    int iText; // r6
    int iData; // r8
    struct_screen_c_446 * pScreen; // r1+0x8
    struct_screen_c_2863 * pText; // r3

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
    // -> static int giScreen;
}

// Erased
static int screenSetTextFlag(int iScreen /* r1+0x0 */, int nTagText /* r1+0x4 */, int nFlag /* r1+0x8 */) {
    // Local variables
    struct_screen_c_2863 * pText; // r4

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8D3BC -> 0x8D45C
int screenGetTextFlag(int iScreen /* r1+0x0 */, int nTagText /* r1+0x4 */, int * pnFlag /* r1+0x8 */) {
    // Local variables
    struct_screen_c_2863 * pText; // r4

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8D45C -> 0x8D56C
int screenSetTextPosition(int iScreen /* r1+0x8 */, int nTagText /* r1+0xC */, int nX /* r1+0x10 */, int nY /* r1+0x14 */) {
    // Local variables
    struct_screen_c_2863 * pText; // r3

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
    // -> static int giScreen;
}

// Range: 0x8D56C -> 0x8D708
void screenHideDialog(int iScreen /* r1+0x8 */, int nTagDialog /* r1+0xC */) {
    // Local variables
    struct_screen_c_446 * pScreen; // r1+0x8
    struct_screen_c_18042 * pDialog; // r29
    int iArea; // r28
    int iText; // r6
    int iDialog; // r7

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8D708 -> 0x8D8B8
void screenShowDialog(int iScreen /* r1+0x8 */, int nTagDialog /* r1+0xC */) {
    // Local variables
    struct_screen_c_446 * pScreen; // r1+0x8
    struct_screen_c_18042 * pDialog; // r29
    int iArea; // r28
    int iText; // r6
    int iDialog; // r7

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8D8B8 -> 0x8DA30
void screenSetNumber(int iScreen /* r1+0x8 */, int nTagText /* r1+0xC */, int nNumber /* r5 */, int bZeroFill /* r30 */) {
    // Local variables
    char acText[64]; // r1+0x18
    struct_screen_c_2863 * pText; // r31
    int iText; // r7
    int nSize; // r8
    int nCode; // r1+0x8
    int iDigit; // r9

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8DA30 -> 0x8DB18
void screenSetCursor(int iScreen /* r1+0x8 */, int nTagArea /* r1+0xC */, int iCursorX /* r5 */, int iCursorY /* r6 */) {
    // Local variables
    struct_screen_c_17002 * pArea; // r31

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8DB18 -> 0x8DBB8
void screenGetCursor(int iScreen /* r1+0x0 */, int nTagArea /* r1+0x4 */, int * piCursorX /* r1+0x8 */, int * piCursorY /* r1+0xC */) {
    // Local variables
    struct_screen_c_17002 * pArea; // r4

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8DBB8 -> 0x8DC58
void screenGetCursorPosition(int iScreen /* r1+0x0 */, int nTagArea /* r1+0x4 */, int * pnCursorX /* r1+0x8 */, int * pnCursorY /* r1+0xC */) {
    // Local variables
    struct_screen_c_17002 * pArea; // r4

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8DC58 -> 0x8DCC4
int screenGetAreaText(int iScreen /* r1+0x0 */, int * pnTagText /* r1+0x4 */) {
    // Local variables
    int iArea; // r1+0x0
    struct_screen_c_17002 * pArea; // r1+0x0

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8DCC4 -> 0x8DD60
int screenSetDialogButton(int iScreen /* r1+0x0 */, int nTagDialog /* r1+0x4 */, int nButton /* r1+0x8 */) {
    // Local variables
    struct_screen_c_18042 * pDialog; // r4

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8DD60 -> 0x8DE08
int screenGetDialogButton(int iScreen /* r1+0x0 */, int nTagDialog /* r1+0x4 */, int * pnButton /* r1+0x8 */) {
    // Local variables
    struct_screen_c_18042 * pDialog; // r4

    // References
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnScreenCount;
}

// Range: 0x8DE08 -> 0x8DED4
int screenFind(int * piScreen /* r1+0x0 */, char * szName /* r1+0x4 */) {
    // Local variables
    int iScreen; // r11

    // References
    // -> static int gnScreenCount;
    // -> static struct [anonymous] * gaScreen;
}

// Range: 0x8DED4 -> 0x8EBE0
int screenLoad(char * szNameFile /* r3 */, void * ppHeap /* r28 */) {
    // Local variables
    struct_bitmap_c_43 file; // r1+0x28
    struct_screen_c_446 * pScreen; // r31
    int nScreenCount; // r1+0x24
    int nFlag; // r30
    struct_screen_c_17002 * pArea; // r20
    struct_screen_c_2863 * pText; // r20
    struct_screen_c_17944 * pImage; // r19
    struct_screen_c_18042 * pDialog; // r19
    unsigned int nHeader; // r1+0x1C
    int nSize; // r1+0x18
    int iData; // r3
    int iScreen; // r29
    int iArea; // r19
    int iText; // r19
    int iImage; // r19
    int iDialog; // r20

    // References
    // -> struct OSMesgQueue_s gfxFrameMsgQ;
    // -> static void (* gpfDraw)();
    // -> static int gnFrameSkip;
    // -> static int gnScreenCount;
    // -> static void * gpHeap;
    // -> static struct [anonymous] * gpImageYes;
    // -> static struct [anonymous] * gpImageNo;
    // -> static struct [anonymous] * gpImagePageFront;
    // -> static struct [anonymous] * gpImagePageBack;
    // -> static struct [anonymous] * gpImageOval;
    // -> static struct [anonymous] * gaScreen;
    // -> static int gnImageCount;
    // -> static char * * gapNameImage;
    // -> static struct [anonymous] * * gapImage;
    // -> static int gnAlphaFade;
    // -> static @enum$94screen_c geTypeBack;
    // -> static @enum$95screen_c geModeFade;
    // -> static int gnTickWrap;
    // -> static int giScreenNext;
    // -> static int giScreen;
    // -> static int gnPlayerCount;
}

// Range: 0x8EBE0 -> 0x8EF60
void screenSetup() {
    // Local variables
    float rAngle; // f1
    int iPage; // r11
    int iWave; // r26

    // References
    // -> static float garOffsetPage[12];
    // -> static float garSlopePage[12];
    // -> static signed short ganWave[16];
    // -> static float garClipPage[48];
    // -> static int giScreenPage;
    // -> static int giScreenNext;
    // -> static int giScreen;
    // -> static int gnAlphaFade;
    // -> static @enum$95screen_c geModeFade;
    // -> static unsigned int gnFrameCount;
    // -> static int gnScreenCount;
    // -> static int gnImageCount;
    // -> static int gnFrameSkip;
    // -> static int gbKillPeel;
}

// Erased
static void pon_Init_geModeFade() {
    // References
    // -> static @enum$95screen_c geModeFade;
}

// Range: 0x8EF60 -> 0x8EFC4
void pon_ScreenAreaNoEntry(int iScreen /* r1+0x0 */, int iPlayer /* r1+0x4 */) {
    // References
    // -> static struct [anonymous] * gaScreen;
}


