JAVA_HOME = /usr/lib/jvm/java-8-oracle

ArrayReader.java = src/com/marakana/jniexamples/ArrayReader.java
ArrayReader.class = com.marakana.jniexamples.ArrayReader

demo: $(ArrayReader.java) array.c
	mkdir -p classes
	javac $(ArrayReader.java) -d classes
	javah -cp classes $(ArrayReader.class)
	gcc -shared -lc -fPIC -o libarrayreader.so \
		-I $(JAVA_HOME)/include \
		-I $(JAVA_HOME)/include/linux/ \
		array.c
	java -DLD_LIBRARY_PATH=. -cp classes $(ArrayReader.class) 33

	