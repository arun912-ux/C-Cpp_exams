#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, count=0;
    cin >> n;

    int arr[n], a[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
        a[i]=arr[i];
    }

    sort(arr, arr+n);

    for(int i=0; i<n; i++){
        if(a[i]==arr[i]){
            count++;
        }
    }

    cout << count;
    


    return 0;
}
