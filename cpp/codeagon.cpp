
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, sm=0, cnt=0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        double d = log2(arr[i]);
        if(d == (int)(d)){
            cnt++;
            sm += arr[i];
        }
    }
    
    


    cout << cnt << endl;
    cout << sm;

    return 0;
}

