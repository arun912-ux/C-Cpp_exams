#include<bits/stdc++.h>
using namespace std;
int removeInt(int F, int La, int P, int Q, vector<int> special_integers){

    int cst=0;
    int n = pow(2,La), x=0, flag=0;
    int m = pow(2,F);
    int L=n;
    special_integers.shrink_to_fit();
    int K = special_integers.size();
    for(int i=0; i<K; i++){
        if(special_integers.at(i) <= n && special_integers.at(i)>=m){
            flag=1;
            x++;
        }
    }

    cout << m << " "  << n << " " << x << " " << K << " " << L*x*P << endl;
    if(flag)
            cst = L*x*P;
        else{
            cst = Q;
    }
    int mid = (F+La)/2;
    if(x<=1 || mid==F){
        return cst;
    }else{
        
        cst = (removeInt(F, mid, P, Q, special_integers) + removeInt(mid+1, La, P, Q, special_integers));
    }

    return cst;
}

int removeIntegers(int N, int P, int Q, vector<int> special_integers){

    int cst=0;
    cst = removeInt(0,N,P, Q, special_integers);
    return cst;

}




int main(){

    int N, P, Q, K;
    cin >> N >> P >> Q;
    int L = pow(2,N);
    cin >> K;
    int x=0, flag=0;
    int sp[K];
    vector<int> v;

    for(int i=0; i<K; i++){
        cin >> sp[i];
        v.push_back(sp[i]);
        if(sp[i] <= L){
            flag=1;
            x++;
        }
    }

    cout << removeIntegers(N, P, Q, v);


    // if(flag)
    //     cout << L*x*P;
    // else{
    //     cout << Q;
    // }


    return 0;
}

