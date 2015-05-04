JAVA_HOME = /usr/lib/jvm/java-8-oracle

demo: Header.java
	javac Header.java
	javah Header
	# gcc -shared -lc -fPIC -o libThrowException.so \
	# 	-I $(JAVA_HOME)/include \
	# 	-I $(JAVA_HOME)/include/linux/ \
	# 	Header.c
	# java -DLD_LIBRARY_PATH=. Header