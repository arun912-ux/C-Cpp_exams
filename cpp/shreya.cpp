#include<bits/stdc++.h>
using namespace std;

int h=0;
// void addTo(int );
int ad[100];

void addTo(int m){

    if (h==0){
        ad[0]=m;
        h++;
        return;
    }

    for (int i=0; i<h; i++){
        if (ad[i] == m){
            return;
        }
    }

    ad[h++] = m;

}

int main(){

    int n, k;
    cin >> n >> k;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    } 


    int fs=0;    

    for (int i=0; i<n; i++){
        
        for(int j=0; j<n; j++){

            if (arr[j]+k == arr[i] || arr[j]-k == arr[i]){
                addTo(arr[j]);
            }
        }

    }

    cout << h;


    return 0;
}
