typedef union /* union_pon_gc_c_173 */ {
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
} union_pon_gc_c_173;
typedef union /* union_pon_gc_c_222 */ {
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
} union_pon_gc_c_222;
typedef union /* union_pon_gc_c_262 */ {
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
} union_pon_gc_c_262;
typedef struct /* struct_pon_gc_c_674 */ {
    // total size: 0x31B90
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
    } dp; // offset 0x0, size 0x31B88
    union {
        struct {
            // total size: 0x2
            signed short type; // offset 0x0, size 0x2
        } gen; // offset 0x0, size 0x2
        struct {
            // total size: 0x2
            signed short type; // offset 0x0, size 0x2
        } done; // offset 0x0, size 0x2
    } msg; // offset 0x31B88, size 0x2
    unsigned short * cfb; // offset 0x31B8C, size 0x4
} struct_pon_gc_c_674;
typedef union /* union_pon_gc_tex_c_1219 */ {
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
} union_pon_gc_tex_c_1219;
typedef struct /* struct_pon_gc_tex_c_7093 */ {
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
} struct_pon_gc_tex_c_7093;
typedef struct /* struct_pon_gc_tex_c_7114 */ {
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
} struct_pon_gc_tex_c_7114;
typedef union /* union_pon_gc_tex_c_7332 */ {
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
} union_pon_gc_tex_c_7332;
typedef struct /* struct_pon_gc_tex_c_7513 */ {
    // total size: 0x18
    unsigned long type; // offset 0x0, size 0x4
    unsigned long long * image; // offset 0x4, size 0x4
    unsigned short tmem; // offset 0x8, size 0x2
    unsigned short tsize; // offset 0xA, size 0x2
    unsigned short tline; // offset 0xC, size 0x2
    unsigned short sid; // offset 0xE, size 0x2
    unsigned long flag; // offset 0x10, size 0x4
    unsigned long mask; // offset 0x14, size 0x4
} struct_pon_gc_tex_c_7513;
typedef struct /* struct_pon_gc_tex_c_7524 */ {
    // total size: 0x18
    unsigned long type; // offset 0x0, size 0x4
    unsigned long long * image; // offset 0x4, size 0x4
    unsigned short tmem; // offset 0x8, size 0x2
    unsigned short twidth; // offset 0xA, size 0x2
    unsigned short theight; // offset 0xC, size 0x2
    unsigned short sid; // offset 0xE, size 0x2
    unsigned long flag; // offset 0x10, size 0x4
    unsigned long mask; // offset 0x14, size 0x4
} struct_pon_gc_tex_c_7524;
typedef struct /* struct_pon_gc_tex_c_7535 */ {
    // total size: 0x18
    unsigned long type; // offset 0x0, size 0x4
    unsigned long long * image; // offset 0x4, size 0x4
    unsigned short phead; // offset 0x8, size 0x2
    unsigned short pnum; // offset 0xA, size 0x2
    unsigned short zero; // offset 0xC, size 0x2
    unsigned short sid; // offset 0xE, size 0x2
    unsigned long flag; // offset 0x10, size 0x4
    unsigned long mask; // offset 0x14, size 0x4
} struct_pon_gc_tex_c_7535;
typedef struct /* struct_pon_gc_tex_c_9927 */ {
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
} struct_pon_gc_tex_c_9927;
typedef union /* union_pon_gc_tex_c_17914 */ {
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
} union_pon_gc_tex_c_17914;
typedef struct /* struct_pon_gc_MemoryCard_c_23 */ {
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
} struct_pon_gc_MemoryCard_c_23;
typedef union /* union_pon_gc_MemoryCard_c_1396 */ {
    long m[4][4]; // offset 0x0, size 0x40
    long long force_structure_alignment; // offset 0x0, size 0x8
} union_pon_gc_MemoryCard_c_1396;
typedef struct /* struct_pon_gc_draw_c_2466 */ {
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
} struct_pon_gc_draw_c_2466;
typedef struct /* struct_bitmap_c_14 */ {
    // total size: 0x1C
    int nType; // offset 0x0, size 0x4
    int nStride; // offset 0x4, size 0x4
    void * aPixel; // offset 0x8, size 0x4
    int nSizeX; // offset 0xC, size 0x4
    int nSizeY; // offset 0x10, size 0x4
    int nSizeOriginalX; // offset 0x14, size 0x4
    unsigned short * aColorPalette; // offset 0x18, size 0x4
} struct_bitmap_c_14;
typedef struct /* struct_bitmap_c_65 */ {
    // total size: 0x10
    int iFile; // offset 0x0, size 0x4
    int nSize; // offset 0x4, size 0x4
    int nBase; // offset 0x8, size 0x4
    int nOffset; // offset 0xC, size 0x4
} struct_bitmap_c_65;
typedef struct /* struct_bitmap_c_151 */ {
    // total size: 0x8
    unsigned int w0; // offset 0x0, size 0x4
    unsigned int w1; // offset 0x4, size 0x4
} struct_bitmap_c_151;
typedef struct /* struct_bitmap_c_158 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    unsigned int par : 8; // offset 0x0, size 0x4
    unsigned int len : 16; // offset 0x0, size 0x4
    unsigned int addr; // offset 0x4, size 0x4
} struct_bitmap_c_158;
typedef struct /* struct_bitmap_c_168 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    int pad : 24; // offset 0x0, size 0x4
    struct {
        // total size: 0x4
        unsigned char flag; // offset 0x0, size 0x1
        unsigned char v[3]; // offset 0x1, size 0x3
    } tri; // offset 0x4, size 0x4
} struct_bitmap_c_168;
typedef struct /* struct_bitmap_c_178 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    int pad : 24; // offset 0x0, size 0x4
    struct {
        // total size: 0x4
        unsigned char flag; // offset 0x0, size 0x1
        unsigned char v[3]; // offset 0x1, size 0x3
    } line; // offset 0x4, size 0x4
} struct_bitmap_c_178;
typedef struct /* struct_bitmap_c_185 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    int pad1 : 24; // offset 0x0, size 0x4
    int pad2 : 24; // offset 0x4, size 0x4
    unsigned int param : 8; // offset 0x4, size 0x4
} struct_bitmap_c_185;
typedef struct /* struct_bitmap_c_194 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    int pad0 : 8; // offset 0x0, size 0x4
    int mw_index : 8; // offset 0x0, size 0x4
    int number : 8; // offset 0x0, size 0x4
    int pad1 : 8; // offset 0x4, size 0x4
    int base : 24; // offset 0x4, size 0x4
} struct_bitmap_c_194;
typedef struct /* struct_bitmap_c_202 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    int pad0 : 8; // offset 0x0, size 0x4
    int sft : 8; // offset 0x0, size 0x4
    int len : 8; // offset 0x0, size 0x4
    unsigned int data : 32; // offset 0x4, size 0x4
} struct_bitmap_c_202;
typedef struct /* struct_bitmap_c_219 */ {
    // total size: 0x8
    unsigned char cmd; // offset 0x0, size 0x1
    unsigned char lodscale; // offset 0x1, size 0x1
    unsigned char tile; // offset 0x2, size 0x1
    unsigned char on; // offset 0x3, size 0x1
    unsigned short s; // offset 0x4, size 0x2
    unsigned short t; // offset 0x6, size 0x2
} struct_bitmap_c_219;
typedef struct /* struct_bitmap_c_226 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    int pad1 : 24; // offset 0x0, size 0x4
    signed short pad2; // offset 0x4, size 0x2
    signed short scale; // offset 0x6, size 0x2
} struct_bitmap_c_226;
typedef struct /* struct_bitmap_c_235 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    unsigned int fmt : 3; // offset 0x0, size 0x4
    unsigned int siz : 2; // offset 0x0, size 0x4
    unsigned int pad : 7; // offset 0x0, size 0x4
    unsigned int wd : 12; // offset 0x0, size 0x4
    unsigned int dram; // offset 0x4, size 0x4
} struct_bitmap_c_235;
typedef struct /* struct_bitmap_c_241 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    unsigned int muxs0 : 24; // offset 0x0, size 0x4
    unsigned int muxs1 : 32; // offset 0x4, size 0x4
} struct_bitmap_c_241;
typedef struct /* struct_bitmap_c_249 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    unsigned char pad; // offset 0x1, size 0x1
    unsigned char prim_min_level; // offset 0x2, size 0x1
    unsigned char prim_level; // offset 0x3, size 0x1
    unsigned long color; // offset 0x4, size 0x4
} struct_bitmap_c_249;
typedef struct /* struct_bitmap_c_262 */ {
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
} struct_bitmap_c_262;
typedef struct /* struct_bitmap_c_282 */ {
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
} struct_bitmap_c_282;
typedef struct /* struct_bitmap_c_292 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    unsigned int sl : 12; // offset 0x0, size 0x4
    unsigned int tl : 12; // offset 0x0, size 0x4
    int pad : 5; // offset 0x4, size 0x4
    unsigned int tile : 3; // offset 0x4, size 0x4
    unsigned int sh : 12; // offset 0x4, size 0x4
    unsigned int th : 12; // offset 0x4, size 0x4
} struct_bitmap_c_292;
typedef struct /* struct_bitmap_c_320 */ {
    // total size: 0x10
    int nX; // offset 0x0, size 0x4
    int nY; // offset 0x4, size 0x4
    int nSizeX; // offset 0x8, size 0x4
    int nSizeY; // offset 0xC, size 0x4
} struct_bitmap_c_320;
typedef struct /* struct_controller_c_15 */ {
    // total size: 0x4
    unsigned short type; // offset 0x0, size 0x2
    unsigned char status; // offset 0x2, size 0x1
    unsigned char errno; // offset 0x3, size 0x1
} struct_controller_c_15;
typedef struct /* struct_controller_c_1180 */ {
    // total size: 0x6
    unsigned short button; // offset 0x0, size 0x2
    signed char stick_x; // offset 0x2, size 0x1
    signed char stick_y; // offset 0x3, size 0x1
    unsigned char errno; // offset 0x4, size 0x1
} struct_controller_c_1180;
typedef struct /* struct_controller_c_1238 */ {
    // total size: 0x10
    unsigned long flag; // offset 0x0, size 0x4
    unsigned long count; // offset 0x4, size 0x4
    unsigned long long time; // offset 0x8, size 0x8
} struct_controller_c_1238;
typedef struct /* struct_controller_c_1406 */ {
    // total size: 0x190
    unsigned long long at; // offset 0x0, size 0x8
    unsigned long long v0; // offset 0x8, size 0x8
    unsigned long long v1; // offset 0x10, size 0x8
    unsigned long long a0; // offset 0x18, size 0x8
    unsigned long long a1; // offset 0x20, size 0x8
    unsigned long long a2; // offset 0x28, size 0x8
    unsigned long long a3; // offset 0x30, size 0x8
    unsigned long long t0; // offset 0x38, size 0x8
    unsigned long long t1; // offset 0x40, size 0x8
    unsigned long long t2; // offset 0x48, size 0x8
    unsigned long long t3; // offset 0x50, size 0x8
    unsigned long long t4; // offset 0x58, size 0x8
    unsigned long long t5; // offset 0x60, size 0x8
    unsigned long long t6; // offset 0x68, size 0x8
    unsigned long long t7; // offset 0x70, size 0x8
    unsigned long long s0; // offset 0x78, size 0x8
    unsigned long long s1; // offset 0x80, size 0x8
    unsigned long long s2; // offset 0x88, size 0x8
    unsigned long long s3; // offset 0x90, size 0x8
    unsigned long long s4; // offset 0x98, size 0x8
    unsigned long long s5; // offset 0xA0, size 0x8
    unsigned long long s6; // offset 0xA8, size 0x8
    unsigned long long s7; // offset 0xB0, size 0x8
    unsigned long long t8; // offset 0xB8, size 0x8
    unsigned long long t9; // offset 0xC0, size 0x8
    unsigned long long gp; // offset 0xC8, size 0x8
    unsigned long long sp; // offset 0xD0, size 0x8
    unsigned long long s8; // offset 0xD8, size 0x8
    unsigned long long ra; // offset 0xE0, size 0x8
    unsigned long long lo; // offset 0xE8, size 0x8
    unsigned long long hi; // offset 0xF0, size 0x8
    unsigned long sr; // offset 0xF8, size 0x4
    unsigned long pc; // offset 0xFC, size 0x4
    unsigned long cause; // offset 0x100, size 0x4
    unsigned long badvaddr; // offset 0x104, size 0x4
    unsigned long rcp; // offset 0x108, size 0x4
    unsigned long fpcsr; // offset 0x10C, size 0x4
    union {
        struct {
            // total size: 0x8
            float f_odd; // offset 0x0, size 0x4
            float f_even; // offset 0x4, size 0x4
        } f; // offset 0x0, size 0x8
        double d; // offset 0x0, size 0x8
    } fp0; // offset 0x110, size 0x8
    union {
        struct {
            // total size: 0x8
            float f_odd; // offset 0x0, size 0x4
            float f_even; // offset 0x4, size 0x4
        } f; // offset 0x0, size 0x8
        double d; // offset 0x0, size 0x8
    } fp2; // offset 0x118, size 0x8
    union {
        struct {
            // total size: 0x8
            float f_odd; // offset 0x0, size 0x4
            float f_even; // offset 0x4, size 0x4
        } f; // offset 0x0, size 0x8
        double d; // offset 0x0, size 0x8
    } fp4; // offset 0x120, size 0x8
    union {
        struct {
            // total size: 0x8
            float f_odd; // offset 0x0, size 0x4
            float f_even; // offset 0x4, size 0x4
        } f; // offset 0x0, size 0x8
        double d; // offset 0x0, size 0x8
    } fp6; // offset 0x128, size 0x8
    union {
        struct {
            // total size: 0x8
            float f_odd; // offset 0x0, size 0x4
            float f_even; // offset 0x4, size 0x4
        } f; // offset 0x0, size 0x8
        double d; // offset 0x0, size 0x8
    } fp8; // offset 0x130, size 0x8
    union {
        struct {
            // total size: 0x8
            float f_odd; // offset 0x0, size 0x4
            float f_even; // offset 0x4, size 0x4
        } f; // offset 0x0, size 0x8
        double d; // offset 0x0, size 0x8
    } fp10; // offset 0x138, size 0x8
    union {
        struct {
            // total size: 0x8
            float f_odd; // offset 0x0, size 0x4
            float f_even; // offset 0x4, size 0x4
        } f; // offset 0x0, size 0x8
        double d; // offset 0x0, size 0x8
    } fp12; // offset 0x140, size 0x8
    union {
        struct {
            // total size: 0x8
            float f_odd; // offset 0x0, size 0x4
            float f_even; // offset 0x4, size 0x4
        } f; // offset 0x0, size 0x8
        double d; // offset 0x0, size 0x8
    } fp14; // offset 0x148, size 0x8
    union {
        struct {
            // total size: 0x8
            float f_odd; // offset 0x0, size 0x4
            float f_even; // offset 0x4, size 0x4
        } f; // offset 0x0, size 0x8
        double d; // offset 0x0, size 0x8
    } fp16; // offset 0x150, size 0x8
    union {
        struct {
            // total size: 0x8
            float f_odd; // offset 0x0, size 0x4
            float f_even; // offset 0x4, size 0x4
        } f; // offset 0x0, size 0x8
        double d; // offset 0x0, size 0x8
    } fp18; // offset 0x158, size 0x8
    union {
        struct {
            // total size: 0x8
            float f_odd; // offset 0x0, size 0x4
            float f_even; // offset 0x4, size 0x4
        } f; // offset 0x0, size 0x8
        double d; // offset 0x0, size 0x8
    } fp20; // offset 0x160, size 0x8
    union {
        struct {
            // total size: 0x8
            float f_odd; // offset 0x0, size 0x4
            float f_even; // offset 0x4, size 0x4
        } f; // offset 0x0, size 0x8
        double d; // offset 0x0, size 0x8
    } fp22; // offset 0x168, size 0x8
    union {
        struct {
            // total size: 0x8
            float f_odd; // offset 0x0, size 0x4
            float f_even; // offset 0x4, size 0x4
        } f; // offset 0x0, size 0x8
        double d; // offset 0x0, size 0x8
    } fp24; // offset 0x170, size 0x8
    union {
        struct {
            // total size: 0x8
            float f_odd; // offset 0x0, size 0x4
            float f_even; // offset 0x4, size 0x4
        } f; // offset 0x0, size 0x8
        double d; // offset 0x0, size 0x8
    } fp26; // offset 0x178, size 0x8
    union {
        struct {
            // total size: 0x8
            float f_odd; // offset 0x0, size 0x4
            float f_even; // offset 0x4, size 0x4
        } f; // offset 0x0, size 0x8
        double d; // offset 0x0, size 0x8
    } fp28; // offset 0x180, size 0x8
    union {
        struct {
            // total size: 0x8
            float f_odd; // offset 0x0, size 0x4
            float f_even; // offset 0x4, size 0x4
        } f; // offset 0x0, size 0x8
        double d; // offset 0x0, size 0x8
    } fp30; // offset 0x188, size 0x8
} struct_controller_c_1406;
typedef struct /* struct_editor_c_1276 */ {
    // total size: 0x8
    @enum$100editor_c eMode; // offset 0x0, size 0x4
    void (* pfTick)(int, int *); // offset 0x4, size 0x4
} struct_editor_c_1276;
typedef struct /* struct_image_c_89 */ {
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
} struct_image_c_89;
typedef struct /* struct_image_c_6458 */ {
    // total size: 0xC
    int nData; // offset 0x0, size 0x4
    int nRGBA; // offset 0x4, size 0x4
    signed short nDeltaX; // offset 0x8, size 0x2
    signed short nDeltaY; // offset 0xA, size 0x2
} struct_image_c_6458;
typedef struct /* struct_init_c_9 */ {
    // total size: 0x10
    signed short vscale[4]; // offset 0x0, size 0x8
    signed short vtrans[4]; // offset 0x8, size 0x8
} struct_init_c_9;
typedef union /* union_main_c_1549 */ {
    struct {
        // total size: 0x2
        signed short type; // offset 0x0, size 0x2
    } gen; // offset 0x0, size 0x2
    struct {
        // total size: 0x2
        signed short type; // offset 0x0, size 0x2
    } done; // offset 0x0, size 0x2
} union_main_c_1549;
typedef struct /* struct_menu_c_1407 */ {
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
} struct_menu_c_1407;
typedef struct /* struct_menu_c_1876 */ {
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
} struct_menu_c_1876;
typedef struct /* struct_model_c_289 */ {
    // total size: 0x14
    int nType; // offset 0x0, size 0x4
    struct {
        // total size: 0x8
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
        } * aGfx; // offset 0x0, size 0x4
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
        } * aVtx; // offset 0x4, size 0x4
    } * * apMesh; // offset 0x4, size 0x4
    int nMeshCount; // offset 0x8, size 0x4
    int nMaterialCount; // offset 0xC, size 0x4
    struct {
        // total size: 0x8
        int nImageCount; // offset 0x0, size 0x4
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
        } * * apImage; // offset 0x4, size 0x4
    } * * apMaterial; // offset 0x10, size 0x4
} struct_model_c_289;
typedef struct /* struct_model_c_674 */ {
    // total size: 0x8
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
    } * aGfx; // offset 0x0, size 0x4
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
    } * aVtx; // offset 0x4, size 0x4
} struct_model_c_674;
typedef struct /* struct_model_c_861 */ {
    // total size: 0x8
    int nImageCount; // offset 0x0, size 0x4
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
    } * * apImage; // offset 0x4, size 0x4
} struct_model_c_861;
typedef struct /* struct_screen_c_446 */ {
    // total size: 0x48
    char * szName; // offset 0x0, size 0x4
    int nLoadFont; // offset 0x4, size 0x4
    int nAreaCount; // offset 0x8, size 0x4
    int nTextCount; // offset 0xC, size 0x4
    int nImageCount; // offset 0x10, size 0x4
    int nDialogCount; // offset 0x14, size 0x4
    struct {
        // total size: 0x60
        int nX; // offset 0x0, size 0x4
        int nY; // offset 0x4, size 0x4
        int iImage; // offset 0x8, size 0x4
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
        } * pImage; // offset 0xC, size 0x4
        int nTextData; // offset 0x10, size 0x4
        int nListCount; // offset 0x14, size 0x4
        int nOffsetCursor; // offset 0x18, size 0x4
        int nTag; // offset 0x1C, size 0x4
        int nTagText; // offset 0x20, size 0x4
        int nSizeX; // offset 0x24, size 0x4
        int nSizeY; // offset 0x28, size 0x4
        unsigned int nType; // offset 0x2C, size 0x4
        int nRows; // offset 0x30, size 0x4
        int nColumns; // offset 0x34, size 0x4
        unsigned char * acSlot; // offset 0x38, size 0x4
        int iCursorX; // offset 0x3C, size 0x4
        int iCursorY; // offset 0x40, size 0x4
        int nCursorX; // offset 0x44, size 0x4
        int nCursorY; // offset 0x48, size 0x4
        int nCursorX0; // offset 0x4C, size 0x4
        int nCursorY0; // offset 0x50, size 0x4
        int nCursorX1; // offset 0x54, size 0x4
        int nCursorY1; // offset 0x58, size 0x4
        unsigned short * anCursorList; // offset 0x5C, size 0x4
    } * aArea; // offset 0x18, size 0x4
    struct {
        // total size: 0x6C
        int nTag; // offset 0x0, size 0x4
        int nX; // offset 0x4, size 0x4
        int nY; // offset 0x8, size 0x4
        int nBits; // offset 0xC, size 0x4
        int nWait; // offset 0x10, size 0x4
        int * anTab; // offset 0x14, size 0x4
        int nTagFace; // offset 0x18, size 0x4
        int nCenterY; // offset 0x1C, size 0x4
        int nSizeText; // offset 0x20, size 0x4
        int nTabCount; // offset 0x24, size 0x4
        int nLineCount; // offset 0x28, size 0x4
        int * anCenterX; // offset 0x2C, size 0x4
        signed short * anBlurY; // offset 0x30, size 0x4
        int nTick; // offset 0x34, size 0x4
        int iText; // offset 0x38, size 0x4
        int nSizeX; // offset 0x3C, size 0x4
        int nSizeY; // offset 0x40, size 0x4
        unsigned int nType; // offset 0x44, size 0x4
        unsigned int nLineData; // offset 0x48, size 0x4
        unsigned int * anOffset; // offset 0x4C, size 0x4
        unsigned short * anText; // offset 0x50, size 0x4
        int iTextField; // offset 0x54, size 0x4
        int nSizeField; // offset 0x58, size 0x4
        int nSizeFieldX; // offset 0x5C, size 0x4
        int nSizeFieldY; // offset 0x60, size 0x4
        unsigned int * anColor0; // offset 0x64, size 0x4
        unsigned int * anColor1; // offset 0x68, size 0x4
    } * aText; // offset 0x1C, size 0x4
    struct {
        // total size: 0x30
        int nX; // offset 0x0, size 0x4
        int nY; // offset 0x4, size 0x4
        int iFrame; // offset 0x8, size 0x4
        int iImage; // offset 0xC, size 0x4
        float rScale; // offset 0x10, size 0x4
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
        } * pImage; // offset 0x14, size 0x4
        int nTranslucent; // offset 0x18, size 0x4
        int nTag; // offset 0x1C, size 0x4
        int nTagLink; // offset 0x20, size 0x4
        unsigned int nType; // offset 0x24, size 0x4
        unsigned int nColor0; // offset 0x28, size 0x4
        unsigned int nColor1; // offset 0x2C, size 0x4
    } * aImage; // offset 0x20, size 0x4
    struct {
        // total size: 0x30
        int nTag; // offset 0x0, size 0x4
        int nX; // offset 0x4, size 0x4
        int nY; // offset 0x8, size 0x4
        int iImage; // offset 0xC, size 0x4
        int nColor; // offset 0x10, size 0x4
        int nButton; // offset 0x14, size 0x4
        int nTagArea; // offset 0x18, size 0x4
        int nTagText; // offset 0x1C, size 0x4
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
        } * pImage; // offset 0x20, size 0x4
        int nSizeX; // offset 0x24, size 0x4
        int nSizeY; // offset 0x28, size 0x4
        unsigned int nType; // offset 0x2C, size 0x4
    } * aDialog; // offset 0x24, size 0x4
    int aiAreaActive[4]; // offset 0x28, size 0x10
    int aiAreaActiveLast[4]; // offset 0x38, size 0x10
} struct_screen_c_446;
typedef struct /* struct_screen_c_2860 */ {
    // total size: 0x6C
    int nTag; // offset 0x0, size 0x4
    int nX; // offset 0x4, size 0x4
    int nY; // offset 0x8, size 0x4
    int nBits; // offset 0xC, size 0x4
    int nWait; // offset 0x10, size 0x4
    int * anTab; // offset 0x14, size 0x4
    int nTagFace; // offset 0x18, size 0x4
    int nCenterY; // offset 0x1C, size 0x4
    int nSizeText; // offset 0x20, size 0x4
    int nTabCount; // offset 0x24, size 0x4
    int nLineCount; // offset 0x28, size 0x4
    int * anCenterX; // offset 0x2C, size 0x4
    signed short * anBlurY; // offset 0x30, size 0x4
    int nTick; // offset 0x34, size 0x4
    int iText; // offset 0x38, size 0x4
    int nSizeX; // offset 0x3C, size 0x4
    int nSizeY; // offset 0x40, size 0x4
    unsigned int nType; // offset 0x44, size 0x4
    unsigned int nLineData; // offset 0x48, size 0x4
    unsigned int * anOffset; // offset 0x4C, size 0x4
    unsigned short * anText; // offset 0x50, size 0x4
    int iTextField; // offset 0x54, size 0x4
    int nSizeField; // offset 0x58, size 0x4
    int nSizeFieldX; // offset 0x5C, size 0x4
    int nSizeFieldY; // offset 0x60, size 0x4
    unsigned int * anColor0; // offset 0x64, size 0x4
    unsigned int * anColor1; // offset 0x68, size 0x4
} struct_screen_c_2860;
typedef struct /* struct_screen_c_16999 */ {
    // total size: 0x60
    int nX; // offset 0x0, size 0x4
    int nY; // offset 0x4, size 0x4
    int iImage; // offset 0x8, size 0x4
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
    } * pImage; // offset 0xC, size 0x4
    int nTextData; // offset 0x10, size 0x4
    int nListCount; // offset 0x14, size 0x4
    int nOffsetCursor; // offset 0x18, size 0x4
    int nTag; // offset 0x1C, size 0x4
    int nTagText; // offset 0x20, size 0x4
    int nSizeX; // offset 0x24, size 0x4
    int nSizeY; // offset 0x28, size 0x4
    unsigned int nType; // offset 0x2C, size 0x4
    int nRows; // offset 0x30, size 0x4
    int nColumns; // offset 0x34, size 0x4
    unsigned char * acSlot; // offset 0x38, size 0x4
    int iCursorX; // offset 0x3C, size 0x4
    int iCursorY; // offset 0x40, size 0x4
    int nCursorX; // offset 0x44, size 0x4
    int nCursorY; // offset 0x48, size 0x4
    int nCursorX0; // offset 0x4C, size 0x4
    int nCursorY0; // offset 0x50, size 0x4
    int nCursorX1; // offset 0x54, size 0x4
    int nCursorY1; // offset 0x58, size 0x4
    unsigned short * anCursorList; // offset 0x5C, size 0x4
} struct_screen_c_16999;
typedef struct /* struct_screen_c_17844 */ {
    // total size: 0x30
    int nX; // offset 0x0, size 0x4
    int nY; // offset 0x4, size 0x4
    int iFrame; // offset 0x8, size 0x4
    int iImage; // offset 0xC, size 0x4
    float rScale; // offset 0x10, size 0x4
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
    } * pImage; // offset 0x14, size 0x4
    int nTranslucent; // offset 0x18, size 0x4
    int nTag; // offset 0x1C, size 0x4
    int nTagLink; // offset 0x20, size 0x4
    unsigned int nType; // offset 0x24, size 0x4
    unsigned int nColor0; // offset 0x28, size 0x4
    unsigned int nColor1; // offset 0x2C, size 0x4
} struct_screen_c_17844;
typedef struct /* struct_screen_c_17942 */ {
    // total size: 0x30
    int nTag; // offset 0x0, size 0x4
    int nX; // offset 0x4, size 0x4
    int nY; // offset 0x8, size 0x4
    int iImage; // offset 0xC, size 0x4
    int nColor; // offset 0x10, size 0x4
    int nButton; // offset 0x14, size 0x4
    int nTagArea; // offset 0x18, size 0x4
    int nTagText; // offset 0x1C, size 0x4
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
    } * pImage; // offset 0x20, size 0x4
    int nSizeX; // offset 0x24, size 0x4
    int nSizeY; // offset 0x28, size 0x4
    unsigned int nType; // offset 0x2C, size 0x4
} struct_screen_c_17942;
typedef struct /* struct_story_c_468 */ {
    // total size: 0x34
    int nStep; // offset 0x0, size 0x4
    int bStop; // offset 0x4, size 0x4
    int nX; // offset 0x8, size 0x4
    int nY; // offset 0xC, size 0x4
    int nDustCount; // offset 0x10, size 0x4
    int nDeltaX; // offset 0x14, size 0x4
    int nDeltaY; // offset 0x18, size 0x4
    @enum$107story_c eType; // offset 0x1C, size 0x4
    unsigned int * anStep; // offset 0x20, size 0x4
    unsigned int * anRGBA; // offset 0x24, size 0x4
    unsigned int * anData; // offset 0x28, size 0x4
    unsigned int * anDataX; // offset 0x2C, size 0x4
    unsigned int * anDataY; // offset 0x30, size 0x4
} struct_story_c_468;
typedef struct /* struct_story_c_16662 */ {
    // total size: 0x40
    int iKey; // offset 0x0, size 0x4
    int bBack; // offset 0x4, size 0x4
    int bBlur; // offset 0x8, size 0x4
    int nAlpha; // offset 0xC, size 0x4
    int iFrame; // offset 0x10, size 0x4
    int * aiFrame; // offset 0x14, size 0x4
    int nMaskTick; // offset 0x18, size 0x4
    signed short * anData; // offset 0x1C, size 0x4
    int nCountSet; // offset 0x20, size 0x4
    int nCountFrame; // offset 0x24, size 0x4
    int nCountImage; // offset 0x28, size 0x4
    int * aiFrameSet; // offset 0x2C, size 0x4
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
    } * * apImage; // offset 0x30, size 0x4
    @enum$96story_c eMode; // offset 0x34, size 0x4
    int iFrameWrap0; // offset 0x38, size 0x4
    int iFrameWrap1; // offset 0x3C, size 0x4
} struct_story_c_16662;
typedef struct /* struct_story_c_17969 */ {
    // total size: 0x14
    int bBack; // offset 0x0, size 0x4
    int iFrame; // offset 0x4, size 0x4
    signed short * anData; // offset 0x8, size 0x4
    int nCountFrame; // offset 0xC, size 0x4
    @enum$96story_c eMode; // offset 0x10, size 0x4
} struct_story_c_17969;
typedef struct /* struct_story_c_17987 */ {
    // total size: 0x18
    int nType; // offset 0x0, size 0x4
    int iFrame; // offset 0x4, size 0x4
    int nFrameCount; // offset 0x8, size 0x4
    signed short * anPosition; // offset 0xC, size 0x4
    int nDeltaX; // offset 0x10, size 0x4
    int nDeltaY; // offset 0x14, size 0x4
} struct_story_c_17987;
typedef struct /* struct_story_c_18049 */ {
    // total size: 0x24
    int iMtx; // offset 0x0, size 0x4
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
    } * aVtx; // offset 0x4, size 0x4
    int nX; // offset 0x8, size 0x4
    int nZ; // offset 0xC, size 0x4
    int nCount; // offset 0x10, size 0x4
    int * anSize; // offset 0x14, size 0x4
    float rAngleSpin; // offset 0x18, size 0x4
    union {
        long m[4][4]; // offset 0x0, size 0x40
        long long force_structure_alignment; // offset 0x0, size 0x8
    } * aMtx; // offset 0x1C, size 0x4
    union {
        long m[4][4]; // offset 0x0, size 0x40
        long long force_structure_alignment; // offset 0x0, size 0x8
    } * aMtxView; // offset 0x20, size 0x4
} struct_story_c_18049;
typedef struct /* struct_story_c_26721 */ {
    // total size: 0x8
    signed short nDeltaX; // offset 0x0, size 0x2
    signed short nDeltaY; // offset 0x2, size 0x2
    char * szNameFile; // offset 0x4, size 0x4
} struct_story_c_26721;
typedef struct /* struct_story_c_28911 */ {
    // total size: 0xA0C
    int nTagWink; // offset 0x0, size 0x4
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
    } * pImageBits; // offset 0x4, size 0x4
    int nWind; // offset 0x8, size 0x4
    struct {
        // total size: 0x28
        int nX; // offset 0x0, size 0x4
        int nY; // offset 0x4, size 0x4
        int nSize; // offset 0x8, size 0x4
        int nRate; // offset 0xC, size 0x4
        int nWait; // offset 0x10, size 0x4
        int nInitX; // offset 0x14, size 0x4
        int nInitY; // offset 0x18, size 0x4
        int nInitRate; // offset 0x1C, size 0x4
        int nInitWait; // offset 0x20, size 0x4
        unsigned int nColor; // offset 0x24, size 0x4
    } aBits[64]; // offset 0xC, size 0xA00
} struct_story_c_28911;
typedef struct /* struct_title_c_1973 */ {
    // total size: 0x354
    int nTick; // offset 0x0, size 0x4
    int nMode; // offset 0x4, size 0x4
    int iSong; // offset 0x8, size 0x4
    int iScreen; // offset 0xC, size 0x4
    int nTickDemo; // offset 0x10, size 0x4
    int iCharacter; // offset 0x14, size 0x4
    int bStepText1; // offset 0x18, size 0x4
    int nAlphaWhite; // offset 0x1C, size 0x4
    int nAlphaFairy; // offset 0x20, size 0x4
    int nAlphaPuppy; // offset 0x24, size 0x4
    int nAlphaTitle; // offset 0x28, size 0x4
    int nAlphaRnbow; // offset 0x2C, size 0x4
    int nAlphaText1; // offset 0x30, size 0x4
    int nAlphaText2; // offset 0x34, size 0x4
    @enum$107title_c eMode; // offset 0x38, size 0x4
    int nOffsetTrees; // offset 0x3C, size 0x4
    int nOffsetFairy; // offset 0x40, size 0x4
    int nOffsetPuppy; // offset 0x44, size 0x4
    float rScaleFairy; // offset 0x48, size 0x4
    float rScalePuppy; // offset 0x4C, size 0x4
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
    } * pImageRing; // offset 0x50, size 0x4
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
    } * pImageDust; // offset 0x54, size 0x4
    int nTickWaveFairy; // offset 0x58, size 0x4
    int nTickWavePuppy; // offset 0x5C, size 0x4
    struct {
        // total size: 0x40
        int iKey; // offset 0x0, size 0x4
        int bBack; // offset 0x4, size 0x4
        int bBlur; // offset 0x8, size 0x4
        int nAlpha; // offset 0xC, size 0x4
        int iFrame; // offset 0x10, size 0x4
        int * aiFrame; // offset 0x14, size 0x4
        int nMaskTick; // offset 0x18, size 0x4
        signed short * anData; // offset 0x1C, size 0x4
        int nCountSet; // offset 0x20, size 0x4
        int nCountFrame; // offset 0x24, size 0x4
        int nCountImage; // offset 0x28, size 0x4
        int * aiFrameSet; // offset 0x2C, size 0x4
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
        } * * apImage; // offset 0x30, size 0x4
        @enum$96story_c eMode; // offset 0x34, size 0x4
        int iFrameWrap0; // offset 0x38, size 0x4
        int iFrameWrap1; // offset 0x3C, size 0x4
    } * pPathSeatF; // offset 0x60, size 0x4
    struct {
        // total size: 0x40
        int iKey; // offset 0x0, size 0x4
        int bBack; // offset 0x4, size 0x4
        int bBlur; // offset 0x8, size 0x4
        int nAlpha; // offset 0xC, size 0x4
        int iFrame; // offset 0x10, size 0x4
        int * aiFrame; // offset 0x14, size 0x4
        int nMaskTick; // offset 0x18, size 0x4
        signed short * anData; // offset 0x1C, size 0x4
        int nCountSet; // offset 0x20, size 0x4
        int nCountFrame; // offset 0x24, size 0x4
        int nCountImage; // offset 0x28, size 0x4
        int * aiFrameSet; // offset 0x2C, size 0x4
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
        } * * apImage; // offset 0x30, size 0x4
        @enum$96story_c eMode; // offset 0x34, size 0x4
        int iFrameWrap0; // offset 0x38, size 0x4
        int iFrameWrap1; // offset 0x3C, size 0x4
    } * pPathSeatP; // offset 0x64, size 0x4
    struct {
        // total size: 0x40
        int iKey; // offset 0x0, size 0x4
        int bBack; // offset 0x4, size 0x4
        int bBlur; // offset 0x8, size 0x4
        int nAlpha; // offset 0xC, size 0x4
        int iFrame; // offset 0x10, size 0x4
        int * aiFrame; // offset 0x14, size 0x4
        int nMaskTick; // offset 0x18, size 0x4
        signed short * anData; // offset 0x1C, size 0x4
        int nCountSet; // offset 0x20, size 0x4
        int nCountFrame; // offset 0x24, size 0x4
        int nCountImage; // offset 0x28, size 0x4
        int * aiFrameSet; // offset 0x2C, size 0x4
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
        } * * apImage; // offset 0x30, size 0x4
        @enum$96story_c eMode; // offset 0x34, size 0x4
        int iFrameWrap0; // offset 0x38, size 0x4
        int iFrameWrap1; // offset 0x3C, size 0x4
    } * pPathRingF; // offset 0x68, size 0x4
    struct {
        // total size: 0x40
        int iKey; // offset 0x0, size 0x4
        int bBack; // offset 0x4, size 0x4
        int bBlur; // offset 0x8, size 0x4
        int nAlpha; // offset 0xC, size 0x4
        int iFrame; // offset 0x10, size 0x4
        int * aiFrame; // offset 0x14, size 0x4
        int nMaskTick; // offset 0x18, size 0x4
        signed short * anData; // offset 0x1C, size 0x4
        int nCountSet; // offset 0x20, size 0x4
        int nCountFrame; // offset 0x24, size 0x4
        int nCountImage; // offset 0x28, size 0x4
        int * aiFrameSet; // offset 0x2C, size 0x4
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
        } * * apImage; // offset 0x30, size 0x4
        @enum$96story_c eMode; // offset 0x34, size 0x4
        int iFrameWrap0; // offset 0x38, size 0x4
        int iFrameWrap1; // offset 0x3C, size 0x4
    } * pPathRingP; // offset 0x6C, size 0x4
    struct {
        // total size: 0x40
        int iKey; // offset 0x0, size 0x4
        int bBack; // offset 0x4, size 0x4
        int bBlur; // offset 0x8, size 0x4
        int nAlpha; // offset 0xC, size 0x4
        int iFrame; // offset 0x10, size 0x4
        int * aiFrame; // offset 0x14, size 0x4
        int nMaskTick; // offset 0x18, size 0x4
        signed short * anData; // offset 0x1C, size 0x4
        int nCountSet; // offset 0x20, size 0x4
        int nCountFrame; // offset 0x24, size 0x4
        int nCountImage; // offset 0x28, size 0x4
        int * aiFrameSet; // offset 0x2C, size 0x4
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
        } * * apImage; // offset 0x30, size 0x4
        @enum$96story_c eMode; // offset 0x34, size 0x4
        int iFrameWrap0; // offset 0x38, size 0x4
        int iFrameWrap1; // offset 0x3C, size 0x4
    } * pPathPuffB1; // offset 0x70, size 0x4
    struct {
        // total size: 0x40
        int iKey; // offset 0x0, size 0x4
        int bBack; // offset 0x4, size 0x4
        int bBlur; // offset 0x8, size 0x4
        int nAlpha; // offset 0xC, size 0x4
        int iFrame; // offset 0x10, size 0x4
        int * aiFrame; // offset 0x14, size 0x4
        int nMaskTick; // offset 0x18, size 0x4
        signed short * anData; // offset 0x1C, size 0x4
        int nCountSet; // offset 0x20, size 0x4
        int nCountFrame; // offset 0x24, size 0x4
        int nCountImage; // offset 0x28, size 0x4
        int * aiFrameSet; // offset 0x2C, size 0x4
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
        } * * apImage; // offset 0x30, size 0x4
        @enum$96story_c eMode; // offset 0x34, size 0x4
        int iFrameWrap0; // offset 0x38, size 0x4
        int iFrameWrap1; // offset 0x3C, size 0x4
    } * pPathPuffB2; // offset 0x74, size 0x4
    struct {
        // total size: 0x40
        int iKey; // offset 0x0, size 0x4
        int bBack; // offset 0x4, size 0x4
        int bBlur; // offset 0x8, size 0x4
        int nAlpha; // offset 0xC, size 0x4
        int iFrame; // offset 0x10, size 0x4
        int * aiFrame; // offset 0x14, size 0x4
        int nMaskTick; // offset 0x18, size 0x4
        signed short * anData; // offset 0x1C, size 0x4
        int nCountSet; // offset 0x20, size 0x4
        int nCountFrame; // offset 0x24, size 0x4
        int nCountImage; // offset 0x28, size 0x4
        int * aiFrameSet; // offset 0x2C, size 0x4
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
        } * * apImage; // offset 0x30, size 0x4
        @enum$96story_c eMode; // offset 0x34, size 0x4
        int iFrameWrap0; // offset 0x38, size 0x4
        int iFrameWrap1; // offset 0x3C, size 0x4
    } * pPathPuffB3; // offset 0x78, size 0x4
    struct {
        // total size: 0x40
        int iKey; // offset 0x0, size 0x4
        int bBack; // offset 0x4, size 0x4
        int bBlur; // offset 0x8, size 0x4
        int nAlpha; // offset 0xC, size 0x4
        int iFrame; // offset 0x10, size 0x4
        int * aiFrame; // offset 0x14, size 0x4
        int nMaskTick; // offset 0x18, size 0x4
        signed short * anData; // offset 0x1C, size 0x4
        int nCountSet; // offset 0x20, size 0x4
        int nCountFrame; // offset 0x24, size 0x4
        int nCountImage; // offset 0x28, size 0x4
        int * aiFrameSet; // offset 0x2C, size 0x4
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
        } * * apImage; // offset 0x30, size 0x4
        @enum$96story_c eMode; // offset 0x34, size 0x4
        int iFrameWrap0; // offset 0x38, size 0x4
        int iFrameWrap1; // offset 0x3C, size 0x4
    } * pPathPuffB4; // offset 0x7C, size 0x4
    struct {
        // total size: 0x40
        int iKey; // offset 0x0, size 0x4
        int bBack; // offset 0x4, size 0x4
        int bBlur; // offset 0x8, size 0x4
        int nAlpha; // offset 0xC, size 0x4
        int iFrame; // offset 0x10, size 0x4
        int * aiFrame; // offset 0x14, size 0x4
        int nMaskTick; // offset 0x18, size 0x4
        signed short * anData; // offset 0x1C, size 0x4
        int nCountSet; // offset 0x20, size 0x4
        int nCountFrame; // offset 0x24, size 0x4
        int nCountImage; // offset 0x28, size 0x4
        int * aiFrameSet; // offset 0x2C, size 0x4
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
        } * * apImage; // offset 0x30, size 0x4
        @enum$96story_c eMode; // offset 0x34, size 0x4
        int iFrameWrap0; // offset 0x38, size 0x4
        int iFrameWrap1; // offset 0x3C, size 0x4
    } * pPathPuffB5; // offset 0x80, size 0x4
    struct {
        // total size: 0x40
        int iKey; // offset 0x0, size 0x4
        int bBack; // offset 0x4, size 0x4
        int bBlur; // offset 0x8, size 0x4
        int nAlpha; // offset 0xC, size 0x4
        int iFrame; // offset 0x10, size 0x4
        int * aiFrame; // offset 0x14, size 0x4
        int nMaskTick; // offset 0x18, size 0x4
        signed short * anData; // offset 0x1C, size 0x4
        int nCountSet; // offset 0x20, size 0x4
        int nCountFrame; // offset 0x24, size 0x4
        int nCountImage; // offset 0x28, size 0x4
        int * aiFrameSet; // offset 0x2C, size 0x4
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
        } * * apImage; // offset 0x30, size 0x4
        @enum$96story_c eMode; // offset 0x34, size 0x4
        int iFrameWrap0; // offset 0x38, size 0x4
        int iFrameWrap1; // offset 0x3C, size 0x4
    } * pPathPuffS1; // offset 0x84, size 0x4
    struct {
        // total size: 0x40
        int iKey; // offset 0x0, size 0x4
        int bBack; // offset 0x4, size 0x4
        int bBlur; // offset 0x8, size 0x4
        int nAlpha; // offset 0xC, size 0x4
        int iFrame; // offset 0x10, size 0x4
        int * aiFrame; // offset 0x14, size 0x4
        int nMaskTick; // offset 0x18, size 0x4
        signed short * anData; // offset 0x1C, size 0x4
        int nCountSet; // offset 0x20, size 0x4
        int nCountFrame; // offset 0x24, size 0x4
        int nCountImage; // offset 0x28, size 0x4
        int * aiFrameSet; // offset 0x2C, size 0x4
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
        } * * apImage; // offset 0x30, size 0x4
        @enum$96story_c eMode; // offset 0x34, size 0x4
        int iFrameWrap0; // offset 0x38, size 0x4
        int iFrameWrap1; // offset 0x3C, size 0x4
    } * pPathPuffS2; // offset 0x88, size 0x4
    struct {
        // total size: 0x40
        int iKey; // offset 0x0, size 0x4
        int bBack; // offset 0x4, size 0x4
        int bBlur; // offset 0x8, size 0x4
        int nAlpha; // offset 0xC, size 0x4
        int iFrame; // offset 0x10, size 0x4
        int * aiFrame; // offset 0x14, size 0x4
        int nMaskTick; // offset 0x18, size 0x4
        signed short * anData; // offset 0x1C, size 0x4
        int nCountSet; // offset 0x20, size 0x4
        int nCountFrame; // offset 0x24, size 0x4
        int nCountImage; // offset 0x28, size 0x4
        int * aiFrameSet; // offset 0x2C, size 0x4
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
        } * * apImage; // offset 0x30, size 0x4
        @enum$96story_c eMode; // offset 0x34, size 0x4
        int iFrameWrap0; // offset 0x38, size 0x4
        int iFrameWrap1; // offset 0x3C, size 0x4
    } * pPathPuffS3; // offset 0x8C, size 0x4
    struct {
        // total size: 0x40
        int iKey; // offset 0x0, size 0x4
        int bBack; // offset 0x4, size 0x4
        int bBlur; // offset 0x8, size 0x4
        int nAlpha; // offset 0xC, size 0x4
        int iFrame; // offset 0x10, size 0x4
        int * aiFrame; // offset 0x14, size 0x4
        int nMaskTick; // offset 0x18, size 0x4
        signed short * anData; // offset 0x1C, size 0x4
        int nCountSet; // offset 0x20, size 0x4
        int nCountFrame; // offset 0x24, size 0x4
        int nCountImage; // offset 0x28, size 0x4
        int * aiFrameSet; // offset 0x2C, size 0x4
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
        } * * apImage; // offset 0x30, size 0x4
        @enum$96story_c eMode; // offset 0x34, size 0x4
        int iFrameWrap0; // offset 0x38, size 0x4
        int iFrameWrap1; // offset 0x3C, size 0x4
    } * pPathPuffS4; // offset 0x90, size 0x4
    struct {
        // total size: 0x40
        int iKey; // offset 0x0, size 0x4
        int bBack; // offset 0x4, size 0x4
        int bBlur; // offset 0x8, size 0x4
        int nAlpha; // offset 0xC, size 0x4
        int iFrame; // offset 0x10, size 0x4
        int * aiFrame; // offset 0x14, size 0x4
        int nMaskTick; // offset 0x18, size 0x4
        signed short * anData; // offset 0x1C, size 0x4
        int nCountSet; // offset 0x20, size 0x4
        int nCountFrame; // offset 0x24, size 0x4
        int nCountImage; // offset 0x28, size 0x4
        int * aiFrameSet; // offset 0x2C, size 0x4
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
        } * * apImage; // offset 0x30, size 0x4
        @enum$96story_c eMode; // offset 0x34, size 0x4
        int iFrameWrap0; // offset 0x38, size 0x4
        int iFrameWrap1; // offset 0x3C, size 0x4
    } * pPathPuffS5; // offset 0x94, size 0x4
    struct {
        // total size: 0x40
        int iKey; // offset 0x0, size 0x4
        int bBack; // offset 0x4, size 0x4
        int bBlur; // offset 0x8, size 0x4
        int nAlpha; // offset 0xC, size 0x4
        int iFrame; // offset 0x10, size 0x4
        int * aiFrame; // offset 0x14, size 0x4
        int nMaskTick; // offset 0x18, size 0x4
        signed short * anData; // offset 0x1C, size 0x4
        int nCountSet; // offset 0x20, size 0x4
        int nCountFrame; // offset 0x24, size 0x4
        int nCountImage; // offset 0x28, size 0x4
        int * aiFrameSet; // offset 0x2C, size 0x4
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
        } * * apImage; // offset 0x30, size 0x4
        @enum$96story_c eMode; // offset 0x34, size 0x4
        int iFrameWrap0; // offset 0x38, size 0x4
        int iFrameWrap1; // offset 0x3C, size 0x4
    } * pPathFlowerL; // offset 0x98, size 0x4
    struct {
        // total size: 0x40
        int iKey; // offset 0x0, size 0x4
        int bBack; // offset 0x4, size 0x4
        int bBlur; // offset 0x8, size 0x4
        int nAlpha; // offset 0xC, size 0x4
        int iFrame; // offset 0x10, size 0x4
        int * aiFrame; // offset 0x14, size 0x4
        int nMaskTick; // offset 0x18, size 0x4
        signed short * anData; // offset 0x1C, size 0x4
        int nCountSet; // offset 0x20, size 0x4
        int nCountFrame; // offset 0x24, size 0x4
        int nCountImage; // offset 0x28, size 0x4
        int * aiFrameSet; // offset 0x2C, size 0x4
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
        } * * apImage; // offset 0x30, size 0x4
        @enum$96story_c eMode; // offset 0x34, size 0x4
        int iFrameWrap0; // offset 0x38, size 0x4
        int iFrameWrap1; // offset 0x3C, size 0x4
    } * pPathFlowerR; // offset 0x9C, size 0x4
    struct {
        // total size: 0x40
        int iKey; // offset 0x0, size 0x4
        int bBack; // offset 0x4, size 0x4
        int bBlur; // offset 0x8, size 0x4
        int nAlpha; // offset 0xC, size 0x4
        int iFrame; // offset 0x10, size 0x4
        int * aiFrame; // offset 0x14, size 0x4
        int nMaskTick; // offset 0x18, size 0x4
        signed short * anData; // offset 0x1C, size 0x4
        int nCountSet; // offset 0x20, size 0x4
        int nCountFrame; // offset 0x24, size 0x4
        int nCountImage; // offset 0x28, size 0x4
        int * aiFrameSet; // offset 0x2C, size 0x4
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
        } * * apImage; // offset 0x30, size 0x4
        @enum$96story_c eMode; // offset 0x34, size 0x4
        int iFrameWrap0; // offset 0x38, size 0x4
        int iFrameWrap1; // offset 0x3C, size 0x4
    } * pPathFlowerM; // offset 0xA0, size 0x4
    struct {
        // total size: 0x1C
        int nX; // offset 0x0, size 0x4
        int nY; // offset 0x4, size 0x4
        int nSize; // offset 0x8, size 0x4
        int nTick; // offset 0xC, size 0x4
        int nWait; // offset 0x10, size 0x4
        int nStep; // offset 0x14, size 0x4
        int nFade; // offset 0x18, size 0x4
    } aRingFairy[2]; // offset 0xA4, size 0x38
    struct {
        // total size: 0x1C
        int nX; // offset 0x0, size 0x4
        int nY; // offset 0x4, size 0x4
        int nSize; // offset 0x8, size 0x4
        int nTick; // offset 0xC, size 0x4
        int nWait; // offset 0x10, size 0x4
        int nStep; // offset 0x14, size 0x4
        int nFade; // offset 0x18, size 0x4
    } aRingPuppy[2]; // offset 0xDC, size 0x38
    struct {
        // total size: 0x18
        int nTick; // offset 0x0, size 0x4
        int nWait; // offset 0x4, size 0x4
        int nX; // offset 0x8, size 0x4
        int nY; // offset 0xC, size 0x4
        int nDeltaX; // offset 0x10, size 0x4
        int nDeltaY; // offset 0x14, size 0x4
    } aDustFairy[16]; // offset 0x114, size 0x180
    struct {
        // total size: 0x18
        int nTick; // offset 0x0, size 0x4
        int nWait; // offset 0x4, size 0x4
        int nX; // offset 0x8, size 0x4
        int nY; // offset 0xC, size 0x4
        int nDeltaX; // offset 0x10, size 0x4
        int nDeltaY; // offset 0x14, size 0x4
    } aDustPuppy[8]; // offset 0x294, size 0xC0
} struct_title_c_1973;
typedef struct /* struct_title_c_1989 */ {
    // total size: 0x1C
    int nX; // offset 0x0, size 0x4
    int nY; // offset 0x4, size 0x4
    int nSize; // offset 0x8, size 0x4
    int nTick; // offset 0xC, size 0x4
    int nWait; // offset 0x10, size 0x4
    int nStep; // offset 0x14, size 0x4
    int nFade; // offset 0x18, size 0x4
} struct_title_c_1989;
typedef struct /* struct_title_c_6091 */ {
    // total size: 0x18
    int nTick; // offset 0x0, size 0x4
    int nWait; // offset 0x4, size 0x4
    int nX; // offset 0x8, size 0x4
    int nY; // offset 0xC, size 0x4
    int nDeltaX; // offset 0x10, size 0x4
    int nDeltaY; // offset 0x14, size 0x4
} struct_title_c_6091;
