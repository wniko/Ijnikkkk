package com.example.ijnikkkk;

public class EncryptUtils {

    static {
        System.loadLibrary("ijnikkkk");
    }

    public static native int add(int vl, int v2);

    public static native String sign(String origin);

}
