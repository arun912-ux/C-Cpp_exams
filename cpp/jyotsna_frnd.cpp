#include<bits/stdc++.h>
using namespace std;

int SumOfNTerms(int a, int d, int n){

    int sum=0;

    for(int i=1; i<=n; i++){
        sum += a+(i-1)*d;
    }


    return sum;
}

int main(){

    int a, d,n;
    cin >> a >> d >> n;

    cout << SumOfNTerms(a,d,n);


    return 0;
}

