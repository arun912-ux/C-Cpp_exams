import java.util.*;

public class VenkatMain
{
	public static void main(String[] args) {
	    
	    Scanner sc = new Scanner(System.in);
	    int n = sc.nextInt();
	    sc.close();
	   
	    if(n<0){
	        System.out.println("-1");
	    }
	    
	    long sq = n*n;
	    String sqs = String.valueOf(sq);
	    int len = sqs.length();
	    String sqs1 = sqs.substring(0, len/2);
	    String sqs2 = sqs.substring(len/2, len);
	    
	   // System.out.println(sqs1 + sqs2);
	    
	    int nn = Integer.valueOf(sqs1) + Integer.valueOf(sqs2);
	    
	    if(nn == n){
	        System.out.println("TRUE");
	    }
	    else{
	        System.out.println("FALSE");
	    }
	    
	    
	}
}
