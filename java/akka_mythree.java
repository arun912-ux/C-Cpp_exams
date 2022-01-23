



import java.util.*;

class akka_mythree{
    
    public static boolean isPrime(int n){
    
        if(n<2)
            return false;
        
        for(int i=2; i<n/2 +1; i++){
            if(n%i==0){
                return false;
            }
        }
    
        return true;
    }
    
    public static List<Integer> findPrimeNumber(int X, int Y, int N){
        
        List<Integer> listPrime = new ArrayList<>(0);
        
        String cm = String.valueOf(N);
        List<Character> pp = new ArrayList<>(0);
        if(cm.length()>1){
            for(int i=0; i<cm.length(); i++){
                pp.add(cm.charAt(i));
            }
        }else{
            pp.add(cm.charAt(0));
        }
        
        
        for(int i=X; i<=Y; i++){
            if(isPrime(i)){
                
                for(char x : pp){
                    if (String.valueOf(i).contains(String.valueOf(x))){
                        listPrime.add(i);
                    }
                }
                
            }
        }
        
        return listPrime;
    }
    
    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int X = sc.nextInt();
        int Y = sc.nextInt();
        int N = sc.nextInt();
    
        List<Integer> listPrimeNumber = findPrimeNumber(X, Y, N);
    
        for(int x : listPrimeNumber){
            System.out.print(x + " ");
        }
    
        sc.close();
    
    }
    
}


