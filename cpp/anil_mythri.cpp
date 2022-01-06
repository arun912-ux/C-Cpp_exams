#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int count =0;
    for(int i=0; i<=n; i++){

        int m=0, sum=0;
        int k=i;

        while(k>0){    
            m=k%10;    
            sum+=m;    
            k=k/10;    
        }

        if(sum%2==0){
            count++;
        }
        
    }

    cout << count;


    return 0;
}

