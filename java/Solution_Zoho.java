import java.util.*;

class Solution_Zoho{

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        StringBuffer sb = new StringBuffer(sc.nextLine());

        sc.close();

        System.out.println(sb.reverse().toString());

        Solution_class scs = new Solution_class(1, "name", "email");
        System.out.println(scs);
        
        

    }


}