#include<bits/stdc++.h>
using namespace std;


vector<int> funcArrange(vector<int> inputArr){

    vector<int> ret;
    int n = inputArr.size();
    for(int i=0; i<n; i++){
       int x = inputArr.at(i);
       if(x%2==0){
            ret.push_back(x);
       }
    }

    for(int i=0; i<n; i++){
       int x = inputArr.at(i);
       if(x%2!=0){
            ret.push_back(x);
       }
    }

    return ret;
}



int main(){

    int n;
    cin >> n;

    vector<int> v;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    v = funcArrange(v);
    for(int i=0; i<n; i++){
        cout << v.at(i) << " ";
    }


    return 0;
}