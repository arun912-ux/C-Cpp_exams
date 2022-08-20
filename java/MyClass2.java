
import java.util.*;
// import java.util.Scanner;

class MyClass2{

    public static void main(String[] args) {
     
        Scanner sc = new Scanner(System.in);

        while(sc.hasNextLine()){
            String st = sc.nextLine();
            // String ret  = encrypt(st);
            String ret  = decrypt(st);
            System.out.println(ret);
        }


        sc.close();
        

    }


    public static String encrypt(String normal){
        StringBuilder ret = new StringBuilder();
        StringBuilder sb = new StringBuilder();

        for(int i=0; i<normal.length(); i++){
            char ch = normal.charAt(i);
            
            if(ch == ' '){
                sb.append('*');
            }
            else if(Character.isUpperCase(ch)){
                sb.append(Character.toLowerCase(ch));
            }
            else if(Character.isLowerCase(ch)){
                sb.append(Character.toUpperCase(ch));
            }
            else{
                sb.append(ch);
            }
            
        }

        sb.reverse();

        for(int i=0; i<sb.length(); i++){
            char ch = sb.charAt(i);
            if(i%2!=0){
                int x = ch;
                ret.append(x);
            }else{
                ret.append(ch);
            }
    
        }


        ret.append(3);

        return ret.toString();
    }



    private static String decrypt(String ciphered){

        StringBuilder ret = new StringBuilder();
        StringBuilder sb = new StringBuilder(ciphered);

        sb.setCharAt(ciphered.length()-1, ' ');

        // System.out.println(sb);
        int x=0;
        for(int i=0; i<sb.length(); i++){
            char ch = sb.charAt(i);
            if(Character.isDigit(ch)){
                x = x*10+ Integer.parseInt(String.valueOf(ch));
            }else {
                // System.out.println(x + " " + ch);
                ret.append((char)x).append(ch);
                x=0;
            }
            
        }
        // ret.append(x);

        ret.reverse();

        for(int i=0; i< ret.length(); i++){
            char ch = ret.charAt(i);
            
            if(ch == '*'){
                ret.setCharAt(i, ' ');
            }

            else if(Character.isLowerCase(ch)){
                ret.setCharAt(i, Character.toUpperCase(ch));
            }else if(Character.isUpperCase(ch)){
                ret.setCharAt(i, Character.toLowerCase(ch));
            }else{
                ret.setCharAt(i, ch);
            }

        }
        
        // System.out.println(ret);

        return ret.toString().trim();

    }






}

