#include<bits/stdc++.h>
using namespace std;

int letter(char* input1){

    int arr['Z'] = {0};
    
    int sum=0;
    int a=0;
    int b=1;
    arr['A']=a;
    arr['B']=b;

    for(int i='C'; i<='Z'; i++){
        int t= a;
        a= b;
        b = b+t;
        arr[i]=b;
        
    }

    string st = input1;
    for(int i=0; i<st.length(); i++){
        int x = st[i];
        sum += arr[x];
    }


    return sum; 
}



int main(){

    char* st = new char[100];
    cin>> st;

    cout << letter(st);

    return 0;
}