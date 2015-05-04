package com.marakana.jniexamples;

public class ArrayReader {
    private static native int sumArray(int[] arr); //1
    public static void main(String[] args) {
        //Array declaration
        int size = Integer.valueOf(args[0]);
        int arr[] = new int[size];
        //Fill the array
        for (int i = 0; i < size; i++) {
            arr[i] = i;
        }
        
        int result = ArrayReader.sumArray(arr); //2
        System.out.println("The sum of every element in the array is " + Integer.toString(result));
    }
    static {
        System.loadLibrary("arrayreader");
    }
}