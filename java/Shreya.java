import java.util.*;

class shreya{

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[n];

        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }

        sc.close();

        ArrayList<Integer> al = new ArrayList<Integer>();

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if (arr[j]+k == arr[i] || arr[j]-k == arr[i]){
                    if( ! al.contains(arr[j])){
                        al.add(arr[j]);
                    }
                }
            }
        }
        
        System.out.println(al.size());


    }


    
}


