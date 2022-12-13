#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

int main(){

    string s1, s2;
    cin>> s1 >> s2;

    int n = s1.length();

    int mn=0, mx=0;
    for(int i=0; i<n; i++){
        if(s1[i]=='?' && s2[i]=='?'){
            mx++;
        }
        else if(s1[i]=='?' || s2[i]=='?'){
            mn+=0;
            mx++;
        }else{
            mn += abs(s1[i]-s2[i]);
            mx += abs(s1[i]-s2[i]);
        }
    }

    cout << mn << " " << mx;


    return 0;
}

