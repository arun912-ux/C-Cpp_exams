#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
       cin >> ar[i];
    }

    // largest contiguous sub array sum

    int maxx=-999; 
    int mxloop = -999;

    for(int i=0; i<n; i++){
        
        mxloop = mxloop + ar[i];
        if(maxx < mxloop){
            maxx = mxloop;
        }
        if(mxloop<0){
            mxloop=0;
        }

    }

    cout << maxx;

    return 0;
}

