#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int ar[n];

    for(int i=0; i<n; i++){
       cin >> ar[i];
    }

    int mx=ar[0]+ar[1];

    for(int i=1; i<n-1; i++){
       int x = ar[i]+ar[i+1];
       mx = max(mx, x);
    }

    cout << mx;

    return 0;
}

