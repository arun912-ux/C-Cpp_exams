
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, x;
    cin >> n;

    int ar[n];
    int ar2[n];

    for(int i=0; i<n; i++){
        cin >> x;
        ar[i] = x;
        ar2[i] = x;
    }

    sort(ar, ar+n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           if(ar[i] == ar2[j]){
               cout << j+1 << " ";
               break;
           }
        }
    }
    return 0;
}

