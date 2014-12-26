#include "ExceptionInNative.h"

char* jstringTostring(JNIEnv* env, jstring javaString)
{
   return (*env)->GetStringUTFChars(env, javaString, 0);
}

JNIEXPORT void JNICALL Java_ExceptionInNative_throwException
(JNIEnv * env, jclass class, jstring clazz, jstring info)
{
	char* classExceptionString = jstringTostring(env,clazz);
	char* infoString = jstringTostring(env, info);

 	jclass classException = (*env)->FindClass(env, classExceptionString);
	if (classException != NULL) {
		(*env)->ThrowNew(env, classException, infoString); //2
	}
	(*env)->DeleteLocalRef(env, classException); //3
	(*env)->ReleaseStringUTFChars(env, clazz, classExceptionString);
	(*env)->ReleaseStringUTFChars(env, info, infoString);
}

