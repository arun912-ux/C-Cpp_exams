#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n;
    cin >> n;
    long long int arr[n];
    for(long long int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);
    long long int maxRev=INT_MIN;

    for(long long int i=0; i<n; i++){
        long long x = arr[i]*(n-i);
        maxRev = maxRev < x? x: maxRev;
    }

    cout << maxRev << endl;

    return 0;
}
