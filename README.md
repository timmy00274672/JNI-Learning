JNI-Learning
==

My environment:

- OS: Mac 10.10.1
- c compiler: Apple LLVM version 6.0

## Notes

1. example/hellojni tutorial

	which is based on the [tutorial](https://www3.ntu.edu.sg/home/ehchua/programming/java/JavaNativeInterface.html).

## Questions

### Where can I find the jni headers for Mac OS

```CMake
HelloJNI.o : HelloJNI.c HelloJNI.h
gcc -I"/System/Library/Frameworks/JavaVM.framework/Headers" -fpic -c $< -o $@
```