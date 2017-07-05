//
// Created by Administrator on 2017/6/29.
//

#include <jni.h>
#include <string>
#include <android/log.h>
#include "com_beiing_ndktest_NativeFunction.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_beiing_ndktest_NativeFunction_getAppKey(JNIEnv* env, jobject, jclass clazz /* this */) {

    std::string appkey = "appkey10086";

    return env -> NewStringUTF(appkey.c_str());
}


//extern "C"
//JNIEXPORT void JNICALL
//Java_com_beiing_ndktest_NativeFunction_printLog(JNIEnv *env, jclass type, jstring str_) {
//    const char *str = (*env)->GetStringUTFChars(env, str_, 0);
//    //TODO: 显示Android 的日志
//    // 调用Android的代码
//    // 代码需要调用系统的日志库, 这个库已经在 CMakeList.txt添加了e,因此可以直接调用
//    const char *tag = "NativeFunction";
//    //jstring -> char*
//    jboolean b = JNI_FALSE;
//    const char* txt = (*env)->GetStringUTFChars(env, str_, b);
//    //打印log日志
//    __android_log_write(ANDROID_LOG_DEBUG, tag, txt);
//    //释放string
//    (*env)->ReleaseStringUTFChars(env, str_, str);
//}