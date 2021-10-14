#include<bits/stdc++.h>
using namespace std;

int LargestElementsLowerIndex(int *arr, int n){

    if(n>=1 && n<=2)
        return 0;
    if(n==0)
        return -1;
    
    int ar[n];
    for(int i=0; i<n; i++){
        ar[i] = *(arr+i);
    }

    int cnt=0;

    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ar[i] > ar[j])
            {
                for(int k=j+1; k<n; k++)
                {
                    if(ar[j] > ar[k])
                    {
                        cnt++;
                    }
                }
            }
        }   
    }

    return cnt;

}


int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];   
    }

    cout << LargestElementsLowerIndex(arr, n);

    return 0;
}