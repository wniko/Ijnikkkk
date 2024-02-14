#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_ijnikkkk_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_ijnikkkk_EncryptUtils_sign(JNIEnv *env, jclass clazz, jstring origin) {
    // 将 jstring 转换为 C 字符串
    const char *originStr = env->GetStringUTFChars(origin, nullptr);
    if (originStr == nullptr) {
        // 处理转换失败的情况
        return nullptr;
    }
    // 在这里添加实际的签名算法，这里使用一个简单的示例：在原始字符串后面添加"_signature"
    const char *signature = "_signature";
    char *resultStr = strcat((char *) originStr, signature);
    // 释放之前获取的字符串
    env->ReleaseStringUTFChars(origin, originStr);
    // 创建一个新的 jstring 并返回
    jstring result = env->NewStringUTF(resultStr);

    // 释放 resultStr
    delete[] resultStr;

    return result;
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_example_ijnikkkk_EncryptUtils_add(JNIEnv *env, jclass clazz, jint vl, jint v2) {
    jint result = vl + v2;
    return result;
}