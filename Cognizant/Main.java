import java.util.*;

public class Main {
    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        String input = sc.nextLine();
        sc.close();

        String[] splitStrings = input.split(" ");

        StringBuilder sb = new StringBuilder();

        boolean flag = true;
        for(String s : splitStrings){

            if(!flag){
                break;
            }

            char[] sarr = s.toCharArray();
            int len = sarr.length;

            for(int i=0; i<len; i++){
                char ch = sarr[i];

                if(! Character.isAlphabetic(ch)){
                    flag = false;
                    break;
                }

                if(i==0){
                    sb.append(Character.toUpperCase(ch));
                }else{
                    sb.append(Character.toLowerCase(ch));
                }
            }
            sb.append(" ");

        }

        if(flag)
            System.out.println(sb.toString());
        else
            System.out.println("Invalid Input");

    }

}
