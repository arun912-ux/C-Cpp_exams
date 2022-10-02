#include<bits/stdc++.h>
// #include<iostream>
using namespace std;


int minProject(vector<int> errorScore, int comP, int othQ){

    vector<int> es = errorScore;

    if(comP == 3 && othQ == 1){
        // return 5;
    }

    int cc = 9;
    int ret = 0;
    int n = es.size();

    while(cc != 0)
    for(int i=0; i<n; i++){

        cc = 0;
        for(int k=0; k<n; k++){
            cc += es[k];
        }

        if(cc==0){
            return ret;
        }

        ret++;
        for(int j=0; j<n; j++){
           
            if(j!=i){
                es[j] -= othQ;
                es[j] = es[j] < 0 ? 0 : es[j];
            }else{
                es[i] -= comP;
                es[i] = es[i] < 0 ? 0: es[i];
            }

            cout << es[j] << " ";

        }
        cout << "\n";

    }
    return ret;
}


int main(){

    int n;
    cin >> n;

    vector<int> v;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    int p, q;
    cin >> p >> q;

    cout << minProject(v, p, q);

    return 0;
}