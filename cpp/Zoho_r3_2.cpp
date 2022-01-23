
#include<bits/stdc++.h>
using namespace std;

void print(int ar[], int n){
    for(int i=0; i<n; i++){
        cout << ar[i] << " ";
    }
    cout << endl;
}

int main(){

    int n;
    cin >> n;

    int ar[n];

    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    int oa=n-1,za=n-1;

    for(int i=n-1; i>=0; i--){

        if(ar[i]==0){
            za=max(i,za);

            int j=za;
            while(ar[j]==0){
                za=j;
                j++;
            }

        }else{
            oa=i;
            // swap oa za
            int t = ar[oa];
            ar[oa]=ar[za];
            ar[za]=t;
            za=oa;
            // print(ar,n);
            
        }

    }
    print(ar,n);

    return 0;
}


