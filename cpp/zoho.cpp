#include<bits/stdc++.h>
using namespace std;

int ar[112];



int main(){

    ar[0]=1;ar[1]=0;ar[2]=1;
    ar[3]=0;ar[4]=1;ar[5]=0;
    ar[6]=1;ar[7]=0; ar[8]=1;
    ar[9]=0;

    int num=1;
    int val=1;
    int k=0;

    while(k<5+1){
        if(ar[k]==1){
            val=val+num;
        }
        if(num==1){
            num=3;
        }else{
            num=num+4;
        }

    }

    cout << val;


    

    return 0;
}
