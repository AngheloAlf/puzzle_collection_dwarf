/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\lws.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0000CF70 -> 0x0000D610
*/
static struct {
    // total size: 0x40
    long m[4][4]; // offset 0x0, size 0x40
} AnimProc[64]; // size: 0x1000, address: 0x190C0
union {
    long m[4][4]; // offset 0x0, size 0x40
    long long force_structure_alignment; // offset 0x0, size 0x8
} * pObjectMtx; // size: 0x4, address: 0x8E08
// Range: 0xCF70 -> 0xD610
int lws_anim(union {
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
} * * glp /* r1+0xDC */, long (* pm)[4] /* r1+0xE0 */, struct {
    // total size: 0x18
    int first_frame; // offset 0x0, size 0x4
    int last_frame; // offset 0x4, size 0x4
    int frame_rate; // offset 0x8, size 0x4
    int obj_count; // offset 0xC, size 0x4
    struct {
        // total size: 0x18
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
        } * dl; // offset 0x0, size 0x4
        int parent; // offset 0x4, size 0x4
        int key_count; // offset 0x8, size 0x4
        int key_index; // offset 0xC, size 0x4
        signed short px; // offset 0x10, size 0x2
        signed short py; // offset 0x12, size 0x2
        signed short pz; // offset 0x14, size 0x2
    } * obj; // offset 0x10, size 0x4
    struct {
        // total size: 0x1C
        int key_no; // offset 0x0, size 0x4
        int next; // offset 0x4, size 0x4
        signed short lx; // offset 0x8, size 0x2
        signed short ly; // offset 0xA, size 0x2
        signed short lz; // offset 0xC, size 0x2
        signed short rx; // offset 0xE, size 0x2
        signed short ry; // offset 0x10, size 0x2
        signed short rz; // offset 0x12, size 0x2
        signed short sx; // offset 0x14, size 0x2
        signed short sy; // offset 0x16, size 0x2
        signed short sz; // offset 0x18, size 0x2
    } * key; // offset 0x14, size 0x4
} * pSceneData /* r21 */, int frame /* r30 */, unsigned long baseAddr /* r14 */) {
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
    } * pgfx; // r27
    struct {
        // total size: 0x18
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
        } * dl; // offset 0x0, size 0x4
        int parent; // offset 0x4, size 0x4
        int key_count; // offset 0x8, size 0x4
        int key_index; // offset 0xC, size 0x4
        signed short px; // offset 0x10, size 0x2
        signed short py; // offset 0x12, size 0x2
        signed short pz; // offset 0x14, size 0x2
    } * pObj; // r29
    struct {
        // total size: 0x1C
        int key_no; // offset 0x0, size 0x4
        int next; // offset 0x4, size 0x4
        signed short lx; // offset 0x8, size 0x2
        signed short ly; // offset 0xA, size 0x2
        signed short lz; // offset 0xC, size 0x2
        signed short rx; // offset 0xE, size 0x2
        signed short ry; // offset 0x10, size 0x2
        signed short rz; // offset 0x12, size 0x2
        signed short sx; // offset 0x14, size 0x2
        signed short sy; // offset 0x16, size 0x2
        signed short sz; // offset 0x18, size 0x2
    } * pKey; // r5
    struct {
        // total size: 0x1C
        int key_no; // offset 0x0, size 0x4
        int next; // offset 0x4, size 0x4
        signed short lx; // offset 0x8, size 0x2
        signed short ly; // offset 0xA, size 0x2
        signed short lz; // offset 0xC, size 0x2
        signed short rx; // offset 0xE, size 0x2
        signed short ry; // offset 0x10, size 0x2
        signed short rz; // offset 0x12, size 0x2
        signed short sx; // offset 0x14, size 0x2
        signed short sy; // offset 0x16, size 0x2
        signed short sz; // offset 0x18, size 0x2
    } * pKey1; // r9
    struct {
        // total size: 0x1C
        int key_no; // offset 0x0, size 0x4
        int next; // offset 0x4, size 0x4
        signed short lx; // offset 0x8, size 0x2
        signed short ly; // offset 0xA, size 0x2
        signed short lz; // offset 0xC, size 0x2
        signed short rx; // offset 0xE, size 0x2
        signed short ry; // offset 0x10, size 0x2
        signed short rz; // offset 0x12, size 0x2
        signed short sx; // offset 0x14, size 0x2
        signed short sy; // offset 0x16, size 0x2
        signed short sz; // offset 0x18, size 0x2
    } * pKey2; // r3
    int i; // r16
    int key; // r6
    int ret; // r1+0xE8
    float lx; // f31
    float ly; // f30
    float lz; // f29
    float rx; // f28
    float ry; // f27
    float rz; // f26
    float sx; // f25
    float sy; // f24
    float sz; // f23
    float step; // f1
    long ilx; // r1+0xE4
    long ily; // r24
    long ilz; // r25
    signed short irx; // r28
    signed short iry; // r26
    signed short irz; // r1+0x8
    long m[4][4]; // r1+0x9C
    long ms[4][4]; // r1+0x5C
    long mt[4][4]; // r1+0x1C
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
    } * _g; // r4

    // References
    // -> union [anonymous] * pObjectMtx;
    // -> static struct [anonymous] AnimProc[64];
}


