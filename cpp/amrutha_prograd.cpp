
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int ar[n];
    bool flag = true;

    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    int k;
    cin >> k;

    int x=ar[0], cnt=0;
    int f=x;

    for(int i=0; i<n; i++){

        cout << x << " ";

        if(ar[i]==x){
            x=!x;
            continue;
        }else{
            x=!x;
            if(i%2==0 )
                cnt++;
            if(i%2!=0) 
               flag=false;
        }
    }

    cout << "\n" << flag << " " << cnt << endl;

    if(k<=cnt && flag){
        cout << "true";
    }else{
        cout << "false";
    }

    return 0;
}




