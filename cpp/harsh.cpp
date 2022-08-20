#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    string s1, s2;

    cin >> s1 >> s2;

    bool flag = false;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(s1[i] == s2[j]){
                flag = true;
                break;
            }
           
        }
    }

    if(!flag){
        cout << "-1";
        return 0;
    }

    int cnt=0;
    for(int i=0; i<n; i++){
        
        if(s1[i] != s2[i]){
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}