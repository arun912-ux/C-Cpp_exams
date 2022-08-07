#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
#define SQR(x) (x*x)

int main(){

    int num=52, num2=1, num3=0, temp;
    while(num>=8){
        temp = num%8;
        num=num/8;
        num2=(num2*10)+temp;
    }
    num2=(num2*10)+num;
    while(num2!=1){
        temp=num2%10;
        num2/=10;
        num3=(num3*10)+temp;
    }
    cout << num3;



    return 0;
}