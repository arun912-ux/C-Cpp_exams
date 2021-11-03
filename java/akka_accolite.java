import java.util.Scanner;
import java.util.logging.FileHandler;

// Java implementation of the approach
class akka_accolite
{

    public static int findLengthOfLCIS(int[] nums) {
        int ans = 0, anchor = 0;
        for (int i = 0; i < nums.length; ++i) {
            if (i > 0 && nums[i-1] >= nums[i]) anchor = i;
            ans = Math.max(ans, i - anchor + 1);
        }
        return ans;
    }


	
	static int increasing_subarray(int a[], int n)
	{
		int pre[] = new int[n] ;
		int pos[] = new int[n] ;
		pre[0] = 1;
		pos[n - 1] = 1;
		int l = 0;

		for (int i = 1; i < n; i++)
		{
			if (a[i] > a[i - 1])
				pre[i] = pre[i - 1] + 1;
			else
				pre[i] = 1;
		}

		l = 1;
		for (int i = n - 2; i >= 0; i--)
		{
			if (a[i] < a[i + 1])
				pos[i] = pos[i + 1] + 1;
			else
				pos[i] = 1;
		}

		int ans = 0;
		l = 1;
		for (int i = 1; i < n; i++)
		{
			if (a[i] > a[i - 1])
				l++;
			else
				l = 1;
			ans = Math.max(ans, l);
		}
	
		for (int i = 1; i <= n - 2; i++)
		{
			if (a[i - 1] < a[i + 1])
				ans = Math.max(pre[i - 1] +
								pos[i + 1], ans);
		}
		return ans;
	}
	
	// Driver code
	public static void main (String[] args)
	{
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
		int arr[] = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }		
        sc.close();
	
		System.out.println(increasing_subarray(arr, n));
        // System.out.println(findLengthOfLCIS(arr));
	}
}


