/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class uk_co_progger_alienFXLite_led_LEDController */

#ifndef _Included_uk_co_progger_alienFXLite_led_LEDController
#define _Included_uk_co_progger_alienFXLite_led_LEDController
#ifdef __cplusplus
extern "C" {
#endif
#undef uk_co_progger_alienFXLite_led_LEDController_ALLPOWERFULL_ALIENFX
#define uk_co_progger_alienFXLite_led_LEDController_ALLPOWERFULL_ALIENFX 1L
#undef uk_co_progger_alienFXLite_led_LEDController_AREA51_ALIENFX
#define uk_co_progger_alienFXLite_led_LEDController_AREA51_ALIENFX 2L
#undef uk_co_progger_alienFXLite_led_LEDController_NOT_FOUND
#define uk_co_progger_alienFXLite_led_LEDController_NOT_FOUND 0L
/*
 * Class:     uk_co_progger_alienFXLite_led_LEDController
 * Method:    initialize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_co_progger_alienFXLite_led_LEDController_initialize
  (JNIEnv *, jclass);

/*
 * Class:     uk_co_progger_alienFXLite_led_LEDController
 * Method:    write
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_uk_co_progger_alienFXLite_led_LEDController_write
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     uk_co_progger_alienFXLite_led_LEDController
 * Method:    read
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_uk_co_progger_alienFXLite_led_LEDController_read
  (JNIEnv *, jclass);

/*
 * Class:     uk_co_progger_alienFXLite_led_LEDController
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_uk_co_progger_alienFXLite_led_LEDController_destroy
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
