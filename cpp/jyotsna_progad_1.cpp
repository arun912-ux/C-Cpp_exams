

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1, s2;
    cin >> s1 >> s2;

    if(s1[0]==s2[1] && s1[1]==s2[0]){
        cout << "true";
    }else{
        cout << "false";
    }


    return 0;
}

