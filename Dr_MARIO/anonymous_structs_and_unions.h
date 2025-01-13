typedef union /* union_drmario_gc_c_0 */ {
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
} union_drmario_gc_c_0;
typedef struct /* struct_main_story_c_1 */ {
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
} struct_main_story_c_1;
typedef struct /* struct_main_story_c_2 */ {
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
} struct_main_story_c_2;
typedef struct /* struct_main_story_c_3 */ {
    // total size: 0x8
    int frame; // offset 0x0, size 0x4
    char * mes; // offset 0x4, size 0x4
} struct_main_story_c_3;
typedef union /* union_main_story_c_4 */ {
    long m[4][4]; // offset 0x0, size 0x40
    long long force_structure_alignment; // offset 0x0, size 0x8
} union_main_story_c_4;
typedef struct /* struct_main_story_c_5 */ {
    // total size: 0x10
    signed short vscale[4]; // offset 0x0, size 0x8
    signed short vtrans[4]; // offset 0x8, size 0x8
} struct_main_story_c_5;
typedef struct /* struct_main_story_c_6 */ {
    // total size: 0x14
    int type; // offset 0x0, size 0x4
    int x; // offset 0x4, size 0x4
    int y; // offset 0x8, size 0x4
    unsigned char * lut_addr; // offset 0xC, size 0x4
    unsigned char * tex_addr; // offset 0x10, size 0x4
} struct_main_story_c_6;
typedef union /* union_tex_func_c_7 */ {
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
} union_tex_func_c_7;
typedef struct /* struct_tex_func_c_8 */ {
    // total size: 0x8
    void * addr; // offset 0x0, size 0x4
    unsigned short * size; // offset 0x4, size 0x4
} struct_tex_func_c_8;
typedef struct /* struct_drmario_tex_func_c_9 */ {
    // total size: 0x10
    signed short ob[3]; // offset 0x0, size 0x6
    unsigned short flag; // offset 0x6, size 0x2
    signed short tc[2]; // offset 0x8, size 0x4
    unsigned char cn[4]; // offset 0xC, size 0x4
} struct_drmario_tex_func_c_9;
typedef struct /* struct_drmario_tex_func_c_10 */ {
    // total size: 0x10
    signed short ob[3]; // offset 0x0, size 0x6
    unsigned short flag; // offset 0x6, size 0x2
    signed short tc[2]; // offset 0x8, size 0x4
    signed char n[3]; // offset 0xC, size 0x3
    unsigned char a; // offset 0xF, size 0x1
} struct_drmario_tex_func_c_10;
typedef struct /* struct_unzip_c_11 */ {
    // total size: 0x8
    unsigned long next_addr; // offset 0x0, size 0x4
    unsigned long rest_size; // offset 0x4, size 0x4
} struct_unzip_c_11;
typedef union /* union_inflate_c_12 */ {
    unsigned short n; // offset 0x0, size 0x2
    struct huft * t; // offset 0x0, size 0x4
} union_inflate_c_12;
typedef struct /* struct_dm_title_main_c_13 */ {
    // total size: 0x80
    struct {
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
    } msgWnd; // offset 0x0, size 0x80
} struct_dm_title_main_c_13;
typedef struct /* struct_lws_c_14 */ {
    // total size: 0x40
    long m[4][4]; // offset 0x0, size 0x40
} struct_lws_c_14;
typedef struct /* struct_lws_c_15 */ {
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
} struct_lws_c_15;
typedef struct /* struct_lws_c_16 */ {
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
} struct_lws_c_16;
typedef struct /* struct_dm_game_main_c_17 */ {
    // total size: 0x3C4
    unsigned long game_score; // offset 0x0, size 0x4
    unsigned short game_retry; // offset 0x4, size 0x2
    signed short map_x; // offset 0x6, size 0x2
    signed short map_y; // offset 0x8, size 0x2
    signed char map_item_size; // offset 0xA, size 0x1
    @enum$99dm_game_main_c mode_now; // offset 0xC, size 0x4
    @enum$99dm_game_main_c mode_old; // offset 0x10, size 0x4
    @enum$98dm_game_main_c cnd_now; // offset 0x14, size 0x4
    @enum$98dm_game_main_c cnd_old; // offset 0x18, size 0x4
    @enum$98dm_game_main_c cnd_training; // offset 0x1C, size 0x4
    @enum$98dm_game_main_c cnd_static; // offset 0x20, size 0x4
    unsigned char virus_order_number; // offset 0x24, size 0x1
    unsigned char virus_number; // offset 0x25, size 0x1
    unsigned char virus_level; // offset 0x26, size 0x1
    unsigned char virus_anime; // offset 0x27, size 0x1
    signed char virus_anime_vec; // offset 0x28, size 0x1
    unsigned char virus_anime_count; // offset 0x29, size 0x1
    unsigned char virus_anime_max; // offset 0x2A, size 0x1
    unsigned char virus_anime_spead; // offset 0x2B, size 0x1
    unsigned char cap_def_speed; // offset 0x2C, size 0x1
    unsigned char cap_speed; // offset 0x2D, size 0x1
    unsigned char cap_count; // offset 0x2E, size 0x1
    unsigned char cap_speed_count; // offset 0x2F, size 0x1
    unsigned char cap_speed_vec; // offset 0x30, size 0x1
    unsigned char cap_speed_max; // offset 0x31, size 0x1
    unsigned char cap_magazine_cnt; // offset 0x32, size 0x1
    unsigned char cap_magazine_save; // offset 0x33, size 0x1
    signed char cap_move_se_flg; // offset 0x34, size 0x1
    unsigned char erase_anime; // offset 0x35, size 0x1
    unsigned char erase_anime_count; // offset 0x36, size 0x1
    unsigned char erase_virus_count; // offset 0x37, size 0x1
    unsigned char erase_virus_count_old; // offset 0x38, size 0x1
    unsigned char chain_count; // offset 0x39, size 0x1
    unsigned char chain_line; // offset 0x3A, size 0x1
    unsigned char chain_line_max; // offset 0x3B, size 0x1
    unsigned char chain_color[4]; // offset 0x3C, size 0x4
    unsigned char black_up_count; // offset 0x40, size 0x1
    int warning_se_flag; // offset 0x44, size 0x4
    unsigned char flg_retire; // offset 0x48, size 0x1
    unsigned char flg_game_over; // offset 0x49, size 0x1
    unsigned char flg_training; // offset 0x4A, size 0x1
    unsigned char player_no; // offset 0x4B, size 0x1
    unsigned char player_type; // offset 0x4C, size 0x1
    unsigned char think_type; // offset 0x4D, size 0x1
    unsigned char think_level; // offset 0x4E, size 0x1
    unsigned char team_no; // offset 0x4F, size 0x1
    unsigned short cap_attack_work[16][2]; // offset 0x50, size 0x40
    int charNo; // offset 0x90, size 0x4
    struct SAnimeState anime; // offset 0x94, size 0x40
    int flash_virus_pos[9][3]; // offset 0xD4, size 0x6C
    int flash_virus_bak[9]; // offset 0x140, size 0x24
    int flash_virus_count; // offset 0x164, size 0x4
    int bottom_up_scroll; // offset 0x168, size 0x4
    int game_level; // offset 0x16C, size 0x4
    int total_erase_count; // offset 0x170, size 0x4
    int total_chain_count; // offset 0x174, size 0x4
    struct {
        // total size: 0xC
        signed char pos_x[2]; // offset 0x0, size 0x2
        signed char pos_y[2]; // offset 0x2, size 0x2
        signed char capsel_g[2]; // offset 0x4, size 0x2
        signed char capsel_p[2]; // offset 0x6, size 0x2
        signed char capsel_flg[4]; // offset 0x8, size 0x4
    } now_cap; // offset 0x178, size 0xC
    struct {
        // total size: 0xC
        signed char pos_x[2]; // offset 0x0, size 0x2
        signed char pos_y[2]; // offset 0x2, size 0x2
        signed char capsel_g[2]; // offset 0x4, size 0x2
        signed char capsel_p[2]; // offset 0x6, size 0x2
        signed char capsel_flg[4]; // offset 0x8, size 0x4
    } next_cap; // offset 0x184, size 0xC
    struct {
        // total size: 0x108
        struct {
            // total size: 0x40
            unsigned char ok; // offset 0x0, size 0x1
            unsigned char tory; // offset 0x1, size 0x1
            unsigned char x; // offset 0x2, size 0x1
            unsigned char y; // offset 0x3, size 0x1
            unsigned char rev; // offset 0x4, size 0x1
            unsigned char ccnt; // offset 0x5, size 0x1
            long pri; // offset 0x8, size 0x4
            long dead; // offset 0xC, size 0x4
            unsigned char hei[2][10]; // offset 0x10, size 0x14
            unsigned char wid[2][10]; // offset 0x24, size 0x14
            unsigned char elin[2]; // offset 0x38, size 0x2
            unsigned char only[2]; // offset 0x3A, size 0x2
            unsigned char wonly[2]; // offset 0x3C, size 0x2
            unsigned char sub; // offset 0x3E, size 0x1
            unsigned char rensa; // offset 0x3F, size 0x1
        } aiFlagDecide; // offset 0x0, size 0x40
        struct {
            // total size: 0x2
            unsigned char x; // offset 0x0, size 0x1
            unsigned char y; // offset 0x1, size 0x1
        } aiRootDecide[50]; // offset 0x40, size 0x64
        unsigned char aiKeyCount; // offset 0xA4, size 0x1
        unsigned char aiSpeedCnt; // offset 0xA5, size 0x1
        unsigned char aiKRFlag; // offset 0xA6, size 0x1
        unsigned char aiRollCnt; // offset 0xA7, size 0x1
        unsigned char aiRollFinal; // offset 0xA8, size 0x1
        unsigned char aiRollHabit; // offset 0xA9, size 0x1
        unsigned char aiSpUpFlag; // offset 0xAA, size 0x1
        unsigned char aiSpUpStart; // offset 0xAB, size 0x1
        unsigned char aivl; // offset 0xAC, size 0x1
        unsigned char aiok; // offset 0xAD, size 0x1
        unsigned char aiRandFlag; // offset 0xAE, size 0x1
        unsigned char aiEX; // offset 0xAF, size 0x1
        unsigned char aiEY; // offset 0xB0, size 0x1
        unsigned char aiOldRollCnt; // offset 0xB1, size 0x1
        unsigned char aiEffectNo[16]; // offset 0xB2, size 0x10
        signed short aiEffectParam[16]; // offset 0xC2, size 0x20
        signed short aiEffectCount[16]; // offset 0xE2, size 0x20
        unsigned char aiState; // offset 0x102, size 0x1
        unsigned char aiSelSpeed; // offset 0x103, size 0x1
        unsigned char aiRootP; // offset 0x104, size 0x1
        unsigned short aiPriOfs; // offset 0x106, size 0x2
    } ai; // offset 0x190, size 0x108
    unsigned char pn; // offset 0x298, size 0x1
    unsigned char gs; // offset 0x299, size 0x1
    unsigned char lv; // offset 0x29A, size 0x1
    unsigned char vs; // offset 0x29B, size 0x1
    struct {
        // total size: 0x2
        unsigned char st; // offset 0x0, size 0x1
        unsigned char co; // offset 0x1, size 0x1
    } blk[18][8]; // offset 0x29C, size 0x120
    struct {
        // total size: 0x6
        unsigned char mx; // offset 0x0, size 0x1
        unsigned char my; // offset 0x1, size 0x1
        unsigned char ca; // offset 0x2, size 0x1
        unsigned char cb; // offset 0x3, size 0x1
        unsigned char sp; // offset 0x4, size 0x1
        unsigned char cn; // offset 0x5, size 0x1
    } cap; // offset 0x3BC, size 0x6
} struct_dm_game_main_c_17;
typedef struct /* struct_dm_game_main_c_18 */ {
    // total size: 0xA
    signed char pos_m_x; // offset 0x0, size 0x1
    signed char pos_m_y; // offset 0x1, size 0x1
    signed char capsel_m_g; // offset 0x2, size 0x1
    signed char capsel_m_p; // offset 0x3, size 0x1
    signed char capsel_m_flg[6]; // offset 0x4, size 0x6
} struct_dm_game_main_c_18;
typedef struct /* struct_dm_game_main_c_19 */ {
    // total size: 0xC
    signed char pos_x[2]; // offset 0x0, size 0x2
    signed char pos_y[2]; // offset 0x2, size 0x2
    signed char capsel_g[2]; // offset 0x4, size 0x2
    signed char capsel_p[2]; // offset 0x6, size 0x2
    signed char capsel_flg[4]; // offset 0x8, size 0x4
} struct_dm_game_main_c_19;
typedef struct /* struct_dm_game_main_c_20 */ {
    // total size: 0x108
    struct {
        // total size: 0x40
        unsigned char ok; // offset 0x0, size 0x1
        unsigned char tory; // offset 0x1, size 0x1
        unsigned char x; // offset 0x2, size 0x1
        unsigned char y; // offset 0x3, size 0x1
        unsigned char rev; // offset 0x4, size 0x1
        unsigned char ccnt; // offset 0x5, size 0x1
        long pri; // offset 0x8, size 0x4
        long dead; // offset 0xC, size 0x4
        unsigned char hei[2][10]; // offset 0x10, size 0x14
        unsigned char wid[2][10]; // offset 0x24, size 0x14
        unsigned char elin[2]; // offset 0x38, size 0x2
        unsigned char only[2]; // offset 0x3A, size 0x2
        unsigned char wonly[2]; // offset 0x3C, size 0x2
        unsigned char sub; // offset 0x3E, size 0x1
        unsigned char rensa; // offset 0x3F, size 0x1
    } aiFlagDecide; // offset 0x0, size 0x40
    struct {
        // total size: 0x2
        unsigned char x; // offset 0x0, size 0x1
        unsigned char y; // offset 0x1, size 0x1
    } aiRootDecide[50]; // offset 0x40, size 0x64
    unsigned char aiKeyCount; // offset 0xA4, size 0x1
    unsigned char aiSpeedCnt; // offset 0xA5, size 0x1
    unsigned char aiKRFlag; // offset 0xA6, size 0x1
    unsigned char aiRollCnt; // offset 0xA7, size 0x1
    unsigned char aiRollFinal; // offset 0xA8, size 0x1
    unsigned char aiRollHabit; // offset 0xA9, size 0x1
    unsigned char aiSpUpFlag; // offset 0xAA, size 0x1
    unsigned char aiSpUpStart; // offset 0xAB, size 0x1
    unsigned char aivl; // offset 0xAC, size 0x1
    unsigned char aiok; // offset 0xAD, size 0x1
    unsigned char aiRandFlag; // offset 0xAE, size 0x1
    unsigned char aiEX; // offset 0xAF, size 0x1
    unsigned char aiEY; // offset 0xB0, size 0x1
    unsigned char aiOldRollCnt; // offset 0xB1, size 0x1
    unsigned char aiEffectNo[16]; // offset 0xB2, size 0x10
    signed short aiEffectParam[16]; // offset 0xC2, size 0x20
    signed short aiEffectCount[16]; // offset 0xE2, size 0x20
    unsigned char aiState; // offset 0x102, size 0x1
    unsigned char aiSelSpeed; // offset 0x103, size 0x1
    unsigned char aiRootP; // offset 0x104, size 0x1
    unsigned short aiPriOfs; // offset 0x106, size 0x2
} struct_dm_game_main_c_20;
typedef struct /* struct_dm_game_main_c_21 */ {
    // total size: 0x2
    unsigned char st; // offset 0x0, size 0x1
    unsigned char co; // offset 0x1, size 0x1
} struct_dm_game_main_c_21;
typedef struct /* struct_dm_game_main_c_22 */ {
    // total size: 0x6
    unsigned char mx; // offset 0x0, size 0x1
    unsigned char my; // offset 0x1, size 0x1
    unsigned char ca; // offset 0x2, size 0x1
    unsigned char cb; // offset 0x3, size 0x1
    unsigned char sp; // offset 0x4, size 0x1
    unsigned char cn; // offset 0x5, size 0x1
} struct_dm_game_main_c_22;
typedef struct /* struct_dm_game_main_c_23 */ {
    // total size: 0x3
    signed char virus_type; // offset 0x0, size 0x1
    unsigned char x_pos; // offset 0x1, size 0x1
    unsigned char y_pos; // offset 0x2, size 0x1
} struct_dm_game_main_c_23;
typedef struct /* struct_dm_game_main_c_24 */ {
    // total size: 0xB60
    int replayFlag; // offset 0x0, size 0x4
    int randSeed; // offset 0x4, size 0x4
    int randSeed2; // offset 0x8, size 0x4
    int star_pos_x[12]; // offset 0xC, size 0x30
    int star_pos_y[12]; // offset 0x3C, size 0x30
    int star_count; // offset 0x6C, size 0x4
    struct {
        // total size: 0x48
        int * xtbl; // offset 0x0, size 0x4
        int * ytbl; // offset 0x4, size 0x4
        int frame[16]; // offset 0x8, size 0x40
    } starForce; // offset 0x70, size 0x48
    struct {
        // total size: 0xA4
        struct {
            // total size: 0x14
            int pos[2]; // offset 0x0, size 0x8
            int number; // offset 0x8, size 0x4
            int color; // offset 0xC, size 0x4
            float time; // offset 0x10, size 0x4
        } numbers[8]; // offset 0x0, size 0xA0
        int index; // offset 0xA0, size 0x4
    } scoreNums[4]; // offset 0xB8, size 0x290
    int retry_type[4]; // offset 0x348, size 0x10
    int retry_select[4]; // offset 0x358, size 0x10
    int retry_result[4]; // offset 0x368, size 0x10
    int retry_coin; // offset 0x378, size 0x4
    int force_draw_capsel_count[4]; // offset 0x37C, size 0x10
    int curtain_count; // offset 0x38C, size 0x4
    int curtain_step; // offset 0x390, size 0x4
    int frame_move_count; // offset 0x394, size 0x4
    int frame_move_step; // offset 0x398, size 0x4
    int face_anime_count[4]; // offset 0x39C, size 0x10
    int count_down_ctrl; // offset 0x3AC, size 0x4
    int eep_rom_flg; // offset 0x3B0, size 0x4
    int bgm_bpm_flg[2]; // offset 0x3B4, size 0x8
    int last_3_se_cnt; // offset 0x3BC, size 0x4
    int last_3_se_flg; // offset 0x3C0, size 0x4
    int started_game_flg; // offset 0x3C4, size 0x4
    float big_virus_wait; // offset 0x3C8, size 0x4
    float big_virus_timer; // offset 0x3CC, size 0x4
    float big_virus_pos[3][2]; // offset 0x3D0, size 0x18
    float big_virus_rot[3]; // offset 0x3E8, size 0xC
    float big_virus_scale[3]; // offset 0x3F4, size 0xC
    int big_virus_flg[3]; // offset 0x400, size 0xC
    @enum$110dm_title_main_c big_virus_no_wait; // offset 0x40C, size 0x4
    int big_virus_stop_count; // offset 0x410, size 0x4
    int big_virus_blink_count; // offset 0x414, size 0x4
    unsigned char big_virus_count[3]; // offset 0x418, size 0x3
    int demo_timer; // offset 0x41C, size 0x4
    int demo_flag; // offset 0x420, size 0x4
    int blink_count; // offset 0x424, size 0x4
    int warning_se_count; // offset 0x428, size 0x4
    void * objSeg; // offset 0x42C, size 0x4
    struct {
        // total size: 0x8
        void * addr; // offset 0x0, size 0x4
        unsigned short * size; // offset 0x4, size 0x4
    } * texAL; // offset 0x430, size 0x4
    struct {
        // total size: 0x8
        void * addr; // offset 0x0, size 0x4
        unsigned short * size; // offset 0x4, size 0x4
    } * texLS; // offset 0x434, size 0x4
    struct {
        // total size: 0x8
        void * addr; // offset 0x0, size 0x4
        unsigned short * size; // offset 0x4, size 0x4
    } * texP1; // offset 0x438, size 0x4
    struct {
        // total size: 0x8
        void * addr; // offset 0x0, size 0x4
        unsigned short * size; // offset 0x4, size 0x4
    } * texP2; // offset 0x43C, size 0x4
    struct {
        // total size: 0x8
        void * addr; // offset 0x0, size 0x4
        unsigned short * size; // offset 0x4, size 0x4
    } * texP4; // offset 0x440, size 0x4
    struct {
        // total size: 0x8
        void * addr; // offset 0x0, size 0x4
        unsigned short * size; // offset 0x4, size 0x4
    } * texItem; // offset 0x444, size 0x4
    struct {
        // total size: 0x8
        void * addr; // offset 0x0, size 0x4
        unsigned short * size; // offset 0x4, size 0x4
    } * texKaSa; // offset 0x448, size 0x4
    struct SAnimeState virus_anime_state[3]; // offset 0x44C, size 0xC0
    struct SAnimeSmog virus_smog_state[3]; // offset 0x50C, size 0x36C
    int graphic_thread_pri; // offset 0x878, size 0x4
    unsigned char * bg_snap_buf; // offset 0x87C, size 0x4
    @enum$110dm_title_main_c bg_snapping; // offset 0x880, size 0x4
    unsigned char * effect_data_buf; // offset 0x884, size 0x4
    int effect_timer[4]; // offset 0x888, size 0x10
    int touch_down_wait; // offset 0x898, size 0x4
    int win_count[4]; // offset 0x89C, size 0x10
    int vs_win_count[2]; // offset 0x8AC, size 0x8
    int vs_win_total[2]; // offset 0x8B4, size 0x8
    int vs_4p_player_count; // offset 0x8BC, size 0x4
    int vs_4p_team_flg; // offset 0x8C0, size 0x4
    int vs_4p_team_bits[2]; // offset 0x8C4, size 0x8
    int story_4p_name_num[4]; // offset 0x8CC, size 0x10
    int story_4p_stock_cap[4][4]; // offset 0x8DC, size 0x40
    struct {
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
    } msgWnd; // offset 0x91C, size 0x80
    int coin_count; // offset 0x99C, size 0x4
    int coin_time[3]; // offset 0x9A0, size 0xC
    int coffee_break_flow; // offset 0x9AC, size 0x4
    int coffee_break_timer; // offset 0x9B0, size 0x4
    int coffee_break_level; // offset 0x9B4, size 0x4
    int coffee_break_shard; // offset 0x9B8, size 0x4
    @enum$110dm_title_main_c bottom_up_flag; // offset 0x9BC, size 0x4
    int query_play_pause_se; // offset 0x9C0, size 0x4
    int query_pause_player_no; // offset 0x9C4, size 0x4
    int query_debug_player_no; // offset 0x9C8, size 0x4
    int query_config_player_no; // offset 0x9CC, size 0x4
    struct {
        // total size: 0x2C
        int level; // offset 0x0, size 0x4
        @enum$110dm_title_main_c bonus; // offset 0x4, size 0x4
        int flow; // offset 0x8, size 0x4
        int frame; // offset 0xC, size 0x4
        int cnt; // offset 0x10, size 0x4
        unsigned long time; // offset 0x14, size 0x4
        int combo; // offset 0x18, size 0x4
        int virus; // offset 0x1C, size 0x4
        unsigned long score; // offset 0x20, size 0x4
        unsigned long scoreDelta; // offset 0x24, size 0x4
        unsigned long result; // offset 0x28, size 0x4
    } timeAttackResult[2]; // offset 0x9D0, size 0x58
    struct {
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
    } passWnd; // offset 0xA28, size 0x80
    int passAlphaStep; // offset 0xAA8, size 0x4
    unsigned char passBuf[42]; // offset 0xAAC, size 0x2A
    struct {
        // total size: 0x88
        struct {
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
        } msgWnd; // offset 0x0, size 0x80
        int timeout; // offset 0x80, size 0x4
        int count; // offset 0x84, size 0x4
    } writingMsg; // offset 0xAD8, size 0x88
} struct_dm_game_main_c_24;
typedef struct /* struct_dm_game_main_c_25 */ {
    // total size: 0x7800
    union {
        long m[4][4]; // offset 0x0, size 0x40
        long long force_structure_alignment; // offset 0x0, size 0x8
    } mtxBuf[3][32]; // offset 0x0, size 0x1800
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
    } vtxBuf[3][512]; // offset 0x1800, size 0x6000
} struct_dm_game_main_c_25;
typedef struct /* struct_dm_game_main_c_26 */ {
    // total size: 0x2C
    int level; // offset 0x0, size 0x4
    @enum$110dm_title_main_c bonus; // offset 0x4, size 0x4
    int flow; // offset 0x8, size 0x4
    int frame; // offset 0xC, size 0x4
    int cnt; // offset 0x10, size 0x4
    unsigned long time; // offset 0x14, size 0x4
    int combo; // offset 0x18, size 0x4
    int virus; // offset 0x1C, size 0x4
    unsigned long score; // offset 0x20, size 0x4
    unsigned long scoreDelta; // offset 0x24, size 0x4
    unsigned long result; // offset 0x28, size 0x4
} struct_dm_game_main_c_26;
typedef struct /* struct_dm_game_main_c_27 */ {
    // total size: 0xA4
    struct {
        // total size: 0x14
        int pos[2]; // offset 0x0, size 0x8
        int number; // offset 0x8, size 0x4
        int color; // offset 0xC, size 0x4
        float time; // offset 0x10, size 0x4
    } numbers[8]; // offset 0x0, size 0xA0
    int index; // offset 0xA0, size 0x4
} struct_dm_game_main_c_27;
typedef struct /* struct_dm_game_main_c_28 */ {
    // total size: 0x14
    int pos[2]; // offset 0x0, size 0x8
    int number; // offset 0x8, size 0x4
    int color; // offset 0xC, size 0x4
    float time; // offset 0x10, size 0x4
} struct_dm_game_main_c_28;
typedef struct /* struct_dm_game_main_c_29 */ {
    // total size: 0x2FB8
    struct {
        // total size: 0xB60
        int replayFlag; // offset 0x0, size 0x4
        int randSeed; // offset 0x4, size 0x4
        int randSeed2; // offset 0x8, size 0x4
        int star_pos_x[12]; // offset 0xC, size 0x30
        int star_pos_y[12]; // offset 0x3C, size 0x30
        int star_count; // offset 0x6C, size 0x4
        struct {
            // total size: 0x48
            int * xtbl; // offset 0x0, size 0x4
            int * ytbl; // offset 0x4, size 0x4
            int frame[16]; // offset 0x8, size 0x40
        } starForce; // offset 0x70, size 0x48
        struct {
            // total size: 0xA4
            struct {
                // total size: 0x14
                int pos[2]; // offset 0x0, size 0x8
                int number; // offset 0x8, size 0x4
                int color; // offset 0xC, size 0x4
                float time; // offset 0x10, size 0x4
            } numbers[8]; // offset 0x0, size 0xA0
            int index; // offset 0xA0, size 0x4
        } scoreNums[4]; // offset 0xB8, size 0x290
        int retry_type[4]; // offset 0x348, size 0x10
        int retry_select[4]; // offset 0x358, size 0x10
        int retry_result[4]; // offset 0x368, size 0x10
        int retry_coin; // offset 0x378, size 0x4
        int force_draw_capsel_count[4]; // offset 0x37C, size 0x10
        int curtain_count; // offset 0x38C, size 0x4
        int curtain_step; // offset 0x390, size 0x4
        int frame_move_count; // offset 0x394, size 0x4
        int frame_move_step; // offset 0x398, size 0x4
        int face_anime_count[4]; // offset 0x39C, size 0x10
        int count_down_ctrl; // offset 0x3AC, size 0x4
        int eep_rom_flg; // offset 0x3B0, size 0x4
        int bgm_bpm_flg[2]; // offset 0x3B4, size 0x8
        int last_3_se_cnt; // offset 0x3BC, size 0x4
        int last_3_se_flg; // offset 0x3C0, size 0x4
        int started_game_flg; // offset 0x3C4, size 0x4
        float big_virus_wait; // offset 0x3C8, size 0x4
        float big_virus_timer; // offset 0x3CC, size 0x4
        float big_virus_pos[3][2]; // offset 0x3D0, size 0x18
        float big_virus_rot[3]; // offset 0x3E8, size 0xC
        float big_virus_scale[3]; // offset 0x3F4, size 0xC
        int big_virus_flg[3]; // offset 0x400, size 0xC
        @enum$110dm_title_main_c big_virus_no_wait; // offset 0x40C, size 0x4
        int big_virus_stop_count; // offset 0x410, size 0x4
        int big_virus_blink_count; // offset 0x414, size 0x4
        unsigned char big_virus_count[3]; // offset 0x418, size 0x3
        int demo_timer; // offset 0x41C, size 0x4
        int demo_flag; // offset 0x420, size 0x4
        int blink_count; // offset 0x424, size 0x4
        int warning_se_count; // offset 0x428, size 0x4
        void * objSeg; // offset 0x42C, size 0x4
        struct {
            // total size: 0x8
            void * addr; // offset 0x0, size 0x4
            unsigned short * size; // offset 0x4, size 0x4
        } * texAL; // offset 0x430, size 0x4
        struct {
            // total size: 0x8
            void * addr; // offset 0x0, size 0x4
            unsigned short * size; // offset 0x4, size 0x4
        } * texLS; // offset 0x434, size 0x4
        struct {
            // total size: 0x8
            void * addr; // offset 0x0, size 0x4
            unsigned short * size; // offset 0x4, size 0x4
        } * texP1; // offset 0x438, size 0x4
        struct {
            // total size: 0x8
            void * addr; // offset 0x0, size 0x4
            unsigned short * size; // offset 0x4, size 0x4
        } * texP2; // offset 0x43C, size 0x4
        struct {
            // total size: 0x8
            void * addr; // offset 0x0, size 0x4
            unsigned short * size; // offset 0x4, size 0x4
        } * texP4; // offset 0x440, size 0x4
        struct {
            // total size: 0x8
            void * addr; // offset 0x0, size 0x4
            unsigned short * size; // offset 0x4, size 0x4
        } * texItem; // offset 0x444, size 0x4
        struct {
            // total size: 0x8
            void * addr; // offset 0x0, size 0x4
            unsigned short * size; // offset 0x4, size 0x4
        } * texKaSa; // offset 0x448, size 0x4
        struct SAnimeState virus_anime_state[3]; // offset 0x44C, size 0xC0
        struct SAnimeSmog virus_smog_state[3]; // offset 0x50C, size 0x36C
        int graphic_thread_pri; // offset 0x878, size 0x4
        unsigned char * bg_snap_buf; // offset 0x87C, size 0x4
        @enum$110dm_title_main_c bg_snapping; // offset 0x880, size 0x4
        unsigned char * effect_data_buf; // offset 0x884, size 0x4
        int effect_timer[4]; // offset 0x888, size 0x10
        int touch_down_wait; // offset 0x898, size 0x4
        int win_count[4]; // offset 0x89C, size 0x10
        int vs_win_count[2]; // offset 0x8AC, size 0x8
        int vs_win_total[2]; // offset 0x8B4, size 0x8
        int vs_4p_player_count; // offset 0x8BC, size 0x4
        int vs_4p_team_flg; // offset 0x8C0, size 0x4
        int vs_4p_team_bits[2]; // offset 0x8C4, size 0x8
        int story_4p_name_num[4]; // offset 0x8CC, size 0x10
        int story_4p_stock_cap[4][4]; // offset 0x8DC, size 0x40
        struct {
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
        } msgWnd; // offset 0x91C, size 0x80
        int coin_count; // offset 0x99C, size 0x4
        int coin_time[3]; // offset 0x9A0, size 0xC
        int coffee_break_flow; // offset 0x9AC, size 0x4
        int coffee_break_timer; // offset 0x9B0, size 0x4
        int coffee_break_level; // offset 0x9B4, size 0x4
        int coffee_break_shard; // offset 0x9B8, size 0x4
        @enum$110dm_title_main_c bottom_up_flag; // offset 0x9BC, size 0x4
        int query_play_pause_se; // offset 0x9C0, size 0x4
        int query_pause_player_no; // offset 0x9C4, size 0x4
        int query_debug_player_no; // offset 0x9C8, size 0x4
        int query_config_player_no; // offset 0x9CC, size 0x4
        struct {
            // total size: 0x2C
            int level; // offset 0x0, size 0x4
            @enum$110dm_title_main_c bonus; // offset 0x4, size 0x4
            int flow; // offset 0x8, size 0x4
            int frame; // offset 0xC, size 0x4
            int cnt; // offset 0x10, size 0x4
            unsigned long time; // offset 0x14, size 0x4
            int combo; // offset 0x18, size 0x4
            int virus; // offset 0x1C, size 0x4
            unsigned long score; // offset 0x20, size 0x4
            unsigned long scoreDelta; // offset 0x24, size 0x4
            unsigned long result; // offset 0x28, size 0x4
        } timeAttackResult[2]; // offset 0x9D0, size 0x58
        struct {
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
        } passWnd; // offset 0xA28, size 0x80
        int passAlphaStep; // offset 0xAA8, size 0x4
        unsigned char passBuf[42]; // offset 0xAAC, size 0x2A
        struct {
            // total size: 0x88
            struct {
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
            } msgWnd; // offset 0x0, size 0x80
            int timeout; // offset 0x80, size 0x4
            int count; // offset 0x84, size 0x4
        } writingMsg; // offset 0xAD8, size 0x88
    } game; // offset 0x0, size 0xB60
    struct {
        // total size: 0x3C4
        unsigned long game_score; // offset 0x0, size 0x4
        unsigned short game_retry; // offset 0x4, size 0x2
        signed short map_x; // offset 0x6, size 0x2
        signed short map_y; // offset 0x8, size 0x2
        signed char map_item_size; // offset 0xA, size 0x1
        @enum$99dm_game_main_c mode_now; // offset 0xC, size 0x4
        @enum$99dm_game_main_c mode_old; // offset 0x10, size 0x4
        @enum$98dm_game_main_c cnd_now; // offset 0x14, size 0x4
        @enum$98dm_game_main_c cnd_old; // offset 0x18, size 0x4
        @enum$98dm_game_main_c cnd_training; // offset 0x1C, size 0x4
        @enum$98dm_game_main_c cnd_static; // offset 0x20, size 0x4
        unsigned char virus_order_number; // offset 0x24, size 0x1
        unsigned char virus_number; // offset 0x25, size 0x1
        unsigned char virus_level; // offset 0x26, size 0x1
        unsigned char virus_anime; // offset 0x27, size 0x1
        signed char virus_anime_vec; // offset 0x28, size 0x1
        unsigned char virus_anime_count; // offset 0x29, size 0x1
        unsigned char virus_anime_max; // offset 0x2A, size 0x1
        unsigned char virus_anime_spead; // offset 0x2B, size 0x1
        unsigned char cap_def_speed; // offset 0x2C, size 0x1
        unsigned char cap_speed; // offset 0x2D, size 0x1
        unsigned char cap_count; // offset 0x2E, size 0x1
        unsigned char cap_speed_count; // offset 0x2F, size 0x1
        unsigned char cap_speed_vec; // offset 0x30, size 0x1
        unsigned char cap_speed_max; // offset 0x31, size 0x1
        unsigned char cap_magazine_cnt; // offset 0x32, size 0x1
        unsigned char cap_magazine_save; // offset 0x33, size 0x1
        signed char cap_move_se_flg; // offset 0x34, size 0x1
        unsigned char erase_anime; // offset 0x35, size 0x1
        unsigned char erase_anime_count; // offset 0x36, size 0x1
        unsigned char erase_virus_count; // offset 0x37, size 0x1
        unsigned char erase_virus_count_old; // offset 0x38, size 0x1
        unsigned char chain_count; // offset 0x39, size 0x1
        unsigned char chain_line; // offset 0x3A, size 0x1
        unsigned char chain_line_max; // offset 0x3B, size 0x1
        unsigned char chain_color[4]; // offset 0x3C, size 0x4
        unsigned char black_up_count; // offset 0x40, size 0x1
        int warning_se_flag; // offset 0x44, size 0x4
        unsigned char flg_retire; // offset 0x48, size 0x1
        unsigned char flg_game_over; // offset 0x49, size 0x1
        unsigned char flg_training; // offset 0x4A, size 0x1
        unsigned char player_no; // offset 0x4B, size 0x1
        unsigned char player_type; // offset 0x4C, size 0x1
        unsigned char think_type; // offset 0x4D, size 0x1
        unsigned char think_level; // offset 0x4E, size 0x1
        unsigned char team_no; // offset 0x4F, size 0x1
        unsigned short cap_attack_work[16][2]; // offset 0x50, size 0x40
        int charNo; // offset 0x90, size 0x4
        struct SAnimeState anime; // offset 0x94, size 0x40
        int flash_virus_pos[9][3]; // offset 0xD4, size 0x6C
        int flash_virus_bak[9]; // offset 0x140, size 0x24
        int flash_virus_count; // offset 0x164, size 0x4
        int bottom_up_scroll; // offset 0x168, size 0x4
        int game_level; // offset 0x16C, size 0x4
        int total_erase_count; // offset 0x170, size 0x4
        int total_chain_count; // offset 0x174, size 0x4
        struct {
            // total size: 0xC
            signed char pos_x[2]; // offset 0x0, size 0x2
            signed char pos_y[2]; // offset 0x2, size 0x2
            signed char capsel_g[2]; // offset 0x4, size 0x2
            signed char capsel_p[2]; // offset 0x6, size 0x2
            signed char capsel_flg[4]; // offset 0x8, size 0x4
        } now_cap; // offset 0x178, size 0xC
        struct {
            // total size: 0xC
            signed char pos_x[2]; // offset 0x0, size 0x2
            signed char pos_y[2]; // offset 0x2, size 0x2
            signed char capsel_g[2]; // offset 0x4, size 0x2
            signed char capsel_p[2]; // offset 0x6, size 0x2
            signed char capsel_flg[4]; // offset 0x8, size 0x4
        } next_cap; // offset 0x184, size 0xC
        struct {
            // total size: 0x108
            struct {
                // total size: 0x40
                unsigned char ok; // offset 0x0, size 0x1
                unsigned char tory; // offset 0x1, size 0x1
                unsigned char x; // offset 0x2, size 0x1
                unsigned char y; // offset 0x3, size 0x1
                unsigned char rev; // offset 0x4, size 0x1
                unsigned char ccnt; // offset 0x5, size 0x1
                long pri; // offset 0x8, size 0x4
                long dead; // offset 0xC, size 0x4
                unsigned char hei[2][10]; // offset 0x10, size 0x14
                unsigned char wid[2][10]; // offset 0x24, size 0x14
                unsigned char elin[2]; // offset 0x38, size 0x2
                unsigned char only[2]; // offset 0x3A, size 0x2
                unsigned char wonly[2]; // offset 0x3C, size 0x2
                unsigned char sub; // offset 0x3E, size 0x1
                unsigned char rensa; // offset 0x3F, size 0x1
            } aiFlagDecide; // offset 0x0, size 0x40
            struct {
                // total size: 0x2
                unsigned char x; // offset 0x0, size 0x1
                unsigned char y; // offset 0x1, size 0x1
            } aiRootDecide[50]; // offset 0x40, size 0x64
            unsigned char aiKeyCount; // offset 0xA4, size 0x1
            unsigned char aiSpeedCnt; // offset 0xA5, size 0x1
            unsigned char aiKRFlag; // offset 0xA6, size 0x1
            unsigned char aiRollCnt; // offset 0xA7, size 0x1
            unsigned char aiRollFinal; // offset 0xA8, size 0x1
            unsigned char aiRollHabit; // offset 0xA9, size 0x1
            unsigned char aiSpUpFlag; // offset 0xAA, size 0x1
            unsigned char aiSpUpStart; // offset 0xAB, size 0x1
            unsigned char aivl; // offset 0xAC, size 0x1
            unsigned char aiok; // offset 0xAD, size 0x1
            unsigned char aiRandFlag; // offset 0xAE, size 0x1
            unsigned char aiEX; // offset 0xAF, size 0x1
            unsigned char aiEY; // offset 0xB0, size 0x1
            unsigned char aiOldRollCnt; // offset 0xB1, size 0x1
            unsigned char aiEffectNo[16]; // offset 0xB2, size 0x10
            signed short aiEffectParam[16]; // offset 0xC2, size 0x20
            signed short aiEffectCount[16]; // offset 0xE2, size 0x20
            unsigned char aiState; // offset 0x102, size 0x1
            unsigned char aiSelSpeed; // offset 0x103, size 0x1
            unsigned char aiRootP; // offset 0x104, size 0x1
            unsigned short aiPriOfs; // offset 0x106, size 0x2
        } ai; // offset 0x190, size 0x108
        unsigned char pn; // offset 0x298, size 0x1
        unsigned char gs; // offset 0x299, size 0x1
        unsigned char lv; // offset 0x29A, size 0x1
        unsigned char vs; // offset 0x29B, size 0x1
        struct {
            // total size: 0x2
            unsigned char st; // offset 0x0, size 0x1
            unsigned char co; // offset 0x1, size 0x1
        } blk[18][8]; // offset 0x29C, size 0x120
        struct {
            // total size: 0x6
            unsigned char mx; // offset 0x0, size 0x1
            unsigned char my; // offset 0x1, size 0x1
            unsigned char ca; // offset 0x2, size 0x1
            unsigned char cb; // offset 0x3, size 0x1
            unsigned char sp; // offset 0x4, size 0x1
            unsigned char cn; // offset 0x5, size 0x1
        } cap; // offset 0x3BC, size 0x6
    } state[4]; // offset 0xB60, size 0xF10
    struct {
        // total size: 0xA
        signed char pos_m_x; // offset 0x0, size 0x1
        signed char pos_m_y; // offset 0x1, size 0x1
        signed char capsel_m_g; // offset 0x2, size 0x1
        signed char capsel_m_p; // offset 0x3, size 0x1
        signed char capsel_m_flg[6]; // offset 0x4, size 0x6
    } map[4][136]; // offset 0x1A70, size 0x1540
    unsigned long highScore; // offset 0x2FB0, size 0x4
    unsigned long timer; // offset 0x2FB4, size 0x4
} struct_dm_game_main_c_29;
typedef struct /* struct_dm_game_main_c_30 */ {
    // total size: 0xD0
    unsigned char mem_use_flg; // offset 0x0, size 0x1
    unsigned char mem_name[4]; // offset 0x1, size 0x4
    int clear_stage[4][2]; // offset 0x8, size 0x20
    struct {
        // total size: 0xC
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
        unsigned char c_stage; // offset 0x8, size 0x1
    } story_data[3]; // offset 0x28, size 0x24
    struct {
        // total size: 0x8
        unsigned long score; // offset 0x0, size 0x4
        unsigned char c_level; // offset 0x4, size 0x1
    } level_data[3]; // offset 0x4C, size 0x18
    struct {
        // total size: 0x8
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
    } taiQ_data[3]; // offset 0x64, size 0x18
    struct {
        // total size: 0xC
        unsigned long score; // offset 0x0, size 0x4
        unsigned long time; // offset 0x4, size 0x4
        unsigned char erase; // offset 0x8, size 0x1
    } timeAt_data[3]; // offset 0x7C, size 0x24
    unsigned short vscom_data[2]; // offset 0xA0, size 0x4
    unsigned short vc_fl_data[2]; // offset 0xA4, size 0x4
    unsigned short vsman_data[2]; // offset 0xA8, size 0x4
    unsigned short vm_fl_data[2]; // offset 0xAC, size 0x4
    unsigned short vm_ta_data[2]; // offset 0xB0, size 0x4
    struct {
        // total size: 0x1A
        unsigned char st_lv; // offset 0x0, size 0x1
        unsigned char st_sh; // offset 0x1, size 0x1
        unsigned char st_st; // offset 0x2, size 0x1
        unsigned char st_no; // offset 0x3, size 0x1
        unsigned char p1_lv; // offset 0x4, size 0x1
        unsigned char p1_sp; // offset 0x5, size 0x1
        unsigned char p1_m; // offset 0x6, size 0x1
        unsigned char p1_ta_lv; // offset 0x7, size 0x1
        unsigned char p1_tq_lv; // offset 0x8, size 0x1
        unsigned char vc_fl_lv[2]; // offset 0x9, size 0x2
        unsigned char vc_lv[2]; // offset 0xB, size 0x2
        unsigned char vc_sp[2]; // offset 0xD, size 0x2
        unsigned char vc_no[2]; // offset 0xF, size 0x2
        unsigned char vc_st; // offset 0x11, size 0x1
        unsigned char vc_m; // offset 0x12, size 0x1
        unsigned char vm_fl_lv; // offset 0x13, size 0x1
        unsigned char vm_ta_lv; // offset 0x14, size 0x1
        unsigned char vm_lv; // offset 0x15, size 0x1
        unsigned char vm_sp; // offset 0x16, size 0x1
        unsigned char vm_no; // offset 0x17, size 0x1
        unsigned char vm_st; // offset 0x18, size 0x1
        unsigned char vm_m; // offset 0x19, size 0x1
    } config; // offset 0xB4, size 0x1A
} struct_dm_game_main_c_30;
typedef struct /* struct_dm_game_main_c_31 */ {
    // total size: 0x1A
    unsigned char st_lv; // offset 0x0, size 0x1
    unsigned char st_sh; // offset 0x1, size 0x1
    unsigned char st_st; // offset 0x2, size 0x1
    unsigned char st_no; // offset 0x3, size 0x1
    unsigned char p1_lv; // offset 0x4, size 0x1
    unsigned char p1_sp; // offset 0x5, size 0x1
    unsigned char p1_m; // offset 0x6, size 0x1
    unsigned char p1_ta_lv; // offset 0x7, size 0x1
    unsigned char p1_tq_lv; // offset 0x8, size 0x1
    unsigned char vc_fl_lv[2]; // offset 0x9, size 0x2
    unsigned char vc_lv[2]; // offset 0xB, size 0x2
    unsigned char vc_sp[2]; // offset 0xD, size 0x2
    unsigned char vc_no[2]; // offset 0xF, size 0x2
    unsigned char vc_st; // offset 0x11, size 0x1
    unsigned char vc_m; // offset 0x12, size 0x1
    unsigned char vm_fl_lv; // offset 0x13, size 0x1
    unsigned char vm_ta_lv; // offset 0x14, size 0x1
    unsigned char vm_lv; // offset 0x15, size 0x1
    unsigned char vm_sp; // offset 0x16, size 0x1
    unsigned char vm_no; // offset 0x17, size 0x1
    unsigned char vm_st; // offset 0x18, size 0x1
    unsigned char vm_m; // offset 0x19, size 0x1
} struct_dm_game_main_c_31;
typedef struct /* struct_dm_game_main_c_32 */ {
    // total size: 0x4
    signed short limit; // offset 0x0, size 0x2
    signed short blink; // offset 0x2, size 0x2
} struct_dm_game_main_c_32;
typedef struct /* struct_dm_game_main_c_33 */ {
    // total size: 0x8
    unsigned int w0; // offset 0x0, size 0x4
    unsigned int w1; // offset 0x4, size 0x4
} struct_dm_game_main_c_33;
typedef struct /* struct_dm_game_main_c_34 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    unsigned int par : 8; // offset 0x0, size 0x4
    unsigned int len : 16; // offset 0x0, size 0x4
    unsigned int addr; // offset 0x4, size 0x4
} struct_dm_game_main_c_34;
typedef struct /* struct_dm_game_main_c_35 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    int pad : 24; // offset 0x0, size 0x4
    struct {
        // total size: 0x4
        unsigned char flag; // offset 0x0, size 0x1
        unsigned char v[3]; // offset 0x1, size 0x3
    } tri; // offset 0x4, size 0x4
} struct_dm_game_main_c_35;
typedef struct /* struct_dm_game_main_c_36 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    int pad : 24; // offset 0x0, size 0x4
    struct {
        // total size: 0x4
        unsigned char flag; // offset 0x0, size 0x1
        unsigned char v[3]; // offset 0x1, size 0x3
    } line; // offset 0x4, size 0x4
} struct_dm_game_main_c_36;
typedef struct /* struct_dm_game_main_c_37 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    int pad1 : 24; // offset 0x0, size 0x4
    int pad2 : 24; // offset 0x4, size 0x4
    unsigned int param : 8; // offset 0x4, size 0x4
} struct_dm_game_main_c_37;
typedef struct /* struct_dm_game_main_c_38 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    int pad0 : 8; // offset 0x0, size 0x4
    int mw_index : 8; // offset 0x0, size 0x4
    int number : 8; // offset 0x0, size 0x4
    int pad1 : 8; // offset 0x4, size 0x4
    int base : 24; // offset 0x4, size 0x4
} struct_dm_game_main_c_38;
typedef struct /* struct_dm_game_main_c_39 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    int pad0 : 8; // offset 0x0, size 0x4
    int sft : 8; // offset 0x0, size 0x4
    int len : 8; // offset 0x0, size 0x4
    unsigned int data : 32; // offset 0x4, size 0x4
} struct_dm_game_main_c_39;
typedef struct /* struct_dm_game_main_c_40 */ {
    // total size: 0x8
    unsigned char cmd; // offset 0x0, size 0x1
    unsigned char lodscale; // offset 0x1, size 0x1
    unsigned char tile; // offset 0x2, size 0x1
    unsigned char on; // offset 0x3, size 0x1
    unsigned short s; // offset 0x4, size 0x2
    unsigned short t; // offset 0x6, size 0x2
} struct_dm_game_main_c_40;
typedef struct /* struct_dm_game_main_c_41 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    int pad1 : 24; // offset 0x0, size 0x4
    signed short pad2; // offset 0x4, size 0x2
    signed short scale; // offset 0x6, size 0x2
} struct_dm_game_main_c_41;
typedef struct /* struct_dm_game_main_c_42 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    unsigned int fmt : 3; // offset 0x0, size 0x4
    unsigned int siz : 2; // offset 0x0, size 0x4
    unsigned int pad : 7; // offset 0x0, size 0x4
    unsigned int wd : 12; // offset 0x0, size 0x4
    unsigned int dram; // offset 0x4, size 0x4
} struct_dm_game_main_c_42;
typedef struct /* struct_dm_game_main_c_43 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    unsigned int muxs0 : 24; // offset 0x0, size 0x4
    unsigned int muxs1 : 32; // offset 0x4, size 0x4
} struct_dm_game_main_c_43;
typedef struct /* struct_dm_game_main_c_44 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    unsigned char pad; // offset 0x1, size 0x1
    unsigned char prim_min_level; // offset 0x2, size 0x1
    unsigned char prim_level; // offset 0x3, size 0x1
    unsigned long color; // offset 0x4, size 0x4
} struct_dm_game_main_c_44;
typedef struct /* struct_dm_game_main_c_45 */ {
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
} struct_dm_game_main_c_45;
typedef struct /* struct_dm_game_main_c_46 */ {
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
} struct_dm_game_main_c_46;
typedef struct /* struct_dm_game_main_c_47 */ {
    // total size: 0x8
    int cmd : 8; // offset 0x0, size 0x4
    unsigned int sl : 12; // offset 0x0, size 0x4
    unsigned int tl : 12; // offset 0x0, size 0x4
    int pad : 5; // offset 0x4, size 0x4
    unsigned int tile : 3; // offset 0x4, size 0x4
    unsigned int sh : 12; // offset 0x4, size 0x4
    unsigned int th : 12; // offset 0x4, size 0x4
} struct_dm_game_main_c_47;
typedef struct /* struct_dm_game_main_c_48 */ {
    // total size: 0x48
    int * xtbl; // offset 0x0, size 0x4
    int * ytbl; // offset 0x4, size 0x4
    int frame[16]; // offset 0x8, size 0x40
} struct_dm_game_main_c_48;
typedef struct /* struct_joy_c_49 */ {
    // total size: 0x6
    unsigned short button; // offset 0x0, size 0x2
    signed char stick_x; // offset 0x2, size 0x1
    signed char stick_y; // offset 0x3, size 0x1
    unsigned char errno; // offset 0x4, size 0x1
} struct_joy_c_49;
typedef struct /* struct_joy_c_50 */ {
    // total size: 0x4
    unsigned short type; // offset 0x0, size 0x2
    unsigned char status; // offset 0x2, size 0x1
    unsigned char errno; // offset 0x3, size 0x1
} struct_joy_c_50;
typedef struct /* struct_dm_virus_init_c_51 */ {
    // total size: 0x2F4
    struct {
        // total size: 0x3
        signed char virus_type; // offset 0x0, size 0x1
        unsigned char x_pos; // offset 0x1, size 0x1
        unsigned char y_pos; // offset 0x2, size 0x1
    } * vmap; // offset 0x0, size 0x4
    unsigned char * order; // offset 0x4, size 0x4
    int virusCnt; // offset 0x8, size 0x4
    unsigned char selected[96]; // offset 0xC, size 0x60
    unsigned char decideBuf[3][32]; // offset 0x6C, size 0x60
    int decideCnt[3]; // offset 0xCC, size 0xC
    unsigned char underBuf[3][32]; // offset 0xD8, size 0x60
    int underCnt[3]; // offset 0x138, size 0xC
    unsigned char under2Buf[3][32]; // offset 0x144, size 0x60
    int under2Cnt[3]; // offset 0x1A4, size 0xC
    unsigned char under3Buf[3][32]; // offset 0x1B0, size 0x60
    int under3Cnt[3]; // offset 0x210, size 0xC
    unsigned char centerBuf[3][32]; // offset 0x21C, size 0x60
    int centerCnt[3]; // offset 0x27C, size 0xC
    unsigned char sideBuf[3][32]; // offset 0x288, size 0x60
    int sideCnt[3]; // offset 0x2E8, size 0xC
} struct_dm_virus_init_c_51;
typedef struct /* struct_game_etc_c_52 */ {
    // total size: 0xF0
    float x0; // offset 0x0, size 0x4
    float y0; // offset 0x4, size 0x4
    float xs; // offset 0x8, size 0x4
    float ys; // offset 0xC, size 0x4
    int timer[8]; // offset 0x10, size 0x20
    float px[8]; // offset 0x30, size 0x20
    float py[8]; // offset 0x50, size 0x20
    int r[8]; // offset 0x70, size 0x20
    int g[8]; // offset 0x90, size 0x20
    int b[8]; // offset 0xB0, size 0x20
    int a[8]; // offset 0xD0, size 0x20
} struct_game_etc_c_52;
typedef struct /* struct_game_etc_c_53 */ {
    // total size: 0x2C
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
    float sx; // offset 0x8, size 0x4
    float sy; // offset 0xC, size 0x4
    float ex; // offset 0x10, size 0x4
    float ey; // offset 0x14, size 0x4
    float vx; // offset 0x18, size 0x4
    float vy; // offset 0x1C, size 0x4
    int time; // offset 0x20, size 0x4
    int cnt; // offset 0x24, size 0x4
    int player; // offset 0x28, size 0x4
} struct_game_etc_c_53;
typedef struct /* struct_game_etc_c_54 */ {
    // total size: 0x14
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
    int col; // offset 0x8, size 0x4
    int no; // offset 0xC, size 0x4
    int time; // offset 0x10, size 0x4
} struct_game_etc_c_54;
typedef struct /* struct_record_c_55 */ {
    // total size: 0xC
    unsigned long score; // offset 0x0, size 0x4
    unsigned long time; // offset 0x4, size 0x4
    unsigned char c_stage; // offset 0x8, size 0x1
} struct_record_c_55;
typedef struct /* struct_record_c_56 */ {
    // total size: 0x8
    unsigned long score; // offset 0x0, size 0x4
    unsigned char c_level; // offset 0x4, size 0x1
} struct_record_c_56;
typedef struct /* struct_record_c_57 */ {
    // total size: 0x8
    unsigned long score; // offset 0x0, size 0x4
    unsigned long time; // offset 0x4, size 0x4
} struct_record_c_57;
typedef struct /* struct_record_c_58 */ {
    // total size: 0xC
    unsigned long score; // offset 0x0, size 0x4
    unsigned long time; // offset 0x4, size 0x4
    unsigned char erase; // offset 0x8, size 0x1
} struct_record_c_58;
typedef struct /* struct_record_c_59 */ {
    // total size: 0x16
    unsigned char p4_team[4]; // offset 0x0, size 0x4
    unsigned char p4_lv[4]; // offset 0x4, size 0x4
    unsigned char p4_fl_lv[4]; // offset 0x8, size 0x4
    unsigned char p4_no[4]; // offset 0xC, size 0x4
    unsigned char p4_sp[4]; // offset 0x10, size 0x4
    unsigned char p4_st; // offset 0x14, size 0x1
    unsigned char p4_m; // offset 0x15, size 0x1
} struct_record_c_59;
typedef struct /* struct_record_c_60 */ {
    // total size: 0x88
    struct {
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
    } msgWnd; // offset 0x0, size 0x80
    int timeout; // offset 0x80, size 0x4
    int count; // offset 0x84, size 0x4
} struct_record_c_60;
typedef struct /* struct_main_menu_c_61 */ {
    // total size: 0x4
    unsigned int localColor : 1; // offset 0x0, size 0x4
    unsigned int localAlpha : 1; // offset 0x0, size 0x4
} struct_main_menu_c_61;
typedef struct /* struct_main_menu_c_62 */ {
    // total size: 0x130
    void * global; // offset 0x0, size 0x4
    int current; // offset 0x4, size 0x4
    int titleNo[2]; // offset 0x8, size 0x8
    struct SMenuItem miBase[2]; // offset 0x10, size 0x120
} struct_main_menu_c_62;
typedef struct /* struct_main_menu_c_63 */ {
    // total size: 0x260
    void * global; // offset 0x0, size 0x4
    @enum$1025main_menu_c type; // offset 0x4, size 0x4
    int playerCount; // offset 0x8, size 0x4
    int cpuCount; // offset 0xC, size 0x4
    int playerNo; // offset 0x10, size 0x4
    int size[2]; // offset 0x14, size 0x8
    struct {
        // total size: 0x4
        unsigned int cursor : 1; // offset 0x0, size 0x4
        unsigned int finger : 1; // offset 0x0, size 0x4
        unsigned int player : 1; // offset 0x0, size 0x4
        unsigned int blink : 1; // offset 0x0, size 0x4
    } flags; // offset 0x1C, size 0x4
    struct SMenuItem miBase[1]; // offset 0x20, size 0x90
    struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
    struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
    struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
} struct_main_menu_c_63;
typedef struct /* struct_main_menu_c_64 */ {
    // total size: 0x128
    void * global; // offset 0x0, size 0x4
    int level; // offset 0x4, size 0x4
    struct SMenuItem miBase[1]; // offset 0x8, size 0x90
    struct SMenuItem miVirus[1]; // offset 0x98, size 0x90
} struct_main_menu_c_64;
typedef struct /* struct_main_menu_c_65 */ {
    // total size: 0x678
    void * global; // offset 0x0, size 0x4
    int select; // offset 0x4, size 0x4
    struct SMenuItem miBase[1]; // offset 0x8, size 0x90
    struct SMenuItem miYN[2]; // offset 0x98, size 0x120
    struct {
        // total size: 0x260
        void * global; // offset 0x0, size 0x4
        @enum$1025main_menu_c type; // offset 0x4, size 0x4
        int playerCount; // offset 0x8, size 0x4
        int cpuCount; // offset 0xC, size 0x4
        int playerNo; // offset 0x10, size 0x4
        int size[2]; // offset 0x14, size 0x8
        struct {
            // total size: 0x4
            unsigned int cursor : 1; // offset 0x0, size 0x4
            unsigned int finger : 1; // offset 0x0, size 0x4
            unsigned int player : 1; // offset 0x0, size 0x4
            unsigned int blink : 1; // offset 0x0, size 0x4
        } flags; // offset 0x1C, size 0x4
        struct SMenuItem miBase[1]; // offset 0x20, size 0x90
        struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
        struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
        struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
    } cursor[1]; // offset 0x1B8, size 0x260
    struct {
        // total size: 0x260
        void * global; // offset 0x0, size 0x4
        @enum$1025main_menu_c type; // offset 0x4, size 0x4
        int playerCount; // offset 0x8, size 0x4
        int cpuCount; // offset 0xC, size 0x4
        int playerNo; // offset 0x10, size 0x4
        int size[2]; // offset 0x14, size 0x8
        struct {
            // total size: 0x4
            unsigned int cursor : 1; // offset 0x0, size 0x4
            unsigned int finger : 1; // offset 0x0, size 0x4
            unsigned int player : 1; // offset 0x0, size 0x4
            unsigned int blink : 1; // offset 0x0, size 0x4
        } flags; // offset 0x1C, size 0x4
        struct SMenuItem miBase[1]; // offset 0x20, size 0x90
        struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
        struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
        struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
    } window[1]; // offset 0x418, size 0x260
} struct_main_menu_c_65;
typedef struct /* struct_main_menu_c_66 */ {
    // total size: 0x374
    void * global; // offset 0x0, size 0x4
    struct SMenuItem miBase[1]; // offset 0x4, size 0x90
    struct {
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
    } msgWnd[1]; // offset 0x94, size 0x80
    struct {
        // total size: 0x260
        void * global; // offset 0x0, size 0x4
        @enum$1025main_menu_c type; // offset 0x4, size 0x4
        int playerCount; // offset 0x8, size 0x4
        int cpuCount; // offset 0xC, size 0x4
        int playerNo; // offset 0x10, size 0x4
        int size[2]; // offset 0x14, size 0x8
        struct {
            // total size: 0x4
            unsigned int cursor : 1; // offset 0x0, size 0x4
            unsigned int finger : 1; // offset 0x0, size 0x4
            unsigned int player : 1; // offset 0x0, size 0x4
            unsigned int blink : 1; // offset 0x0, size 0x4
        } flags; // offset 0x1C, size 0x4
        struct SMenuItem miBase[1]; // offset 0x20, size 0x90
        struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
        struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
        struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
    } window[1]; // offset 0x114, size 0x260
} struct_main_menu_c_66;
typedef struct /* struct_main_menu_c_67 */ {
    // total size: 0x9C
    void * global; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    int select; // offset 0x8, size 0x4
    struct SMenuItem miBase[1]; // offset 0xC, size 0x90
} struct_main_menu_c_67;
typedef struct /* struct_main_menu_c_68 */ {
    // total size: 0x664
    void * global; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    int select; // offset 0x8, size 0x4
    struct {
        // total size: 0x8
        unsigned int blink; // offset 0x0, size 0x4
        unsigned int special; // offset 0x4, size 0x4
    } flags; // offset 0xC, size 0x8
    struct SMenuItem miBase[1]; // offset 0x14, size 0x90
    struct SMenuItem miLabel[3]; // offset 0xA4, size 0x1B0
    struct SMenuItem miMask[3]; // offset 0x254, size 0x1B0
    struct {
        // total size: 0x260
        void * global; // offset 0x0, size 0x4
        @enum$1025main_menu_c type; // offset 0x4, size 0x4
        int playerCount; // offset 0x8, size 0x4
        int cpuCount; // offset 0xC, size 0x4
        int playerNo; // offset 0x10, size 0x4
        int size[2]; // offset 0x14, size 0x8
        struct {
            // total size: 0x4
            unsigned int cursor : 1; // offset 0x0, size 0x4
            unsigned int finger : 1; // offset 0x0, size 0x4
            unsigned int player : 1; // offset 0x0, size 0x4
            unsigned int blink : 1; // offset 0x0, size 0x4
        } flags; // offset 0x1C, size 0x4
        struct SMenuItem miBase[1]; // offset 0x20, size 0x90
        struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
        struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
        struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
    } cursor[1]; // offset 0x404, size 0x260
} struct_main_menu_c_68;
typedef struct /* struct_main_menu_c_69 */ {
    // total size: 0x8A0
    void * global; // offset 0x0, size 0x4
    int select; // offset 0x4, size 0x4
    int playNo; // offset 0x8, size 0x4
    struct {
        // total size: 0x4
        unsigned int blink : 1; // offset 0x0, size 0x4
    } flags; // offset 0xC, size 0x4
    struct SMenuItem miBase[1]; // offset 0x10, size 0x90
    struct SMenuItem miLabel[5]; // offset 0xA0, size 0x2D0
    struct SMenuItem miMask[5]; // offset 0x370, size 0x2D0
    struct {
        // total size: 0x260
        void * global; // offset 0x0, size 0x4
        @enum$1025main_menu_c type; // offset 0x4, size 0x4
        int playerCount; // offset 0x8, size 0x4
        int cpuCount; // offset 0xC, size 0x4
        int playerNo; // offset 0x10, size 0x4
        int size[2]; // offset 0x14, size 0x8
        struct {
            // total size: 0x4
            unsigned int cursor : 1; // offset 0x0, size 0x4
            unsigned int finger : 1; // offset 0x0, size 0x4
            unsigned int player : 1; // offset 0x0, size 0x4
            unsigned int blink : 1; // offset 0x0, size 0x4
        } flags; // offset 0x1C, size 0x4
        struct SMenuItem miBase[1]; // offset 0x20, size 0x90
        struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
        struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
        struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
    } cursor[1]; // offset 0x640, size 0x260
} struct_main_menu_c_69;
typedef struct /* struct_main_menu_c_70 */ {
    // total size: 0xAC
    void * global; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    int column; // offset 0x8, size 0x4
    int number; // offset 0xC, size 0x4
    struct {
        // total size: 0x4
        unsigned int zero : 1; // offset 0x0, size 0x4
    } flags; // offset 0x10, size 0x4
    char columns[8]; // offset 0x14, size 0x8
    struct SMenuItem miBase[1]; // offset 0x1C, size 0x90
} struct_main_menu_c_70;
typedef struct /* struct_main_menu_c_71 */ {
    // total size: 0x128
    void * global; // offset 0x0, size 0x4
    int level; // offset 0x4, size 0x4
    struct SMenuItem miBase[1]; // offset 0x8, size 0x90
    struct SMenuItem miStar[1]; // offset 0x98, size 0x90
} struct_main_menu_c_71;
typedef struct /* struct_main_menu_c_72 */ {
    // total size: 0x514
    void * global; // offset 0x0, size 0x4
    struct SMenuItem miBase[1]; // offset 0x4, size 0x90
    struct SMenuItem miDesc[5]; // offset 0x94, size 0x2D0
    struct SMenuItem miLine[1]; // offset 0x364, size 0x90
    struct SMenuItem miLabel[1]; // offset 0x3F4, size 0x90
    struct SMenuItem miPushAnyKey[1]; // offset 0x484, size 0x90
} struct_main_menu_c_72;
typedef struct /* struct_main_menu_c_73 */ {
    // total size: 0x678
    void * global; // offset 0x0, size 0x4
    int size; // offset 0x4, size 0x4
    int count; // offset 0x8, size 0x4
    int select; // offset 0xC, size 0x4
    int indexes[6]; // offset 0x10, size 0x18
    struct SMenuItem miBase[1]; // offset 0x28, size 0x90
    struct SMenuItem miPanel[6]; // offset 0xB8, size 0x360
    struct {
        // total size: 0x260
        void * global; // offset 0x0, size 0x4
        @enum$1025main_menu_c type; // offset 0x4, size 0x4
        int playerCount; // offset 0x8, size 0x4
        int cpuCount; // offset 0xC, size 0x4
        int playerNo; // offset 0x10, size 0x4
        int size[2]; // offset 0x14, size 0x8
        struct {
            // total size: 0x4
            unsigned int cursor : 1; // offset 0x0, size 0x4
            unsigned int finger : 1; // offset 0x0, size 0x4
            unsigned int player : 1; // offset 0x0, size 0x4
            unsigned int blink : 1; // offset 0x0, size 0x4
        } flags; // offset 0x1C, size 0x4
        struct SMenuItem miBase[1]; // offset 0x20, size 0x90
        struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
        struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
        struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
    } cursor[1]; // offset 0x418, size 0x260
} struct_main_menu_c_73;
typedef struct /* struct_main_menu_c_74 */ {
    // total size: 0xA88
    void * global; // offset 0x0, size 0x4
    int playerCount; // offset 0x4, size 0x4
    int flow; // offset 0x8, size 0x4
    int depth[2]; // offset 0xC, size 0x8
    int select[2]; // offset 0x14, size 0x8
    int column[2]; // offset 0x1C, size 0x8
    struct {
        // total size: 0x4
        unsigned int guest : 1; // offset 0x0, size 0x4
    } flags; // offset 0x24, size 0x4
    struct SMenuItem miBase[1]; // offset 0x28, size 0x90
    struct SMenuItem miLabel[9]; // offset 0xB8, size 0x510
    struct {
        // total size: 0x260
        void * global; // offset 0x0, size 0x4
        @enum$1025main_menu_c type; // offset 0x4, size 0x4
        int playerCount; // offset 0x8, size 0x4
        int cpuCount; // offset 0xC, size 0x4
        int playerNo; // offset 0x10, size 0x4
        int size[2]; // offset 0x14, size 0x8
        struct {
            // total size: 0x4
            unsigned int cursor : 1; // offset 0x0, size 0x4
            unsigned int finger : 1; // offset 0x0, size 0x4
            unsigned int player : 1; // offset 0x0, size 0x4
            unsigned int blink : 1; // offset 0x0, size 0x4
        } flags; // offset 0x1C, size 0x4
        struct SMenuItem miBase[1]; // offset 0x20, size 0x90
        struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
        struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
        struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
    } cursor[2]; // offset 0x5C8, size 0x4C0
} struct_main_menu_c_74;
typedef struct /* struct_main_menu_c_75 */ {
    // total size: 0x4B0
    void * global; // offset 0x0, size 0x4
    int type; // offset 0x4, size 0x4
    int select; // offset 0x8, size 0x4
    unsigned char name[4]; // offset 0xC, size 0x4
    struct SMenuItem miBase[1]; // offset 0x10, size 0x90
    struct SMenuItem miName[1]; // offset 0xA0, size 0x90
    struct SMenuItem miPanel[2]; // offset 0x130, size 0x120
    struct {
        // total size: 0x260
        void * global; // offset 0x0, size 0x4
        @enum$1025main_menu_c type; // offset 0x4, size 0x4
        int playerCount; // offset 0x8, size 0x4
        int cpuCount; // offset 0xC, size 0x4
        int playerNo; // offset 0x10, size 0x4
        int size[2]; // offset 0x14, size 0x8
        struct {
            // total size: 0x4
            unsigned int cursor : 1; // offset 0x0, size 0x4
            unsigned int finger : 1; // offset 0x0, size 0x4
            unsigned int player : 1; // offset 0x0, size 0x4
            unsigned int blink : 1; // offset 0x0, size 0x4
        } flags; // offset 0x1C, size 0x4
        struct SMenuItem miBase[1]; // offset 0x20, size 0x90
        struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
        struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
        struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
    } cursor[1]; // offset 0x250, size 0x260
} struct_main_menu_c_75;
typedef struct /* struct_main_menu_c_76 */ {
    // total size: 0x69C
    void * global; // offset 0x0, size 0x4
    int select; // offset 0x4, size 0x4
    int bgmNo; // offset 0x8, size 0x4
    int sndId; // offset 0xC, size 0x4
    int sndNo; // offset 0x10, size 0x4
    struct SMenuItem miBase[1]; // offset 0x14, size 0x90
    struct SMenuItem miPanel[4]; // offset 0xA4, size 0x240
    struct {
        // total size: 0xAC
        void * global; // offset 0x0, size 0x4
        int size; // offset 0x4, size 0x4
        int column; // offset 0x8, size 0x4
        int number; // offset 0xC, size 0x4
        struct {
            // total size: 0x4
            unsigned int zero : 1; // offset 0x0, size 0x4
        } flags; // offset 0x10, size 0x4
        char columns[8]; // offset 0x14, size 0x8
        struct SMenuItem miBase[1]; // offset 0x1C, size 0x90
    } number[2]; // offset 0x2E4, size 0x158
    struct {
        // total size: 0x260
        void * global; // offset 0x0, size 0x4
        @enum$1025main_menu_c type; // offset 0x4, size 0x4
        int playerCount; // offset 0x8, size 0x4
        int cpuCount; // offset 0xC, size 0x4
        int playerNo; // offset 0x10, size 0x4
        int size[2]; // offset 0x14, size 0x8
        struct {
            // total size: 0x4
            unsigned int cursor : 1; // offset 0x0, size 0x4
            unsigned int finger : 1; // offset 0x0, size 0x4
            unsigned int player : 1; // offset 0x0, size 0x4
            unsigned int blink : 1; // offset 0x0, size 0x4
        } flags; // offset 0x1C, size 0x4
        struct SMenuItem miBase[1]; // offset 0x20, size 0x90
        struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
        struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
        struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
    } cursor[1]; // offset 0x43C, size 0x260
} struct_main_menu_c_76;
typedef struct /* struct_main_menu_c_77 */ {
    // total size: 0x1920
    void * global; // offset 0x0, size 0x4
    @enum$110dm_title_main_c flash; // offset 0x4, size 0x4
    @enum$110dm_title_main_c timeAt; // offset 0x8, size 0x4
    @enum$110dm_title_main_c FL_TA; // offset 0xC, size 0x4
    int size; // offset 0x10, size 0x4
    int playerCount; // offset 0x14, size 0x4
    int cpuCount; // offset 0x18, size 0x4
    int playerNo; // offset 0x1C, size 0x4
    int charNo; // offset 0x20, size 0x4
    int depth; // offset 0x24, size 0x4
    int flow; // offset 0x28, size 0x4
    void * animeAddr; // offset 0x2C, size 0x4
    struct {
        // total size: 0x4
        unsigned int cpu : 1; // offset 0x0, size 0x4
        unsigned int loaded : 1; // offset 0x0, size 0x4
    } flags; // offset 0x30, size 0x4
    struct SMenuItem miBase[1]; // offset 0x34, size 0x90
    struct SMenuItem miPlayer[1]; // offset 0xC4, size 0x90
    struct SMenuItem miPlayerNo[1]; // offset 0x154, size 0x90
    struct {
        // total size: 0xAC
        void * global; // offset 0x0, size 0x4
        int size; // offset 0x4, size 0x4
        int column; // offset 0x8, size 0x4
        int number; // offset 0xC, size 0x4
        struct {
            // total size: 0x4
            unsigned int zero : 1; // offset 0x0, size 0x4
        } flags; // offset 0x10, size 0x4
        char columns[8]; // offset 0x14, size 0x8
        struct SMenuItem miBase[1]; // offset 0x1C, size 0x90
    } lvNum[1]; // offset 0x1E4, size 0xAC
    struct SMenuLvGauge lvGauge[1]; // offset 0x290, size 0x300
    struct {
        // total size: 0x9C
        void * global; // offset 0x0, size 0x4
        int size; // offset 0x4, size 0x4
        int select; // offset 0x8, size 0x4
        struct SMenuItem miBase[1]; // offset 0xC, size 0x90
    } speedAsk[1]; // offset 0x590, size 0x9C
    struct {
        // total size: 0x664
        void * global; // offset 0x0, size 0x4
        int size; // offset 0x4, size 0x4
        int select; // offset 0x8, size 0x4
        struct {
            // total size: 0x8
            unsigned int blink; // offset 0x0, size 0x4
            unsigned int special; // offset 0x4, size 0x4
        } flags; // offset 0xC, size 0x8
        struct SMenuItem miBase[1]; // offset 0x14, size 0x90
        struct SMenuItem miLabel[3]; // offset 0xA4, size 0x1B0
        struct SMenuItem miMask[3]; // offset 0x254, size 0x1B0
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } cursor[1]; // offset 0x404, size 0x260
    } speedItem[1]; // offset 0x62C, size 0x664
    struct SAnimeState animeState[1]; // offset 0xC90, size 0x40
    struct SMenuItem miOk[1]; // offset 0xCD0, size 0x90
    struct {
        // total size: 0x260
        void * global; // offset 0x0, size 0x4
        @enum$1025main_menu_c type; // offset 0x4, size 0x4
        int playerCount; // offset 0x8, size 0x4
        int cpuCount; // offset 0xC, size 0x4
        int playerNo; // offset 0x10, size 0x4
        int size[2]; // offset 0x14, size 0x8
        struct {
            // total size: 0x4
            unsigned int cursor : 1; // offset 0x0, size 0x4
            unsigned int finger : 1; // offset 0x0, size 0x4
            unsigned int player : 1; // offset 0x0, size 0x4
            unsigned int blink : 1; // offset 0x0, size 0x4
        } flags; // offset 0x1C, size 0x4
        struct SMenuItem miBase[1]; // offset 0x20, size 0x90
        struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
        struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
        struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
    } cursor[2]; // offset 0xD60, size 0x4C0
    struct {
        // total size: 0x9C
        void * global; // offset 0x0, size 0x4
        int size; // offset 0x4, size 0x4
        int select; // offset 0x8, size 0x4
        struct SMenuItem miBase[1]; // offset 0xC, size 0x90
    } glvAsk[1]; // offset 0x1220, size 0x9C
    struct {
        // total size: 0x664
        void * global; // offset 0x0, size 0x4
        int size; // offset 0x4, size 0x4
        int select; // offset 0x8, size 0x4
        struct {
            // total size: 0x8
            unsigned int blink; // offset 0x0, size 0x4
            unsigned int special; // offset 0x4, size 0x4
        } flags; // offset 0xC, size 0x8
        struct SMenuItem miBase[1]; // offset 0x14, size 0x90
        struct SMenuItem miLabel[3]; // offset 0xA4, size 0x1B0
        struct SMenuItem miMask[3]; // offset 0x254, size 0x1B0
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } cursor[1]; // offset 0x404, size 0x260
    } glvItem[1]; // offset 0x12BC, size 0x664
} struct_main_menu_c_77;
typedef struct /* struct_main_menu_c_78 */ {
    // total size: 0x4
    unsigned int cpu : 1; // offset 0x0, size 0x4
    unsigned int loaded : 1; // offset 0x0, size 0x4
} struct_main_menu_c_78;
typedef struct /* struct_main_menu_c_79 */ {
    // total size: 0x105C
    void * global; // offset 0x0, size 0x4
    int depth; // offset 0x4, size 0x4
    int flow; // offset 0x8, size 0x4
    int topBgGap; // offset 0xC, size 0x4
    struct SMenuItem miBase[1]; // offset 0x10, size 0x90
    struct {
        // total size: 0x8A0
        void * global; // offset 0x0, size 0x4
        int select; // offset 0x4, size 0x4
        int playNo; // offset 0x8, size 0x4
        struct {
            // total size: 0x4
            unsigned int blink : 1; // offset 0x0, size 0x4
        } flags; // offset 0xC, size 0x4
        struct SMenuItem miBase[1]; // offset 0x10, size 0x90
        struct SMenuItem miLabel[5]; // offset 0xA0, size 0x2D0
        struct SMenuItem miMask[5]; // offset 0x370, size 0x2D0
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } cursor[1]; // offset 0x640, size 0x260
    } musicItem[1]; // offset 0xA0, size 0x8A0
    struct {
        // total size: 0xAC
        void * global; // offset 0x0, size 0x4
        int size; // offset 0x4, size 0x4
        int column; // offset 0x8, size 0x4
        int number; // offset 0xC, size 0x4
        struct {
            // total size: 0x4
            unsigned int zero : 1; // offset 0x0, size 0x4
        } flags; // offset 0x10, size 0x4
        char columns[8]; // offset 0x14, size 0x8
        struct SMenuItem miBase[1]; // offset 0x1C, size 0x90
    } stageNum[1]; // offset 0x940, size 0xAC
    struct SMenuItem miStageBg[1]; // offset 0x9EC, size 0x90
    struct SMenuItem miBgCursor[2]; // offset 0xA7C, size 0x120
    struct {
        // total size: 0x260
        void * global; // offset 0x0, size 0x4
        @enum$1025main_menu_c type; // offset 0x4, size 0x4
        int playerCount; // offset 0x8, size 0x4
        int cpuCount; // offset 0xC, size 0x4
        int playerNo; // offset 0x10, size 0x4
        int size[2]; // offset 0x14, size 0x8
        struct {
            // total size: 0x4
            unsigned int cursor : 1; // offset 0x0, size 0x4
            unsigned int finger : 1; // offset 0x0, size 0x4
            unsigned int player : 1; // offset 0x0, size 0x4
            unsigned int blink : 1; // offset 0x0, size 0x4
        } flags; // offset 0x1C, size 0x4
        struct SMenuItem miBase[1]; // offset 0x20, size 0x90
        struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
        struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
        struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
    } cursor[2]; // offset 0xB9C, size 0x4C0
} struct_main_menu_c_79;
typedef struct /* struct_main_menu_c_80 */ {
    // total size: 0x3558
    void * global; // offset 0x0, size 0x4
    @enum$856main_menu_c mode; // offset 0x4, size 0x4
    int depth; // offset 0x8, size 0x4
    int select[8]; // offset 0xC, size 0x20
    int screenNo; // offset 0x2C, size 0x4
    int screenDir; // offset 0x30, size 0x4
    int playSeqNo; // offset 0x34, size 0x4
    float kasaCount; // offset 0x38, size 0x4
    struct {
        // total size: 0x678
        void * global; // offset 0x0, size 0x4
        int size; // offset 0x4, size 0x4
        int count; // offset 0x8, size 0x4
        int select; // offset 0xC, size 0x4
        int indexes[6]; // offset 0x10, size 0x18
        struct SMenuItem miBase[1]; // offset 0x28, size 0x90
        struct SMenuItem miPanel[6]; // offset 0xB8, size 0x360
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } cursor[1]; // offset 0x418, size 0x260
    } panel[2]; // offset 0x3C, size 0xCF0
    struct {
        // total size: 0xA88
        void * global; // offset 0x0, size 0x4
        int playerCount; // offset 0x4, size 0x4
        int flow; // offset 0x8, size 0x4
        int depth[2]; // offset 0xC, size 0x8
        int select[2]; // offset 0x14, size 0x8
        int column[2]; // offset 0x1C, size 0x8
        struct {
            // total size: 0x4
            unsigned int guest : 1; // offset 0x0, size 0x4
        } flags; // offset 0x24, size 0x4
        struct SMenuItem miBase[1]; // offset 0x28, size 0x90
        struct SMenuItem miLabel[9]; // offset 0xB8, size 0x510
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } cursor[2]; // offset 0x5C8, size 0x4C0
    } nameSel[1]; // offset 0xD2C, size 0xA88
    struct {
        // total size: 0x4B0
        void * global; // offset 0x0, size 0x4
        int type; // offset 0x4, size 0x4
        int select; // offset 0x8, size 0x4
        unsigned char name[4]; // offset 0xC, size 0x4
        struct SMenuItem miBase[1]; // offset 0x10, size 0x90
        struct SMenuItem miName[1]; // offset 0xA0, size 0x90
        struct SMenuItem miPanel[2]; // offset 0x130, size 0x120
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } cursor[1]; // offset 0x250, size 0x260
    } nameOp[1]; // offset 0x17B4, size 0x4B0
    struct {
        // total size: 0x69C
        void * global; // offset 0x0, size 0x4
        int select; // offset 0x4, size 0x4
        int bgmNo; // offset 0x8, size 0x4
        int sndId; // offset 0xC, size 0x4
        int sndNo; // offset 0x10, size 0x4
        struct SMenuItem miBase[1]; // offset 0x14, size 0x90
        struct SMenuItem miPanel[4]; // offset 0xA4, size 0x240
        struct {
            // total size: 0xAC
            void * global; // offset 0x0, size 0x4
            int size; // offset 0x4, size 0x4
            int column; // offset 0x8, size 0x4
            int number; // offset 0xC, size 0x4
            struct {
                // total size: 0x4
                unsigned int zero : 1; // offset 0x0, size 0x4
            } flags; // offset 0x10, size 0x4
            char columns[8]; // offset 0x14, size 0x8
            struct SMenuItem miBase[1]; // offset 0x1C, size 0x90
        } number[2]; // offset 0x2E4, size 0x158
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } cursor[1]; // offset 0x43C, size 0x260
    } sndSel[1]; // offset 0x1C64, size 0x69C
    int current; // offset 0x2300, size 0x4
    const char * msgStr; // offset 0x2304, size 0x4
    struct {
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
    } msgWnd[1]; // offset 0x2308, size 0x80
    struct SMenuItem miMsgWnd[1]; // offset 0x2388, size 0x90
    struct SMenuItem miKaSaMaRu[1]; // offset 0x2418, size 0x90
    struct SMenuItem miSmoke[1]; // offset 0x24A8, size 0x90
    struct SMenuItem miScrWnd[1]; // offset 0x2538, size 0x90
    struct SMenuItem miScreen[1]; // offset 0x25C8, size 0x90
    struct {
        // total size: 0x514
        void * global; // offset 0x0, size 0x4
        struct SMenuItem miBase[1]; // offset 0x4, size 0x90
        struct SMenuItem miDesc[5]; // offset 0x94, size 0x2D0
        struct SMenuItem miLine[1]; // offset 0x364, size 0x90
        struct SMenuItem miLabel[1]; // offset 0x3F4, size 0x90
        struct SMenuItem miPushAnyKey[1]; // offset 0x484, size 0x90
    } cont[1]; // offset 0x2658, size 0x514
    struct {
        // total size: 0x678
        void * global; // offset 0x0, size 0x4
        int select; // offset 0x4, size 0x4
        struct SMenuItem miBase[1]; // offset 0x8, size 0x90
        struct SMenuItem miYN[2]; // offset 0x98, size 0x120
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } cursor[1]; // offset 0x1B8, size 0x260
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } window[1]; // offset 0x418, size 0x260
    } yesNo[1]; // offset 0x2B6C, size 0x678
    struct {
        // total size: 0x374
        void * global; // offset 0x0, size 0x4
        struct SMenuItem miBase[1]; // offset 0x4, size 0x90
        struct {
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
        } msgWnd[1]; // offset 0x94, size 0x80
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } window[1]; // offset 0x114, size 0x260
    } message[1]; // offset 0x31E4, size 0x374
} struct_main_menu_c_80;
typedef struct /* struct_main_menu_c_81 */ {
    // total size: 0x1A7C
    void * global; // offset 0x0, size 0x4
    int stageMax[4][2]; // offset 0x4, size 0x20
    int depth; // offset 0x24, size 0x4
    int select[3]; // offset 0x28, size 0xC
    int loaded; // offset 0x34, size 0x4
    void * animeAddr[2]; // offset 0x38, size 0x8
    struct SMenuItem miBase[1]; // offset 0x40, size 0x90
    struct SMenuItem miCharName[1]; // offset 0xD0, size 0x90
    struct SMenuItem miChar[2]; // offset 0x160, size 0x120
    struct SAnimeState animeState[2]; // offset 0x280, size 0x80
    struct {
        // total size: 0x260
        void * global; // offset 0x0, size 0x4
        @enum$1025main_menu_c type; // offset 0x4, size 0x4
        int playerCount; // offset 0x8, size 0x4
        int cpuCount; // offset 0xC, size 0x4
        int playerNo; // offset 0x10, size 0x4
        int size[2]; // offset 0x14, size 0x8
        struct {
            // total size: 0x4
            unsigned int cursor : 1; // offset 0x0, size 0x4
            unsigned int finger : 1; // offset 0x0, size 0x4
            unsigned int player : 1; // offset 0x0, size 0x4
            unsigned int blink : 1; // offset 0x0, size 0x4
        } flags; // offset 0x1C, size 0x4
        struct SMenuItem miBase[1]; // offset 0x20, size 0x90
        struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
        struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
        struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
    } charCursor[2]; // offset 0x300, size 0x4C0
    struct {
        // total size: 0x9C
        void * global; // offset 0x0, size 0x4
        int size; // offset 0x4, size 0x4
        int select; // offset 0x8, size 0x4
        struct SMenuItem miBase[1]; // offset 0xC, size 0x90
    } speedAsk[1]; // offset 0x7C0, size 0x9C
    struct {
        // total size: 0x664
        void * global; // offset 0x0, size 0x4
        int size; // offset 0x4, size 0x4
        int select; // offset 0x8, size 0x4
        struct {
            // total size: 0x8
            unsigned int blink; // offset 0x0, size 0x4
            unsigned int special; // offset 0x4, size 0x4
        } flags; // offset 0xC, size 0x8
        struct SMenuItem miBase[1]; // offset 0x14, size 0x90
        struct SMenuItem miLabel[3]; // offset 0xA4, size 0x1B0
        struct SMenuItem miMask[3]; // offset 0x254, size 0x1B0
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } cursor[1]; // offset 0x404, size 0x260
    } speedItem[1]; // offset 0x85C, size 0x664
    struct {
        // total size: 0xAC
        void * global; // offset 0x0, size 0x4
        int size; // offset 0x4, size 0x4
        int column; // offset 0x8, size 0x4
        int number; // offset 0xC, size 0x4
        struct {
            // total size: 0x4
            unsigned int zero : 1; // offset 0x0, size 0x4
        } flags; // offset 0x10, size 0x4
        char columns[8]; // offset 0x14, size 0x8
        struct SMenuItem miBase[1]; // offset 0x1C, size 0x90
    } stageNum[1]; // offset 0xEC0, size 0xAC
    struct SMenuItem miStageBase[1]; // offset 0xF6C, size 0x90
    struct SMenuItem miStageBg[2]; // offset 0xFFC, size 0x120
    struct SMenuItem miBgCursor[2]; // offset 0x111C, size 0x120
    struct SMenuItem miWalk[2]; // offset 0x123C, size 0x120
    struct {
        // total size: 0x260
        void * global; // offset 0x0, size 0x4
        @enum$1025main_menu_c type; // offset 0x4, size 0x4
        int playerCount; // offset 0x8, size 0x4
        int cpuCount; // offset 0xC, size 0x4
        int playerNo; // offset 0x10, size 0x4
        int size[2]; // offset 0x14, size 0x8
        struct {
            // total size: 0x4
            unsigned int cursor : 1; // offset 0x0, size 0x4
            unsigned int finger : 1; // offset 0x0, size 0x4
            unsigned int player : 1; // offset 0x0, size 0x4
            unsigned int blink : 1; // offset 0x0, size 0x4
        } flags; // offset 0x1C, size 0x4
        struct SMenuItem miBase[1]; // offset 0x20, size 0x90
        struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
        struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
        struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
    } cursor[3]; // offset 0x135C, size 0x720
} struct_main_menu_c_81;
typedef struct /* struct_main_menu_c_82 */ {
    // total size: 0x2574
    void * global; // offset 0x0, size 0x4
    @enum$856main_menu_c mode; // offset 0x4, size 0x4
    struct SMenuItem miBase[1]; // offset 0x8, size 0x90
    struct SMenuItem miPanel[2]; // offset 0x98, size 0x120
    struct {
        // total size: 0xAC
        void * global; // offset 0x0, size 0x4
        int size; // offset 0x4, size 0x4
        int column; // offset 0x8, size 0x4
        int number; // offset 0xC, size 0x4
        struct {
            // total size: 0x4
            unsigned int zero : 1; // offset 0x0, size 0x4
        } flags; // offset 0x10, size 0x4
        char columns[8]; // offset 0x14, size 0x8
        struct SMenuItem miBase[1]; // offset 0x1C, size 0x90
    } lvNum[1]; // offset 0x1B8, size 0xAC
    struct SMenuLvGauge lvGauge[1]; // offset 0x264, size 0x300
    struct {
        // total size: 0x9C
        void * global; // offset 0x0, size 0x4
        int size; // offset 0x4, size 0x4
        int select; // offset 0x8, size 0x4
        struct SMenuItem miBase[1]; // offset 0xC, size 0x90
    } speedAsk[1]; // offset 0x564, size 0x9C
    struct {
        // total size: 0x664
        void * global; // offset 0x0, size 0x4
        int size; // offset 0x4, size 0x4
        int select; // offset 0x8, size 0x4
        struct {
            // total size: 0x8
            unsigned int blink; // offset 0x0, size 0x4
            unsigned int special; // offset 0x4, size 0x4
        } flags; // offset 0xC, size 0x8
        struct SMenuItem miBase[1]; // offset 0x14, size 0x90
        struct SMenuItem miLabel[3]; // offset 0xA4, size 0x1B0
        struct SMenuItem miMask[3]; // offset 0x254, size 0x1B0
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } cursor[1]; // offset 0x404, size 0x260
    } speedItem[1]; // offset 0x600, size 0x664
    struct {
        // total size: 0x8A0
        void * global; // offset 0x0, size 0x4
        int select; // offset 0x4, size 0x4
        int playNo; // offset 0x8, size 0x4
        struct {
            // total size: 0x4
            unsigned int blink : 1; // offset 0x0, size 0x4
        } flags; // offset 0xC, size 0x4
        struct SMenuItem miBase[1]; // offset 0x10, size 0x90
        struct SMenuItem miLabel[5]; // offset 0xA0, size 0x2D0
        struct SMenuItem miMask[5]; // offset 0x370, size 0x2D0
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } cursor[1]; // offset 0x640, size 0x260
    } musicItem[1]; // offset 0xC64, size 0x8A0
    struct {
        // total size: 0x128
        void * global; // offset 0x0, size 0x4
        int level; // offset 0x4, size 0x4
        struct SMenuItem miBase[1]; // offset 0x8, size 0x90
        struct SMenuItem miVirus[1]; // offset 0x98, size 0x90
    } bottle[1]; // offset 0x1504, size 0x128
    struct {
        // total size: 0x260
        void * global; // offset 0x0, size 0x4
        @enum$1025main_menu_c type; // offset 0x4, size 0x4
        int playerCount; // offset 0x8, size 0x4
        int cpuCount; // offset 0xC, size 0x4
        int playerNo; // offset 0x10, size 0x4
        int size[2]; // offset 0x14, size 0x8
        struct {
            // total size: 0x4
            unsigned int cursor : 1; // offset 0x0, size 0x4
            unsigned int finger : 1; // offset 0x0, size 0x4
            unsigned int player : 1; // offset 0x0, size 0x4
            unsigned int blink : 1; // offset 0x0, size 0x4
        } flags; // offset 0x1C, size 0x4
        struct SMenuItem miBase[1]; // offset 0x20, size 0x90
        struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
        struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
        struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
    } cursor[3]; // offset 0x162C, size 0x720
    struct SMenuItem miCapsule[1]; // offset 0x1D4C, size 0x90
    struct SMenuItem miMusic[1]; // offset 0x1DDC, size 0x90
    struct {
        // total size: 0x9C
        void * global; // offset 0x0, size 0x4
        int size; // offset 0x4, size 0x4
        int select; // offset 0x8, size 0x4
        struct SMenuItem miBase[1]; // offset 0xC, size 0x90
    } glvAsk[1]; // offset 0x1E6C, size 0x9C
    struct {
        // total size: 0x664
        void * global; // offset 0x0, size 0x4
        int size; // offset 0x4, size 0x4
        int select; // offset 0x8, size 0x4
        struct {
            // total size: 0x8
            unsigned int blink; // offset 0x0, size 0x4
            unsigned int special; // offset 0x4, size 0x4
        } flags; // offset 0xC, size 0x8
        struct SMenuItem miBase[1]; // offset 0x14, size 0x90
        struct SMenuItem miLabel[3]; // offset 0xA4, size 0x1B0
        struct SMenuItem miMask[3]; // offset 0x254, size 0x1B0
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } cursor[1]; // offset 0x404, size 0x260
    } glvItem[1]; // offset 0x1F08, size 0x664
    int depth; // offset 0x256C, size 0x4
    int levelMax; // offset 0x2570, size 0x4
} struct_main_menu_c_82;
typedef struct /* struct_main_menu_c_83 */ {
    // total size: 0x2D4C
    void * global; // offset 0x0, size 0x4
    int allCount; // offset 0x4, size 0x4
    int select[4]; // offset 0x8, size 0x10
    int depth[4]; // offset 0x18, size 0x10
    int subDepth; // offset 0x28, size 0x4
    int hardFlag; // offset 0x2C, size 0x4
    int hardMode; // offset 0x30, size 0x4
    int comLvId; // offset 0x34, size 0x4
    int comLvPn; // offset 0x38, size 0x4
    int playerCount; // offset 0x3C, size 0x4
    int playerTable[4]; // offset 0x40, size 0x10
    int cpuFlag[4]; // offset 0x50, size 0x10
    int cpuCount; // offset 0x60, size 0x4
    int cpuTable[4]; // offset 0x64, size 0x10
    struct SMenuItem miBase[1]; // offset 0x74, size 0x90
    struct SMenuItem miHard[1]; // offset 0x104, size 0x90
    struct SMenuItem miChar[15]; // offset 0x194, size 0x870
    struct SMenuItem miCharFilt[15]; // offset 0xA04, size 0x870
    struct {
        // total size: 0x128
        void * global; // offset 0x0, size 0x4
        int level; // offset 0x4, size 0x4
        struct SMenuItem miBase[1]; // offset 0x8, size 0x90
        struct SMenuItem miStar[1]; // offset 0x98, size 0x90
    } comLv[15]; // offset 0x1274, size 0x1158
    struct {
        // total size: 0x260
        void * global; // offset 0x0, size 0x4
        @enum$1025main_menu_c type; // offset 0x4, size 0x4
        int playerCount; // offset 0x8, size 0x4
        int cpuCount; // offset 0xC, size 0x4
        int playerNo; // offset 0x10, size 0x4
        int size[2]; // offset 0x14, size 0x8
        struct {
            // total size: 0x4
            unsigned int cursor : 1; // offset 0x0, size 0x4
            unsigned int finger : 1; // offset 0x0, size 0x4
            unsigned int player : 1; // offset 0x0, size 0x4
            unsigned int blink : 1; // offset 0x0, size 0x4
        } flags; // offset 0x1C, size 0x4
        struct SMenuItem miBase[1]; // offset 0x20, size 0x90
        struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
        struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
        struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
    } cursor[4]; // offset 0x23CC, size 0x980
} struct_main_menu_c_83;
typedef struct /* struct_main_menu_c_84 */ {
    // total size: 0x75A4
    void * global; // offset 0x0, size 0x4
    int depth; // offset 0x4, size 0x4
    int master; // offset 0x8, size 0x4
    int playerCount; // offset 0xC, size 0x4
    int playerTable[4]; // offset 0x10, size 0x10
    int cpuCount; // offset 0x20, size 0x4
    int cpuTable[4]; // offset 0x24, size 0x10
    struct SMenuItem miONaJi[1]; // offset 0x34, size 0x90
    int panelCount; // offset 0xC4, size 0x4
    struct {
        // total size: 0x1920
        void * global; // offset 0x0, size 0x4
        @enum$110dm_title_main_c flash; // offset 0x4, size 0x4
        @enum$110dm_title_main_c timeAt; // offset 0x8, size 0x4
        @enum$110dm_title_main_c FL_TA; // offset 0xC, size 0x4
        int size; // offset 0x10, size 0x4
        int playerCount; // offset 0x14, size 0x4
        int cpuCount; // offset 0x18, size 0x4
        int playerNo; // offset 0x1C, size 0x4
        int charNo; // offset 0x20, size 0x4
        int depth; // offset 0x24, size 0x4
        int flow; // offset 0x28, size 0x4
        void * animeAddr; // offset 0x2C, size 0x4
        struct {
            // total size: 0x4
            unsigned int cpu : 1; // offset 0x0, size 0x4
            unsigned int loaded : 1; // offset 0x0, size 0x4
        } flags; // offset 0x30, size 0x4
        struct SMenuItem miBase[1]; // offset 0x34, size 0x90
        struct SMenuItem miPlayer[1]; // offset 0xC4, size 0x90
        struct SMenuItem miPlayerNo[1]; // offset 0x154, size 0x90
        struct {
            // total size: 0xAC
            void * global; // offset 0x0, size 0x4
            int size; // offset 0x4, size 0x4
            int column; // offset 0x8, size 0x4
            int number; // offset 0xC, size 0x4
            struct {
                // total size: 0x4
                unsigned int zero : 1; // offset 0x0, size 0x4
            } flags; // offset 0x10, size 0x4
            char columns[8]; // offset 0x14, size 0x8
            struct SMenuItem miBase[1]; // offset 0x1C, size 0x90
        } lvNum[1]; // offset 0x1E4, size 0xAC
        struct SMenuLvGauge lvGauge[1]; // offset 0x290, size 0x300
        struct {
            // total size: 0x9C
            void * global; // offset 0x0, size 0x4
            int size; // offset 0x4, size 0x4
            int select; // offset 0x8, size 0x4
            struct SMenuItem miBase[1]; // offset 0xC, size 0x90
        } speedAsk[1]; // offset 0x590, size 0x9C
        struct {
            // total size: 0x664
            void * global; // offset 0x0, size 0x4
            int size; // offset 0x4, size 0x4
            int select; // offset 0x8, size 0x4
            struct {
                // total size: 0x8
                unsigned int blink; // offset 0x0, size 0x4
                unsigned int special; // offset 0x4, size 0x4
            } flags; // offset 0xC, size 0x8
            struct SMenuItem miBase[1]; // offset 0x14, size 0x90
            struct SMenuItem miLabel[3]; // offset 0xA4, size 0x1B0
            struct SMenuItem miMask[3]; // offset 0x254, size 0x1B0
            struct {
                // total size: 0x260
                void * global; // offset 0x0, size 0x4
                @enum$1025main_menu_c type; // offset 0x4, size 0x4
                int playerCount; // offset 0x8, size 0x4
                int cpuCount; // offset 0xC, size 0x4
                int playerNo; // offset 0x10, size 0x4
                int size[2]; // offset 0x14, size 0x8
                struct {
                    // total size: 0x4
                    unsigned int cursor : 1; // offset 0x0, size 0x4
                    unsigned int finger : 1; // offset 0x0, size 0x4
                    unsigned int player : 1; // offset 0x0, size 0x4
                    unsigned int blink : 1; // offset 0x0, size 0x4
                } flags; // offset 0x1C, size 0x4
                struct SMenuItem miBase[1]; // offset 0x20, size 0x90
                struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
                struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
                struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
            } cursor[1]; // offset 0x404, size 0x260
        } speedItem[1]; // offset 0x62C, size 0x664
        struct SAnimeState animeState[1]; // offset 0xC90, size 0x40
        struct SMenuItem miOk[1]; // offset 0xCD0, size 0x90
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } cursor[2]; // offset 0xD60, size 0x4C0
        struct {
            // total size: 0x9C
            void * global; // offset 0x0, size 0x4
            int size; // offset 0x4, size 0x4
            int select; // offset 0x8, size 0x4
            struct SMenuItem miBase[1]; // offset 0xC, size 0x90
        } glvAsk[1]; // offset 0x1220, size 0x9C
        struct {
            // total size: 0x664
            void * global; // offset 0x0, size 0x4
            int size; // offset 0x4, size 0x4
            int select; // offset 0x8, size 0x4
            struct {
                // total size: 0x8
                unsigned int blink; // offset 0x0, size 0x4
                unsigned int special; // offset 0x4, size 0x4
            } flags; // offset 0xC, size 0x8
            struct SMenuItem miBase[1]; // offset 0x14, size 0x90
            struct SMenuItem miLabel[3]; // offset 0xA4, size 0x1B0
            struct SMenuItem miMask[3]; // offset 0x254, size 0x1B0
            struct {
                // total size: 0x260
                void * global; // offset 0x0, size 0x4
                @enum$1025main_menu_c type; // offset 0x4, size 0x4
                int playerCount; // offset 0x8, size 0x4
                int cpuCount; // offset 0xC, size 0x4
                int playerNo; // offset 0x10, size 0x4
                int size[2]; // offset 0x14, size 0x8
                struct {
                    // total size: 0x4
                    unsigned int cursor : 1; // offset 0x0, size 0x4
                    unsigned int finger : 1; // offset 0x0, size 0x4
                    unsigned int player : 1; // offset 0x0, size 0x4
                    unsigned int blink : 1; // offset 0x0, size 0x4
                } flags; // offset 0x1C, size 0x4
                struct SMenuItem miBase[1]; // offset 0x20, size 0x90
                struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
                struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
                struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
            } cursor[1]; // offset 0x404, size 0x260
        } glvItem[1]; // offset 0x12BC, size 0x664
    } panel[4]; // offset 0xC8, size 0x6480
    struct {
        // total size: 0x105C
        void * global; // offset 0x0, size 0x4
        int depth; // offset 0x4, size 0x4
        int flow; // offset 0x8, size 0x4
        int topBgGap; // offset 0xC, size 0x4
        struct SMenuItem miBase[1]; // offset 0x10, size 0x90
        struct {
            // total size: 0x8A0
            void * global; // offset 0x0, size 0x4
            int select; // offset 0x4, size 0x4
            int playNo; // offset 0x8, size 0x4
            struct {
                // total size: 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0xC, size 0x4
            struct SMenuItem miBase[1]; // offset 0x10, size 0x90
            struct SMenuItem miLabel[5]; // offset 0xA0, size 0x2D0
            struct SMenuItem miMask[5]; // offset 0x370, size 0x2D0
            struct {
                // total size: 0x260
                void * global; // offset 0x0, size 0x4
                @enum$1025main_menu_c type; // offset 0x4, size 0x4
                int playerCount; // offset 0x8, size 0x4
                int cpuCount; // offset 0xC, size 0x4
                int playerNo; // offset 0x10, size 0x4
                int size[2]; // offset 0x14, size 0x8
                struct {
                    // total size: 0x4
                    unsigned int cursor : 1; // offset 0x0, size 0x4
                    unsigned int finger : 1; // offset 0x0, size 0x4
                    unsigned int player : 1; // offset 0x0, size 0x4
                    unsigned int blink : 1; // offset 0x0, size 0x4
                } flags; // offset 0x1C, size 0x4
                struct SMenuItem miBase[1]; // offset 0x20, size 0x90
                struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
                struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
                struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
            } cursor[1]; // offset 0x640, size 0x260
        } musicItem[1]; // offset 0xA0, size 0x8A0
        struct {
            // total size: 0xAC
            void * global; // offset 0x0, size 0x4
            int size; // offset 0x4, size 0x4
            int column; // offset 0x8, size 0x4
            int number; // offset 0xC, size 0x4
            struct {
                // total size: 0x4
                unsigned int zero : 1; // offset 0x0, size 0x4
            } flags; // offset 0x10, size 0x4
            char columns[8]; // offset 0x14, size 0x8
            struct SMenuItem miBase[1]; // offset 0x1C, size 0x90
        } stageNum[1]; // offset 0x940, size 0xAC
        struct SMenuItem miStageBg[1]; // offset 0x9EC, size 0x90
        struct SMenuItem miBgCursor[2]; // offset 0xA7C, size 0x120
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } cursor[2]; // offset 0xB9C, size 0x4C0
    } panelSub[1]; // offset 0x6548, size 0x105C
} struct_main_menu_c_84;
typedef struct /* struct_main_menu_c_85 */ {
    // total size: 0x68C
    void * global; // offset 0x0, size 0x4
    int playerNo; // offset 0x4, size 0x4
    int playerCount; // offset 0x8, size 0x4
    int flow[2]; // offset 0xC, size 0x8
    int pageNo[2]; // offset 0x14, size 0x8
    int curPos[2][2]; // offset 0x1C, size 0x10
    char name[2][4]; // offset 0x2C, size 0x8
    int namePos[2]; // offset 0x34, size 0x8
    struct SMenuItem miBase[1]; // offset 0x3C, size 0x90
    struct SMenuItem miPanel[1]; // offset 0xCC, size 0x90
    struct SMenuItem miPlayerNo[1]; // offset 0x15C, size 0x90
    struct SMenuItem miTable[1]; // offset 0x1EC, size 0x90
    struct SMenuItem miCursor[1]; // offset 0x27C, size 0x90
    struct {
        // total size: 0x260
        void * global; // offset 0x0, size 0x4
        @enum$1025main_menu_c type; // offset 0x4, size 0x4
        int playerCount; // offset 0x8, size 0x4
        int cpuCount; // offset 0xC, size 0x4
        int playerNo; // offset 0x10, size 0x4
        int size[2]; // offset 0x14, size 0x8
        struct {
            // total size: 0x4
            unsigned int cursor : 1; // offset 0x0, size 0x4
            unsigned int finger : 1; // offset 0x0, size 0x4
            unsigned int player : 1; // offset 0x0, size 0x4
            unsigned int blink : 1; // offset 0x0, size 0x4
        } flags; // offset 0x1C, size 0x4
        struct SMenuItem miBase[1]; // offset 0x20, size 0x90
        struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
        struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
        struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
    } cursor[1]; // offset 0x30C, size 0x260
    struct SMenuItem miName[1]; // offset 0x56C, size 0x90
    struct SMenuItem miNamePos[1]; // offset 0x5FC, size 0x90
} struct_main_menu_c_85;
typedef struct /* struct_main_menu_c_86 */ {
    // total size: 0x94
    void * global; // offset 0x0, size 0x4
    struct SMenuItem miBase[1]; // offset 0x4, size 0x90
} struct_main_menu_c_86;
typedef struct /* struct_main_menu_c_87 */ {
    // total size: 0x98
    void * global; // offset 0x0, size 0x4
    int number; // offset 0x4, size 0x4
    struct SMenuItem miBase[1]; // offset 0x8, size 0x90
} struct_main_menu_c_87;
typedef struct /* struct_main_menu_c_88 */ {
    // total size: 0xC8
    void * global; // offset 0x0, size 0x4
    @enum$9657main_menu_c type; // offset 0x4, size 0x4
    int column; // offset 0x8, size 0x4
    int columns[10]; // offset 0xC, size 0x28
    int number; // offset 0x34, size 0x4
    struct SMenuItem miBase[1]; // offset 0x38, size 0x90
} struct_main_menu_c_88;
typedef struct /* struct_main_menu_c_89 */ {
    // total size: 0x98
    void * global; // offset 0x0, size 0x4
    char name[4]; // offset 0x4, size 0x4
    struct SMenuItem miBase[1]; // offset 0x8, size 0x90
} struct_main_menu_c_89;
typedef struct /* struct_main_menu_c_90 */ {
    // total size: 0x9C
    void * global; // offset 0x0, size 0x4
    int type; // offset 0x4, size 0x4
    int index; // offset 0x8, size 0x4
    struct SMenuItem miBase[1]; // offset 0xC, size 0x90
} struct_main_menu_c_90;
typedef struct /* struct_main_menu_c_91 */ {
    // total size: 0x3A4
    void * global; // offset 0x0, size 0x4
    int labelCount; // offset 0x4, size 0x4
    struct SMenuItem miBase[1]; // offset 0x8, size 0x90
    struct {
        // total size: 0x9C
        void * global; // offset 0x0, size 0x4
        int type; // offset 0x4, size 0x4
        int index; // offset 0x8, size 0x4
        struct SMenuItem miBase[1]; // offset 0xC, size 0x90
    } label[5]; // offset 0x98, size 0x30C
} struct_main_menu_c_91;
typedef struct /* struct_main_menu_c_92 */ {
    // total size: 0x424
    void * global; // offset 0x0, size 0x4
    int type; // offset 0x4, size 0x4
    struct {
        // total size: 0x94
        void * global; // offset 0x0, size 0x4
        struct SMenuItem miBase[1]; // offset 0x4, size 0x90
    } base[1]; // offset 0x8, size 0x94
    struct {
        // total size: 0x98
        void * global; // offset 0x0, size 0x4
        int number; // offset 0x4, size 0x4
        struct SMenuItem miBase[1]; // offset 0x8, size 0x90
    } rank[1]; // offset 0x9C, size 0x98
    struct {
        // total size: 0x98
        void * global; // offset 0x0, size 0x4
        char name[4]; // offset 0x4, size 0x4
        struct SMenuItem miBase[1]; // offset 0x8, size 0x90
    } name[1]; // offset 0x134, size 0x98
    union {
        struct {
            // total size: 0x258
            struct {
                // total size: 0xC8
                void * global; // offset 0x0, size 0x4
                @enum$9657main_menu_c type; // offset 0x4, size 0x4
                int column; // offset 0x8, size 0x4
                int columns[10]; // offset 0xC, size 0x28
                int number; // offset 0x34, size 0x4
                struct SMenuItem miBase[1]; // offset 0x38, size 0x90
            } score[1]; // offset 0x0, size 0xC8
            struct {
                // total size: 0xC8
                void * global; // offset 0x0, size 0x4
                @enum$9657main_menu_c type; // offset 0x4, size 0x4
                int column; // offset 0x8, size 0x4
                int columns[10]; // offset 0xC, size 0x28
                int number; // offset 0x34, size 0x4
                struct SMenuItem miBase[1]; // offset 0x38, size 0x90
            } time[1]; // offset 0xC8, size 0xC8
            struct {
                // total size: 0xC8
                void * global; // offset 0x0, size 0x4
                @enum$9657main_menu_c type; // offset 0x4, size 0x4
                int column; // offset 0x8, size 0x4
                int columns[10]; // offset 0xC, size 0x28
                int number; // offset 0x34, size 0x4
                struct SMenuItem miBase[1]; // offset 0x38, size 0x90
            } stage[1]; // offset 0x190, size 0xC8
        } oha; // offset 0x0, size 0x258
        struct {
            // total size: 0x190
            struct {
                // total size: 0xC8
                void * global; // offset 0x0, size 0x4
                @enum$9657main_menu_c type; // offset 0x4, size 0x4
                int column; // offset 0x8, size 0x4
                int columns[10]; // offset 0xC, size 0x28
                int number; // offset 0x34, size 0x4
                struct SMenuItem miBase[1]; // offset 0x38, size 0x90
            } level[1]; // offset 0x0, size 0xC8
            struct {
                // total size: 0xC8
                void * global; // offset 0x0, size 0x4
                @enum$9657main_menu_c type; // offset 0x4, size 0x4
                int column; // offset 0x8, size 0x4
                int columns[10]; // offset 0xC, size 0x28
                int number; // offset 0x34, size 0x4
                struct SMenuItem miBase[1]; // offset 0x38, size 0x90
            } score[1]; // offset 0xC8, size 0xC8
        } end; // offset 0x0, size 0x190
        struct {
            // total size: 0x190
            struct {
                // total size: 0xC8
                void * global; // offset 0x0, size 0x4
                @enum$9657main_menu_c type; // offset 0x4, size 0x4
                int column; // offset 0x8, size 0x4
                int columns[10]; // offset 0xC, size 0x28
                int number; // offset 0x34, size 0x4
                struct SMenuItem miBase[1]; // offset 0x38, size 0x90
            } time[1]; // offset 0x0, size 0xC8
            struct {
                // total size: 0xC8
                void * global; // offset 0x0, size 0x4
                @enum$9657main_menu_c type; // offset 0x4, size 0x4
                int column; // offset 0x8, size 0x4
                int columns[10]; // offset 0xC, size 0x28
                int number; // offset 0x34, size 0x4
                struct SMenuItem miBase[1]; // offset 0x38, size 0x90
            } score[1]; // offset 0xC8, size 0xC8
        } taiQ; // offset 0x0, size 0x190
        struct {
            // total size: 0x258
            struct {
                // total size: 0xC8
                void * global; // offset 0x0, size 0x4
                @enum$9657main_menu_c type; // offset 0x4, size 0x4
                int column; // offset 0x8, size 0x4
                int columns[10]; // offset 0xC, size 0x28
                int number; // offset 0x34, size 0x4
                struct SMenuItem miBase[1]; // offset 0x38, size 0x90
            } score[1]; // offset 0x0, size 0xC8
            struct {
                // total size: 0xC8
                void * global; // offset 0x0, size 0x4
                @enum$9657main_menu_c type; // offset 0x4, size 0x4
                int column; // offset 0x8, size 0x4
                int columns[10]; // offset 0xC, size 0x28
                int number; // offset 0x34, size 0x4
                struct SMenuItem miBase[1]; // offset 0x38, size 0x90
            } time[1]; // offset 0xC8, size 0xC8
            struct {
                // total size: 0xC8
                void * global; // offset 0x0, size 0x4
                @enum$9657main_menu_c type; // offset 0x4, size 0x4
                int column; // offset 0x8, size 0x4
                int columns[10]; // offset 0xC, size 0x28
                int number; // offset 0x34, size 0x4
                struct SMenuItem miBase[1]; // offset 0x38, size 0x90
            } erase[1]; // offset 0x190, size 0xC8
        } timeAt; // offset 0x0, size 0x258
        struct {
            // total size: 0x258
            struct {
                // total size: 0xC8
                void * global; // offset 0x0, size 0x4
                @enum$9657main_menu_c type; // offset 0x4, size 0x4
                int column; // offset 0x8, size 0x4
                int columns[10]; // offset 0xC, size 0x28
                int number; // offset 0x34, size 0x4
                struct SMenuItem miBase[1]; // offset 0x38, size 0x90
            } ratio[1]; // offset 0x0, size 0xC8
            struct {
                // total size: 0xC8
                void * global; // offset 0x0, size 0x4
                @enum$9657main_menu_c type; // offset 0x4, size 0x4
                int column; // offset 0x8, size 0x4
                int columns[10]; // offset 0xC, size 0x28
                int number; // offset 0x34, size 0x4
                struct SMenuItem miBase[1]; // offset 0x38, size 0x90
            } win[1]; // offset 0xC8, size 0xC8
            struct {
                // total size: 0xC8
                void * global; // offset 0x0, size 0x4
                @enum$9657main_menu_c type; // offset 0x4, size 0x4
                int column; // offset 0x8, size 0x4
                int columns[10]; // offset 0xC, size 0x28
                int number; // offset 0x34, size 0x4
                struct SMenuItem miBase[1]; // offset 0x38, size 0x90
            } lose[1]; // offset 0x190, size 0xC8
        } vs1; // offset 0x0, size 0x258
    } misc; // offset 0x1CC, size 0x258
} struct_main_menu_c_92;
typedef struct /* struct_main_menu_c_93 */ {
    // total size: 0x4F20
    void * global; // offset 0x0, size 0x4
    @enum$856main_menu_c mode; // offset 0x4, size 0x4
    @enum$110dm_title_main_c vsFlag; // offset 0x8, size 0x4
    int level; // offset 0xC, size 0x4
    int levelOld; // offset 0x10, size 0x4
    int curBuf; // offset 0x14, size 0x4
    int oldBuf; // offset 0x18, size 0x4
    struct SRankSortInfo sortInfo[1]; // offset 0x1C, size 0x160
    struct SMenuItem miBase[1]; // offset 0x17C, size 0x90
    struct SMenuItem miLR[2]; // offset 0x20C, size 0x120
    struct SMenuItem miNameBase[1]; // offset 0x32C, size 0x90
    struct {
        // total size: 0x9C
        void * global; // offset 0x0, size 0x4
        int type; // offset 0x4, size 0x4
        int index; // offset 0x8, size 0x4
        struct SMenuItem miBase[1]; // offset 0xC, size 0x90
    } title[1]; // offset 0x3BC, size 0x9C
    struct {
        // total size: 0x9C
        void * global; // offset 0x0, size 0x4
        int type; // offset 0x4, size 0x4
        int index; // offset 0x8, size 0x4
        struct SMenuItem miBase[1]; // offset 0xC, size 0x90
    } nameLabel[2]; // offset 0x458, size 0x138
    struct {
        // total size: 0x24C8
        int panelCount; // offset 0x0, size 0x4
        struct {
            // total size: 0x3A4
            void * global; // offset 0x0, size 0x4
            int labelCount; // offset 0x4, size 0x4
            struct SMenuItem miBase[1]; // offset 0x8, size 0x90
            struct {
                // total size: 0x9C
                void * global; // offset 0x0, size 0x4
                int type; // offset 0x4, size 0x4
                int index; // offset 0x8, size 0x4
                struct SMenuItem miBase[1]; // offset 0xC, size 0x90
            } label[5]; // offset 0x98, size 0x30C
        } header[1]; // offset 0x4, size 0x3A4
        struct {
            // total size: 0x424
            void * global; // offset 0x0, size 0x4
            int type; // offset 0x4, size 0x4
            struct {
                // total size: 0x94
                void * global; // offset 0x0, size 0x4
                struct SMenuItem miBase[1]; // offset 0x4, size 0x90
            } base[1]; // offset 0x8, size 0x94
            struct {
                // total size: 0x98
                void * global; // offset 0x0, size 0x4
                int number; // offset 0x4, size 0x4
                struct SMenuItem miBase[1]; // offset 0x8, size 0x90
            } rank[1]; // offset 0x9C, size 0x98
            struct {
                // total size: 0x98
                void * global; // offset 0x0, size 0x4
                char name[4]; // offset 0x4, size 0x4
                struct SMenuItem miBase[1]; // offset 0x8, size 0x90
            } name[1]; // offset 0x134, size 0x98
            union {
                struct {
                    // total size: 0x258
                    struct {
                        // total size: 0xC8
                        void * global; // offset 0x0, size 0x4
                        @enum$9657main_menu_c type; // offset 0x4, size 0x4
                        int column; // offset 0x8, size 0x4
                        int columns[10]; // offset 0xC, size 0x28
                        int number; // offset 0x34, size 0x4
                        struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                    } score[1]; // offset 0x0, size 0xC8
                    struct {
                        // total size: 0xC8
                        void * global; // offset 0x0, size 0x4
                        @enum$9657main_menu_c type; // offset 0x4, size 0x4
                        int column; // offset 0x8, size 0x4
                        int columns[10]; // offset 0xC, size 0x28
                        int number; // offset 0x34, size 0x4
                        struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                    } time[1]; // offset 0xC8, size 0xC8
                    struct {
                        // total size: 0xC8
                        void * global; // offset 0x0, size 0x4
                        @enum$9657main_menu_c type; // offset 0x4, size 0x4
                        int column; // offset 0x8, size 0x4
                        int columns[10]; // offset 0xC, size 0x28
                        int number; // offset 0x34, size 0x4
                        struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                    } stage[1]; // offset 0x190, size 0xC8
                } oha; // offset 0x0, size 0x258
                struct {
                    // total size: 0x190
                    struct {
                        // total size: 0xC8
                        void * global; // offset 0x0, size 0x4
                        @enum$9657main_menu_c type; // offset 0x4, size 0x4
                        int column; // offset 0x8, size 0x4
                        int columns[10]; // offset 0xC, size 0x28
                        int number; // offset 0x34, size 0x4
                        struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                    } level[1]; // offset 0x0, size 0xC8
                    struct {
                        // total size: 0xC8
                        void * global; // offset 0x0, size 0x4
                        @enum$9657main_menu_c type; // offset 0x4, size 0x4
                        int column; // offset 0x8, size 0x4
                        int columns[10]; // offset 0xC, size 0x28
                        int number; // offset 0x34, size 0x4
                        struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                    } score[1]; // offset 0xC8, size 0xC8
                } end; // offset 0x0, size 0x190
                struct {
                    // total size: 0x190
                    struct {
                        // total size: 0xC8
                        void * global; // offset 0x0, size 0x4
                        @enum$9657main_menu_c type; // offset 0x4, size 0x4
                        int column; // offset 0x8, size 0x4
                        int columns[10]; // offset 0xC, size 0x28
                        int number; // offset 0x34, size 0x4
                        struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                    } time[1]; // offset 0x0, size 0xC8
                    struct {
                        // total size: 0xC8
                        void * global; // offset 0x0, size 0x4
                        @enum$9657main_menu_c type; // offset 0x4, size 0x4
                        int column; // offset 0x8, size 0x4
                        int columns[10]; // offset 0xC, size 0x28
                        int number; // offset 0x34, size 0x4
                        struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                    } score[1]; // offset 0xC8, size 0xC8
                } taiQ; // offset 0x0, size 0x190
                struct {
                    // total size: 0x258
                    struct {
                        // total size: 0xC8
                        void * global; // offset 0x0, size 0x4
                        @enum$9657main_menu_c type; // offset 0x4, size 0x4
                        int column; // offset 0x8, size 0x4
                        int columns[10]; // offset 0xC, size 0x28
                        int number; // offset 0x34, size 0x4
                        struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                    } score[1]; // offset 0x0, size 0xC8
                    struct {
                        // total size: 0xC8
                        void * global; // offset 0x0, size 0x4
                        @enum$9657main_menu_c type; // offset 0x4, size 0x4
                        int column; // offset 0x8, size 0x4
                        int columns[10]; // offset 0xC, size 0x28
                        int number; // offset 0x34, size 0x4
                        struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                    } time[1]; // offset 0xC8, size 0xC8
                    struct {
                        // total size: 0xC8
                        void * global; // offset 0x0, size 0x4
                        @enum$9657main_menu_c type; // offset 0x4, size 0x4
                        int column; // offset 0x8, size 0x4
                        int columns[10]; // offset 0xC, size 0x28
                        int number; // offset 0x34, size 0x4
                        struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                    } erase[1]; // offset 0x190, size 0xC8
                } timeAt; // offset 0x0, size 0x258
                struct {
                    // total size: 0x258
                    struct {
                        // total size: 0xC8
                        void * global; // offset 0x0, size 0x4
                        @enum$9657main_menu_c type; // offset 0x4, size 0x4
                        int column; // offset 0x8, size 0x4
                        int columns[10]; // offset 0xC, size 0x28
                        int number; // offset 0x34, size 0x4
                        struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                    } ratio[1]; // offset 0x0, size 0xC8
                    struct {
                        // total size: 0xC8
                        void * global; // offset 0x0, size 0x4
                        @enum$9657main_menu_c type; // offset 0x4, size 0x4
                        int column; // offset 0x8, size 0x4
                        int columns[10]; // offset 0xC, size 0x28
                        int number; // offset 0x34, size 0x4
                        struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                    } win[1]; // offset 0xC8, size 0xC8
                    struct {
                        // total size: 0xC8
                        void * global; // offset 0x0, size 0x4
                        @enum$9657main_menu_c type; // offset 0x4, size 0x4
                        int column; // offset 0x8, size 0x4
                        int columns[10]; // offset 0xC, size 0x28
                        int number; // offset 0x34, size 0x4
                        struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                    } lose[1]; // offset 0x190, size 0xC8
                } vs1; // offset 0x0, size 0x258
            } misc; // offset 0x1CC, size 0x258
        } panel[8]; // offset 0x3A8, size 0x2120
    } ct[2]; // offset 0x590, size 0x4990
} struct_main_menu_c_93;
typedef struct /* struct_main_menu_c_94 */ {
    // total size: 0x24C8
    int panelCount; // offset 0x0, size 0x4
    struct {
        // total size: 0x3A4
        void * global; // offset 0x0, size 0x4
        int labelCount; // offset 0x4, size 0x4
        struct SMenuItem miBase[1]; // offset 0x8, size 0x90
        struct {
            // total size: 0x9C
            void * global; // offset 0x0, size 0x4
            int type; // offset 0x4, size 0x4
            int index; // offset 0x8, size 0x4
            struct SMenuItem miBase[1]; // offset 0xC, size 0x90
        } label[5]; // offset 0x98, size 0x30C
    } header[1]; // offset 0x4, size 0x3A4
    struct {
        // total size: 0x424
        void * global; // offset 0x0, size 0x4
        int type; // offset 0x4, size 0x4
        struct {
            // total size: 0x94
            void * global; // offset 0x0, size 0x4
            struct SMenuItem miBase[1]; // offset 0x4, size 0x90
        } base[1]; // offset 0x8, size 0x94
        struct {
            // total size: 0x98
            void * global; // offset 0x0, size 0x4
            int number; // offset 0x4, size 0x4
            struct SMenuItem miBase[1]; // offset 0x8, size 0x90
        } rank[1]; // offset 0x9C, size 0x98
        struct {
            // total size: 0x98
            void * global; // offset 0x0, size 0x4
            char name[4]; // offset 0x4, size 0x4
            struct SMenuItem miBase[1]; // offset 0x8, size 0x90
        } name[1]; // offset 0x134, size 0x98
        union {
            struct {
                // total size: 0x258
                struct {
                    // total size: 0xC8
                    void * global; // offset 0x0, size 0x4
                    @enum$9657main_menu_c type; // offset 0x4, size 0x4
                    int column; // offset 0x8, size 0x4
                    int columns[10]; // offset 0xC, size 0x28
                    int number; // offset 0x34, size 0x4
                    struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                } score[1]; // offset 0x0, size 0xC8
                struct {
                    // total size: 0xC8
                    void * global; // offset 0x0, size 0x4
                    @enum$9657main_menu_c type; // offset 0x4, size 0x4
                    int column; // offset 0x8, size 0x4
                    int columns[10]; // offset 0xC, size 0x28
                    int number; // offset 0x34, size 0x4
                    struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                } time[1]; // offset 0xC8, size 0xC8
                struct {
                    // total size: 0xC8
                    void * global; // offset 0x0, size 0x4
                    @enum$9657main_menu_c type; // offset 0x4, size 0x4
                    int column; // offset 0x8, size 0x4
                    int columns[10]; // offset 0xC, size 0x28
                    int number; // offset 0x34, size 0x4
                    struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                } stage[1]; // offset 0x190, size 0xC8
            } oha; // offset 0x0, size 0x258
            struct {
                // total size: 0x190
                struct {
                    // total size: 0xC8
                    void * global; // offset 0x0, size 0x4
                    @enum$9657main_menu_c type; // offset 0x4, size 0x4
                    int column; // offset 0x8, size 0x4
                    int columns[10]; // offset 0xC, size 0x28
                    int number; // offset 0x34, size 0x4
                    struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                } level[1]; // offset 0x0, size 0xC8
                struct {
                    // total size: 0xC8
                    void * global; // offset 0x0, size 0x4
                    @enum$9657main_menu_c type; // offset 0x4, size 0x4
                    int column; // offset 0x8, size 0x4
                    int columns[10]; // offset 0xC, size 0x28
                    int number; // offset 0x34, size 0x4
                    struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                } score[1]; // offset 0xC8, size 0xC8
            } end; // offset 0x0, size 0x190
            struct {
                // total size: 0x190
                struct {
                    // total size: 0xC8
                    void * global; // offset 0x0, size 0x4
                    @enum$9657main_menu_c type; // offset 0x4, size 0x4
                    int column; // offset 0x8, size 0x4
                    int columns[10]; // offset 0xC, size 0x28
                    int number; // offset 0x34, size 0x4
                    struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                } time[1]; // offset 0x0, size 0xC8
                struct {
                    // total size: 0xC8
                    void * global; // offset 0x0, size 0x4
                    @enum$9657main_menu_c type; // offset 0x4, size 0x4
                    int column; // offset 0x8, size 0x4
                    int columns[10]; // offset 0xC, size 0x28
                    int number; // offset 0x34, size 0x4
                    struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                } score[1]; // offset 0xC8, size 0xC8
            } taiQ; // offset 0x0, size 0x190
            struct {
                // total size: 0x258
                struct {
                    // total size: 0xC8
                    void * global; // offset 0x0, size 0x4
                    @enum$9657main_menu_c type; // offset 0x4, size 0x4
                    int column; // offset 0x8, size 0x4
                    int columns[10]; // offset 0xC, size 0x28
                    int number; // offset 0x34, size 0x4
                    struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                } score[1]; // offset 0x0, size 0xC8
                struct {
                    // total size: 0xC8
                    void * global; // offset 0x0, size 0x4
                    @enum$9657main_menu_c type; // offset 0x4, size 0x4
                    int column; // offset 0x8, size 0x4
                    int columns[10]; // offset 0xC, size 0x28
                    int number; // offset 0x34, size 0x4
                    struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                } time[1]; // offset 0xC8, size 0xC8
                struct {
                    // total size: 0xC8
                    void * global; // offset 0x0, size 0x4
                    @enum$9657main_menu_c type; // offset 0x4, size 0x4
                    int column; // offset 0x8, size 0x4
                    int columns[10]; // offset 0xC, size 0x28
                    int number; // offset 0x34, size 0x4
                    struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                } erase[1]; // offset 0x190, size 0xC8
            } timeAt; // offset 0x0, size 0x258
            struct {
                // total size: 0x258
                struct {
                    // total size: 0xC8
                    void * global; // offset 0x0, size 0x4
                    @enum$9657main_menu_c type; // offset 0x4, size 0x4
                    int column; // offset 0x8, size 0x4
                    int columns[10]; // offset 0xC, size 0x28
                    int number; // offset 0x34, size 0x4
                    struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                } ratio[1]; // offset 0x0, size 0xC8
                struct {
                    // total size: 0xC8
                    void * global; // offset 0x0, size 0x4
                    @enum$9657main_menu_c type; // offset 0x4, size 0x4
                    int column; // offset 0x8, size 0x4
                    int columns[10]; // offset 0xC, size 0x28
                    int number; // offset 0x34, size 0x4
                    struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                } win[1]; // offset 0xC8, size 0xC8
                struct {
                    // total size: 0xC8
                    void * global; // offset 0x0, size 0x4
                    @enum$9657main_menu_c type; // offset 0x4, size 0x4
                    int column; // offset 0x8, size 0x4
                    int columns[10]; // offset 0xC, size 0x28
                    int number; // offset 0x34, size 0x4
                    struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                } lose[1]; // offset 0x190, size 0xC8
            } vs1; // offset 0x0, size 0x258
        } misc; // offset 0x1CC, size 0x258
    } panel[8]; // offset 0x3A8, size 0x2120
} struct_main_menu_c_94;
typedef union /* union_main_menu_c_95 */ {
    struct {
        // total size: 0x3558
        void * global; // offset 0x0, size 0x4
        @enum$856main_menu_c mode; // offset 0x4, size 0x4
        int depth; // offset 0x8, size 0x4
        int select[8]; // offset 0xC, size 0x20
        int screenNo; // offset 0x2C, size 0x4
        int screenDir; // offset 0x30, size 0x4
        int playSeqNo; // offset 0x34, size 0x4
        float kasaCount; // offset 0x38, size 0x4
        struct {
            // total size: 0x678
            void * global; // offset 0x0, size 0x4
            int size; // offset 0x4, size 0x4
            int count; // offset 0x8, size 0x4
            int select; // offset 0xC, size 0x4
            int indexes[6]; // offset 0x10, size 0x18
            struct SMenuItem miBase[1]; // offset 0x28, size 0x90
            struct SMenuItem miPanel[6]; // offset 0xB8, size 0x360
            struct {
                // total size: 0x260
                void * global; // offset 0x0, size 0x4
                @enum$1025main_menu_c type; // offset 0x4, size 0x4
                int playerCount; // offset 0x8, size 0x4
                int cpuCount; // offset 0xC, size 0x4
                int playerNo; // offset 0x10, size 0x4
                int size[2]; // offset 0x14, size 0x8
                struct {
                    // total size: 0x4
                    unsigned int cursor : 1; // offset 0x0, size 0x4
                    unsigned int finger : 1; // offset 0x0, size 0x4
                    unsigned int player : 1; // offset 0x0, size 0x4
                    unsigned int blink : 1; // offset 0x0, size 0x4
                } flags; // offset 0x1C, size 0x4
                struct SMenuItem miBase[1]; // offset 0x20, size 0x90
                struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
                struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
                struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
            } cursor[1]; // offset 0x418, size 0x260
        } panel[2]; // offset 0x3C, size 0xCF0
        struct {
            // total size: 0xA88
            void * global; // offset 0x0, size 0x4
            int playerCount; // offset 0x4, size 0x4
            int flow; // offset 0x8, size 0x4
            int depth[2]; // offset 0xC, size 0x8
            int select[2]; // offset 0x14, size 0x8
            int column[2]; // offset 0x1C, size 0x8
            struct {
                // total size: 0x4
                unsigned int guest : 1; // offset 0x0, size 0x4
            } flags; // offset 0x24, size 0x4
            struct SMenuItem miBase[1]; // offset 0x28, size 0x90
            struct SMenuItem miLabel[9]; // offset 0xB8, size 0x510
            struct {
                // total size: 0x260
                void * global; // offset 0x0, size 0x4
                @enum$1025main_menu_c type; // offset 0x4, size 0x4
                int playerCount; // offset 0x8, size 0x4
                int cpuCount; // offset 0xC, size 0x4
                int playerNo; // offset 0x10, size 0x4
                int size[2]; // offset 0x14, size 0x8
                struct {
                    // total size: 0x4
                    unsigned int cursor : 1; // offset 0x0, size 0x4
                    unsigned int finger : 1; // offset 0x0, size 0x4
                    unsigned int player : 1; // offset 0x0, size 0x4
                    unsigned int blink : 1; // offset 0x0, size 0x4
                } flags; // offset 0x1C, size 0x4
                struct SMenuItem miBase[1]; // offset 0x20, size 0x90
                struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
                struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
                struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
            } cursor[2]; // offset 0x5C8, size 0x4C0
        } nameSel[1]; // offset 0xD2C, size 0xA88
        struct {
            // total size: 0x4B0
            void * global; // offset 0x0, size 0x4
            int type; // offset 0x4, size 0x4
            int select; // offset 0x8, size 0x4
            unsigned char name[4]; // offset 0xC, size 0x4
            struct SMenuItem miBase[1]; // offset 0x10, size 0x90
            struct SMenuItem miName[1]; // offset 0xA0, size 0x90
            struct SMenuItem miPanel[2]; // offset 0x130, size 0x120
            struct {
                // total size: 0x260
                void * global; // offset 0x0, size 0x4
                @enum$1025main_menu_c type; // offset 0x4, size 0x4
                int playerCount; // offset 0x8, size 0x4
                int cpuCount; // offset 0xC, size 0x4
                int playerNo; // offset 0x10, size 0x4
                int size[2]; // offset 0x14, size 0x8
                struct {
                    // total size: 0x4
                    unsigned int cursor : 1; // offset 0x0, size 0x4
                    unsigned int finger : 1; // offset 0x0, size 0x4
                    unsigned int player : 1; // offset 0x0, size 0x4
                    unsigned int blink : 1; // offset 0x0, size 0x4
                } flags; // offset 0x1C, size 0x4
                struct SMenuItem miBase[1]; // offset 0x20, size 0x90
                struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
                struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
                struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
            } cursor[1]; // offset 0x250, size 0x260
        } nameOp[1]; // offset 0x17B4, size 0x4B0
        struct {
            // total size: 0x69C
            void * global; // offset 0x0, size 0x4
            int select; // offset 0x4, size 0x4
            int bgmNo; // offset 0x8, size 0x4
            int sndId; // offset 0xC, size 0x4
            int sndNo; // offset 0x10, size 0x4
            struct SMenuItem miBase[1]; // offset 0x14, size 0x90
            struct SMenuItem miPanel[4]; // offset 0xA4, size 0x240
            struct {
                // total size: 0xAC
                void * global; // offset 0x0, size 0x4
                int size; // offset 0x4, size 0x4
                int column; // offset 0x8, size 0x4
                int number; // offset 0xC, size 0x4
                struct {
                    // total size: 0x4
                    unsigned int zero : 1; // offset 0x0, size 0x4
                } flags; // offset 0x10, size 0x4
                char columns[8]; // offset 0x14, size 0x8
                struct SMenuItem miBase[1]; // offset 0x1C, size 0x90
            } number[2]; // offset 0x2E4, size 0x158
            struct {
                // total size: 0x260
                void * global; // offset 0x0, size 0x4
                @enum$1025main_menu_c type; // offset 0x4, size 0x4
                int playerCount; // offset 0x8, size 0x4
                int cpuCount; // offset 0xC, size 0x4
                int playerNo; // offset 0x10, size 0x4
                int size[2]; // offset 0x14, size 0x8
                struct {
                    // total size: 0x4
                    unsigned int cursor : 1; // offset 0x0, size 0x4
                    unsigned int finger : 1; // offset 0x0, size 0x4
                    unsigned int player : 1; // offset 0x0, size 0x4
                    unsigned int blink : 1; // offset 0x0, size 0x4
                } flags; // offset 0x1C, size 0x4
                struct SMenuItem miBase[1]; // offset 0x20, size 0x90
                struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
                struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
                struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
            } cursor[1]; // offset 0x43C, size 0x260
        } sndSel[1]; // offset 0x1C64, size 0x69C
        int current; // offset 0x2300, size 0x4
        const char * msgStr; // offset 0x2304, size 0x4
        struct {
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
        } msgWnd[1]; // offset 0x2308, size 0x80
        struct SMenuItem miMsgWnd[1]; // offset 0x2388, size 0x90
        struct SMenuItem miKaSaMaRu[1]; // offset 0x2418, size 0x90
        struct SMenuItem miSmoke[1]; // offset 0x24A8, size 0x90
        struct SMenuItem miScrWnd[1]; // offset 0x2538, size 0x90
        struct SMenuItem miScreen[1]; // offset 0x25C8, size 0x90
        struct {
            // total size: 0x514
            void * global; // offset 0x0, size 0x4
            struct SMenuItem miBase[1]; // offset 0x4, size 0x90
            struct SMenuItem miDesc[5]; // offset 0x94, size 0x2D0
            struct SMenuItem miLine[1]; // offset 0x364, size 0x90
            struct SMenuItem miLabel[1]; // offset 0x3F4, size 0x90
            struct SMenuItem miPushAnyKey[1]; // offset 0x484, size 0x90
        } cont[1]; // offset 0x2658, size 0x514
        struct {
            // total size: 0x678
            void * global; // offset 0x0, size 0x4
            int select; // offset 0x4, size 0x4
            struct SMenuItem miBase[1]; // offset 0x8, size 0x90
            struct SMenuItem miYN[2]; // offset 0x98, size 0x120
            struct {
                // total size: 0x260
                void * global; // offset 0x0, size 0x4
                @enum$1025main_menu_c type; // offset 0x4, size 0x4
                int playerCount; // offset 0x8, size 0x4
                int cpuCount; // offset 0xC, size 0x4
                int playerNo; // offset 0x10, size 0x4
                int size[2]; // offset 0x14, size 0x8
                struct {
                    // total size: 0x4
                    unsigned int cursor : 1; // offset 0x0, size 0x4
                    unsigned int finger : 1; // offset 0x0, size 0x4
                    unsigned int player : 1; // offset 0x0, size 0x4
                    unsigned int blink : 1; // offset 0x0, size 0x4
                } flags; // offset 0x1C, size 0x4
                struct SMenuItem miBase[1]; // offset 0x20, size 0x90
                struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
                struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
                struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
            } cursor[1]; // offset 0x1B8, size 0x260
            struct {
                // total size: 0x260
                void * global; // offset 0x0, size 0x4
                @enum$1025main_menu_c type; // offset 0x4, size 0x4
                int playerCount; // offset 0x8, size 0x4
                int cpuCount; // offset 0xC, size 0x4
                int playerNo; // offset 0x10, size 0x4
                int size[2]; // offset 0x14, size 0x8
                struct {
                    // total size: 0x4
                    unsigned int cursor : 1; // offset 0x0, size 0x4
                    unsigned int finger : 1; // offset 0x0, size 0x4
                    unsigned int player : 1; // offset 0x0, size 0x4
                    unsigned int blink : 1; // offset 0x0, size 0x4
                } flags; // offset 0x1C, size 0x4
                struct SMenuItem miBase[1]; // offset 0x20, size 0x90
                struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
                struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
                struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
            } window[1]; // offset 0x418, size 0x260
        } yesNo[1]; // offset 0x2B6C, size 0x678
        struct {
            // total size: 0x374
            void * global; // offset 0x0, size 0x4
            struct SMenuItem miBase[1]; // offset 0x4, size 0x90
            struct {
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
            } msgWnd[1]; // offset 0x94, size 0x80
            struct {
                // total size: 0x260
                void * global; // offset 0x0, size 0x4
                @enum$1025main_menu_c type; // offset 0x4, size 0x4
                int playerCount; // offset 0x8, size 0x4
                int cpuCount; // offset 0xC, size 0x4
                int playerNo; // offset 0x10, size 0x4
                int size[2]; // offset 0x14, size 0x8
                struct {
                    // total size: 0x4
                    unsigned int cursor : 1; // offset 0x0, size 0x4
                    unsigned int finger : 1; // offset 0x0, size 0x4
                    unsigned int player : 1; // offset 0x0, size 0x4
                    unsigned int blink : 1; // offset 0x0, size 0x4
                } flags; // offset 0x1C, size 0x4
                struct SMenuItem miBase[1]; // offset 0x20, size 0x90
                struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
                struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
                struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
            } window[1]; // offset 0x114, size 0x260
        } message[1]; // offset 0x31E4, size 0x374
    } main[1]; // offset 0x0, size 0x3558
    struct {
        // total size: 0x1A7C
        void * global; // offset 0x0, size 0x4
        int stageMax[4][2]; // offset 0x4, size 0x20
        int depth; // offset 0x24, size 0x4
        int select[3]; // offset 0x28, size 0xC
        int loaded; // offset 0x34, size 0x4
        void * animeAddr[2]; // offset 0x38, size 0x8
        struct SMenuItem miBase[1]; // offset 0x40, size 0x90
        struct SMenuItem miCharName[1]; // offset 0xD0, size 0x90
        struct SMenuItem miChar[2]; // offset 0x160, size 0x120
        struct SAnimeState animeState[2]; // offset 0x280, size 0x80
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } charCursor[2]; // offset 0x300, size 0x4C0
        struct {
            // total size: 0x9C
            void * global; // offset 0x0, size 0x4
            int size; // offset 0x4, size 0x4
            int select; // offset 0x8, size 0x4
            struct SMenuItem miBase[1]; // offset 0xC, size 0x90
        } speedAsk[1]; // offset 0x7C0, size 0x9C
        struct {
            // total size: 0x664
            void * global; // offset 0x0, size 0x4
            int size; // offset 0x4, size 0x4
            int select; // offset 0x8, size 0x4
            struct {
                // total size: 0x8
                unsigned int blink; // offset 0x0, size 0x4
                unsigned int special; // offset 0x4, size 0x4
            } flags; // offset 0xC, size 0x8
            struct SMenuItem miBase[1]; // offset 0x14, size 0x90
            struct SMenuItem miLabel[3]; // offset 0xA4, size 0x1B0
            struct SMenuItem miMask[3]; // offset 0x254, size 0x1B0
            struct {
                // total size: 0x260
                void * global; // offset 0x0, size 0x4
                @enum$1025main_menu_c type; // offset 0x4, size 0x4
                int playerCount; // offset 0x8, size 0x4
                int cpuCount; // offset 0xC, size 0x4
                int playerNo; // offset 0x10, size 0x4
                int size[2]; // offset 0x14, size 0x8
                struct {
                    // total size: 0x4
                    unsigned int cursor : 1; // offset 0x0, size 0x4
                    unsigned int finger : 1; // offset 0x0, size 0x4
                    unsigned int player : 1; // offset 0x0, size 0x4
                    unsigned int blink : 1; // offset 0x0, size 0x4
                } flags; // offset 0x1C, size 0x4
                struct SMenuItem miBase[1]; // offset 0x20, size 0x90
                struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
                struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
                struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
            } cursor[1]; // offset 0x404, size 0x260
        } speedItem[1]; // offset 0x85C, size 0x664
        struct {
            // total size: 0xAC
            void * global; // offset 0x0, size 0x4
            int size; // offset 0x4, size 0x4
            int column; // offset 0x8, size 0x4
            int number; // offset 0xC, size 0x4
            struct {
                // total size: 0x4
                unsigned int zero : 1; // offset 0x0, size 0x4
            } flags; // offset 0x10, size 0x4
            char columns[8]; // offset 0x14, size 0x8
            struct SMenuItem miBase[1]; // offset 0x1C, size 0x90
        } stageNum[1]; // offset 0xEC0, size 0xAC
        struct SMenuItem miStageBase[1]; // offset 0xF6C, size 0x90
        struct SMenuItem miStageBg[2]; // offset 0xFFC, size 0x120
        struct SMenuItem miBgCursor[2]; // offset 0x111C, size 0x120
        struct SMenuItem miWalk[2]; // offset 0x123C, size 0x120
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } cursor[3]; // offset 0x135C, size 0x720
    } story[1]; // offset 0x0, size 0x1A7C
    struct {
        // total size: 0x2574
        void * global; // offset 0x0, size 0x4
        @enum$856main_menu_c mode; // offset 0x4, size 0x4
        struct SMenuItem miBase[1]; // offset 0x8, size 0x90
        struct SMenuItem miPanel[2]; // offset 0x98, size 0x120
        struct {
            // total size: 0xAC
            void * global; // offset 0x0, size 0x4
            int size; // offset 0x4, size 0x4
            int column; // offset 0x8, size 0x4
            int number; // offset 0xC, size 0x4
            struct {
                // total size: 0x4
                unsigned int zero : 1; // offset 0x0, size 0x4
            } flags; // offset 0x10, size 0x4
            char columns[8]; // offset 0x14, size 0x8
            struct SMenuItem miBase[1]; // offset 0x1C, size 0x90
        } lvNum[1]; // offset 0x1B8, size 0xAC
        struct SMenuLvGauge lvGauge[1]; // offset 0x264, size 0x300
        struct {
            // total size: 0x9C
            void * global; // offset 0x0, size 0x4
            int size; // offset 0x4, size 0x4
            int select; // offset 0x8, size 0x4
            struct SMenuItem miBase[1]; // offset 0xC, size 0x90
        } speedAsk[1]; // offset 0x564, size 0x9C
        struct {
            // total size: 0x664
            void * global; // offset 0x0, size 0x4
            int size; // offset 0x4, size 0x4
            int select; // offset 0x8, size 0x4
            struct {
                // total size: 0x8
                unsigned int blink; // offset 0x0, size 0x4
                unsigned int special; // offset 0x4, size 0x4
            } flags; // offset 0xC, size 0x8
            struct SMenuItem miBase[1]; // offset 0x14, size 0x90
            struct SMenuItem miLabel[3]; // offset 0xA4, size 0x1B0
            struct SMenuItem miMask[3]; // offset 0x254, size 0x1B0
            struct {
                // total size: 0x260
                void * global; // offset 0x0, size 0x4
                @enum$1025main_menu_c type; // offset 0x4, size 0x4
                int playerCount; // offset 0x8, size 0x4
                int cpuCount; // offset 0xC, size 0x4
                int playerNo; // offset 0x10, size 0x4
                int size[2]; // offset 0x14, size 0x8
                struct {
                    // total size: 0x4
                    unsigned int cursor : 1; // offset 0x0, size 0x4
                    unsigned int finger : 1; // offset 0x0, size 0x4
                    unsigned int player : 1; // offset 0x0, size 0x4
                    unsigned int blink : 1; // offset 0x0, size 0x4
                } flags; // offset 0x1C, size 0x4
                struct SMenuItem miBase[1]; // offset 0x20, size 0x90
                struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
                struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
                struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
            } cursor[1]; // offset 0x404, size 0x260
        } speedItem[1]; // offset 0x600, size 0x664
        struct {
            // total size: 0x8A0
            void * global; // offset 0x0, size 0x4
            int select; // offset 0x4, size 0x4
            int playNo; // offset 0x8, size 0x4
            struct {
                // total size: 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0xC, size 0x4
            struct SMenuItem miBase[1]; // offset 0x10, size 0x90
            struct SMenuItem miLabel[5]; // offset 0xA0, size 0x2D0
            struct SMenuItem miMask[5]; // offset 0x370, size 0x2D0
            struct {
                // total size: 0x260
                void * global; // offset 0x0, size 0x4
                @enum$1025main_menu_c type; // offset 0x4, size 0x4
                int playerCount; // offset 0x8, size 0x4
                int cpuCount; // offset 0xC, size 0x4
                int playerNo; // offset 0x10, size 0x4
                int size[2]; // offset 0x14, size 0x8
                struct {
                    // total size: 0x4
                    unsigned int cursor : 1; // offset 0x0, size 0x4
                    unsigned int finger : 1; // offset 0x0, size 0x4
                    unsigned int player : 1; // offset 0x0, size 0x4
                    unsigned int blink : 1; // offset 0x0, size 0x4
                } flags; // offset 0x1C, size 0x4
                struct SMenuItem miBase[1]; // offset 0x20, size 0x90
                struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
                struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
                struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
            } cursor[1]; // offset 0x640, size 0x260
        } musicItem[1]; // offset 0xC64, size 0x8A0
        struct {
            // total size: 0x128
            void * global; // offset 0x0, size 0x4
            int level; // offset 0x4, size 0x4
            struct SMenuItem miBase[1]; // offset 0x8, size 0x90
            struct SMenuItem miVirus[1]; // offset 0x98, size 0x90
        } bottle[1]; // offset 0x1504, size 0x128
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } cursor[3]; // offset 0x162C, size 0x720
        struct SMenuItem miCapsule[1]; // offset 0x1D4C, size 0x90
        struct SMenuItem miMusic[1]; // offset 0x1DDC, size 0x90
        struct {
            // total size: 0x9C
            void * global; // offset 0x0, size 0x4
            int size; // offset 0x4, size 0x4
            int select; // offset 0x8, size 0x4
            struct SMenuItem miBase[1]; // offset 0xC, size 0x90
        } glvAsk[1]; // offset 0x1E6C, size 0x9C
        struct {
            // total size: 0x664
            void * global; // offset 0x0, size 0x4
            int size; // offset 0x4, size 0x4
            int select; // offset 0x8, size 0x4
            struct {
                // total size: 0x8
                unsigned int blink; // offset 0x0, size 0x4
                unsigned int special; // offset 0x4, size 0x4
            } flags; // offset 0xC, size 0x8
            struct SMenuItem miBase[1]; // offset 0x14, size 0x90
            struct SMenuItem miLabel[3]; // offset 0xA4, size 0x1B0
            struct SMenuItem miMask[3]; // offset 0x254, size 0x1B0
            struct {
                // total size: 0x260
                void * global; // offset 0x0, size 0x4
                @enum$1025main_menu_c type; // offset 0x4, size 0x4
                int playerCount; // offset 0x8, size 0x4
                int cpuCount; // offset 0xC, size 0x4
                int playerNo; // offset 0x10, size 0x4
                int size[2]; // offset 0x14, size 0x8
                struct {
                    // total size: 0x4
                    unsigned int cursor : 1; // offset 0x0, size 0x4
                    unsigned int finger : 1; // offset 0x0, size 0x4
                    unsigned int player : 1; // offset 0x0, size 0x4
                    unsigned int blink : 1; // offset 0x0, size 0x4
                } flags; // offset 0x1C, size 0x4
                struct SMenuItem miBase[1]; // offset 0x20, size 0x90
                struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
                struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
                struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
            } cursor[1]; // offset 0x404, size 0x260
        } glvItem[1]; // offset 0x1F08, size 0x664
        int depth; // offset 0x256C, size 0x4
        int levelMax; // offset 0x2570, size 0x4
    } lvSel[1]; // offset 0x0, size 0x2574
    struct {
        // total size: 0x75A4
        void * global; // offset 0x0, size 0x4
        int depth; // offset 0x4, size 0x4
        int master; // offset 0x8, size 0x4
        int playerCount; // offset 0xC, size 0x4
        int playerTable[4]; // offset 0x10, size 0x10
        int cpuCount; // offset 0x20, size 0x4
        int cpuTable[4]; // offset 0x24, size 0x10
        struct SMenuItem miONaJi[1]; // offset 0x34, size 0x90
        int panelCount; // offset 0xC4, size 0x4
        struct {
            // total size: 0x1920
            void * global; // offset 0x0, size 0x4
            @enum$110dm_title_main_c flash; // offset 0x4, size 0x4
            @enum$110dm_title_main_c timeAt; // offset 0x8, size 0x4
            @enum$110dm_title_main_c FL_TA; // offset 0xC, size 0x4
            int size; // offset 0x10, size 0x4
            int playerCount; // offset 0x14, size 0x4
            int cpuCount; // offset 0x18, size 0x4
            int playerNo; // offset 0x1C, size 0x4
            int charNo; // offset 0x20, size 0x4
            int depth; // offset 0x24, size 0x4
            int flow; // offset 0x28, size 0x4
            void * animeAddr; // offset 0x2C, size 0x4
            struct {
                // total size: 0x4
                unsigned int cpu : 1; // offset 0x0, size 0x4
                unsigned int loaded : 1; // offset 0x0, size 0x4
            } flags; // offset 0x30, size 0x4
            struct SMenuItem miBase[1]; // offset 0x34, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0xC4, size 0x90
            struct SMenuItem miPlayerNo[1]; // offset 0x154, size 0x90
            struct {
                // total size: 0xAC
                void * global; // offset 0x0, size 0x4
                int size; // offset 0x4, size 0x4
                int column; // offset 0x8, size 0x4
                int number; // offset 0xC, size 0x4
                struct {
                    // total size: 0x4
                    unsigned int zero : 1; // offset 0x0, size 0x4
                } flags; // offset 0x10, size 0x4
                char columns[8]; // offset 0x14, size 0x8
                struct SMenuItem miBase[1]; // offset 0x1C, size 0x90
            } lvNum[1]; // offset 0x1E4, size 0xAC
            struct SMenuLvGauge lvGauge[1]; // offset 0x290, size 0x300
            struct {
                // total size: 0x9C
                void * global; // offset 0x0, size 0x4
                int size; // offset 0x4, size 0x4
                int select; // offset 0x8, size 0x4
                struct SMenuItem miBase[1]; // offset 0xC, size 0x90
            } speedAsk[1]; // offset 0x590, size 0x9C
            struct {
                // total size: 0x664
                void * global; // offset 0x0, size 0x4
                int size; // offset 0x4, size 0x4
                int select; // offset 0x8, size 0x4
                struct {
                    // total size: 0x8
                    unsigned int blink; // offset 0x0, size 0x4
                    unsigned int special; // offset 0x4, size 0x4
                } flags; // offset 0xC, size 0x8
                struct SMenuItem miBase[1]; // offset 0x14, size 0x90
                struct SMenuItem miLabel[3]; // offset 0xA4, size 0x1B0
                struct SMenuItem miMask[3]; // offset 0x254, size 0x1B0
                struct {
                    // total size: 0x260
                    void * global; // offset 0x0, size 0x4
                    @enum$1025main_menu_c type; // offset 0x4, size 0x4
                    int playerCount; // offset 0x8, size 0x4
                    int cpuCount; // offset 0xC, size 0x4
                    int playerNo; // offset 0x10, size 0x4
                    int size[2]; // offset 0x14, size 0x8
                    struct {
                        // total size: 0x4
                        unsigned int cursor : 1; // offset 0x0, size 0x4
                        unsigned int finger : 1; // offset 0x0, size 0x4
                        unsigned int player : 1; // offset 0x0, size 0x4
                        unsigned int blink : 1; // offset 0x0, size 0x4
                    } flags; // offset 0x1C, size 0x4
                    struct SMenuItem miBase[1]; // offset 0x20, size 0x90
                    struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
                    struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
                    struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
                } cursor[1]; // offset 0x404, size 0x260
            } speedItem[1]; // offset 0x62C, size 0x664
            struct SAnimeState animeState[1]; // offset 0xC90, size 0x40
            struct SMenuItem miOk[1]; // offset 0xCD0, size 0x90
            struct {
                // total size: 0x260
                void * global; // offset 0x0, size 0x4
                @enum$1025main_menu_c type; // offset 0x4, size 0x4
                int playerCount; // offset 0x8, size 0x4
                int cpuCount; // offset 0xC, size 0x4
                int playerNo; // offset 0x10, size 0x4
                int size[2]; // offset 0x14, size 0x8
                struct {
                    // total size: 0x4
                    unsigned int cursor : 1; // offset 0x0, size 0x4
                    unsigned int finger : 1; // offset 0x0, size 0x4
                    unsigned int player : 1; // offset 0x0, size 0x4
                    unsigned int blink : 1; // offset 0x0, size 0x4
                } flags; // offset 0x1C, size 0x4
                struct SMenuItem miBase[1]; // offset 0x20, size 0x90
                struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
                struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
                struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
            } cursor[2]; // offset 0xD60, size 0x4C0
            struct {
                // total size: 0x9C
                void * global; // offset 0x0, size 0x4
                int size; // offset 0x4, size 0x4
                int select; // offset 0x8, size 0x4
                struct SMenuItem miBase[1]; // offset 0xC, size 0x90
            } glvAsk[1]; // offset 0x1220, size 0x9C
            struct {
                // total size: 0x664
                void * global; // offset 0x0, size 0x4
                int size; // offset 0x4, size 0x4
                int select; // offset 0x8, size 0x4
                struct {
                    // total size: 0x8
                    unsigned int blink; // offset 0x0, size 0x4
                    unsigned int special; // offset 0x4, size 0x4
                } flags; // offset 0xC, size 0x8
                struct SMenuItem miBase[1]; // offset 0x14, size 0x90
                struct SMenuItem miLabel[3]; // offset 0xA4, size 0x1B0
                struct SMenuItem miMask[3]; // offset 0x254, size 0x1B0
                struct {
                    // total size: 0x260
                    void * global; // offset 0x0, size 0x4
                    @enum$1025main_menu_c type; // offset 0x4, size 0x4
                    int playerCount; // offset 0x8, size 0x4
                    int cpuCount; // offset 0xC, size 0x4
                    int playerNo; // offset 0x10, size 0x4
                    int size[2]; // offset 0x14, size 0x8
                    struct {
                        // total size: 0x4
                        unsigned int cursor : 1; // offset 0x0, size 0x4
                        unsigned int finger : 1; // offset 0x0, size 0x4
                        unsigned int player : 1; // offset 0x0, size 0x4
                        unsigned int blink : 1; // offset 0x0, size 0x4
                    } flags; // offset 0x1C, size 0x4
                    struct SMenuItem miBase[1]; // offset 0x20, size 0x90
                    struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
                    struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
                    struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
                } cursor[1]; // offset 0x404, size 0x260
            } glvItem[1]; // offset 0x12BC, size 0x664
        } panel[4]; // offset 0xC8, size 0x6480
        struct {
            // total size: 0x105C
            void * global; // offset 0x0, size 0x4
            int depth; // offset 0x4, size 0x4
            int flow; // offset 0x8, size 0x4
            int topBgGap; // offset 0xC, size 0x4
            struct SMenuItem miBase[1]; // offset 0x10, size 0x90
            struct {
                // total size: 0x8A0
                void * global; // offset 0x0, size 0x4
                int select; // offset 0x4, size 0x4
                int playNo; // offset 0x8, size 0x4
                struct {
                    // total size: 0x4
                    unsigned int blink : 1; // offset 0x0, size 0x4
                } flags; // offset 0xC, size 0x4
                struct SMenuItem miBase[1]; // offset 0x10, size 0x90
                struct SMenuItem miLabel[5]; // offset 0xA0, size 0x2D0
                struct SMenuItem miMask[5]; // offset 0x370, size 0x2D0
                struct {
                    // total size: 0x260
                    void * global; // offset 0x0, size 0x4
                    @enum$1025main_menu_c type; // offset 0x4, size 0x4
                    int playerCount; // offset 0x8, size 0x4
                    int cpuCount; // offset 0xC, size 0x4
                    int playerNo; // offset 0x10, size 0x4
                    int size[2]; // offset 0x14, size 0x8
                    struct {
                        // total size: 0x4
                        unsigned int cursor : 1; // offset 0x0, size 0x4
                        unsigned int finger : 1; // offset 0x0, size 0x4
                        unsigned int player : 1; // offset 0x0, size 0x4
                        unsigned int blink : 1; // offset 0x0, size 0x4
                    } flags; // offset 0x1C, size 0x4
                    struct SMenuItem miBase[1]; // offset 0x20, size 0x90
                    struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
                    struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
                    struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
                } cursor[1]; // offset 0x640, size 0x260
            } musicItem[1]; // offset 0xA0, size 0x8A0
            struct {
                // total size: 0xAC
                void * global; // offset 0x0, size 0x4
                int size; // offset 0x4, size 0x4
                int column; // offset 0x8, size 0x4
                int number; // offset 0xC, size 0x4
                struct {
                    // total size: 0x4
                    unsigned int zero : 1; // offset 0x0, size 0x4
                } flags; // offset 0x10, size 0x4
                char columns[8]; // offset 0x14, size 0x8
                struct SMenuItem miBase[1]; // offset 0x1C, size 0x90
            } stageNum[1]; // offset 0x940, size 0xAC
            struct SMenuItem miStageBg[1]; // offset 0x9EC, size 0x90
            struct SMenuItem miBgCursor[2]; // offset 0xA7C, size 0x120
            struct {
                // total size: 0x260
                void * global; // offset 0x0, size 0x4
                @enum$1025main_menu_c type; // offset 0x4, size 0x4
                int playerCount; // offset 0x8, size 0x4
                int cpuCount; // offset 0xC, size 0x4
                int playerNo; // offset 0x10, size 0x4
                int size[2]; // offset 0x14, size 0x8
                struct {
                    // total size: 0x4
                    unsigned int cursor : 1; // offset 0x0, size 0x4
                    unsigned int finger : 1; // offset 0x0, size 0x4
                    unsigned int player : 1; // offset 0x0, size 0x4
                    unsigned int blink : 1; // offset 0x0, size 0x4
                } flags; // offset 0x1C, size 0x4
                struct SMenuItem miBase[1]; // offset 0x20, size 0x90
                struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
                struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
                struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
            } cursor[2]; // offset 0xB9C, size 0x4C0
        } panelSub[1]; // offset 0x6548, size 0x105C
    } play2[1]; // offset 0x0, size 0x75A4
    struct {
        // total size: 0x2D4C
        void * global; // offset 0x0, size 0x4
        int allCount; // offset 0x4, size 0x4
        int select[4]; // offset 0x8, size 0x10
        int depth[4]; // offset 0x18, size 0x10
        int subDepth; // offset 0x28, size 0x4
        int hardFlag; // offset 0x2C, size 0x4
        int hardMode; // offset 0x30, size 0x4
        int comLvId; // offset 0x34, size 0x4
        int comLvPn; // offset 0x38, size 0x4
        int playerCount; // offset 0x3C, size 0x4
        int playerTable[4]; // offset 0x40, size 0x10
        int cpuFlag[4]; // offset 0x50, size 0x10
        int cpuCount; // offset 0x60, size 0x4
        int cpuTable[4]; // offset 0x64, size 0x10
        struct SMenuItem miBase[1]; // offset 0x74, size 0x90
        struct SMenuItem miHard[1]; // offset 0x104, size 0x90
        struct SMenuItem miChar[15]; // offset 0x194, size 0x870
        struct SMenuItem miCharFilt[15]; // offset 0xA04, size 0x870
        struct {
            // total size: 0x128
            void * global; // offset 0x0, size 0x4
            int level; // offset 0x4, size 0x4
            struct SMenuItem miBase[1]; // offset 0x8, size 0x90
            struct SMenuItem miStar[1]; // offset 0x98, size 0x90
        } comLv[15]; // offset 0x1274, size 0x1158
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } cursor[4]; // offset 0x23CC, size 0x980
    } chSel[1]; // offset 0x0, size 0x2D4C
    struct {
        // total size: 0x68C
        void * global; // offset 0x0, size 0x4
        int playerNo; // offset 0x4, size 0x4
        int playerCount; // offset 0x8, size 0x4
        int flow[2]; // offset 0xC, size 0x8
        int pageNo[2]; // offset 0x14, size 0x8
        int curPos[2][2]; // offset 0x1C, size 0x10
        char name[2][4]; // offset 0x2C, size 0x8
        int namePos[2]; // offset 0x34, size 0x8
        struct SMenuItem miBase[1]; // offset 0x3C, size 0x90
        struct SMenuItem miPanel[1]; // offset 0xCC, size 0x90
        struct SMenuItem miPlayerNo[1]; // offset 0x15C, size 0x90
        struct SMenuItem miTable[1]; // offset 0x1EC, size 0x90
        struct SMenuItem miCursor[1]; // offset 0x27C, size 0x90
        struct {
            // total size: 0x260
            void * global; // offset 0x0, size 0x4
            @enum$1025main_menu_c type; // offset 0x4, size 0x4
            int playerCount; // offset 0x8, size 0x4
            int cpuCount; // offset 0xC, size 0x4
            int playerNo; // offset 0x10, size 0x4
            int size[2]; // offset 0x14, size 0x8
            struct {
                // total size: 0x4
                unsigned int cursor : 1; // offset 0x0, size 0x4
                unsigned int finger : 1; // offset 0x0, size 0x4
                unsigned int player : 1; // offset 0x0, size 0x4
                unsigned int blink : 1; // offset 0x0, size 0x4
            } flags; // offset 0x1C, size 0x4
            struct SMenuItem miBase[1]; // offset 0x20, size 0x90
            struct SMenuItem miCursor[1]; // offset 0xB0, size 0x90
            struct SMenuItem miFinger[1]; // offset 0x140, size 0x90
            struct SMenuItem miPlayer[1]; // offset 0x1D0, size 0x90
        } cursor[1]; // offset 0x30C, size 0x260
        struct SMenuItem miName[1]; // offset 0x56C, size 0x90
        struct SMenuItem miNamePos[1]; // offset 0x5FC, size 0x90
    } nmEnt[1]; // offset 0x0, size 0x68C
    struct {
        // total size: 0x4F20
        void * global; // offset 0x0, size 0x4
        @enum$856main_menu_c mode; // offset 0x4, size 0x4
        @enum$110dm_title_main_c vsFlag; // offset 0x8, size 0x4
        int level; // offset 0xC, size 0x4
        int levelOld; // offset 0x10, size 0x4
        int curBuf; // offset 0x14, size 0x4
        int oldBuf; // offset 0x18, size 0x4
        struct SRankSortInfo sortInfo[1]; // offset 0x1C, size 0x160
        struct SMenuItem miBase[1]; // offset 0x17C, size 0x90
        struct SMenuItem miLR[2]; // offset 0x20C, size 0x120
        struct SMenuItem miNameBase[1]; // offset 0x32C, size 0x90
        struct {
            // total size: 0x9C
            void * global; // offset 0x0, size 0x4
            int type; // offset 0x4, size 0x4
            int index; // offset 0x8, size 0x4
            struct SMenuItem miBase[1]; // offset 0xC, size 0x90
        } title[1]; // offset 0x3BC, size 0x9C
        struct {
            // total size: 0x9C
            void * global; // offset 0x0, size 0x4
            int type; // offset 0x4, size 0x4
            int index; // offset 0x8, size 0x4
            struct SMenuItem miBase[1]; // offset 0xC, size 0x90
        } nameLabel[2]; // offset 0x458, size 0x138
        struct {
            // total size: 0x24C8
            int panelCount; // offset 0x0, size 0x4
            struct {
                // total size: 0x3A4
                void * global; // offset 0x0, size 0x4
                int labelCount; // offset 0x4, size 0x4
                struct SMenuItem miBase[1]; // offset 0x8, size 0x90
                struct {
                    // total size: 0x9C
                    void * global; // offset 0x0, size 0x4
                    int type; // offset 0x4, size 0x4
                    int index; // offset 0x8, size 0x4
                    struct SMenuItem miBase[1]; // offset 0xC, size 0x90
                } label[5]; // offset 0x98, size 0x30C
            } header[1]; // offset 0x4, size 0x3A4
            struct {
                // total size: 0x424
                void * global; // offset 0x0, size 0x4
                int type; // offset 0x4, size 0x4
                struct {
                    // total size: 0x94
                    void * global; // offset 0x0, size 0x4
                    struct SMenuItem miBase[1]; // offset 0x4, size 0x90
                } base[1]; // offset 0x8, size 0x94
                struct {
                    // total size: 0x98
                    void * global; // offset 0x0, size 0x4
                    int number; // offset 0x4, size 0x4
                    struct SMenuItem miBase[1]; // offset 0x8, size 0x90
                } rank[1]; // offset 0x9C, size 0x98
                struct {
                    // total size: 0x98
                    void * global; // offset 0x0, size 0x4
                    char name[4]; // offset 0x4, size 0x4
                    struct SMenuItem miBase[1]; // offset 0x8, size 0x90
                } name[1]; // offset 0x134, size 0x98
                union {
                    struct {
                        // total size: 0x258
                        struct {
                            // total size: 0xC8
                            void * global; // offset 0x0, size 0x4
                            @enum$9657main_menu_c type; // offset 0x4, size 0x4
                            int column; // offset 0x8, size 0x4
                            int columns[10]; // offset 0xC, size 0x28
                            int number; // offset 0x34, size 0x4
                            struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                        } score[1]; // offset 0x0, size 0xC8
                        struct {
                            // total size: 0xC8
                            void * global; // offset 0x0, size 0x4
                            @enum$9657main_menu_c type; // offset 0x4, size 0x4
                            int column; // offset 0x8, size 0x4
                            int columns[10]; // offset 0xC, size 0x28
                            int number; // offset 0x34, size 0x4
                            struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                        } time[1]; // offset 0xC8, size 0xC8
                        struct {
                            // total size: 0xC8
                            void * global; // offset 0x0, size 0x4
                            @enum$9657main_menu_c type; // offset 0x4, size 0x4
                            int column; // offset 0x8, size 0x4
                            int columns[10]; // offset 0xC, size 0x28
                            int number; // offset 0x34, size 0x4
                            struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                        } stage[1]; // offset 0x190, size 0xC8
                    } oha; // offset 0x0, size 0x258
                    struct {
                        // total size: 0x190
                        struct {
                            // total size: 0xC8
                            void * global; // offset 0x0, size 0x4
                            @enum$9657main_menu_c type; // offset 0x4, size 0x4
                            int column; // offset 0x8, size 0x4
                            int columns[10]; // offset 0xC, size 0x28
                            int number; // offset 0x34, size 0x4
                            struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                        } level[1]; // offset 0x0, size 0xC8
                        struct {
                            // total size: 0xC8
                            void * global; // offset 0x0, size 0x4
                            @enum$9657main_menu_c type; // offset 0x4, size 0x4
                            int column; // offset 0x8, size 0x4
                            int columns[10]; // offset 0xC, size 0x28
                            int number; // offset 0x34, size 0x4
                            struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                        } score[1]; // offset 0xC8, size 0xC8
                    } end; // offset 0x0, size 0x190
                    struct {
                        // total size: 0x190
                        struct {
                            // total size: 0xC8
                            void * global; // offset 0x0, size 0x4
                            @enum$9657main_menu_c type; // offset 0x4, size 0x4
                            int column; // offset 0x8, size 0x4
                            int columns[10]; // offset 0xC, size 0x28
                            int number; // offset 0x34, size 0x4
                            struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                        } time[1]; // offset 0x0, size 0xC8
                        struct {
                            // total size: 0xC8
                            void * global; // offset 0x0, size 0x4
                            @enum$9657main_menu_c type; // offset 0x4, size 0x4
                            int column; // offset 0x8, size 0x4
                            int columns[10]; // offset 0xC, size 0x28
                            int number; // offset 0x34, size 0x4
                            struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                        } score[1]; // offset 0xC8, size 0xC8
                    } taiQ; // offset 0x0, size 0x190
                    struct {
                        // total size: 0x258
                        struct {
                            // total size: 0xC8
                            void * global; // offset 0x0, size 0x4
                            @enum$9657main_menu_c type; // offset 0x4, size 0x4
                            int column; // offset 0x8, size 0x4
                            int columns[10]; // offset 0xC, size 0x28
                            int number; // offset 0x34, size 0x4
                            struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                        } score[1]; // offset 0x0, size 0xC8
                        struct {
                            // total size: 0xC8
                            void * global; // offset 0x0, size 0x4
                            @enum$9657main_menu_c type; // offset 0x4, size 0x4
                            int column; // offset 0x8, size 0x4
                            int columns[10]; // offset 0xC, size 0x28
                            int number; // offset 0x34, size 0x4
                            struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                        } time[1]; // offset 0xC8, size 0xC8
                        struct {
                            // total size: 0xC8
                            void * global; // offset 0x0, size 0x4
                            @enum$9657main_menu_c type; // offset 0x4, size 0x4
                            int column; // offset 0x8, size 0x4
                            int columns[10]; // offset 0xC, size 0x28
                            int number; // offset 0x34, size 0x4
                            struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                        } erase[1]; // offset 0x190, size 0xC8
                    } timeAt; // offset 0x0, size 0x258
                    struct {
                        // total size: 0x258
                        struct {
                            // total size: 0xC8
                            void * global; // offset 0x0, size 0x4
                            @enum$9657main_menu_c type; // offset 0x4, size 0x4
                            int column; // offset 0x8, size 0x4
                            int columns[10]; // offset 0xC, size 0x28
                            int number; // offset 0x34, size 0x4
                            struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                        } ratio[1]; // offset 0x0, size 0xC8
                        struct {
                            // total size: 0xC8
                            void * global; // offset 0x0, size 0x4
                            @enum$9657main_menu_c type; // offset 0x4, size 0x4
                            int column; // offset 0x8, size 0x4
                            int columns[10]; // offset 0xC, size 0x28
                            int number; // offset 0x34, size 0x4
                            struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                        } win[1]; // offset 0xC8, size 0xC8
                        struct {
                            // total size: 0xC8
                            void * global; // offset 0x0, size 0x4
                            @enum$9657main_menu_c type; // offset 0x4, size 0x4
                            int column; // offset 0x8, size 0x4
                            int columns[10]; // offset 0xC, size 0x28
                            int number; // offset 0x34, size 0x4
                            struct SMenuItem miBase[1]; // offset 0x38, size 0x90
                        } lose[1]; // offset 0x190, size 0xC8
                    } vs1; // offset 0x0, size 0x258
                } misc; // offset 0x1CC, size 0x258
            } panel[8]; // offset 0x3A8, size 0x2120
        } ct[2]; // offset 0x590, size 0x4990
    } rank[1]; // offset 0x0, size 0x4F20
} union_main_menu_c_95;
typedef struct /* struct_aiset_c_96 */ {
    // total size: 0x38
    signed short dt_LnOnLinVrs; // offset 0x0, size 0x2
    signed short dt_LnEraseVrs; // offset 0x2, size 0x2
    signed short dt_EraseLinP1; // offset 0x4, size 0x2
    signed short dt_EraseLinP3; // offset 0x6, size 0x2
    signed short dt_HeiEraseLinRate; // offset 0x8, size 0x2
    signed short dt_WidEraseLinRate; // offset 0xA, size 0x2
    signed short dt_P_ALN_HeightP; // offset 0xC, size 0x2
    signed short dt_P_ALN_FallCap; // offset 0xE, size 0x2
    signed short dt_P_ALN_FallVrs; // offset 0x10, size 0x2
    signed short dt_P_ALN_Capsule; // offset 0x12, size 0x2
    signed short dt_P_ALN_Virus; // offset 0x14, size 0x2
    signed short dt_WP_ALN_Bottom; // offset 0x16, size 0x2
    signed short dt_WP_ALN_FallCap; // offset 0x18, size 0x2
    signed short dt_WP_ALN_FallVrs; // offset 0x1A, size 0x2
    signed short dt_WP_ALN_Capsule; // offset 0x1C, size 0x2
    signed short dt_WP_ALN_Virus; // offset 0x1E, size 0x2
    signed short dt_OnVirusP; // offset 0x20, size 0x2
    signed short dt_RensaP; // offset 0x22, size 0x2
    signed short dt_RensaMP; // offset 0x24, size 0x2
    signed short dt_LnHighCaps; // offset 0x26, size 0x2
    signed short dt_LnHighVrs; // offset 0x28, size 0x2
    signed short dt_aiWall_F; // offset 0x2A, size 0x2
    signed short dt_HeiLinesAllp2; // offset 0x2C, size 0x2
    signed short dt_HeiLinesAllp3; // offset 0x2E, size 0x2
    signed short dt_HeiLinesAllp4; // offset 0x30, size 0x2
    signed short dt_WidLinesAllp2; // offset 0x32, size 0x2
    signed short dt_WidLinesAllp3; // offset 0x34, size 0x2
    signed short dt_WidLinesAllp4; // offset 0x36, size 0x2
} struct_aiset_c_96;
typedef struct /* struct_aiset_c_97 */ {
    // total size: 0x6C
    signed char wait_attack; // offset 0x0, size 0x1
    signed char speed; // offset 0x1, size 0x1
    signed short luck; // offset 0x2, size 0x2
    signed char logic[8]; // offset 0x4, size 0x8
    signed char condition[16]; // offset 0xC, size 0x10
    signed short condition_param[16]; // offset 0x1C, size 0x20
    signed char effect[16]; // offset 0x3C, size 0x10
    signed short effect_param[16]; // offset 0x4C, size 0x20
} struct_aiset_c_97;
typedef struct /* struct_aiset_c_98 */ {
    // total size: 0x40
    unsigned char ok; // offset 0x0, size 0x1
    unsigned char tory; // offset 0x1, size 0x1
    unsigned char x; // offset 0x2, size 0x1
    unsigned char y; // offset 0x3, size 0x1
    unsigned char rev; // offset 0x4, size 0x1
    unsigned char ccnt; // offset 0x5, size 0x1
    long pri; // offset 0x8, size 0x4
    long dead; // offset 0xC, size 0x4
    unsigned char hei[2][10]; // offset 0x10, size 0x14
    unsigned char wid[2][10]; // offset 0x24, size 0x14
    unsigned char elin[2]; // offset 0x38, size 0x2
    unsigned char only[2]; // offset 0x3A, size 0x2
    unsigned char wonly[2]; // offset 0x3C, size 0x2
    unsigned char sub; // offset 0x3E, size 0x1
    unsigned char rensa; // offset 0x3F, size 0x1
} struct_aiset_c_98;
typedef struct /* struct_aiset_c_99 */ {
    // total size: 0x2
    unsigned char ca; // offset 0x0, size 0x1
    unsigned char cb; // offset 0x1, size 0x1
} struct_aiset_c_99;
typedef struct /* struct_aiset_c_100 */ {
    // total size: 0x2
    unsigned char co; // offset 0x0, size 0x1
    unsigned char st; // offset 0x1, size 0x1
} struct_aiset_c_100;
typedef struct /* struct_aiset_c_101 */ {
    // total size: 0x3
    unsigned char tory; // offset 0x0, size 0x1
    unsigned char x; // offset 0x1, size 0x1
    unsigned char y; // offset 0x2, size 0x1
} struct_aiset_c_101;
typedef struct /* struct_aiset_c_102 */ {
    // total size: 0x2
    unsigned char x; // offset 0x0, size 0x1
    unsigned char y; // offset 0x1, size 0x1
} struct_aiset_c_102;
typedef struct /* struct_dm_manual_main_c_103 */ {
    // total size: 0x188
    int pino_dir; // offset 0x0, size 0x4
    int pino_pos[2]; // offset 0x4, size 0x8
    int fade_count; // offset 0xC, size 0x4
    int fade_step; // offset 0x10, size 0x4
    int bgm_timer; // offset 0x14, size 0x4
    int bgm_timeout; // offset 0x18, size 0x4
    int key_flash_count[4]; // offset 0x1C, size 0x10
    int logo_timer; // offset 0x2C, size 0x4
    int capsel_flow; // offset 0x30, size 0x4
    struct STutolWnd msgWnd[1]; // offset 0x34, size 0x90
    int big_virus_pos[3][3]; // offset 0xC4, size 0x24
    struct {
        // total size: 0x6
        signed char pos_a_x; // offset 0x0, size 0x1
        signed char pos_a_y; // offset 0x1, size 0x1
        signed char capsel_a_p; // offset 0x2, size 0x1
        signed char capsel_a_flg[3]; // offset 0x3, size 0x3
    } attack_cap[4][4]; // offset 0xE8, size 0x60
    unsigned char big_virus_count[4]; // offset 0x148, size 0x4
    int big_virus_flg[3][2]; // offset 0x14C, size 0x18
    @enum$165dm_manual_main_c mode; // offset 0x164, size 0x4
    @enum$165dm_manual_main_c next_mode; // offset 0x168, size 0x4
    int mode_stop_flg; // offset 0x16C, size 0x4
    int last3_flg; // offset 0x170, size 0x4
    int attack_cap_count[4]; // offset 0x174, size 0x10
    int animeCount; // offset 0x184, size 0x4
} struct_dm_manual_main_c_103;
typedef struct /* struct_dm_manual_main_c_104 */ {
    // total size: 0x6
    signed char pos_a_x; // offset 0x0, size 0x1
    signed char pos_a_y; // offset 0x1, size 0x1
    signed char capsel_a_p; // offset 0x2, size 0x1
    signed char capsel_a_flg[3]; // offset 0x3, size 0x3
} struct_dm_manual_main_c_104;
typedef union /* union_gc_c_105 */ {
    unsigned long color; // offset 0x0, size 0x4
    unsigned char argb[4]; // offset 0x0, size 0x4
} union_gc_c_105;
