


import java.util.ArrayList;
import java.util.Scanner;

class Chinni {

    public static void main(String[] args) {
	// write your code here
        Scanner scan = new Scanner(System.in);
        
        int i=0;
        ArrayList<String> arr = new ArrayList<String>();
        while(scan.hasNext()){
            String st = scan.next()
            if(st.con)
            arr.add(st);
        }

        for (String ss : arr) {
            System.out.println(ss);
        }




        scan.close();

    }
}

