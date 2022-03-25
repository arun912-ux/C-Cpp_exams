#include<bits/stdc++.h>
using namespace std;

int palindromeManiac(int input1, int input2, int input3){

    int cnt=0;
    int st=INT_MAX, en=INT_MIN;
    int ar[10];

    for(int i=input1; i<=input2; i++){
       int t=i;
       int rem=0, rev=0;
       stringstream s1(i);
       
       while(t!=0){
           rem=t%10;
           rev=rev*10+rem;
           t/=10;
       }
       
       if(i==rev){
           st=min(st,i);
           en=max(en,i);
           ar[cnt++]=i;
       }

    }

    int fcnt=0;
    if((en-st) < input3){
        return cnt;
    }else{
        for(int i=0; i<cnt; i++){
           for(int j=0; j<cnt; j++){
              if(abs(ar[i]-ar[j]) < input3){
                  fcnt++;
              }else{
                  return fcnt;
              }
           }
        }
    }

    return fcnt;
}


int main(){

    int n1,n2,k;
    cin >> n1 >> n2 >> k;

    cout << palindromeManiac(n1,n2,k);


    return 0;
}