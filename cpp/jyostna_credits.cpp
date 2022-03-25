#include<bits/stdc++.h>
using namespace std;

int maxPairs(int input1, int input2[], int input3, int input4[]){

    int cnt=0;
    int n = input1;
    int m = input3;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
           if(input4[i]>input2[j]){
               cnt++;
           }
        }
    }


    return cnt;
}



int main(){

    int n,m;
    cin >> m;
    int s[m];
    for(int i=0; i<m; i++){
       cin >> s[i];
    }
    cin >> n;
    int st[n];
    for(int i=0; i<n; i++){
        cin >> st[i]; 
    }

    cout << maxPairs(m,s,n,st);

    return 0;
}