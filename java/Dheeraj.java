
import java.util.*;

class Dheeraj {

    static final float capacity = 1000;
    static float pCap = 0;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Stack<String> ss = new Stack<>();
        int n = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < n; i++) {
            String st = sc.nextLine();
            String[] sp = st.split(":");
            ss.push(sp[2]+" " + sp[3]);
            if (sp[0].equals("PUSH")){
                pushVal(sp);
            }else{
                popVal(sp);
            }
        }

        for (int i = 0; i < n; i++) {
            System.out.println(ss.pop());
        }

        System.out.println("Free Space: " + pCap*100/capacity + "%");

    }

    private static void popVal(String[] sp) {
        if(sp[1].equals("little")){
            pCap-=Integer.parseInt(sp[3]);
        }else{
            pCap-=Integer.parseInt(sp[3])*4;
        }

        if(pCap <= 0){
            pCap=0;
        }
    }

    private static void pushVal(String[] sp) {
        if(sp[1].equals("little")){
            pCap+=Integer.parseInt(sp[3]);
        }else{
            pCap+=Integer.parseInt(sp[3])*4;
        }

        if(pCap >= capacity){
            pCap=capacity;
        }
    }
}
