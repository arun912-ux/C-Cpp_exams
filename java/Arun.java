import java.util.*; 

class Solution {
 
    static void minimumSwaps(int arr1[], int arr2[], int n) { 
        int sumArr1 = 0, sumArr2 = 0; 
        for(int i = 0; i < n; ++i) { 
            sumArr1 += arr1[i]; 
            sumArr2 += arr2[i]; 
        } 
    
        if (sumArr1 % 2 == 0 && sumArr2 % 2 == 0) { 
            System.out.print(0); 
            return; 
        } 
    
        if (sumArr1 % 2 != 0 && sumArr2 % 2 != 0){ 
            int flag = -1; 
            for(int i = 0; i < n; ++i) { 
                if ((arr1[i] + arr2[i]) % 2 == 1) { 
                    flag = 1; 
                    break; 
                } 
            } 
        
            System.out.print(flag); 
            return; 
        } 
    
        System.out.print(-1); 
    } 
  
 
    public static void main(String[] args) 
    { 
        Scanner sc = new Scanner(System.in); 
        int N = sc.nextInt(); 
        int arr1[] = new int[N]; 
        for(int i=0;i<N;i++){ 
            arr1[i] = sc.nextInt(); 
        } 
        N = sc.nextInt(); 
        int arr2[] = new int[N]; 
        for(int i=0;i<N;i++){ 
            arr2[i]  = sc.nextInt(); 
        } 
        
    
        minimumSwaps(arr1, arr2, N); 
    } 
}

