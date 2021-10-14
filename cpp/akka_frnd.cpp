#include<bits/stdc++.h>
using namespace std;

/*void printARR(int ar[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << ' ';
    }
    cout << endl;
    
}*/

int main(){

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int cnt = 0;

    for(int i=0; i<n; i++){

        if(arr[i] == 1){
            continue;
        }else{
            for(int j=i; j<n-1; j++){
                arr[j] = !arr[j];
            }

            cnt++;
        }

    }

    cout << cnt;

    return 0;

}

