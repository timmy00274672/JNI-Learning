public class HelloName {
  public static native void sayHelloName(String name);

  static { System.loadLibrary("helloname"); }

  public static void main (String[] args) {
    HelloName hello = new HelloName();
    String name = "John";
    hello.sayHelloName(name);
  }
}