#include<bits/stdc++.h>
using namespace std;

vector<int> maxRevenue(vector<vector<int> > salesRecord){

    vector<int> ans;
    int d = salesRecord.size();
    int n = salesRecord.at(0).size();

    for(int i=0; i<d; i++){
       int mx=-999;
       for(int j=0; j<n; j++){
            int x = salesRecord.at(i).at(j);
            mx = mx>x? mx: x;  
       }
       ans.push_back(mx);
    }

    return ans;
}







int main(){

    int d,n;
    cin >> d >> n;

    vector<vector<int> > dd;
    for(int i=0; i<d; i++){
        vector<int> v;
       for(int i=0; i<n; i++){
            int x;
            cin >> x;
            v.push_back(x);
       }
       dd.push_back(v);
    }

    vector<int> vv;
    maxRevenue(dd);

    

    return 0;
}