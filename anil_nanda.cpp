#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int x, cnt=0;

    for(int i=0; i<n; i++){
        cin >> x;
        if(x>=0){
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}

