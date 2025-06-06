/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\calcsub.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0000B978 -> 0x0000C510
*/
// Erased
static long mulS32S32(long a /* r27 */, long b /* r25 */, long shift /* r22 */) {
    // Local variables
    long long c; // r24
}

// Erased
static int waitEQ4(int * var /* r1+0x0 */, int data /* r1+0x4 */) {}

// Erased
static long sqrtS(unsigned long v /* r1+0x8 */) {
    // References
    // -> static int __float_huge[];
    // -> static int __float_nan[];
}

// Erased
static long sqrtL() {}

// Erased
static long get_angle(long x /* r1+0x0 */, long y /* r1+0x4 */) {
    // Local variables
    long nAngle; // r1+0x0
}

signed short sintable[1026]; // size: 0x804, address: 0x198
// Erased
static long sinL(signed short angle /* r1+0x0 */) {
    // References
    // -> signed short sintable[1026];
}

// Erased
static long cosL(signed short angle /* r1+0x0 */) {
    // References
    // -> signed short sintable[1026];
}

// Erased
static void lc2wc() {}

// Erased
static void wc2lc() {}

// Range: 0xB978 -> 0xBF18
void matrixMulL(long (* m)[4] /* r14 */, long (* n)[4] /* r1+0x80 */, long (* r)[4] /* r1+0x10 */) {
    // Local variables
    int i; // r1+0x84
    int j; // r18
}

// Range: 0xBF18 -> 0xBF68
void makeTransrateMatrix(long (* m)[4] /* r1+0x0 */, long xofs /* r1+0x4 */, long yofs /* r1+0x8 */, long zofs /* r1+0xC */) {}

// Range: 0xBF68 -> 0xBFB8
void makeScaleMatrix(long (* m)[4] /* r1+0x0 */, long scale /* r1+0x4 */) {}

// Range: 0xBFB8 -> 0xC1D8
void makeMatrix(long (* m)[4] /* r1+0x0 */, signed short xrot /* r1+0x4 */, signed short yrot /* r1+0x6 */, signed short zrot /* r1+0x8 */, long xofs /* r1+0xC */, long yofs /* r1+0x10 */, long zofs /* r1+0x14 */) {
    // Local variables
    long tmp; // r10

    // References
    // -> signed short sintable[1026];
}

// Erased
static void makeXrotMatrix() {}

// Erased
static void makeYrotMatrix() {}

// Erased
static void makeZrotMatrix() {}

// Erased
static void makeXZMatrix() {}

// Range: 0xC1D8 -> 0xC510
void matrixConv(long (* m)[4] /* r1+0x8 */, union_main_story_c_778 * mtx /* r1+0xC */, long shift /* r10 */) {
    // Local variables
    long tmpMtx[4][4]; // r1+0x34
    int i; // r1+0x8
    unsigned long * pMtxOut; // r1+0x8
    unsigned long * pMtxIn; // r1+0x8
    unsigned long nTmp; // r1+0x8
}

// Erased
static void matrixCopyL() {}

// Erased
static void rotpointL() {}

// Erased
static long defangleL() {}

// Erased
static long distanceS() {}

// Erased
static long distanceL() {}

// Erased
static long sqrt_a2b2() {}

// Erased
static long sqrt_abc() {}

// Erased
static long muldiv() {}

// Erased
static void makeVect() {}


