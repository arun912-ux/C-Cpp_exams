
#include<bits/stdc++.h>
using namespace std;

int stockPairs(int stocksProfit[],int target, int n){
    sort(stocksProfit, stocksProfit+n);
    int low = 0, high = n-1; 
    int pairs = 0; 
    while(low < high){ 
        if(stocksProfit[low] + stocksProfit[high] == target){
            pairs += 1;
            low += 1; 
            high -=1;
        }
        else if(stocksProfit[low] + stocksProfit[high] < target){
            low += 1; 
        }
        else{
            high -= 1; 
        }
    }
    return pairs; 
}

int main(){
    int target = 12; 
    int stocksProfit[] = {5,7,9,13,11,6,6,3,3}; 
    int n = sizeof(stocksProfit)/sizeof(stocksProfit[0]); 
    cout<<stockPairs(stocksProfit, target, n)<<endl; 
}

