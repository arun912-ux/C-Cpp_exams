#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

int main(){

    int a1=1, a2=2, a3=3;
    if (a2%a1 == 0){
    a2=a2+1;
    if (a2%a3==0){
        a2+=1;
    }

    }
    
    cout << a2;

    return 0;
}