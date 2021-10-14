#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, cnt=0, ccnt=0;
    cin >> n;
    int x=0;
    int arr[n+1] = {0};

    if(x==0){

    
    for(int i=2; i<=sqrt(n);i++){
        for(int j=i*i; j<=n; j+=i){
            arr[j] = 1;
        }
    }

    
    for(int i=2; i<=n; i++){
        if(!arr[i]){
            cout << i << "\t";
            cnt++;
        }
    }
    
    }
    else
    for(int i=1; i<=n; i++){
        ccnt = 0;
        for(int j=1; j<i; j++){
            if(i%j == 0)
                ccnt++;
            
        }
        // cout << ccnt << endl;
        if(ccnt==1){
            cout << i << "\t";
        }
    }



    cout << endl << cnt;


    return 0;
}