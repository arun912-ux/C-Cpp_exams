#include<bits/stdc++.h>
// using namespace std;

int CheckValueRange(int x, int y, int z){

    if(x<y){
        return 1;
    }
    if(x >= y && x <= z)
        return 0;
    
    if (x > z){
        return -1;
    }

    return 0;

}


int MinimumSum(int arr[], int length){

    int n = length;
    int sum=0, minSum=9999;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){

            sum = abs(arr[i]+arr[j]);
            minSum = minSum>sum?sum:minSum;
            std::cout << minSum << " ";

        }
    }

    return minSum;

}



int main(){

    int arr[] = {-3, 1, 2, -4, 8, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::cout << MinimumSum(arr, n);

    // cout << CheckValueRange(-1, 0, 5);

    return 0;
}