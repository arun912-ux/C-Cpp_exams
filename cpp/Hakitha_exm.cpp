#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

int NewNumber(int n){

    int nn=0;
    string s1 = to_string(n);
    for(int i=0; i< s1.length(); i++){
        int x = 57 - s1[i];
        nn = nn*10 + x;
    }

    return nn;
}

int main(){

    int n;
    cin >> n;

    cout << NewNumber(n);

    return 0;
}

