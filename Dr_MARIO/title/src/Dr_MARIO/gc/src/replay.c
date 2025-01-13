/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\replay.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x0005B184 -> 0x0005B6A8
*/
static unsigned char * rec_buff; // size: 0x4, address: 0x2083B0
static unsigned char * pRecBuff[4]; // size: 0x10, address: 0x2083B4
static unsigned short oldCont[4]; // size: 0x8, address: 0x2083C4
static int RecPos[4]; // size: 0x10, address: 0x2083CC
static int PlayPos[4]; // size: 0x10, address: 0x2083DC
static int WaitTime[4]; // size: 0x10, address: 0x2083EC
static int max_rec; // size: 0x4, address: 0x2083FC
static int replay_player; // size: 0x4, address: 0x208400
// Range: 0x5B184 -> 0x5B1A0
void replay_record_init_buffer(void * heap /* r1+0x0 */) {
    // References
    // -> static unsigned char * rec_buff;
}

// Range: 0x5B1A0 -> 0x5B2BC
void replay_record_init(int player /* r1+0x0 */) {
    // References
    // -> static unsigned char * rec_buff;
    // -> static int max_rec;
    // -> static unsigned char * pRecBuff[4];
    // -> static unsigned short oldCont[4];
    // -> static int PlayPos[4];
    // -> static int WaitTime[4];
    // -> static int RecPos[4];
    // -> static int replay_player;
}

// Range: 0x5B2BC -> 0x5B434
int replay_record(int player /* r1+0x0 */, unsigned short pad /* r12 */) {
    // Local variables
    unsigned char data; // r10
    unsigned char * pRec; // r7
    unsigned char flg; // r11

    // References
    // -> static int WaitTime[4];
    // -> static int max_rec;
    // -> static unsigned short oldCont[4];
    // -> static int RecPos[4];
    // -> static unsigned char * pRecBuff[4];
}

// Range: 0x5B434 -> 0x5B5A0
void replay_play_init() {
    // Local variables
    int i; // r3

    // References
    // -> static int replay_player;
    // -> static unsigned short oldCont[4];
    // -> static int PlayPos[4];
    // -> static int WaitTime[4];
    // -> static unsigned char * pRecBuff[4];
}

// Range: 0x5B5A0 -> 0x5B6A8
unsigned short replay_play(int player /* r1+0x0 */) {
    // Local variables
    unsigned char data; // r9
    unsigned char * pRec; // r10
    unsigned char flg; // r7
    unsigned short cont; // r6

    // References
    // -> static unsigned short oldCont[4];
    // -> static int PlayPos[4];
    // -> static int WaitTime[4];
    // -> static unsigned char * pRecBuff[4];
}


