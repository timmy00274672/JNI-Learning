
ExceptionInNative.class: ExceptionInNative.java
	javac $<

ExceptionInNative.h: ExceptionInNative.class
	javah -jni ExceptionInNative

libThrowException.jnilib: ExceptionInNative.c ExceptionInNative.h
	gcc -o $@ -lc -shared \
		-I/System/Library/Frameworks/JavaVM.framework/Headers $<

test: ExceptionInNative.class libThrowException.jnilib
	export LD_LIBRARY_PATH=.
	java ExceptionInNative

clean: 
	rm ExceptionInNative.class ExceptionInNative.h ExceptionInNative.jnilib
