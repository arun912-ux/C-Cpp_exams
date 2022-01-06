#include<bits/stdc++.h>
using namespace std;

int main(){

    int n1,n2;
    int X[20]={0}, H[20]={0};
    cin >> n1;

    for(int i=0; i<n1; i++){
        cin >> X[i]; 
    }
    cin >> n2;
    for(int i=0; i<n2; i++){
        cin >> H[i]; 
    }

    int Y[20][20]={0};

    int n=max(n1,n2);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           Y[i][j] = X[j]*H[i]; 
        //    cout << Y[i][j] << "  ";
        }
        cout << endl;
    }

    int sum[20]={0};

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           sum[i+j] += Y[i][j];
        }
        
    }
    cout << endl << endl;
    for(int i=0; i<n1+n2-1; i++){
            cout << sum[i] << " ";   
    }

    // circular
    int csum[20]={0};
    for(int i=0; i<n1+n2-1; i++){
        csum[i%n] += sum[i];
    }

    cout << endl;
    for(int i=0; i<n; i++){
        cout << csum[i] << " ";
    }


    return 0;
}