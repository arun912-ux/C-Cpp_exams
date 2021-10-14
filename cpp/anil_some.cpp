#include<bits/stdc++.h>
using namespace std;


int SumOfPeak(int arr[], int n){

    if(n==0){
        return -1;
    }
    if(n==1){
        return arr[0];
    }
    
    int sm=0;

    for(int i=0; i<n; i++){
        if(i==0){
            if(arr[i]>arr[i+1]){
                sm+=arr[i];
            }
        }
        if(i>=1 && i<=n-2){
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
                sm+=arr[i];
            }
        }
        if(i==n-1){
            if(arr[i]>arr[i-1]){
                sm+=arr[i];
            }
        }

    }


    return sm;
}


int main(){

    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << SumOfPeak(arr, n);


    return 0;
}