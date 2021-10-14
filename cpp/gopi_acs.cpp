#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];
    int k;
    cin >> k;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n, greater<int>());

    int sum=0;

    for(int i=0; i<k; i++){
        sum+=arr[i];
    }

    return sum;

    cout << sum;

    return 0;
}

