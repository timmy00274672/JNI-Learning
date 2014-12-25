public class GetHello{
	
	public native String sayHi();

	static { 
		System.loadLibrary("HelloImpl"); 
	} 

	public static void main(String[] args){
		GetHello hello = new GetHello();
		System.out.println("java:  "  + hello.sayHi());
	}

}