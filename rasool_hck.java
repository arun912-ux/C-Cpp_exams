import java.util.*;

class rasool_hck{

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        String st = sc.next();
        List<String> li = new ArrayList<>();

        li = threePalindromicSubstrings(st);
        sc.close();

        li.forEach(x -> System.out.println(x));

    }


    public static List<String> threePalindromicSubstrings(String word) {
            int n = word.length();
            List<String> rtt = new ArrayList<>();
            int dp[] = new int[n];
            
            boolean isPal[][] = new boolean[n][n];
            
            for(int i=0;i<n;i++){
                int min = i;
                for(int j=0;j<=i;j++){
                    if(word.charAt(j) == word.charAt(i) && (i-j<2 || isPal[j+1][i-1])){
                        isPal[j][i] = true;
                        min = Math.min(min, j==0 ? 0:dp[j-1]+1);
                    }
            
                }
                dp[i] = min;
                
            }
            List<Integer> lll = new ArrayList<>();
            for(int i=0;i<n;i++){
                if(isPal[i][n-1] == true)
                    lll.add(i);
            }
            
            for(int l:lll){
                for(int i=0;i<l;i++){
                    if(isPal[0][i] && isPal[i+1][l-1]){
                        rtt.add(word.substring(0,i+1));
                        rtt.add(word.substring(i+1,l));
                        rtt.add(word.substring(l));
                        return rtt;
                    }
                }
            }
            
            rtt.add("Impossible");
            return rtt;
        
        }

}