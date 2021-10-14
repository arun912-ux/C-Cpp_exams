#include<bits/stdc++.h>
using namespace std;

int countPrime(int input1){

    int cnt=0;
    int n=input1;
    for(int i=1; i<n; i++){
        int x = __gcd(i,n);
        if(x==1){
            cnt++; 
        }
    }


    return cnt;
}

int main(){

    int n;
    cin >> n;

    cout << countPrime(n);


    return 0;
}