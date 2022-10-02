import java.util.ArrayList;
import java.util.List;

class pk_accenture{


    public String[] bleakNumbers(int input1, int[] input2){

        int n = input1;
        String[] ret = new String[n];

        List<String> rr = new ArrayList<>();
        List<Integer> m = List.of(2,3,5,7,8,9);

        for(int i : input2){
            if(m.contains(i)){
                rr.add("SUPPORTED");
            }else{
                rr.add("BLEAK");
            }
        }

        rr.toArray(ret);
        return ret; 

    }

    public static void main(String[] args) {
        
    }


}