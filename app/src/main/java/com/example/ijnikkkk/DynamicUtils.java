package com.example.ijnikkkk;

public class DynamicUtils {

    static {
        System.loadLibrary("dynamic");
    }

    public static native int add(int vl, int v2);

}
