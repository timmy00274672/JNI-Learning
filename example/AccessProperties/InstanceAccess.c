#include "InstanceAccess.h"

JNIEXPORT void JNICALL Java_InstanceAccess_propertyAccess(JNIEnv *env, jobject object)
{
	jfieldID fieldId;
    jstring jstr;
    const char *cString;

    /* Getting a reference to object class */
    jclass class = (*env)->GetObjectClass(env, object); /* 1 */

    /* Getting the field id in the class */
    fieldId = (*env)->GetFieldID(env, class, "name", "Ljava/lang/String;"); /* 2 */
    if (fieldId == NULL) {
        return; /* Error while getting field id */
    }

    /* Getting a jstring */
    jstr = (*env)->GetObjectField(env, object, fieldId); /* 3 */

    /* From that jstring we are getting a C string: char* */
    cString = (*env)->GetStringUTFChars(env, jstr, NULL); /* 4 */
    if (cString == NULL) {
        return; /* Out of memory */
    }
    printf("C: value of name before property modification = \"%s\"\n", cString);
    (*env)->ReleaseStringUTFChars(env, jstr, cString);

    /* Creating a new string containing the new name */
    jstr = (*env)->NewStringUTF(env, "Brian"); /* 5 */
    if (jstr == NULL) {
        return; /* Out of memory */
    }
    /* Overwrite the value of the name property */
    (*env)->SetObjectField(env, object, fieldId, jstr); /* 6 */
}

JNIEXPORT void JNICALL Java_InstanceAccess_methodAccess (JNIEnv *env, jobject object)
{

    jclass class = (*env)->GetObjectClass(env, object); /* 7 */
    jmethodID methodId = (*env)->GetMethodID(env, class, "setName", "(Ljava/lang/String;)V"); /* 8 */
    jstring jstr;
    if (methodId == NULL) {
        return; /* method not found */
    }
    /* Creating a new string containing the new name */
    jstr = (*env)->NewStringUTF(env, "Nick"); /* 9 */
    (*env)->CallVoidMethod(env, object, methodId, jstr); /* 10 */
}
