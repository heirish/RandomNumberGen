#include <jni.h>
#include <string>

#include "MyFunction.h"
extern "C" JNIEXPORT jstring

JNICALL
Java_heirish_android_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    //std::string hello = "Hello from C++";
    //return env->NewStringUTF(hello.c_str());
    return env->NewStringUTF(printHello());
}
