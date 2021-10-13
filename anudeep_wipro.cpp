#include<bits/stdc++.h>
using namespace std;

int main(){

    int k;
    cin >> k;
    string st;
    cin >> st;

    int n = st.length();

    for (int i=0; i<n; i++){
        st[i] += k;
    }

    cout << st << endl;

    return 0;
}

