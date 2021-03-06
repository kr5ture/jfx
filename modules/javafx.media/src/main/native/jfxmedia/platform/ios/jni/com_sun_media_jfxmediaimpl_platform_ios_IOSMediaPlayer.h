/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer */

#ifndef _Included_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
#define _Included_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
#ifdef __cplusplus
extern "C" {
#endif
#undef com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_eventPlayerUnknown
#define com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_eventPlayerUnknown 100L
#undef com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_eventPlayerReady
#define com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_eventPlayerReady 101L
#undef com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_eventPlayerPlaying
#define com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_eventPlayerPlaying 102L
#undef com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_eventPlayerPaused
#define com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_eventPlayerPaused 103L
#undef com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_eventPlayerStopped
#define com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_eventPlayerStopped 104L
#undef com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_eventPlayerStalled
#define com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_eventPlayerStalled 105L
#undef com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_eventPlayerFinished
#define com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_eventPlayerFinished 106L
#undef com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_eventPlayerError
#define com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_eventPlayerError 107L
#undef com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_NOMINAL_VIDEO_FPS
#define com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_NOMINAL_VIDEO_FPS 30L
#undef com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_ONE_SECOND
#define com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_ONE_SECOND 1000000000LL
    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosInitPlayer
     * Signature: (J)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosInitPlayer
    (JNIEnv *, jobject, jlong);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosGetAudioSyncDelay
     * Signature: (J[J)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosGetAudioSyncDelay
    (JNIEnv *, jobject, jlong, jlongArray);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosSetAudioSyncDelay
     * Signature: (JJ)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosSetAudioSyncDelay
    (JNIEnv *, jobject, jlong, jlong);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosPlay
     * Signature: (J)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosPlay
    (JNIEnv *, jobject, jlong);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosPause
     * Signature: (J)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosPause
    (JNIEnv *, jobject, jlong);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosStop
     * Signature: (J)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosStop
    (JNIEnv *, jobject, jlong);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosGetRate
     * Signature: (J[F)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosGetRate
    (JNIEnv *, jobject, jlong, jfloatArray);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosSetRate
     * Signature: (JF)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosSetRate
    (JNIEnv *, jobject, jlong, jfloat);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosGetPresentationTime
     * Signature: (J[D)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosGetPresentationTime
    (JNIEnv *, jobject, jlong, jdoubleArray);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosGetVolume
     * Signature: (J[F)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosGetVolume
    (JNIEnv *, jobject, jlong, jfloatArray);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosSetVolume
     * Signature: (JF)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosSetVolume
    (JNIEnv *, jobject, jlong, jfloat);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosGetBalance
     * Signature: (J[F)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosGetBalance
    (JNIEnv *, jobject, jlong, jfloatArray);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosSetBalance
     * Signature: (JF)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosSetBalance
    (JNIEnv *, jobject, jlong, jfloat);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosGetDuration
     * Signature: (J[D)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosGetDuration
    (JNIEnv *, jobject, jlong, jdoubleArray);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosSeek
     * Signature: (JD)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosSeek
    (JNIEnv *, jobject, jlong, jdouble);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosDispose
     * Signature: (J)V
     */
    JNIEXPORT void JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosDispose
    (JNIEnv *, jobject, jlong);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosFinish
     * Signature: (J)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosFinish
    (JNIEnv *, jobject, jlong);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosSetOverlayX
     * Signature: (JD)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosSetOverlayX
    (JNIEnv *, jobject, jlong, jdouble);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosSetOverlayY
     * Signature: (JD)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosSetOverlayY
    (JNIEnv *, jobject, jlong, jdouble);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosSetOverlayVisible
     * Signature: (JZ)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosSetOverlayVisible
    (JNIEnv *, jobject, jlong, jboolean);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosSetOverlayWidth
     * Signature: (JD)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosSetOverlayWidth
    (JNIEnv *, jobject, jlong, jdouble);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosSetOverlayHeight
     * Signature: (JD)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosSetOverlayHeight
    (JNIEnv *, jobject, jlong, jdouble);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosSetOverlayPreserveRatio
     * Signature: (JZ)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosSetOverlayPreserveRatio
    (JNIEnv *, jobject, jlong, jboolean);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosSetOverlayOpacity
     * Signature: (JD)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosSetOverlayOpacity
    (JNIEnv *, jobject, jlong, jdouble);

    /*
     * Class:     com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer
     * Method:    iosSetOverlayTransform
     * Signature: (JDDDDDDDDDDDD)I
     */
    JNIEXPORT jint JNICALL Java_com_sun_media_jfxmediaimpl_platform_ios_IOSMediaPlayer_iosSetOverlayTransform
    (JNIEnv *, jobject, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

#ifdef __cplusplus
}
#endif
#endif
