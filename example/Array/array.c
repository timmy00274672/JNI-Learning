#include <stdio.h>
#include "com_marakana_jniexamples_ArrayReader.h"

JNIEXPORT jint JNICALL Java_com_marakana_jniexamples_ArrayReader_sumArray(JNIEnv *env, jclass class, jintArray array) {
    jint *native_array;
    jint i, result = 0;

    jsize length = (*env)->GetArrayLength(env, array);

    native_array = (*env)->GetIntArrayElements(env, array, NULL); /* 1 */
    if (native_array == NULL) {
        return 0;
    }
    for (i=0; i<length; i++) {
        result += native_array[i];
    }
    (*env)->ReleaseIntArrayElements(env, array, native_array, 0);
    return result;
}