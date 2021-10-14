
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];


    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int st = 0, fi = 0;
    int sum=0, maxsum=0;

   
    for(int i=1; i<n; i++){

        if(arr[fi] < arr[i]){
            fi++;
        }else{
            sum=0;
            for(int j=st; j<=fi; j++ ){
                sum+=arr[j];
            }

            maxsum = max(maxsum, sum);
            fi++;
            st=fi;
        }

    }

    sum=0;
    for(int j=st; j<=fi; j++ ){
        sum+=arr[j];
    }

    maxsum = max(maxsum, sum);
    fi++;
    st=fi;

    cout << maxsum << endl;
    return 0;
}