#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;

    int x, n=0;

    while(cin>>x && x != 0){
        v.push_back(x);
        n++;
    }

    int sum = 0;

    for(int i=0;i<n;i++){

        int x =  v.at(i);

        float d = sqrt(x);
        if (d == int(d)){
            sum+=d;
        }

    }

    cout << sum << endl;

    return 0;
}

