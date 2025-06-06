/*
    Compile unit: C:\users\tsuji\title\src\Dr_MARIO\gc\src\sound.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00022314 -> 0x00022A38
*/
static unsigned int sound_song_id[2]; // size: 0x8, address: 0x1CE78
static int sound_song_seqNo[2]; // size: 0x8, address: 0x1CE80
static int sound_song_frame[2]; // size: 0x8, address: 0x1CE88
unsigned char _charSE_tbl[15]; // size: 0xF, address: 0x10F0
// Range: 0x22314 -> 0x2234C
void dm_audio_set_stereo(int stereo /* r1+0x8 */) {}

// Range: 0x2234C -> 0x2236C
void dm_audio_init_driver() {
    // References
    // -> static int sound_song_seqNo[2];
    // -> static unsigned int sound_song_id[2];
}

// Range: 0x2236C -> 0x22408
void dm_audio_update() {
    // Local variables
    int i; // r28

    // References
    // -> static unsigned int sound_song_id[2];
    // -> static int sound_song_seqNo[2];
}

// Range: 0x22408 -> 0x22428
void dm_audio_stop() {}

// Range: 0x22428 -> 0x22448
int dm_audio_is_stopped() {}

// Range: 0x22448 -> 0x22470
void dm_seq_play(int seqNo /* r3 */) {}

// Range: 0x22470 -> 0x22494
void _dm_seq_play(int bufNo /* r3 */, int seqNo /* r4 */) {}

// Range: 0x22494 -> 0x224C0
void dm_seq_play_fade(int seqNo /* r3 */, int fade /* r5 */) {}

// Range: 0x224C0 -> 0x22544
void _dm_seq_play_fade(int bufNo /* r1+0x8 */, int seqNo /* r27 */, int fade /* r1+0x10 */) {
    // References
    // -> static int sound_song_frame[2];
    // -> static unsigned int sound_song_id[2];
    // -> static int sound_song_seqNo[2];
}

// Range: 0x22544 -> 0x2256C
void dm_seq_play_in_game(int seqNo /* r3 */) {}

unsigned char evs_seqence; // size: 0x1, address: 0x4879
// Range: 0x2256C -> 0x2264C
void _dm_seq_play_in_game(int bufNo /* r3 */, int seqNo /* r28 */) {
    // References
    // -> static int sound_song_frame[2];
    // -> static unsigned int sound_song_id[2];
    // -> static int sound_song_seqNo[2];
    // -> unsigned char evs_seqence;
}

// Range: 0x2264C -> 0x22670
void dm_seq_stop() {}

// Range: 0x22670 -> 0x226C0
void _dm_seq_stop(int bufNo /* r1+0x8 */) {
    // References
    // -> static unsigned int sound_song_id[2];
}

// Range: 0x226C0 -> 0x226E8
void dm_seq_set_volume(int vol /* r3 */) {}

// Range: 0x226E8 -> 0x2273C
void _dm_seq_set_volume(int bufNo /* r1+0x8 */, int vol /* r4 */) {
    // References
    // -> static unsigned int sound_song_id[2];
}

// Erased
static int dm_seq_is_stopped() {}

// Range: 0x2273C -> 0x22788
int _dm_seq_is_stopped(int bufNo /* r1+0x8 */) {
    // References
    // -> static unsigned int sound_song_id[2];
}

static int dm_snd_play_buf$194[4]; // size: 0x10, address: 0x1CE90
static int bak_subproc_nuGfxFunc_cnt$195; // size: 0x4, address: 0x50A8
static int dm_snd_play_idx$196; // size: 0x4, address: 0x1CEA0
int subproc_nuGfxFunc_cnt; // size: 0x4, address: 0x0
// Range: 0x22788 -> 0x2282C
void dm_snd_play(int sndNo /* r3 */) {
    // Local variables
    int i; // r1+0x8

    // References
    // -> static int dm_snd_play_idx$196;
    // -> static int dm_snd_play_buf$194[4];
    // -> static int bak_subproc_nuGfxFunc_cnt$195;
    // -> int subproc_nuGfxFunc_cnt;
}

unsigned char evs_gamespeed; // size: 0x1, address: 0x487E
// Range: 0x2282C -> 0x228E0
void dm_snd_play_in_game(int sndNo /* r3 */) {
    // References
    // -> static int dm_snd_play_idx$196;
    // -> static int dm_snd_play_buf$194[4];
    // -> static int bak_subproc_nuGfxFunc_cnt$195;
    // -> int subproc_nuGfxFunc_cnt;
    // -> unsigned char evs_gamespeed;
}

// Range: 0x228E0 -> 0x22A38
void dm_snd_play_strange_sound() {
    // Local variables
    int snd[4]; // r1+0x8
    int i; // r27
    int j; // r1+0x8

    // References
    // -> static int dm_snd_play_idx$196;
    // -> static int dm_snd_play_buf$194[4];
    // -> static int bak_subproc_nuGfxFunc_cnt$195;
    // -> int subproc_nuGfxFunc_cnt;
    // -> unsigned char _charSE_tbl[15];
}


