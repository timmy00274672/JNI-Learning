JAVA_HOME = /usr/lib/jvm/java-8-oracle

Hello.java = src/com/marakana/jniexamples/Hello.java
Hello.class = com.marakana.jniexamples.Hello

demo: $(Hello.java) Hello.c
	mkdir -p classes
	javac $(Hello.java) -d classes
	javah -cp classes $(Hello.class)
	gcc -shared -lc -fPIC -o libHelloImpl.so \
		-I $(JAVA_HOME)/include \
		-I $(JAVA_HOME)/include/linux/ \
		Hello.c
	java -DLD_LIBRARY_PATH=. -cp classes $(Hello.class) Tim 3

	