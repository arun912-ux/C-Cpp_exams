import java.util.*;

public class GopiFib {
    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-- > 0){
            int n = sc.nextInt();
            System.out.println(solve(n));
        }
        sc.close();

    }



    public static int solve(int n) 
    {
        int ret=0;
        int a=0;
        int b=1;

        for (int i=0; i<n-1; i++){
            int temp = a;
            a = b;
            b = b + temp;
            ret += b;
        }
        return ret+1;
    }


}
