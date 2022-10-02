

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[i];
                arr[i]=t;
            }

}





char s2[], s1[];
// n = length();
n = strlen(s1);
 for(int i=0; i<n; i++){
    s2[i] = s1[n-i-1];
 }

 // idhe algorithm.


iterating over 1st string in reverse..
and append in 2nd string in correct order



1. for loop over 1st string in reverse order from (n-1 to 0)
2. take 2nd string variable and append each character from 1st string. 
3. now 2nd string will have reversed string.






