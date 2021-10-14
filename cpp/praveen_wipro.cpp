
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int odd = 0, even = 0;
    if(n%2!=0){
        odd = n/2 + 1;
        even = n/2;
    }else{
        odd = even = n/2;
    }
    
    int odar[odd], evar[even];
    int e=0, o=0;
    for(int i=0; i<n; i++){

        if(i%2==0){
            evar[e++]=arr[i];
        }
        else{
            odar[o++]=arr[i];
        }

    }

    sort(odar, odar+odd); sort(evar, evar+even);

    for(int i=0; i<even; i++){
        cout << evar[i] << " ";
    }
    for(int i=0; i<odd; i++){
        cout << odar[i] << " ";
    }
    
    return 0;
}