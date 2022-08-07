import java.util.*;

public class GopiProfile {
    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        List<String> lines = new ArrayList<>(0);

        for(int i=0; i<t; i++){

            String line = sc.nextLine();
            System.out.println(line);
            lines.add(line);
            
        }
        
        System.out.println(lines);
        sc.close();
    }

    public static void checkCandidateProfileMatch(String profiles){

    }

}
