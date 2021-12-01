#include<bits/stdc++.h>
using namespace std;


int diagonalSum(int *ar, int m, int n){

    // cout << "inside function" << endl;
    // cout << m << n << endl;
    int mx = INT_MIN;
    int arr[m][n];
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            // cout << i << " " << j << " ";
            arr[i][j] =  *(ar + i*m + j);
            // cout << arr[i][j];
        }
    }

    for(int k=0; k<m; k++){
        int psm = 0;
        int ssm = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i == j+k){           // upper triangular matrix
                    psm+=arr[i][j];
                }

                if(i+j == m-1-k){       // lower triangular matrix
                    ssm+=arr[i][j];
                }
            
            }
            
        }
        // cout << psm << " " << ssm;
        // cout << endl;
        int mxx = (psm<ssm?ssm:psm);
        mx = mx<mxx? mxx: mx;

    }


    return mx;
}

int main(){

    int n,m;
    
    cin >> m >> n ;

    int ar[m][n];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> ar[i][j];
        }
    }

    cout << diagonalSum(ar[0], m, n);

    return 0;
}