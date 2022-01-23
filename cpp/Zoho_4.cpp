#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int ar[n];

    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    int size=n;
    
    if(n%2==0){
        n++;
    }

    for(int i=0; i<n/2; i++){
        if(i%2==1){
            int x = ar[i];
            ar[i] = ar[n-1-i];
            ar[n-1-i] = x;
        }

    }

    for(int i=0; i<size; i++){
        cout << ar[i] << " ";
    }


    return 0;
}

