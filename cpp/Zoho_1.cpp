#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int ar[n];

    for(int i=0; i<n; i++){
       cin >> ar[i];
    }

    for(int i=0; i<n; i++){
       
        int cnt=0;

        for(int j=0; j<n; j++){
           
            if(ar[i]<ar[j]){
                cnt++;
            }

            if(cnt>=2){
                cout << ar[i] << " ";
                break;
            }

        }

    }


    return 0;
}