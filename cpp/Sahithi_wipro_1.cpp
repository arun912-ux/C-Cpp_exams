#include<bits/stdc++.h>
using namespace std;

int main(){

    string st;
    cin >> st;

    int n = st.length();

    int mx = INT_MIN, mn = INT_MAX;
    for(int i=0; i<n;i++){
        int num = st[i];
        mn = min(mn, num);
        mx = max(mx, num);
    }

    cout << mn+mx << endl;

    return 0;
}

