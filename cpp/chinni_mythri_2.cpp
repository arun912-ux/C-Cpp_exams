#include<bits/stdc++.h>
using namespace std;

int main(){

    int n1, n2, n;
    cin >> n1 >> n2 >> n;

    int ar[n];

    int count=0;

    for(int i=0; i<n; i++){
       cin >> ar[i];
       if(ar[i]<=n2 && ar[i]>=n1){
           count++;
       }
    }

    cout << count;

    return 0;
}

