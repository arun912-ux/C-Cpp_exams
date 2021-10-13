
#include <bits/stdc++.h>
using namespace std;

int main(){

    string st;
    cin >> st;

    int n = st.length();
    bool flag = true;

    for (int i = 0; i < n; i++){
        if (!isalpha(st[i])){
            flag = false;
        }
    }

    for (int i = 0; i < n; i++){
        if (st[i] != st[n - i - 1]){
            flag = false;
        }
    }

    if (flag){
        cout << "you inputted a strong string";
    }
    else{
        cout << "you inputted a weak string";
    }

    return 0;
}
