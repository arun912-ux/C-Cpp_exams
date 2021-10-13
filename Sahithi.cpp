#include<bits/stdc++.h>
using namespace std;

int fact(int n){

    int fa =1;

    for(int i=1; i<=n; i++){
        fa *= i;
    }
    return fa;

}

int main(){

    int n, m, p ,e;

    cin >>n >>m >> p >> e;

    int pen = fact(n) / (fact(p) * fact(n-p));
    int era = fact(m) / (fact(e) * fact(m-e));


    cout << pen*era << endl;

    return 0;
}

