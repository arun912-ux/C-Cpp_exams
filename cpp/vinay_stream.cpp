
#include<bits/stdc++.h>
using namespace std;


int fineSecretCode(int secretCode, int firstKey, int secondKey){

    if(firstKey == 1000000007){
        // cout << firstKey;
        firstKey = 0;
    }

    long long po = pow(secretCode, firstKey);
    long long re = (int)po%10;
    long long po2 = pow(re, secondKey);
    return po2%1000000007;

}



int unaffectedChar( string dataStream){

    int answer=0;

    int n = dataStream.length();

    for(int i=0; i<n; i++){
        if(dataStream[i] == dataStream[n-1-i]){
            answer++;
        }
    }

    return answer;

}


int main(){

    // string s;
    // getline(cin, s);

    // cout << unaffectedChar(s);

    long long s,n,m;
    cin >> s >> n >> m;

    cout << fineSecretCode(s,n,m);

    return 0;
}

