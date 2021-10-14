#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int l=n;
    int sum=0, cnt=-2;

    for(int i=n; i>0;i--){
        
        sum+=i*2;
        sum+=i-1;
        
    }

    cout << sum;

    return 0;
}
