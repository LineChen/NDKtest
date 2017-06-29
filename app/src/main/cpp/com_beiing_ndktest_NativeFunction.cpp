//
// Created by Administrator on 2017/6/29.
//

#include <jni.h>
#include <string>
#include "com_beiing_ndktest_NativeFunction.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_beiing_ndktest_NativeFunction_getAppKey(JNIEnv* env, jobject /* this */) {

    std::string appkey = "appkey10086";

    return env -> NewStringUTF(appkey.c_str());
}