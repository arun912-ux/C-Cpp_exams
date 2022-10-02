

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Interval {
    int s, e;
};

bool mycomp(Interval a, Interval b) {
     return a.s < b.s; 
}

int busRemaining(vector<vector<int>> busStation){

    int cnt=0;

    int n = busStation.size();
    Interval arr[n];

    for(int i=0; i<n; i++){
        arr[i].s = busStation.at(i)[0];
        arr[i].e = busStation.at(i)[1];
    }

    sort(arr, arr + n, mycomp);
 
    int index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[index].e >= arr[i].s) {
            arr[index].e = max(arr[index].e, arr[i].e);
        }
        else {
            index++;
            arr[index] = arr[i];
        }
    }
 
    // Now arr[0..index-1] stores the merged Intervals
    // cout << "\n The Merged Intervals are: ";
    // for (int i = 0; i <= index; i++)
    //     cout << "[" << arr[i].s << ", " << arr[i].e << "] ";

    return index+1;

}


int main(){

    int n,m;
    cin >> n >> m;

    vector<vector<int>> bs ;

    for(int i=0; i<n; i++){
        vector<int> t;
       for(int j=0; j<m; j++){
          int x;
          cin>> x;
          t.push_back(x);
       }
       bs.push_back(t);
    }

    cout << busRemaining(bs);


    return 0;
}