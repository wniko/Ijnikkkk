#include <jni.h>

#ifndef _Included_com_example_ijnikkkk_EncryptUtils
#define _Included_com_example_ijnikkkk_EncryptUtils
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jint
JNICALL Java_com_example_ijnikkkk_EncryptUtils_add(JNIEnv *env, jclass obj, jint v1, jint v2) {
    return v1 + v2;
};

JNIEXPORT jstring
JNICALL Java_com_example_ijnikkkk_EncryptUtils_sign(JNIEnv *env, jclass obj, jstring origin) {
    char data[] = "nico";
    return (*env)->NewStringUTF(env, data);
};

#ifdef __cplusplus
}
#endif
#endif
