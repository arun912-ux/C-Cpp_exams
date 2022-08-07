#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin >> m;
    int arm[m];
    for(int i=0; i<m; i++){
        cin >> arm[i];
    }
    
    cin >> n;
    int arn[n];
    for(int i=0; i<n; i++){
        cin >> arn[i];
    }

    int *p, *q;

    if(arm[0]<arn[0]){
        p=&arm[0];
        q=&arn[0];
    }else{
        p=&arn[0];
        q=&arm[0];
        int t=m;
        m=n;
        n=t;
    }
    int cnt=0;
    
    


    return 0;
}