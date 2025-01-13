/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\joy.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00021E08 -> 0x00022314
*/
unsigned short joynew[5]; // size: 0xA, address: 0x1CD88
unsigned short joyold[5]; // size: 0xA, address: 0x1CD94
unsigned short joyupd[5]; // size: 0xA, address: 0x1CDA0
unsigned short joycur[5]; // size: 0xA, address: 0x1CDAC
unsigned short joycnt[4][16]; // size: 0x80, address: 0x1CDB8
unsigned short joyflg[4]; // size: 0x8, address: 0x1CE38
unsigned short joygam[4]; // size: 0x8, address: 0x1CE40
unsigned char joygmf[4]; // size: 0x4, address: 0x1CE48
unsigned short joycur1; // size: 0x2, address: 0x1CE4C
unsigned short joycur2; // size: 0x2, address: 0x1CE4E
// Range: 0x21E08 -> 0x21F78
int joyInit() {
    // Local variables
    int i; // r9
    int j; // r1+0x8

    // References
    // -> unsigned short joycur2;
    // -> unsigned short joycur1;
    // -> unsigned char joygmf[4];
    // -> unsigned short joygam[4];
    // -> unsigned short joyflg[4];
    // -> unsigned short joycnt[4][16];
    // -> unsigned short joycur[5];
    // -> unsigned short joyupd[5];
    // -> unsigned short joyold[5];
    // -> unsigned short joynew[5];
}

struct {
    // total size: 0x6
    unsigned short button; // offset 0x0, size 0x2
    signed char stick_x; // offset 0x2, size 0x1
    signed char stick_y; // offset 0x3, size 0x1
    unsigned char errno; // offset 0x4, size 0x1
} joypad[4]; // size: 0x18, address: 0x1CE50
struct st_ContData {
    // total size: 0x8
    unsigned short button; // offset 0x0, size 0x2
    signed char stick_x; // offset 0x2, size 0x1
    signed char stick_y; // offset 0x3, size 0x1
    unsigned char errno; // offset 0x4, size 0x1
    unsigned short trigger; // offset 0x6, size 0x2
};
// Range: 0x21F78 -> 0x2219C
int joyProcCore() {
    // Local variables
    int i; // r11
    int j; // r12
    int f; // r1+0x8
    struct st_ContData contdata[4]; // r1+0x10

    // References
    // -> unsigned short joycur2;
    // -> unsigned short joycur1;
    // -> unsigned short joyflg[4];
    // -> unsigned short joycnt[4][16];
    // -> unsigned short joycur[5];
    // -> unsigned short joyupd[5];
    // -> unsigned short joyold[5];
    // -> unsigned short joynew[5];
    // -> struct [anonymous] joypad[4];
}

// Range: 0x2219C -> 0x22260
void joyCursorFastSet(unsigned short button /* r1+0x0 */, unsigned char index /* r1+0x2 */) {
    // Local variables
    int i; // r7
    int j; // r3

    // References
    // -> unsigned short joycur2;
    // -> unsigned short joycur1;
    // -> unsigned short joycnt[4][16];
}

unsigned char main_joy[4]; // size: 0x4, address: 0x1CE68
unsigned char link_joy[4]; // size: 0x4, address: 0x1CE6C
// Range: 0x22260 -> 0x22314
int joyResponseCheck() {
    // Local variables
    struct {
        // total size: 0x4
        unsigned short type; // offset 0x0, size 0x2
        unsigned char status; // offset 0x2, size 0x1
        unsigned char errno; // offset 0x3, size 0x1
    } joyStatus[4]; // r1+0xC
    int max_cont; // r30
    signed char i; // r8
    signed char j; // r1+0x8

    // References
    // -> unsigned char link_joy[4];
    // -> unsigned char main_joy[4];
}

int joynum; // size: 0x4, address: 0x1CE70

