// #include<bits/stdc++.h>
#include<iostream>
// using namespace std;


int GetNextSeriesElements(int input1, int input2[]){

    int n = input1, serchk=-999, num=0;
    
    int x = input2[n-1] - input2[n-2];
    int y = input2[n-2] - input2[n-3];

    int a = input2[n-1] / input2[n-2];
    int b = input2[n-2] / input2[n-3];

    if(x == y)
    {
        return input2[n-1]+x;
    }
    else if(input2[n-3] == x)
    {
        return input2[n-1] + input2[n-2];
    }
    else if(a==b)
    {
        return input2[n-1]*a;
    }

    return serchk;
}


int training(int input1){

    int n = input1;

    int ar[n];

    for(int i=0; i<3; i++){
        ar[i]=i+1;
    }

    for(int i=3; i<n; i++){
        ar[i] = ar[i-1] + ar[i-2] + ar[i-3];
    }

    return ar[n-1];
}




int main(){

    int n;
    std::cin >> n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     std::cin >> arr[i];
    // }

    // std::cout << GetNextSeriesElements(n, arr);

    std::cout << training(n);

    return 0;
}
