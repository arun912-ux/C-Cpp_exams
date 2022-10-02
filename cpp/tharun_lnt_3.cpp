
#include<bits/stdc++.h>
using namespace std;


vector<int> stateOfCells(vector<int> cell, int days){

    vector<int> a = cell;
    int n = days;
    int i,m=8;
    vector<int> b;
   
   while(n--){
  
    if(a[1]==0)
        b.assign(1,0);
    else
        b.assign(1,1);
    
    for(i=1;i<m-1;i++){
        int x = a[i-1] ^ a[i+1];
        b.push_back(x);
        
    }
    
    int temp;
    if(a[m-2]==0)
        temp=0;
    else
        temp=1;
        b.push_back(temp);
        a=b;
   } 
   
   return b;

}


int main(){

    int n;
    cin >> n;
    vector<int> v;

    for(int i=0; i<n; i++){
       int x;
       cin >> x;
       v.push_back(x);
    }
    int d;
    cin >> d;

    v= stateOfCells(v, d);

    for(int i=0; i<n; i++){
        cout << v.at(i) << " ";
    }
    return 0;
}