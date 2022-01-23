
#include<bits/stdc++.h>
using namespace std;

int main(){

    int m,n;
    cin >> m >> n;

    int ar[m][n];

    for(int i=0; i<m; i++){
       for(int j=0; j<n; j++){
          cin >> ar[i][j];
       }
    }


    int minar[m];
    int maxar[n];

    // int mx;

    for(int i=0; i<m; i++){
        int mn=999;
        for(int j=0; j<n; j++){
           mn = mn<ar[i][j]?mn:ar[i][j];
        }
        minar[i] = mn;
        cout << mn << " ";
    }

    cout << endl;

    for(int i=0; i<n; i++){
        int mx=-999;
        for(int j=0; j<m; j++){
            mx = mx>ar[j][i]?mx:ar[j][i];
        }
        maxar[i] = mx;
        cout << mx << " ";
    }


    cout << endl;

    bool flag=true;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){

            if(maxar[i]==minar[j] && flag){
                cout << maxar[i];
                flag=false;
            }
           
        }
    }


    if(flag){
        cout << -1;
    }



    return 0;
}


