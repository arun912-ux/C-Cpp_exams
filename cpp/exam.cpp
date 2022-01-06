#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];   
    }

    int mxcnt=0;
    for(int i=0; i<n; i++){
        int cnt = 0;
        for(int j=i; j<n; j++){
            
            if(ar[i]==ar[j]){
                cnt++;
                continue;
            }else{
                mxcnt = max(mxcnt, cnt);
            }
            
        }

    }

    cout << mxcnt;

    return 0;
}

