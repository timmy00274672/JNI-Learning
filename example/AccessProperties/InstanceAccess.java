public class InstanceAccess{

	static{
		 System.loadLibrary("InstanceAccess");
	}
	public String name; //1

    public void setName(String name) { //2
        this.name = name;
    }

    //Native method
    public native void propertyAccess(); //3
    public native void methodAccess(); //4

    public static void main(String args[]) {
        InstanceAccess instanceAccessor = new InstanceAccess();
        //Set the initial value of the name property
        instanceAccessor.setName("Jack");
        System.out.println("Java: value of name = \""+ instanceAccessor.name +"\"");
        //Call the propetyAccess() method
        System.out.println("Java: calling propertyAccess() method...");
        instanceAccessor.propertyAccess(); //5
        //Value of name after calling the propertyAccess() method
        System.out.println("Java: value of name after calling propertyAccess() = \""+ instanceAccessor.name +"\"");
        //Call the methodAccess() method
        System.out.println("Java: calling methodAccess() method...");
        instanceAccessor.methodAccess(); //6
        System.out.println("Java: value of name after calling methodAccess() = \""+ instanceAccessor.name +"\"");
    }

}