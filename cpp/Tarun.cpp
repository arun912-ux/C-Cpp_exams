#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    float sum=0;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += ((float)1/arr[i]);
    }

    
    printf("%0.2f", 1/sum);


    return 0;
}
