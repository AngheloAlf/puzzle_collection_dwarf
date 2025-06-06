/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\calc.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x0000D610 -> 0x0000D9C8
*/
static int randomindex; // size: 0x4, address: 0x1A0C0
static int randomtable[55]; // size: 0xDC, address: 0x1A0C4
// Erased
static float tanf(float a /* f30 */) {}

// Erased
static void matrixMulF(float (* s)[4] /* r3 */, float (* d)[4] /* r1+0xC */, float (* r)[4] /* r1+0x10 */) {
    // Local variables
    int i; // r12
    int j; // r1+0x8
    float res[4][4]; // r1+0x24
}

// Erased
static void makeMatrixF(float (* m)[4] /* r30 */, float rx /* f30 */, float ry /* f31 */, float rz /* f23 */, float lx /* f24 */, float ly /* f25 */, float lz /* f26 */) {
    // Local variables
    float sx; // r1+0x8
    float sy; // r1+0x8
    float sz; // r1+0x8
    float cx; // r1+0x8
    float cy; // r1+0x8
    float cz; // r1+0x8
}

// Erased
static void angle2vct(signed short pit /* r3 */, signed short yaw /* r27 */, float * x /* r28 */, float * y /* r29 */, float * z /* r30 */) {
    // Local variables
    float sx; // r1+0x8
    float sy; // r1+0x8
    float cx; // r1+0x8
    float cy; // r1+0x8
    float rx; // r1+0x8
    float ry; // r1+0x8
}

// Erased
static void vct2angle(float x /* f29 */, float y /* f30 */, float z /* f31 */, signed short * pit /* r29 */, signed short * yaw /* r30 */) {
    // Local variables
    signed short xr; // r1+0x8
    signed short yr; // r1+0x8
}

// Erased
static float atanF(float t /* f1 */) {
    // Local variables
    float wk; // f1
    float ang; // f2
    unsigned char flag; // r7
    int i; // r6

    // References
    // -> static float tan_table[92];
    // -> static int start_tbl[101];
}

// Erased
static float get_angleF(float x /* f1 */, float y /* f2 */) {
    // Local variables
    float wk; // r1+0x8
    float ang; // f1
    unsigned long flag; // r7
    int i; // r6

    // References
    // -> static float tan_table[92];
    // -> static int start_tbl[101];
}

// Erased
static float angleS2F(signed short a /* r1+0x8 */) {
    // Local variables
    float ang; // f1
}

// Range: 0xD610 -> 0xD638
signed short angleF2S(float a /* r1+0x8 */) {}

// Erased
static void matrixL2F(float (* fm)[4] /* r1+0x8 */, long (* lm)[4] /* r1+0xC */) {}

// Erased
static void matrixF2L(long (* lm)[4] /* r1+0x8 */, float (* fm)[4] /* r1+0xC */) {}

// Erased
static void matrixF2Lloc0(long (* lm)[4] /* r1+0x8 */, float (* fm)[4] /* r1+0xC */) {}

// Erased
static void rotpoint(float a /* r1+0x8 */, float x0 /* f28 */, float y0 /* f29 */, float * x /* r30 */, float * y /* r31 */) {
    // Local variables
    float sa; // r1+0x8
    float ca; // r1+0x8
    float dx; // f4
    float dy; // r1+0x8
}

// Erased
static float defangle(float a1 /* r1+0x8 */, float a2 /* r1+0xC */) {
    // Local variables
    long angle1; // r3
    long angle2; // r5
    long angle01; // r1+0x8
    long angle02; // r6
    long d; // r1+0x8
}

// Erased
static float distance(float x1 /* r1+0x8 */, float y1 /* r1+0xC */, float z1 /* r1+0x10 */, float x2 /* r1+0x14 */, float y2 /* r1+0x18 */, float z2 /* r1+0x1C */) {
    // Local variables
    float x; // r1+0x8
    float y; // f2
    float z; // f3
}

// Erased
static float calcTableF(float x /* f1 */, float * table /* r1+0xC */) {
    // Local variables
    float res; // f1
    float min; // r1+0x8
    float max; // f2
    long n; // r4
    long h; // r1+0x8
    long l; // r4
}

// Erased
static float calcTableF_Rev(float x /* f1 */, float * table /* r1+0xC */, float s /* r1+0x10 */, float e /* r1+0x14 */) {
    // Local variables
    float res; // f1
    float old; // f7
    float min; // r1+0x8
    float max; // f6
    long h; // r6
    long l; // r7
}

// Erased
static void mtx2angleF(float (* m)[4] /* r27 */, float * rx /* r28 */, float * ry /* r29 */, float * rz /* r30 */) {
    // Local variables
    float xr; // f31
    float yr; // f30
    float zr; // f29
    float wk; // f30
}

// Erased
static void lc2wcF(float (* m)[4] /* r1+0x8 */, float lx /* r1+0xC */, float ly /* r1+0x10 */, float lz /* r1+0x14 */, float * wx /* r1+0x18 */, float * wy /* r1+0x1C */, float * wz /* r1+0x20 */) {
    // Local variables
    float r[3]; // r1+0x2C
}

// Erased
static void wc2lcF(float (* m)[4] /* r1+0x8 */, float wx /* f6 */, float wy /* f5 */, float wz /* f3 */, float * lx /* r1+0x18 */, float * ly /* r1+0x1C */, float * lz /* r1+0x20 */) {
    // Local variables
    float r[3]; // r1+0x2C
}

// Erased
static void wc2lcF0(float (* m)[4] /* r1+0x8 */, float wx /* r1+0xC */, float wy /* r1+0x10 */, float wz /* r1+0x14 */, float * lx /* r1+0x18 */, float * ly /* r1+0x1C */, float * lz /* r1+0x20 */) {
    // Local variables
    float r[3]; // r1+0x2C
}

// Erased
static void makeMatrixVctZ(float (* mf)[4] /* r30 */, float a /* f31 */, float x /* r1+0x10 */, float y /* r1+0x14 */, float z /* r1+0x18 */, float lx /* f27 */, float ly /* f28 */, float lz /* f29 */) {
    // Local variables
    float s; // r1+0x8
    float c; // r1+0x8
    float h; // r1+0x8
    float hinv; // r1+0x8
}

// Erased
static float normalVct(float * vx /* r29 */, float * vy /* r30 */, float * vz /* r31 */) {
    // Local variables
    float a; // f1
    float x; // f31
    float y; // f30
    float z; // f29
}

// Range: 0xD638 -> 0xD7B0
static void randomize00() {
    // Local variables
    int i; // r5
    int j; // r1+0x0

    // References
    // -> static int randomtable[55];
}

// Range: 0xD7B0 -> 0xD8EC
void randomseed(int s /* r3 */) {
    // Local variables
    int i; // r8
    int j; // r1+0x8
    int k; // r9

    // References
    // -> static int randomindex;
    // -> static int randomtable[55];
}

// Range: 0xD8EC -> 0xD950
int irandom() {
    // References
    // -> static int randomindex;
    // -> static int randomtable[55];
}

// Range: 0xD950 -> 0xD9C8
int random(int n /* r30 */) {
    // References
    // -> static int randomindex;
    // -> static int randomtable[55];
}


