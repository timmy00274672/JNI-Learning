JAVA_HOME = /usr/lib/jvm/java-8-oracle

demo:
	javac HelloName.java 
	javah HelloName
	gcc -shared -lc  -fPIC -o libhelloname.so \
		-I $(JAVA_HOME)/include \
		-I $(JAVA_HOME)/include/linux/ \
		HelloName.c
	java -DLD_LIBRARY_PATH=. HelloName