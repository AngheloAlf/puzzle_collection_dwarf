/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\static.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0008F774 -> 0x0008F774
*/
unsigned short colorTable[256]; // size: 0x200, address: 0xB77F8
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
} colorLUT[1]; // size: 0x18, address: 0xB79F8
unsigned char cursor_b[1536]; // size: 0x600, address: 0xB7A10
unsigned char cursor_s[1536]; // size: 0x600, address: 0xB8010
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
} cursorBig[1]; // size: 0x18, address: 0xB8610
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
} cursorSmall[1]; // size: 0x18, address: 0xB8628
unsigned char block1[2048]; // size: 0x800, address: 0xB8640
unsigned char block2[2048]; // size: 0x800, address: 0xB8E40
unsigned char block3[2048]; // size: 0x800, address: 0xB9640
unsigned char block4[2048]; // size: 0x800, address: 0xB9E40
unsigned char block5[2048]; // size: 0x800, address: 0xBA640
unsigned char block6[2048]; // size: 0x800, address: 0xBAE40
unsigned char block7[2048]; // size: 0x800, address: 0xBB640
unsigned char block8[2048]; // size: 0x800, address: 0xBBE40
unsigned char block9[2048]; // size: 0x800, address: 0xBC640
unsigned char blockn[2048]; // size: 0x800, address: 0xBCE40
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
} tetrisBlock1[1]; // size: 0x18, address: 0xBD640
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
} tetrisBlock2[1]; // size: 0x18, address: 0xBD658
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
} tetrisBlock3[1]; // size: 0x18, address: 0xBD670
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
} tetrisBlock4[1]; // size: 0x18, address: 0xBD688
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
} tetrisBlock5[1]; // size: 0x18, address: 0xBD6A0
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
} tetrisBlock6[1]; // size: 0x18, address: 0xBD6B8
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
} tetrisBlock7[1]; // size: 0x18, address: 0xBD6D0
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
} tetrisBlock8[1]; // size: 0x18, address: 0xBD6E8
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
} tetrisBlock9[1]; // size: 0x18, address: 0xBD700
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
} tetrisBlockNew[1]; // size: 0x18, address: 0xBD718
unsigned char combo01[2048]; // size: 0x800, address: 0xBD730
unsigned char combo02[2048]; // size: 0x800, address: 0xBDF30
unsigned char combo03[2048]; // size: 0x800, address: 0xBE730
unsigned char combo04[2048]; // size: 0x800, address: 0xBEF30
unsigned char combo05[2048]; // size: 0x800, address: 0xBF730
unsigned char combo06[2048]; // size: 0x800, address: 0xBFF30
unsigned char combo07[2048]; // size: 0x800, address: 0xC0730
unsigned char combo08[2048]; // size: 0x800, address: 0xC0F30
unsigned char combo09[2048]; // size: 0x800, address: 0xC1730
unsigned char chain01[2048]; // size: 0x800, address: 0xC1F30
unsigned char chain02[2048]; // size: 0x800, address: 0xC2730
unsigned char chain03[2048]; // size: 0x800, address: 0xC2F30
unsigned char chain04[2048]; // size: 0x800, address: 0xC3730
unsigned char chain05[2048]; // size: 0x800, address: 0xC3F30
unsigned char chain06[2048]; // size: 0x800, address: 0xC4730
unsigned char chain07[2048]; // size: 0x800, address: 0xC4F30
unsigned char chain08[2048]; // size: 0x800, address: 0xC5730
unsigned char chain09[2048]; // size: 0x800, address: 0xC5F30
unsigned char chain010[2048]; // size: 0x800, address: 0xC6730
unsigned char chain011[2048]; // size: 0x800, address: 0xC6F30
unsigned char chain012[2048]; // size: 0x800, address: 0xC7730
unsigned char chain013[2048]; // size: 0x800, address: 0xC7F30
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
} combo1Block[1]; // size: 0x18, address: 0xC8730
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
} combo2Block[1]; // size: 0x18, address: 0xC8748
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
} combo3Block[1]; // size: 0x18, address: 0xC8760
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
} combo4Block[1]; // size: 0x18, address: 0xC8778
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
} combo5Block[1]; // size: 0x18, address: 0xC8790
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
} combo6Block[1]; // size: 0x18, address: 0xC87A8
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
} combo7Block[1]; // size: 0x18, address: 0xC87C0
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
} combo8Block[1]; // size: 0x18, address: 0xC87D8
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
} combo9Block[1]; // size: 0x18, address: 0xC87F0
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
} chain1Block[1]; // size: 0x18, address: 0xC8808
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
} chain2Block[1]; // size: 0x18, address: 0xC8820
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
} chain3Block[1]; // size: 0x18, address: 0xC8838
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
} chain4Block[1]; // size: 0x18, address: 0xC8850
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
} chain5Block[1]; // size: 0x18, address: 0xC8868
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
} chain6Block[1]; // size: 0x18, address: 0xC8880
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
} chain7Block[1]; // size: 0x18, address: 0xC8898
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
} chain8Block[1]; // size: 0x18, address: 0xC88B0
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
} chain9Block[1]; // size: 0x18, address: 0xC88C8
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
} chain10Block[1]; // size: 0x18, address: 0xC88E0
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
} chain11Block[1]; // size: 0x18, address: 0xC88F8
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
} chain12Block[1]; // size: 0x18, address: 0xC8910
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
} chain13Block[1]; // size: 0x18, address: 0xC8928
unsigned char gblockx[2048]; // size: 0x800, address: 0xC8940
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
} attackx[1]; // size: 0x18, address: 0xC9140
unsigned char smokesmoke[1024]; // size: 0x400, address: 0xC9158
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
} deadsmoke[1]; // size: 0x18, address: 0xC9558
unsigned short otherTable[256]; // size: 0x200, address: 0xC9570
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
} otherLUT[1]; // size: 0x18, address: 0xC9770
unsigned char w_template1[2048]; // size: 0x800, address: 0xC9788
unsigned char w_level1[2048]; // size: 0x800, address: 0xC9F88
unsigned char w_level2[2048]; // size: 0x800, address: 0xCA788
unsigned char w_level3[2048]; // size: 0x800, address: 0xCAF88
unsigned char w_template2[2048]; // size: 0x800, address: 0xCB788
unsigned char w_star[2048]; // size: 0x800, address: 0xCBF88
unsigned char w_template3[2048]; // size: 0x800, address: 0xCC788
unsigned char w_template4[2048]; // size: 0x800, address: 0xCCF88
unsigned char w_template5[1152]; // size: 0x480, address: 0xCD788
unsigned char w_template6[1152]; // size: 0x480, address: 0xCDC08
unsigned char w_template7[1152]; // size: 0x480, address: 0xCE088
unsigned char w_level4[2048]; // size: 0x800, address: 0xCE508
unsigned char w_level5[2048]; // size: 0x800, address: 0xCED08
unsigned char w_level6[2048]; // size: 0x800, address: 0xCF508
unsigned char w_level7[2048]; // size: 0x800, address: 0xCFD08
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
} otherTexture1[1]; // size: 0x18, address: 0xD0508
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
} otherTexture2[1]; // size: 0x18, address: 0xD0520
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
} otherTexture3[1]; // size: 0x18, address: 0xD0538
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
} otherTexture4[1]; // size: 0x18, address: 0xD0550
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
} otherTexture5[1]; // size: 0x18, address: 0xD0568
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
} otherTexture6[1]; // size: 0x18, address: 0xD0580
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
} otherTexture7[1]; // size: 0x18, address: 0xD0598
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
} otherTexture8[1]; // size: 0x18, address: 0xD05B0
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
} otherTexture9[1]; // size: 0x18, address: 0xD05C8
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
} otherTexture10[1]; // size: 0x18, address: 0xD05E0
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
} otherTexture11[1]; // size: 0x18, address: 0xD05F8
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
} otherTexture12[1]; // size: 0x18, address: 0xD0610
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
} otherTexture13[1]; // size: 0x18, address: 0xD0628
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
} otherTexture14[1]; // size: 0x18, address: 0xD0640
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
} otherTexture15[1]; // size: 0x18, address: 0xD0658
unsigned short numberTable[256]; // size: 0x200, address: 0xD0670
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
} numberLUT[1]; // size: 0x18, address: 0xD0870
unsigned char w_text1[2048]; // size: 0x800, address: 0xD0888
unsigned char w_text2[2048]; // size: 0x800, address: 0xD1088
unsigned char w_text3[2048]; // size: 0x800, address: 0xD1888
unsigned char w_text4[2048]; // size: 0x800, address: 0xD2088
unsigned char w_text5[2048]; // size: 0x800, address: 0xD2888
unsigned char w_text6[2048]; // size: 0x800, address: 0xD3088
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
} numberTexture1[1]; // size: 0x18, address: 0xD3888
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
} numberTexture2[1]; // size: 0x18, address: 0xD38A0
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
} numberTexture3[1]; // size: 0x18, address: 0xD38B8
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
} numberTexture4[1]; // size: 0x18, address: 0xD38D0
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
} numberTexture5[1]; // size: 0x18, address: 0xD38E8
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
} numberTexture6[1]; // size: 0x18, address: 0xD3900
unsigned char clear[2048]; // size: 0x800, address: 0xD3918
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
} clearTexture[1]; // size: 0x18, address: 0xD4118
unsigned char transparent[1024]; // size: 0x400, address: 0xD4130
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
} transTexture[1]; // size: 0x18, address: 0xD4530
unsigned char shadow2[2048]; // size: 0x800, address: 0xD4548
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
} shadow2Texture[1]; // size: 0x18, address: 0xD4D48
unsigned char arrow[512]; // size: 0x200, address: 0xD4D60
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
} arrowTexture[1]; // size: 0x18, address: 0xD4F60
unsigned char stars1[2048]; // size: 0x800, address: 0xD4F78
unsigned char stars2[2048]; // size: 0x800, address: 0xD5778
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
} stars1Texture[1]; // size: 0x18, address: 0xD5F78
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
} stars2Texture[1]; // size: 0x18, address: 0xD5F90
unsigned char shade3d[24192]; // size: 0x5E80, address: 0xD5FA8
unsigned short countTable[256]; // size: 0x200, address: 0xDBE28
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
} countLUT[1]; // size: 0x18, address: 0xDC028
unsigned char countdown[2048]; // size: 0x800, address: 0xDC040
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
} countTexture[1]; // size: 0x18, address: 0xDC840
unsigned short big_c[1472]; // size: 0xB80, address: 0xDC858
unsigned short small_c[1472]; // size: 0xB80, address: 0xDD3D8

