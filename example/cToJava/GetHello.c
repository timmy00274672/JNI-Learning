#include "GetHello.h"
#include <stdio.h>

JNIEXPORT jstring JNICALL Java_GetHello_sayHi(JNIEnv *env, jobject obj)

{
	char buffer[20];
	scanf("%s", buffer);
	return (*env)->NewStringUTF(env, buffer);
}