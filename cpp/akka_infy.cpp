
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin >> n >> k;
    char st[n];
    for(int i=0; i<n; i++){
        cin >> st[i];
    }
    
    char res[60] = {0};
    int cmp=0, r=0;

    for(int i=0; i<n; i+=2){
        int h=st[i]-'0';
        if(st[i]=='0'){
            res[r++]='+';
        }else if(cmp + h <= k){
            res[r++]='+';
            cmp+= h;
        }else{
            res[r++]='-';
            cmp-=h;
        }
    }
    
    r--;
    for(int i=0; i<n; i++){
        if(i%2!=0){
            st[i]=res[--r];
        }
        cout << st[i];
    }

    return 0;
}


