package com.example.ndkpractice;

/**
 * Created by Kong on 2018/2/21.
 */

public class JNIUtil {
    public native String sayHello();

    // ndkjnidemo
    static{
        System.loadLibrary("ndkjnidemo");
    }
}
