/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\file.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0005C2E8 -> 0x0005CDFC
*/
static unsigned char gacBuffer[14344]; // size: 0x3808, address: 0x4D050
static int giFileBuffer; // size: 0x4, address: 0x50858
static int gnOffsetBuffer; // size: 0x4, address: 0x5085C
static unsigned int gnFileCount; // size: 0x4, address: 0x50860
char * bin_file; // size: 0x4, address: 0x0
// Range: 0x5C2E8 -> 0x5C424
static int fileBuffer(struct_bitmap_c_65 * pFile /* r1+0x8 */, int nBytes /* r30 */) {
    // Local variables
    long nSize; // r29

    // References
    // -> static unsigned char gacBuffer[14344];
    // -> static int gnOffsetBuffer;
    // -> static int giFileBuffer;
    // -> char * bin_file;
    // -> static unsigned int gnFileCount;
}

// Range: 0x5C424 -> 0x5C590
static int fileFind(struct_bitmap_c_65 * pFile /* r29 */, char * szName /* r1+0xC */) {
    // Local variables
    int iName; // r30
    int iEntry; // r1+0x8
    int nSizeName; // r1+0x8
    unsigned int iFile; // r4
    unsigned int nSize; // r3
    unsigned int nBase; // r4
    char acName[16]; // r1+0x10

    // References
    // -> char * bin_file;
    // -> static unsigned char gacBuffer[14344];
    // -> static unsigned int gnFileCount;
}

// Range: 0x5C590 -> 0x5C5BC
int fileGetAddress(struct_bitmap_c_65 * pFile /* r1+0x0 */, int * pnROM /* r1+0x4 */) {}

// Range: 0x5C5BC -> 0x5C61C
int fileOpen(struct_bitmap_c_65 * pFile /* r31 */, char * szName /* r4 */) {}

// Range: 0x5C61C -> 0x5C624
int fileClose() {}

// Range: 0x5C624 -> 0x5C648
int fileTest(void * pFile /* r1+0x0 */) {}

// Range: 0x5C648 -> 0x5CD0C
int fileGet(struct_bitmap_c_65 * pFile /* r26 */, void * pBuffer /* r27 */, int nByteCount /* r28 */) {
    // Local variables
    void * pSource; // r3
    int nData; // r4
    int nSize; // r29

    // References
    // -> static int gnOffsetBuffer;
    // -> static unsigned char gacBuffer[14344];
}

// Range: 0x5CD0C -> 0x5CDA8
int fileSeek(struct_bitmap_c_65 * pFile /* r3 */, int nMode /* r1+0x4 */, int nOffset /* r5 */) {}

// Range: 0x5CDA8 -> 0x5CDFC
int fileSetup() {
    // References
    // -> static unsigned char gacBuffer[14344];
    // -> static unsigned int gnFileCount;
    // -> static int gnOffsetBuffer;
    // -> static int giFileBuffer;
}


