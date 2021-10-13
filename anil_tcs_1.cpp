#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    string s;
    cin >> s;

    int l = s.length();

    int acnt=0, bcnt=0;

    for(int i=0; i<l; i++){
        if (s[i] == 'a'){
            acnt++;
        }
        if (s[i] == 'b'){
            bcnt++;
        }

    }

    cout << acnt << " " << bcnt << endl;

    if(acnt>=n){
        cout << "Team A won" << endl;
    }else if(bcnt>=n){
        cout << "Team B won" << endl;
    }
    else if(acnt == bcnt){

    }


    return 0;
}