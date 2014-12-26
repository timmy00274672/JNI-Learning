InstanceAccess.class: InstanceAccess.java
	javac $<

InstanceAccess.h: InstanceAccess.class
	javah -jni InstanceAccess

libInstanceAccess.jnilib: InstanceAccess.c InstanceAccess.h
	gcc -o $@ -lc -shared \
		-I/System/Library/Frameworks/JavaVM.framework/Headers $<

test: InstanceAccess.class libInstanceAccess.jnilib
	export LD_LIBRARY_PATH=.
	java InstanceAccess

clean: 
	rm InstanceAccess.class InstanceAccess.h libHelloImpl.jnilib
