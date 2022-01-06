import java.util.*;

class nithish_delloite{

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        List<String> ls = new ArrayList<>();

        while(sc.hasNext()){
            ls.add(sc.next());
        }

        int n = ls.size();
        StringBuilder sb = new StringBuilder();

        for(int i=n-1; i>=0;i--){
            // System.out.print(ls.get(i));
            sb.append(ls.get(i)).append(" ");
        }

        System.out.println(sb.toString().trim());
        

        sc.close();

    }


}


