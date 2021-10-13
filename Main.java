import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        try {
            Scanner scanner = new Scanner(System.in);
            int n = scanner.nextInt();
            int[] arr = new int[n];
            int count = 0;
            for (int i = 0; i < n; i++) {
                arr[i] = scanner.nextInt();
            }
            for (int i = 0; i < n; i++) {
                for (int j = 1; j < n; j++) {
                    if (arr[j] == 0) {
                        arr[j] = 1;
                    } else {
                        arr[j] = 0;
                    }  
                }
                count=i;
            }
            System.out.println(count);
        }
        catch(Exception e){
            System.out.println("Exception");
        }
        }
}