
#include<bits/stdc++.h>
using namespace std;

long playlist(vector<int> songs){

    int cnt=0;
    int n = songs.size();
    // cout << n;
    int arr[n];

    for(int i=0; i<n; i++){
        arr[i] = songs.at(i);
        // cout << arr[i];
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
           int x = arr[i] + arr[j];
           if(x%60==0){
                cnt++;
           }
        }
    }

    return cnt;
}



int main(){

    int n;
    cin >> n;
    
    // int arr[n];
    vector<int> songs;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        // arr[i]= x;
        songs.push_back(x);
    }


    cout << playlist(songs);

    // int cnt=0;
    
    // for(int i=0; i<n-1; i++){
    //     for(int j=i+1; j<n; j++){
    //        int x = arr[i] + arr[j];
    //        if(x%60==0){
    //             cnt++;
    //        }
    //     }
    // }

    // cout << cnt;

    return 0;

}


