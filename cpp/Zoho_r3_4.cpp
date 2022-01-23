#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int ar[n];

    for(int i=0; i<n; i++){
       cin >> ar[i];
    }
    int s;
    cin >> s;

    int mn=999;

    for(int i=0; i<n; i++){
        if(ar[i]>=s){
            cout << 1;
            return 0;
        }
    }

    for(int i=0; i<n; i++){

        int sm=0;
        for(int j=i; j<n; j++){

            sm+=ar[j];
            if(sm>=s){
                mn = min(mn, j-i+1);
                break;
            }
           
        }
    }
    cout << mn;

    return 0;
}

