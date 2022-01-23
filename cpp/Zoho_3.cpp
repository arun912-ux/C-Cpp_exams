#include<bits/stdc++.h>
using namespace std;

// no additional array
// no sorting

int main(){

    int n;
    cin >> n;

    int ar[n];

    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    int od= 999;
    int ev = -999;

    for(int i=0; i<n; i++){
        if(ar[i]%2==0){
            ev = ev>ar[i]? ev: ar[i];
        }else{
            od = od<ar[i]? od: ar[i];
        }
    }

    // cout << ev << " " << od;
    int mev=-9999, mod=9999;

    for(int i=0; i<n; i++){
       if(ar[i]%2==0){
           if(ar[i]!=ev)
                mev = mev>ar[i]? mev: ar[i];
        }else{
            if(ar[i]!=od)
                mod = mod<ar[i]? mod: ar[i];
        }
    }

    // cout << mev << " " << mod;
    if(mev!=-9999){
        cout << "Second largest even number : " << mev << endl;
    }else{
        cout << "No Second largest even number available" << endl;
    }
    if(mod!=9999){
        cout << "Second smallest odd number : " << mod << endl;
    }else{
        cout << "No Second smallest odd number available" << endl;
    }


    return 0;
}