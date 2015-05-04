#include "GetHello.h"
#include <stdio.h>

JNIEXPORT jstring JNICALL Java_GetHello_sayHi(JNIEnv *env, jobject obj)

{
	char buffer[20];
	printf("Input something in C:  ");
	scanf("%s", buffer);
	return (*env)->NewStringUTF(env, buffer);
}