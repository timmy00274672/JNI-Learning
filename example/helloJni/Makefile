prepareDir:
	mkdir -p classes

build: src/com/marakana/jniexamples/Hello.java Hello.c prepareDir
	javac -d classes/ src/com/marakana/jniexamples/Hello.java # -> Hello.class
	javah -jni -cp classes/ com.marakana.jniexamples.Hello # -> Hello.h
	gcc -o libHelloImpl.jnilib -lc -shared \
		-I/System/Library/Frameworks/JavaVM.framework/Headers Hello.c # -> jnilib
	export LD_LIBRARY_PATH=.

test: build
	java -cp classes com.marakana.jniexamples.Hello Student 5

clean: 
	rm -r classes Hello.class com_marakana_jniexamples_Hello.h *.jnilib 2>/dev/null
