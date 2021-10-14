#include<bits/stdc++.h>
using namespace std;


int main(){

    int x, n=0;

    vector<int> v;

    while(cin>>x && x != 0){
        v.push_back(x);
        n++;
    }

    int maxcnt=0, maxidx=0;

    for(int i=0; i<n; i++){

        int cc = int(count(v.begin(), v.end(), v.at(i)));
        if(maxcnt <= cc){
            maxcnt = cc;
            maxidx = v.at(i);
        }

    }

    if (maxcnt == 1){
        cout << -1 << endl;
        return 0;
    }
    cout << maxidx << endl;

    return 0;
}