#include<bits/stdc++.h>
using namespace std;

int LengthHypotenouse(int a, int b){

    return sqrt(a*a  +  b*b);


}

int CountBuildings(int arr[], int n){

    int cnt =0;

    if(n == 0){
        return -1;
    }
    
    bool flag = false;

    for(int i=1; i<n; i++){

        for(int j=i-1; j>=0; j--){

            if(arr[i] <= arr[j]){
                flag = true;
            }
        }

        if(flag){
            cnt++;
            flag = false;
        }

    }

    return n-cnt;

}




int main(){

    int a=3, b=4;

    // cout << LengthHypotenouse(a,b) << endl << endl;

    int arr[] = {4, 3, 5, 6, 4, 7, 6, 8, 3, 9};
    int n = 10;
    // int arr[] = {7,5,8,4,8};
    // int n = 5;


    cout << CountBuildings(arr, n);

    return 0;
}