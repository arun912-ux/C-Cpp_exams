#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<2)
        return false;
    
    for(int i=2; i<n/2 + 1; i++){
       if(n%i==0)
           return false;
    }
    return true;
}

int main(){

    int n;
    cin >> n;
    int ar[n];
    int mn=999, mx=-999, count=0;

    for(int i=0; i<n; i++){
        cin >> ar[i];
        if(isPrime(ar[i])){
            mx = max(mx, ar[i]);
            mn = min(mn, ar[i]);
            count++;
        }
    }

    if(count!=0)
        cout << abs(mx-mn);
    else
        cout << 0;
    
    return 0;
}


