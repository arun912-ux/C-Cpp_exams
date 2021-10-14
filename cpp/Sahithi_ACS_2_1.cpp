#include<bits/stdc++.h>
using namespace std;

#define rep(i0, n, ii) for(int i=i0; i<n; i+=ii)

int main(){

    // int n;
    // cin >> n;

    int arr[] = {14, 102, 16, 19, 200, 20, 62, 76, 93, 37, 80};
    int s[] = {6,1,3,0,4,5,2,9,8,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    
    // sort(arr, arr+n, greater<int>());
    // sort(arr, arr+n);

    // for(int i=0; i<n; i++)
    //     cout << arr[i] << " ";

    cout << endl;

    rep(0,n,1){

        int idx = s[i];
        cout << arr[idx] << " ";

    }


    return 0;
}


