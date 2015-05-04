#include <stdio.h>
#include "HelloName.h"


JNIEXPORT void JNICALL Java_HelloName_sayHelloName(JNIEnv *env, jclass class, jstring name){
	const char *str;
    str = (*env)->GetStringUTFChars(env, name, NULL); //
    printf("Hello %s\n", str);
 	(*env)->ReleaseStringUTFChars(env, name, str);
}