
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int ar[n];

    for(int i=0; i<n; i++){
       cin >> ar[i];
    }

    int cnt=0;

    for(int i=0; i<n-1; i++){
       for(int j=i+1; j<n; j++){

            int s = ar[i] + ar[j];
            int p = ar[i] * ar[j];

            if(s>=p){
                cnt++;
            }
          
       }
    }

    cout << cnt;

    return 0;
}



// #include<iostream>
// using namespace std;

// int main(){

//     int n, x;
//     cin >> n;

//     int ar[n];
//     cin >> x;

//     for(int i=0; i<n; i++){
//        cin >> ar[i];
//     }   

//     int cnt=0;

//     for(int i=0; i<n; i++){

//         int xr = 0;

//        for(int j=i; j<n; j++){

//             xr = xr ^ ar[j];
//             // cout << xr << endl;

//             if(xr<x){
//                 cnt++;
//             }

//        }

//     }


//     cout << cnt;
//     return 0;
// }


