

#include<bits/stdc++.h>
using namespace std;

int missingMarble(int input1, int input2[]){

    int n = input1;
    int sum = input2[0] + input2[n-1];
    // cout <<sum;
    int i=0;
    for(i=0; i<n; i++){
        if(input2[i] + input2[n-i-1] != sum){
            break;
        }
    }

    // cout << i;

    return sum - input2[i];

}




int main(){

    int n;
    cin >> n;
    
    int ar[n];

    for(int i=0; i<n; i++){
       cin >> ar[i];
    }

    cout <<  missingMarble(n, ar);

    return 0;
}


