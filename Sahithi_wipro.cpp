#include<bits/stdc++.h>
using namespace std;

int main(){

    string st;
    cin >> st;

    int n = st.length();
    int mn = INT_MAX;

    for(int i=0; i<n; i++){

        int num = st[i] - '0';
        mn = min(mn, num);

    }

    cout << mn << endl;

    return 0;
}

