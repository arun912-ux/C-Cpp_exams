#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);
    
    int sum=0, revsum=0;
    int sumarr[n], revsumarr[n];

    for (int i=0; i<n; i++){
        sum+=arr[i];
        sumarr[i] = sum;
    }

    for (int i=n-1,j=0; i>=0; i--, j++){
        revsum+=arr[i];
        revsumarr[j] = revsum;
    }

    for(int i=0; i<n-1; i++){
        for (int j=0; j<n-1; j++){
            if (sumarr[i] == revsumarr[j]){
                cout  << "TRUE" << endl;
                return 0;
            }
        }
    }

    cout << "FALSE" << endl;

    return 0;
}
