#include<bits/stdc++.h>
using namespace std;

int Evaluate(int x, int y){

    int res = (x+y)*(x*x - x*y + y*y);

    return res;
}


int main(){

    int n, m;
    cin >> n >> m;

    cout << Evaluate(n,m);


    return 0;
}