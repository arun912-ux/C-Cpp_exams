
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     string n;
//     cin >> n;
//     int arr[10];

//     for(int i=0; i<10; i++){
//        cin >> arr[i];
//     }

//     int len = n.length();

//     int res=0;
//     for(int i=0; i<len; i++){
//         int x = n[i] - '0';
//         int ch = arr[x];
        
//         int s = ch > x? ch : x;
//         res = res*10 + s;
//     }

//     cout << res;


//     return 0;
// }




// #include<stdio.h>

// int main(){

//     int b = 1;

//     for(int i=0; i<7; i++){
//         b = !b;
//         int x = b;
//        for(int j=i; j<7; j++){
//           printf("%d ", x);
//             x = !x;
//        }
//        printf("\n");
//     }

// }




#include <stdio.h>

int main(){

    int n,k;
    scanf("%d", &n);

    int ar[30];

    for(int i=0; i<n; i++){
       scanf("%d", &ar[i]);
    }

    scanf("%d", &k);

    // int idx=0;
    // int res[2];
    for(int i=0; i<n-1; i++){
       for(int j=i+1; j<n; j++){
          if(ar[i]+ ar[j] == k){
            printf("[%d, %d]", i,j);
          }
       }
    }

    return 0;
}







































