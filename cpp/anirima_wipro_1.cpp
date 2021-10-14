#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, div;
    cin >> n >> div;

    int x;
    int sum=0;

    for(int i=0; i<n; i++){
        cin >> x;
        sum += x/div;
    }

    cout << sum;

    return 0;
}

