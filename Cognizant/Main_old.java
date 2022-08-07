
import java.util.Scanner;

class Main_old{

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        String line = sc.nextLine();
        sc.close();
        StringBuffer sb = new StringBuffer(line);
        int i=0;
        while(i<10){

            for(int j=0; j<sb.length()-1; j++){
                if(sb.charAt(j) == sb.charAt(j+1)){
                    sb.deleteCharAt(j);
                    sb.deleteCharAt(j);
                }
            }

            i++;
        }

        if(sb.length() == 0){
            System.out.println(-1);
        }else{
            System.out.println(sb);
        }
        
    }


}

