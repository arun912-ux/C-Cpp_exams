
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int ar[n][2];
    int mxh=0;
    for(int i=0; i<n; i++){
        cin >> ar[i][0] >> ar[i][1];
        mxh=max(mxh, ar[i][1]);
    }
    int h=mxh;
    for(int i=0; i<n-1; i++){

        for(int j=0; j<n-1; j++){
           
            if(ar[i][0] < ar[i+1][0] && ar[j][1] <= ar[j+1][1]){
                h = ar[i+1][1]+ar[j+1][0];
                break;
            }

        }
    }

    cout << h;


    return 0;
}

