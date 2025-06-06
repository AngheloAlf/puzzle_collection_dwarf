
/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\drmario_gc.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00000000 -> 0x00000434
*/
int subproc_nuGfxFunc_cnt; // size: 0x4, address: 0x0
void (* subproc_nuGfxFunc)(); // size: 0x4, address: 0x4
unsigned long framecont; // size: 0x4, address: 0x8
unsigned char * eeprom_bufferp; // size: 0x4, address: 0xC
unsigned char * Gzip_bufferp; // size: 0x4, address: 0x10
unsigned char * Heap_bufferp; // size: 0x4, address: 0x18
// Range: 0x0 -> 0x2A8
int main() {
    // Local variables
    int i; // r1+0x8
    char * p; // r4

    // References
    // -> unsigned char * eeprom_bufferp;
    // -> unsigned char * Gzip_bufferp;
    // -> unsigned char * Heap_bufferp;
}

// Range: 0x2A8 -> 0x300
void drMarioRetrace(int gfxTaskNum /* r1+0x8 */) {
    // References
    // -> void (* subproc_nuGfxFunc)();
    // -> int subproc_nuGfxFunc_cnt;
    // -> unsigned long framecont;
}

// Range: 0x300 -> 0x320
int memoryCard_bootCheck_init() {}

union_drmario_gc_c_202 * gp; // size: 0x4, address: 0x1E9A4
union_drmario_gc_c_202 gfx_glist[3][9216]; // size: 0x36000, address: 0x1E9A8
unsigned long gfx_gtask_no; // size: 0x4, address: 0x1E9A0
unsigned short joyupd[5]; // size: 0xA, address: 0x1CDA0
unsigned char main_joy[4]; // size: 0x4, address: 0x1CE68
// Range: 0x320 -> 0x434
int memoryCard_bootCheck() {
    // Local variables
    int ret; // r3
    union_drmario_gc_c_202 * _g; // r1+0x8
    union_drmario_gc_c_202 * _g; // r1+0x8

    // References
    // -> union [anonymous] * gp;
    // -> unsigned long gfx_gtask_no;
    // -> union [anonymous] gfx_glist[3][9216];
    // -> unsigned char main_joy[4];
    // -> unsigned short joyupd[5];
}

// Erased
static void DVDDrive_DispError() {}


