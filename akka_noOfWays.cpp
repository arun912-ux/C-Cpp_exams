#include<bits/stdc++.h>
using namespace std;

vector<long> noOfWays(vector<vector<int>> quiries){

    int len = quiries.capacity();
    cout << len << endl;
    int sum=0;

    for(int i=0; i<len; i++){

            while(quiries[i][0]!=0 && quiries[i][1]!=0){
                sum = sum + (quiries[i].at(1))*(quiries[i].at(0));
                quiries[i].assign(0, quiries[i].at(0));quiries[i].assign(1, quiries[i].at(1));
            }
        
    }
            cout << sum << endl;       


    return (vector<long>){1,2};
}

int main(){

    int m,n;
    // cin >> m >> n;

    vector<vector<int>> v;
    v = {{2, 1}, {2,3}};

    noOfWays(v);

    return 0;
}