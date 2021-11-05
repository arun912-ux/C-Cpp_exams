class Derived{

    int a=10;

    public Derived(){
        System.out.println("Inside derived\n\n");
    }

    public void print(){
        System.out.println("Derived class");
    }
}


public class Akka_Inheritance extends Derived {
    
    int a=5;
    public static void main(String[] args) {
        Derived obj = new Akka_Inheritance();
        obj.print();
        Akka_Inheritance obj2 = new Akka_Inheritance();
        System.out.println(obj.a);
        System.out.println(obj2.a);
        obj2.print1();
    }
    
    // @Override
    public void print1(){
        System.out.println("Inherited class");
        super.print();
    }
    
}
