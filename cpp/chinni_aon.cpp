#include<bits/stdc++.h>
using namespace std;

int maxRemainder(int n, int m){
    if(n==0){
        return -1;
    }
    int mx=0;
    for(int i=1; i<=m; i++){
       mx=max(mx,n%i);
    }

    return mx;

}

int main(){

    int n, m;
    cin >> n >> m;

    cout << maxRemainder(n,m);


    return 0;
}