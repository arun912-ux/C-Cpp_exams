#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, u, l;
    cin >> n >> l >> u;
    int x;
    int sum=0;

    for(int i=0; i<n; i++){
        cin >> x;
        if(i>=l-1 && i<u){
            sum+=x;
        }
    }

    cout << sum;

    return 0;
}


