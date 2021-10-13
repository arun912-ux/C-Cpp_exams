import java.util.Arrays;
import java.util.List;

public class Harshitha {

    public static void main(String[] args) {
        
        int[] arr = new int[]{1,3,7};


    }

    public int EliminateElements(int arr[], int n){

        List<Integer> list = Arrays.asList(arr);
        List<Integer> list1 = Arrays.asList(arr);

        int len = list.size();
        boolean flag = false;

        while(list.size() > 1)
            for(int i=0; i<len; i++){

                flag=!flag;
                if(flag){
                    list.remove(list.get(i));
                }

                if(list.size()<=1){
                    break;
                }

            }


        return list.get(0);
    }

    
}
