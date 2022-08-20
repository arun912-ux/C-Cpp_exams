

#include<bits/stdc++.h>
using namespace std;

int max (int a, int b){
    return a>b ? a : b;
}


int knapsack(int W, int wt[], int val[], int n){

    if(n == 0 || W==0){
        return 0;
    }  

    if(wt[n-1] > W){
        return knapsack(W, wt, val, n-1);
    }

    else{
        return max(val[n-1] + knapsack(W-wt[n-1], wt, val, n-1) , 
        knapsack(W, wt, val, n-1));
    }

}

int main(){

    int n, W;
    cin >> n >> W;
    int wt[n];
    int val[n];
    for(int i=0; i<n; i++){
       cin >> wt[i];
    }

    for(int i=0; i<n; i++){
        cin >> val[i];
    }


    cout << knapsack(W, wt, val, n);

    return 0;
}


