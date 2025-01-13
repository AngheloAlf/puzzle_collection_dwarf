/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\calc.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x0000D610 -> 0x0000D9C8
*/
static int randomindex; // size: 0x4, address: 0x1A0C0
static int randomtable[55]; // size: 0xDC, address: 0x1A0C4
// Range: 0xD610 -> 0xD638
signed short angleF2S(float a /* r1+0x8 */) {}

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


