#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];
    int sum=0, oddMin = INT_MAX;
    for(int i=0; i<n; i++){

        cin >> arr[i];
        sum += arr[i];

        if(arr[i]%2!=0){
            oddMin = min(oddMin, arr[i]);
        }

    }

    if(sum%2 == 0){
        cout << sum-oddMin << endl;
    }else{
        cout << sum << endl;
    }


    return 0;
}

