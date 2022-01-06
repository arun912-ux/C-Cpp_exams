
import java.util.Scanner;

class chinni_mthree{
    
    public static void sieveAlg1(int testStart, int testStop){

        for(int i=testStart; i<=testStop; i++){

            int cnt=0;
            for(int j=i; j<=testStop; j++){

                if(!isPrime(j)){
                    cnt++;
                }
                else{
                    if(cnt>5){
                        System.out.println((i) + " " + (j-1) + " " + cnt);
                    }
                    cnt=0;
                    i=j;
                    break;

                }
                if (j==testStop && cnt>5){
                    System.out.println(i + " " + j + " " + cnt);
                    i=j;
                    break;
                }

            
            }
            
        }
    }

    public static boolean isPrime(int n){

        if (n<2){
            return false;
        }
        for(int i=2; i<=n/2; i++){
            if(n%i==0){
                return false;
            }
        }

        return true;
    }
    
    public static void main(String[] args) {
        
        int testStart = 0, testStop=0;
        Scanner sc = new Scanner(System.in);
        testStart = sc.nextInt();
        testStop = sc.nextInt();
        sieveAlg1(testStart, testStop);
        sc.close();

    }



}