prepareDir:
	mkdir -p classes

GetHello.class: GetHello.java
	javac $<

GetHello.h: GetHello.class
	javah -jni GetHello

libHelloImpl.jnilib: GetHello.c GetHello.h
	gcc -o $@ -lc -shared \
		-I/System/Library/Frameworks/JavaVM.framework/Headers $<

test: GetHello.class libHelloImpl.jnilib
	export LD_LIBRARY_PATH=.
	java GetHello

clean: 
	rm GetHello.class GetHello.h libHelloImpl.jnilib
