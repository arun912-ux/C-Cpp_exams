
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int ar[n];

    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    int hcnt=0, lcnt=0;
    int hmx=0, lmx=0;

    for(int i=0; i<n-1; i++){
        ar[i]<ar[i+1]? hcnt++ : hcnt=0;
        hmx=max(hmx, hcnt);

        ar[i]>ar[i+1]? lcnt++ : lcnt=0;
        lmx=max(lcnt, lmx);
    }

    if(hmx==0 || lmx==0){
        cout << 0;
    }else{
        cout << hmx + lmx + 1;
    }

    return 0;
}


