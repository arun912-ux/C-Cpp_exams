

import java.util.*;

class Solution{


    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Integer> times = new ArrayList<>();
        for(int i=0; i<n; i++){
            times.add(sc.nextInt());
        }

        int reduce=0;
        while(times.size() != 1){
            reduce = times.stream().reduce(0, (a, b)-> a+b);
            int half = reduce/2;

            Integer x=0;
            for(int i=0; i<times.size(); i++){
                if(times.get(i)>half || times.size()==1){
                    break;
                }
                x = times.get(i);
            }
            // System.out.println(x);
            times.remove(x);

        }

        System.out.print(times.get(0));

    }

}


