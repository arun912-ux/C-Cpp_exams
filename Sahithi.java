import java.util.*;

class Sahithi{
    public static void main(String[] args){

        
        String st = "abc";
        int len = st.length();
        for (int i = 0; i < len; i++) {
            if(i%2==0){
                System.out.print((char)(st.charAt(i)+1));
            }else{
                System.out.print(st.charAt(i));
            }
        }
        
    }
}
