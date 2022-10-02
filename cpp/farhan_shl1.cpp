#include<iostream>
#include<string>
#include<vector>
using namespace std;

int productsAtNegativeTemp(vector<int> temperature){

    int cnt = 0;
    int n = temperature.size();

    for(int i=0; i<n; i++) {
       int x = temperature.at(i);
       if(x<0) {
            cnt++;
       }
    }

    return cnt;

}


int isSameReflection(string word1, string word2){

    if (word1.length() != word2.length()){
        return -1;
    }
    
    string temp = word1 + word1;

    if (temp.find(word2) != string::npos){
        return 1;
    }
    return -1;
}


int main(){

    // int n;
    // cin >> n;

    // vector<int> v;

    // for(int i=0; i<n; i++){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // cout << productsAtNegativeTemp(v);

    string s1, s2;
    cin >> s1 >> s2;
    cout << isSameReflection(s1, s2);




    return 0;
}