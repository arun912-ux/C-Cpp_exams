#include<bits/stdc++.h>
using namespace std;

void printDec(string st){

    string st;
    cin >> st;

    int n = st.length();

    for(int i=0; i<n; i+=2){

        if(i+1 < n){
            char ch = st[i];
            st[i] = st[i+1];
            st[i+1]=ch;

        }

    }


    cout << st << endl;
}


int main(){

    // printDec(st);

    int n, l, u;
    cin >> n >> l >> u;

    int sum=0;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(i>=l-1 && i<u){
            sum+=arr[i];
        }
    }

    cout << sum << endl;

    return 0;
    
}

