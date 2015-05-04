JAVA_HOME = /usr/lib/jvm/java-8-oracle

demo: ExceptionInNative.java ExceptionInNative.c
	javac ExceptionInNative.java
	javah ExceptionInNative
	gcc -shared -lc -fPIC -o libThrowException.so \
		-I $(JAVA_HOME)/include \
		-I $(JAVA_HOME)/include/linux/ \
		ExceptionInNative.c
	java -DLD_LIBRARY_PATH=. ExceptionInNative