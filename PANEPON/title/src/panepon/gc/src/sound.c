/*
    Compile unit: C:\users\tsuji\title\src\panepon\gc\src\sound.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x0008EFC4 -> 0x0008F774
*/
long last_song_handle; // size: 0x4, address: 0xF46E8
unsigned short CROSSFADE_VOLUME[2]; // size: 0x4, address: 0xB6EE0
signed short last_tune_buffer; // size: 0x2, address: 0xF46EC
long last_sfx_handle; // size: 0x4, address: 0xF46F0
int g_fadetime; // size: 0x4, address: 0xB6EE4
int g_fadevol; // size: 0x4, address: 0xB6EE8
float SongRetio; // size: 0x4, address: 0xB6EEC
float SFXRetio; // size: 0x4, address: 0xB6EF0
// Erased
static void DmaRomToRam() {}

// Range: 0x8EFC4 -> 0x8EFE8
signed short LoadSong(long bgmNum /* r3 */, signed short bufferIndex /* r4 */) {}

// Range: 0x8EFE8 -> 0x8EFF0
signed short GetTuneBufferFromHandle() {}

// Range: 0x8EFF0 -> 0x8EFF8
signed short GetSafeTuneBuffer() {}

// Range: 0x8EFF8 -> 0x8F000
signed short IsTuneBufferFree() {}

// Erased
static void SetTuneBufferPointer() {}

int SFXBuf[5]; // size: 0x14, address: 0xF46F4
// Range: 0x8F000 -> 0x8F020
void * LoadSFXBank(unsigned short bankNum /* r1+0x0 */, unsigned short bankIndex /* r1+0x2 */) {
    // References
    // -> int SFXBuf[5];
}

// Erased
static void SetSFX_Bank() {}

// Erased
static signed short GetSafeSeqSFXBuffer() {}

// Erased
static signed short LoadSeqSFX() {}

// Erased
static void SetSeqSFXBank() {}

// Erased
static long PlaySeqSFX() {}

// Erased
static void FadeOutSeqSFX() {}

// Range: 0x8F020 -> 0x8F024
void InitAudio() {}

// Range: 0x8F024 -> 0x8F05C
void SetAudioSystemMixer(signed short mono_stereo /* r1+0x8 */) {}

long old_sng_id; // size: 0x4, address: 0xF4708
int SndBuf[3]; // size: 0xC, address: 0xF470C
// Range: 0x8F05C -> 0x8F13C
long PlaySong(long bufferIndex /* r1+0x8 */) {
    // References
    // -> long last_song_handle;
    // -> int g_fadetime;
    // -> int g_fadevol;
    // -> long old_sng_id;
    // -> float SongRetio;
    // -> unsigned short CROSSFADE_VOLUME[2];
    // -> int SndBuf[3];
}

// Range: 0x8F13C -> 0x8F1C8
long PlaySongParam(long bufferIndex /* r1+0x8 */, int em_volume /* r28 */, int em_pan /* r29 */, int em_tempo /* r30 */) {
    // References
    // -> long last_song_handle;
    // -> int SndBuf[3];
}

// Range: 0x8F1C8 -> 0x8F208
int CheckLastFade() {
    // References
    // -> long old_sng_id;
}

// Erased
static void StopSong() {}

// Range: 0x8F208 -> 0x8F238
void FadeOutTuneBuffer(int frames /* r1+0xC */) {
    // Local variables
    int gc_frames; // r1+0x8
}

// Range: 0x8F238 -> 0x8F260
void FadeOutSong(long song /* r3 */, long fade_time /* r1+0xC */) {
    // Local variables
    int gc_fade_time; // r1+0x8
}

// Erased
static signed short GetCurrentVoices() {}

// Erased
static signed short GetTotalSongChannels() {}

// Erased
static signed short GetTotalSFXChannels() {}

// Range: 0x8F260 -> 0x8F280
void StopAllSongs() {}

// Range: 0x8F280 -> 0x8F2B8
void FadeOutAllSongs(signed short fadeValue /* r1+0x8 */) {
    // Local variables
    int gc_fadeValue; // r1+0x8

    // References
    // -> long last_song_handle;
}

// Range: 0x8F2B8 -> 0x8F30C
void StopAllSFXs() {
    // Local variables
    unsigned long i; // r30

    // References
    // -> long last_sfx_handle;
}

// Range: 0x8F30C -> 0x8F360
void FadeOutAllSFXs() {
    // Local variables
    unsigned long i; // r30

    // References
    // -> long last_sfx_handle;
}

// Range: 0x8F360 -> 0x8F3F0
void SetMasterSongVolume(long volume /* r1+0x8 */) {
    // References
    // -> float SongRetio;
    // -> long last_song_handle;
}

// Range: 0x8F3F0 -> 0x8F440
void SetMasterSFXVolume(long volume /* r1+0x8 */) {
    // References
    // -> float SFXRetio;
}

// Range: 0x8F440 -> 0x8F4C8
void SetSongVolume(long song /* r3 */, long volume /* r1+0xC */) {
    // Local variables
    unsigned char gc_vol; // r4

    // References
    // -> float SongRetio;
}

// Range: 0x8F4C8 -> 0x8F514
void SetSongTempo(long tempo /* r1+0xC */) {
    // Local variables
    long gc_tempo; // r1+0x8
}

// Range: 0x8F514 -> 0x8F518
void SetSongPan() {}

// Range: 0x8F518 -> 0x8F52C
void SetSongCrossFadeValue(signed short fadeValue /* r1+0x0 */) {
    // References
    // -> int g_fadetime;
}

// Range: 0x8F52C -> 0x8F53C
void SetSongCrossFadeVolume(signed short fadeVolume /* r1+0x0 */) {
    // References
    // -> int g_fadevol;
}

// Range: 0x8F53C -> 0x8F5D4
void FadeSong(long song /* r3 */, signed short volumeDest /* r1+0xC */, signed short frameCount /* r1+0xE */) {
    // Local variables
    int gc_volumeDest; // r1+0x8
    int gc_frameCount; // r1+0x8

    // References
    // -> float SongRetio;
}

// Range: 0x8F5D4 -> 0x8F5D8
void FadeTuneBuffer() {}

// Erased
static long CrossFadeCallback() {}

// Range: 0x8F5D8 -> 0x8F6B4
long PlaySFX(long sfxIndex /* r29 */, long effect_vol /* r30 */, long effect_pan /* r31 */) {
    // References
    // -> long last_sfx_handle;
    // -> float SFXRetio;
}

// Erased
static void StopSFX() {}

// Erased
static void FadeOutSFX() {}

// Range: 0x8F6B4 -> 0x8F700
void SetFrequencySFX(long sfxIndex /* r3 */, float freq_offset /* r1+0xC */) {}

// Erased
static void SetNoteSFX() {}

// Erased
static void SetVolumeSFX() {}

// Range: 0x8F700 -> 0x8F724
void SetPanSFX(long sfxIndex /* r3 */, long pan /* r4 */) {
    // Local variables
    int gc_pan; // r1+0x8
}

// Erased
static long GetVolumeFromDistance() {}

// Erased
static long GetPanFromAngle() {}

// Erased
static long Start3DSFX() {}

// Erased
static signed short IsSFXDone() {}

// Erased
static signed short PlaySFX_Channel() {}

// Erased
static void SetSFX_ChannelVolume_Pan() {}

// Erased
static long GetSfxHandleFromChannel() {}

// Range: 0x8F724 -> 0x8F728
void AudioUpdate() {}

// Erased
static void ForceLoadMusicBank() {}

// Range: 0x8F728 -> 0x8F774
void ForceLoadSong(long songReference /* r3 */, signed short bufferIndex /* r31 */) {
    // Local variables
    int gc_songReference; // r1+0x8

    // References
    // -> int SndBuf[3];
}


