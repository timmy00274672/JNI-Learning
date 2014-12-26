public class ExceptionInNative{

	public static native void throwException(String clazz, String info);

	static{
		System.loadLibrary("ThrowException");
	}

	public static void main(String[] args){
		throwException("java/lang/IllegalArgumentException", "This exception is thrown from C code");
	}
}