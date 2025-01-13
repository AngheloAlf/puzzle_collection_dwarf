/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\unzip.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0000999C -> 0x00009DBC
*/
union_drmario_gc_c_0 gzip_dummy_dl[1]; // size: 0x8, address: 0x42A0
static unsigned long crc_32_tab[256]; // size: 0x400, address: 0x42A8
struct_unzip_c_11 ifd; // size: 0x8, address: 0x8E10
struct_unzip_c_11 ofd; // size: 0x8, address: 0x8E18
// Range: 0x999C -> 0x99E8
unsigned long expand_gzip(char * src_addr /* r1+0x8 */, char * dst_addr /* r1+0xC */, unsigned long size /* r1+0x10 */) {
    // References
    // -> struct [anonymous] ofd;
    // -> struct [anonymous] ifd;
}

// Range: 0x99E8 -> 0x9AA8
unsigned long data_write(struct_unzip_c_11 * outfile /* r1+0x0 */, unsigned char * src_addr /* r1+0x4 */, unsigned int size /* r5 */) {
    // Local variables
    unsigned long i; // r7
    unsigned char * dst_addr; // r8
}

unsigned int inptr; // size: 0x4, address: 0x8E20
unsigned int insize; // size: 0x4, address: 0x8E24
unsigned char inbuf[8192]; // size: 0x2000, address: 0x8E28
// Range: 0x9AA8 -> 0x9B60
int unzip() {
    // Local variables
    int res; // r1+0x8
    int n; // r29
    unsigned char buf[32]; // r1+0x8

    // References
    // -> unsigned int inptr;
    // -> unsigned char inbuf[8192];
    // -> unsigned int insize;
}

static unsigned long crc$132; // size: 0x4, address: 0x46A8
// Range: 0x9B60 -> 0x9BBC
unsigned long updcrc(unsigned char * s /* r3 */, unsigned int n /* r4 */) {
    // Local variables
    unsigned long c; // r5

    // References
    // -> static unsigned long crc$132;
    // -> static unsigned long crc_32_tab[256];
}

unsigned int outcnt; // size: 0x4, address: 0xAE28
long bytes_in; // size: 0x4, address: 0xAE2C
long bytes_out; // size: 0x4, address: 0xAE30
// Range: 0x9BBC -> 0x9BE0
void clear_bufs() {
    // References
    // -> long bytes_out;
    // -> long bytes_in;
    // -> unsigned int inptr;
    // -> unsigned int insize;
    // -> unsigned int outcnt;
}

// Range: 0x9BE0 -> 0x9CDC
int fill_inbuf(int eof_ok /* r29 */) {
    // Local variables
    int len; // r1+0x8

    // References
    // -> unsigned char inbuf[8192];
    // -> unsigned int inptr;
    // -> struct [anonymous] ifd;
    // -> long bytes_in;
    // -> unsigned int insize;
}

unsigned char window[32768]; // size: 0x8000, address: 0xAE34
// Range: 0x9CDC -> 0x9DBC
void flush_window() {
    // References
    // -> unsigned int outcnt;
    // -> struct [anonymous] ifd;
    // -> long bytes_out;
    // -> struct [anonymous] ofd;
    // -> unsigned char window[32768];
    // -> static unsigned long crc$132;
    // -> static unsigned long crc_32_tab[256];
}

unsigned char outbuf[8192]; // size: 0x2000, address: 0x12E34

