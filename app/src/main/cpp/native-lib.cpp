#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_ijnikkkk_MainActivity_stringFromJNI(JNIEnv *env, jobject) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_ijnikkkk_EncryptUtils_sign(JNIEnv *env, jclass clazz, jstring origin) {
    const char *originStr = env->GetStringUTFChars(origin, nullptr);
    if (originStr == nullptr) {
        return nullptr;
    }
    const char *signature = "_signature";
    char *resultStr = strcat((char *) originStr, signature);
    env->ReleaseStringUTFChars(origin, originStr);
    jstring result = env->NewStringUTF(resultStr);
    delete[] resultStr;

    return result;
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_example_ijnikkkk_EncryptUtils_add(JNIEnv *env, jclass clazz, jint vl, jint v2) {
    jint result = vl + v2;
    return result;
}