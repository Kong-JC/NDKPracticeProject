//
// Created by Kong on 2018/2/21.
//

#include "com_example_ndkpractice_JNIUtil.h"

JNIEXPORT jstring JNICALL Java_com_example_ndkpractice_JNIUtil_sayHello
  (JNIEnv * env, jobject obj){
    return (*env)->NewStringUTF(env,"hello world!");
  }