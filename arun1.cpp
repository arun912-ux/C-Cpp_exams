#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, evenSum=0, oddSum=0;
    
    string st;
    cin >> st;

    n = st.length();

    for(int i=0; i<n; i++){
        if(i%2==0){
            evenSum+= st[i]-'0';
        }else{
            oddSum += st[i]-'0';
        }
    }

    cout << oddSum-evenSum;

    return 0;
}