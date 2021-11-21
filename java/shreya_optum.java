import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class shreya_optum  {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String st = sc.nextLine();
        int n = sc.nextInt();
        sc.close();
        System.out.println(maxPossible1(st, n));

    }

     public static int maxPossible(String input1, int input2){

         int res=0;

         String regex = "123";
         Matcher m = Pattern.compile(regex).matcher(input1);

         while(m.find()){
             res++;
         }
//         res = m.groupCount();


         return res;
     }

//     public static int maxPossible1(String input1, int input2){

//         int res=0,pos=0;
//         String regex = "123";


//         StringBuffer sb = new StringBuffer(input1);

//         while(!regex.equals("")){

// //            System.out.println(regex);
// //            System.out.println(sb.toString());
//             Matcher m = Pattern.compile(regex).matcher(sb.toString());
//             int i=-1;
//             while (m.find()) {
//                 i++;
//                 res++;
//                 System.out.println(m.start() + " " + m.end());
//                 sb.replace(m.start()-3*i, m.end()-3*i, "");

// //                input1 = input1.substring(m.start(), m.end());
// //                System.out.println(sb.toString());
// //                System.out.println(input1);
//                 System.out.println(sb.toString() + ":" + regex);

//             }
//             regex=regex.substring(0,regex.length()-1);


//         }

//        return res;
//    }


}
