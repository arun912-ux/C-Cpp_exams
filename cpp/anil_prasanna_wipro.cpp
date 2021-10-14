#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    // Corner case
    if (n <= 1){
        return false;
    }
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

int main(){

    int n;
    cin >> n;
    int arr[n];
    int co[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int j=0, k=0;
    for(int i=0; i<n; i++){

        if(isprime(arr[i])){
            cout << arr[i] << " ";
        }else{
            co[k++]=arr[i];
        }

    }

    for(int i=0; i<k; i++){
        cout << co[i] << " ";
    }

    return 0;
}

