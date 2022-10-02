
// #include<iostream>
// using namespace std;

// int main(){

//     int n, k;
//     cin >> n >> k;
    
//     int ar[n];

//     for(int i=0; i<n; i++){
//         cin >> ar[i];
//     }

//     int omin = 99;

//     for(int i=0; i<n; i++){
//         int mx = 0;
//         for(int j=i; j<=k; j++){
//            mx = ar[j]>mx ? ar[j] : mx;
//            cout << "mx" << mx << "\n";
//         }
//         if(mx != 0)
//             omin = omin < mx? omin : mx;
//         cout << "omen" << omin<< "\n" ;

//     }

//     cout << ar[k];
//     cout << "\n" << omin;


//     return 0;
// }



#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int ar[n];

    for(int i=0; i<n; i++){
       cin >> ar[i];
    }

    for(int i=0; i<n; i++){
       int x = ar[i];

    //    cout << "\n\n" << x << endl;

        int fsteps = 0;
        for(int j=i+1; j<n; j++){
           if(ar[j] > ar[i]){
                fsteps++;
                break;
           }else{
                fsteps++;
           }
           if(j==n-1){
            fsteps = 0;
           }
        }
        

        // cout << fsteps*2 << endl;;

        int bsteps=0;
        for(int j=i-1; j>=0; j--){
           if(ar[j] > ar[i]){
                bsteps++;
                break;
           }else{
            bsteps++;
           }
           if(j==0){
                bsteps = 0;
           }
        }
        
        int ms = 0;
        ms = fsteps < bsteps ? 
                    (fsteps==0? bsteps : fsteps) : 
                    (bsteps==0? fsteps : bsteps) ;

        // cout << bsteps*2 << endl;
        cout << ms*2 << " ";

    }


    return 0;
}

