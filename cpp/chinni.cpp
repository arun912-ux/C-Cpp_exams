#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

void f(int n){
    if (n>0){
        f(--n);
        cout << n;
        f(--n);
    }
}

int main(){

    int n;
    // cin >> n;
    int a=3;
    f(a);




    return 0;
}