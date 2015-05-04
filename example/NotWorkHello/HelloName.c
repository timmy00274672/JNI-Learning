#include <stdio.h>
#include "HelloName.h"


JNIEXPORT void JNICALL Java_HelloName_sayHelloName(JNIEnv *env, jclass class, jstring name){
    printf("Hello %s\n", name);
}