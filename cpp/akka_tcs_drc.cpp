// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    int n, k;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cin >> k;
    int nar[n];

    for(int i=0; i<n; i++){
        
        int idx = (i+k)%(n);
        nar[idx] = arr[i];

    }

    for(int i=0; i<n; i++){
        cout << nar[i] << " ";
    }

    return 0;

}

