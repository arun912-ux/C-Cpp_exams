




// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     cout << n/2;


//     return 0;
// }






#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, x, y;
    cin >> n >> x >> y;
    int ar[n];

    for(int i=0; i<n; i++){
       cin >> ar[i];
    }


    if(y==-1){
        cout  << "Yes";
    }
    else{
        cout << "No";

    }

    return 0;
}









// #include<bits/stdc++.h>
// using namespace std;


// int main(){

//     int n;
//     cin >> n;

//     int ar[n];
    
//     for(int i=0; i<n; i++){
//        cin >> ar[i];
//     }

//     int  c = 0, i=0;

//     while(i<n){
//         i += ar[i];
//         // cout << i << endl;
//         c++;
//     }

//     if(i < n-1){
//         c+=1;
//     }

//     cout << c-1;


//     return 0;
// }



