#include<bits/stdc++.h>
using namespace std;

int main(){

    long int n;
    long long diff;
    cin >> n >> diff;
    
    long int arr[n];

    for(long int i=0; i<n; i++){
        cin >> arr[i];
    }

    long int cnt=0;

    for(long int i=0; i<n-1; i++){
        for(long int j=i+1; j<n; j++){

            if(abs(arr[i]-arr[j]) >= diff){
                cnt++;
                // cout << cnt << endl;
            }

        }
    }

    cout << cnt << endl;

    

    return 0;
}