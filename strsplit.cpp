#include <bits/stdc++.h>
using namespace std;

int main(){


    string s;
    cin >> s;

    int n;
    cin >> n;

    string arr[n];

    for (int i=0; i<n; i++){
        arr[i] = s.substr(i, s.length()/n);
    }

    return 0;
}