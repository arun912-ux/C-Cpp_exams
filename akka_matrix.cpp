#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> m >> n;
    if(m!=n){
        if(m>n){
            n=m;
        }else{
            m=n;
        }
    }

    // cout << m << n;

    int arr[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){

            cin >> arr[i][j];

        }
    }




    return 0;
}