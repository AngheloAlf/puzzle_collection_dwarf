/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\inflate.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00009E04 -> 0x0000B978
*/
static unsigned int border[19]; // size: 0x4C, address: 0x46B0
static unsigned short cplens[31]; // size: 0x3E, address: 0x46FC
static unsigned short cplext[31]; // size: 0x3E, address: 0x473C
static unsigned short cpdist[30]; // size: 0x3C, address: 0x477C
static unsigned short cpdext[30]; // size: 0x3C, address: 0x47B8
unsigned short mask_bits[17]; // size: 0x22, address: 0x47F4
int lbits; // size: 0x4, address: 0x4818
int dbits; // size: 0x4, address: 0x481C
static char gzip_mem_buff[16384]; // size: 0x4000, address: 0x14E38
static char * gzip_malloc_addr; // size: 0x4, address: 0x4820
static long gzip_malloc_tmp; // size: 0x4, address: 0x18E38
unsigned int hufts; // size: 0x4, address: 0x18E3C
struct huft {
    // total size: 0x8
    unsigned char e; // offset 0x0, size 0x1
    unsigned char b; // offset 0x1, size 0x1
    union {
        unsigned short n; // offset 0x0, size 0x2
        struct huft * t; // offset 0x0, size 0x4
    } v; // offset 0x4, size 0x4
};
// Range: 0x9E04 -> 0xA41C
int huft_build(unsigned int * b /* r3 */, unsigned int n /* r4 */, unsigned int s /* r1+0x10 */, unsigned short * d /* r1+0x14 */, unsigned short * e /* r1+0x18 */, struct huft * * t /* r8 */, int * m /* r1+0x20 */) {
    // Local variables
    unsigned int a; // r9
    unsigned int c[17]; // r1+0x534
    unsigned int f; // r24
    int g; // r12
    int h; // r31
    unsigned int i; // r16
    unsigned int j; // r15
    int k; // r30
    int l; // r29
    unsigned int * p; // r17
    struct huft * q; // r26
    struct huft r; // r1+0x52C
    struct huft * u[16]; // r1+0x4EC
    unsigned int v[288]; // r1+0x6C
    int w; // r28
    unsigned int x[17]; // r1+0x28
    unsigned int * xp; // r17
    int y; // r14
    unsigned int z; // r4

    // References
    // -> static char gzip_mem_buff[16384];
    // -> unsigned int hufts;
    // -> static char * gzip_malloc_addr;
    // -> static long gzip_malloc_tmp;
}

// Range: 0xA41C -> 0xA458
int huft_free(struct huft * t /* r3 */) {
    // Local variables
    struct huft * p; // r3
    struct huft * q; // r3

    // References
    // -> static char gzip_mem_buff[16384];
    // -> static char * gzip_malloc_addr;
    // -> static long gzip_malloc_tmp;
}

unsigned long bb; // size: 0x4, address: 0x18E40
unsigned int bk; // size: 0x4, address: 0x18E44
unsigned int outcnt; // size: 0x4, address: 0xAE28
unsigned int inptr; // size: 0x4, address: 0x8E20
unsigned int insize; // size: 0x4, address: 0x8E24
unsigned char inbuf[]; // size: 0x0, address: 0x8E28
unsigned char window[]; // size: 0x0, address: 0xAE34
// Range: 0xA458 -> 0xA8A4
int inflate_codes(struct huft * tl /* r15 */, struct huft * td /* r14 */, int bl /* r18 */, int bd /* r17 */) {
    // Local variables
    unsigned int e; // r27
    unsigned int n; // r21
    unsigned int d; // r27
    unsigned int w; // r28
    struct huft * t; // r23
    unsigned int ml; // r1+0x18
    unsigned int md; // r1+0x20
    unsigned long b; // r29
    unsigned int k; // r31

    // References
    // -> unsigned int bk;
    // -> unsigned long bb;
    // -> unsigned int outcnt;
    // -> unsigned char window[];
    // -> unsigned short mask_bits[17];
    // -> unsigned int inptr;
    // -> unsigned char inbuf[];
    // -> unsigned int insize;
}

// Range: 0xA8A4 -> 0xAA98
int inflate_stored() {
    // Local variables
    unsigned int n; // r6
    unsigned int w; // r26
    unsigned long b; // r25
    unsigned int k; // r24

    // References
    // -> unsigned int bk;
    // -> unsigned long bb;
    // -> unsigned int outcnt;
    // -> unsigned char window[];
    // -> unsigned int inptr;
    // -> unsigned char inbuf[];
    // -> unsigned int insize;
}

// Range: 0xAA98 -> 0xAEF4
int inflate_fixed() {
    // Local variables
    int i; // r6
    struct huft * tl; // r1+0x4AC
    struct huft * td; // r1+0x4A8
    int bl; // r1+0x4A4
    int bd; // r1+0x4A0
    unsigned int l[288]; // r1+0x20

    // References
    // -> static char gzip_mem_buff[16384];
    // -> static char * gzip_malloc_addr;
    // -> static long gzip_malloc_tmp;
    // -> static unsigned short cpdext[30];
    // -> static unsigned short cpdist[30];
    // -> static unsigned short cplext[31];
    // -> static unsigned short cplens[31];
}

// Range: 0xAEF4 -> 0xB75C
int inflate_dynamic() {
    // Local variables
    int i; // r3
    unsigned int j; // r26
    unsigned int l; // r22
    unsigned int m; // r20
    unsigned int n; // r21
    struct huft * tl; // r1+0x528
    struct huft * td; // r1+0x524
    int bl; // r1+0x520
    int bd; // r1+0x51C
    unsigned int nb; // r27
    unsigned int nl; // r19
    unsigned int nd; // r18
    unsigned int ll[320]; // r1+0x1C
    unsigned long b; // r30
    unsigned int k; // r31

    // References
    // -> static char gzip_mem_buff[16384];
    // -> static char * gzip_malloc_addr;
    // -> static long gzip_malloc_tmp;
    // -> static unsigned short cpdext[30];
    // -> static unsigned short cpdist[30];
    // -> int dbits;
    // -> static unsigned short cplext[31];
    // -> static unsigned short cplens[31];
    // -> int lbits;
    // -> unsigned int bk;
    // -> unsigned long bb;
    // -> unsigned int inptr;
    // -> unsigned char inbuf[];
    // -> unsigned int insize;
    // -> unsigned short mask_bits[17];
    // -> static unsigned int border[19];
}

// Range: 0xB75C -> 0xB8AC
int inflate_block(int * e /* r28 */) {
    // Local variables
    unsigned int t; // r3
    unsigned long b; // r30
    unsigned int k; // r29

    // References
    // -> unsigned int bk;
    // -> unsigned long bb;
    // -> unsigned int inptr;
    // -> unsigned char inbuf[];
    // -> unsigned int insize;
}

// Range: 0xB8AC -> 0xB978
int inflate() {
    // Local variables
    int e; // r1+0x8
    int r; // r3
    unsigned int h; // r29

    // References
    // -> unsigned int bk;
    // -> unsigned int inptr;
    // -> static char gzip_mem_buff[16384];
    // -> unsigned int hufts;
    // -> static char * gzip_malloc_addr;
    // -> static long gzip_malloc_tmp;
    // -> unsigned long bb;
    // -> unsigned int outcnt;
}


