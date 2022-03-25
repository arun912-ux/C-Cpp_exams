#include<bits/stdc++.h>
using namespace std;


int main(){

    int a=4, b=3;
    int *p=&a, *q=&b;
    int c;
    c=*q * *p++ + ++a / b--;
    printf("%d$%d$%d",a,b,c);
    
    return 0;
}