#include<bits/stdc++.h>
// #include<iostream>
using namespace std;


// void closestNumbers(vector<int> numbers){

//     int n = numbers.size();

//     // cout << n << endl;
//     int ar[n];

//     for(int i=0; i<n; i++){
//         ar[i] = numbers.at(i);
//     }

//     sort(ar, ar+n);

//     int minSep = 999;

//     for(int i=0; i<n-1; i++){
//         int sep = ar[i+1] - ar[i];
//         minSep = sep<minSep ? sep : minSep;
//     }

//     // cout << minSep << endl;

//     for(int i=0; i<n-1; i++){
//         if(ar[i+1] - ar[i] == minSep){
//             cout << ar[i] << " " << ar[i+1] << endl;
//         }
//     }



// }





// int main(){

//     int n;
//     cin >> n;
//     int ar[n];

//     vector<int> v;
//     int x;
//     for(int i=0; i<n; i++){
//         cin >> x;
//         v.push_back(x);
//     }


//     closestNumbers(v);

//     return 0;
// }





int countHighlyProfitableMonths(vector<int> stockPrices, int k){

    int n = stockPrices.size();
    int cnt =0;
    int ar[n];
    for(int i=0; i<n; i++){
        ar[i] = stockPrices.at(i);
    }

    for(int i=0; i<n-k+1; i++){
        if(ar[i] < ar[i+1] && ar[i+1] < ar[i+2]){
            // cout << ar[i] << " " << ar[i+1] << " " << ar[i+2] << endl; 
            cnt++;
        }
    }

    return cnt;

}




int main(){

    int n;
    cin >> n;

    // int ar[n];
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    int k;
    cin >> k;

    cout << countHighlyProfitableMonths(v, k);

    return 0;
}





































