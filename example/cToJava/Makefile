JAVA_HOME = /usr/lib/jvm/java-8-oracle

demo: GetHello.java GetHello.c
	javac GetHello.java
	javah GetHello
	gcc -shared -lc -fPIC -o libHelloImpl.so \
		-I $(JAVA_HOME)/include \
		-I $(JAVA_HOME)/include/linux/ \
		GetHello.c
	java -DLD_LIBRARY_PATH=. GetHello