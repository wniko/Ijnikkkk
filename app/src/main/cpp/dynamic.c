#include <jni.h>

#ifndef _Included_com_example_ijnikkkk_DynamicUtils
#define _Included_com_example_ijnikkkk_DynamicUtils
#ifdef __cplusplus
extern "C" {
#endif

jint plus(JNIEnv *env, jobject obj, jint v1, jint v2) {
    return v1 + v2;
}

static JNINativeMethod gMethods[] = {
        {"add", "(II)I", (void *) plus},
};

JNIEXPORT jint
JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv *env = NULL;
    if ((*vm)->GetEnv(vm, (void **) &env, JNI_VERSION_1_6) != JNI_OK) {
        return JNI_ERR;
    }
    jclass clazz = (*env)->FindClass(env, "com/example/ijnikkkk/DynamicUtils");
    int res = (*env)->RegisterNatives(env, clazz, gMethods, 1);
    if (res < 0) {
        return JNI_ERR;
    }
    return JNI_VERSION_1_6;
}

#ifdef __cplusplus
}
#endif
#endif