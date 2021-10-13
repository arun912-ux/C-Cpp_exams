#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {-5, 9, 7, 3, -4, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;

    for(int i=0; i<n;i++){
        v.push_back(arr[i]);
    }

    vector<int> v1;
    bool flag = true;
    while (flag)
    {
        for(int i=0; i<n; i++){

            if(i%2!=0){
                v1.push_back(v.at(i));
            }
            
        }
        n/=2;
        v = v1;
        
    }
    


    return 0;
}