import java.util.*;

interface A{

    public void method1();

}

interface B{

    public void method1();

}




public class JavaInterfaceTest{

    enum eColors{
        Black(5), BLUE(10), GREEN(15);
        int colorCode=0;
        eColors(int colorCode){
            this.colorCode=colorCode;
        }
    };

    public static void main(String[] args) {
        
        JavaInterfaceTest jIT = new JavaInterfaceTest();
        System.out.println(eColors.values()[1].colorCode);

    }

    public void method2(){

        


    }


}
