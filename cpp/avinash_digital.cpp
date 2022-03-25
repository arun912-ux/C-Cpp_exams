
#include<bits/stdc++.h>
using namespace std;

int func(int n){
    for (int i = n/2; i>1; i--){
        if(n%i==0){
            return i;
        }
    }
    return 1;
}

int main(){

    int n;
    cin >> n;
    int t = n;
    int cnt=0;

    while(t!=0){
        // cout << t << "\t";
        t=t-func(t);
        cnt++;
        // cout << t << endl;
    }
    cout << cnt;

    return 0;
}



