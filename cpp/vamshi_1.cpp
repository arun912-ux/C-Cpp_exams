#include<bits/stdc++.h>
using namespace std;

int profit(int input1, int input2[], int input3[], int input4, int input5){

    int profit = 0;
    int n = input1;
    int aMax = input4;
    int bMax = input5;
    int aRun=0, bRun=0;

    for(int i=0; i<n; i++){

        int aCur=0, bCur=0;
       if(aRun < aMax){
            aCur = input2[i];
       }
       if(bRun < bMax){
            bCur = input3[i];
       }

        if(aCur >= bCur){
            profit += aCur;
            aRun++;
        }
        if(bCur > aCur){
            profit += bCur;
            bRun++;
        }

        // cout << profit << endl;

    }

    return profit;
}



int main(){

    int n;
    cin >> n;

    int a[n];
    int b[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    int a1, b1;
    cin >> a1 >> b1;

    cout << profit(n, a, b, a1, b1);

    return 0;
}