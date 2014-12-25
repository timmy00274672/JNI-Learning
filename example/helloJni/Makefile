
test: Hello.java Hello.c
	javac Hello.java # -> Hello.class
	javah -jni Hello # -> Hello.h
	gcc -o libHelloImpl.jnilib -lc -shared 
		-I/System/Library/Frameworks/JavaVM.framework/Headers Hello.c # -> jnilib

	export LD_LIBRARY_PATH=.
	
	java Hello Student 5

clean: 
	rm Hello.class
	rm Hello.h
	rm *.jnilib
