/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class redlaboratory_jvjoyinterface_VJoy */

#ifndef _Included_redlaboratory_jvjoyinterface_VJoy
#define _Included_redlaboratory_jvjoyinterface_VJoy
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    getvJoyVersion
 * Signature: ()S
 */
JNIEXPORT jshort JNICALL Java_redlaboratory_jvjoyinterface_VJoy_getvJoyVersion
  (JNIEnv *, jobject);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    vJoyEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_redlaboratory_jvjoyinterface_VJoy_vJoyEnabled
  (JNIEnv *, jobject);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    getvJoyProductString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_redlaboratory_jvjoyinterface_VJoy_getvJoyProductString
  (JNIEnv *, jobject);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    getvJoyManufacturerString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_redlaboratory_jvjoyinterface_VJoy_getvJoyManufacturerString
  (JNIEnv *, jobject);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    getvJoySerialNumberString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_redlaboratory_jvjoyinterface_VJoy_getvJoySerialNumberString
  (JNIEnv *, jobject);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    driverMatch
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_redlaboratory_jvjoyinterface_VJoy_driverMatch
  (JNIEnv *, jobject);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    registerRemovalCB
 * Signature: (Lredlaboratory/jvjoyinterface/RemovalCB;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_redlaboratory_jvjoyinterface_VJoy_registerRemovalCB
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    vJoyFfbCap
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_redlaboratory_jvjoyinterface_VJoy_vJoyFfbCap
  (JNIEnv *, jobject);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    getvJoyMaxDevices
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_redlaboratory_jvjoyinterface_VJoy_getvJoyMaxDevices
  (JNIEnv *, jobject);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    getNumberExistingVJD
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_redlaboratory_jvjoyinterface_VJoy_getNumberExistingVJD
  (JNIEnv *, jobject);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    getVJDButtonNumber
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_redlaboratory_jvjoyinterface_VJoy_getVJDButtonNumber
  (JNIEnv *, jobject, jint);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    getVJDDiscPovNumber
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_redlaboratory_jvjoyinterface_VJoy_getVJDDiscPovNumber
  (JNIEnv *, jobject, jint);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    getVJDContPovNumber
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_redlaboratory_jvjoyinterface_VJoy_getVJDContPovNumber
  (JNIEnv *, jobject, jint);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    getVJDAxisExist
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_redlaboratory_jvjoyinterface_VJoy_getVJDAxisExist
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    getVJDAxisMax
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_redlaboratory_jvjoyinterface_VJoy_getVJDAxisMax
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    getVJDAxisMin
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_redlaboratory_jvjoyinterface_VJoy_getVJDAxisMin
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    getVJDStatus
 * Signature: (I)Lredlaboratory/jvjoyinterface/VjdStat;
 */
JNIEXPORT jobject JNICALL Java_redlaboratory_jvjoyinterface_VJoy_getVJDStatus
  (JNIEnv *, jobject, jint);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    isVJDExists
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_redlaboratory_jvjoyinterface_VJoy_isVJDExists
  (JNIEnv *, jobject, jint);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    getOwnerPid
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_redlaboratory_jvjoyinterface_VJoy_getOwnerPid
  (JNIEnv *, jobject, jint);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    acquireVJD
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_redlaboratory_jvjoyinterface_VJoy_acquireVJD
  (JNIEnv *, jobject, jint);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    relinquishVJD
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_redlaboratory_jvjoyinterface_VJoy_relinquishVJD
  (JNIEnv *, jobject, jint);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    updateVJD
 * Signature: (ILredlaboratory/jvjoyinterface/JoystickState;)Z
 */
JNIEXPORT jboolean JNICALL Java_redlaboratory_jvjoyinterface_VJoy_updateVJD
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    resetVJD
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_redlaboratory_jvjoyinterface_VJoy_resetVJD
  (JNIEnv *, jobject, jint);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    resetAll
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_redlaboratory_jvjoyinterface_VJoy_resetAll
  (JNIEnv *, jobject);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    resetButtons
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_redlaboratory_jvjoyinterface_VJoy_resetButtons
  (JNIEnv *, jobject, jint);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    resetPovs
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_redlaboratory_jvjoyinterface_VJoy_resetPovs
  (JNIEnv *, jobject, jint);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    setAxis
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_redlaboratory_jvjoyinterface_VJoy_setAxis
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    setBtn
 * Signature: (ZII)Z
 */
JNIEXPORT jboolean JNICALL Java_redlaboratory_jvjoyinterface_VJoy_setBtn
  (JNIEnv *, jobject, jboolean, jint, jint);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    setDiscPov
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_redlaboratory_jvjoyinterface_VJoy_setDiscPov
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     redlaboratory_jvjoyinterface_VJoy
 * Method:    setContPov
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_redlaboratory_jvjoyinterface_VJoy_setContPov
  (JNIEnv *, jobject, jlong, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
