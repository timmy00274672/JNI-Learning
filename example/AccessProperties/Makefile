JAVA_HOME = /usr/lib/jvm/java-8-oracle

demo: InstanceAccess.java InstanceAccess.c
	javac InstanceAccess.java
	javah InstanceAccess
	gcc -shared -lc -fPIC -o libInstanceAccess.so \
		-I $(JAVA_HOME)/include \
		-I $(JAVA_HOME)/include/linux/ \
		InstanceAccess.c
	java -DLD_LIBRARY_PATH=. InstanceAccess