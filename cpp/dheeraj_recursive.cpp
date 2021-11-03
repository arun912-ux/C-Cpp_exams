#include<bits/stdc++.h>
using namespace std;
static int n;

int fcn(long long a, long long b){

    if(--n == 0){
        cout << a%10000000007 << " " << b%10000000007 << endl;
        return 0;
    }

    else{
        
        fcn(b-a, b+a);
    }
    return 0;

}

int main(){

    long long a,b,t;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> a >> b >> n;
        fcn(a, b);
    }
    return 0;
}

