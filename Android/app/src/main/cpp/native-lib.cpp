#include <jni.h>
#include <string>
#include <set>
#include <sstream>

#include "MyFunction.h"
#include "numberGenerator.hpp"

extern "C" JNIEXPORT jstring
JNICALL
Java_heirish_android_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    return env->NewStringUTF(printHello());
}

extern "C" JNIEXPORT jstring
JNICALL
Java_heirish_android_MainActivity_giveMeNumbers(
        JNIEnv *env,
        jobject /*this*/ ) {
    const static char* DELIMITER = " ";
    std::ostringstream oss;

    std::set<int> numberSection1 = NumberGenerator::getNumbers(5, 1, 35);
    std::set<int>::iterator iter = numberSection1.begin();
    for(; iter != numberSection1.end(); iter++) {
      oss << *iter << DELIMITER;
    }

    std::set<int> numberSection2 = NumberGenerator::getNumbers(2, 1, 12);
    iter = numberSection2.begin();
    oss << *iter << DELIMITER;
    iter++;
    oss << *iter ;

    return env->NewStringUTF(oss.str().c_str());
}
