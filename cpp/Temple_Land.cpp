#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        bool flag=true;
        
        int arr[n];
        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            // cout << arr[i] << " ";
        }

        if(n%2 == 0){
            cout << "no" << endl;
            continue;
        }
        else{

            for(int i=0; i<n/2; i++){
                if(!(arr[i] == arr[n-1-i]  &&  arr[i]==i+1)){
                    flag = false;
                }
            }
            
            if(!flag)
                cout << "no" << endl;
            else
                cout << "yes" << endl;
        }
 
    }
    

    return 0;
}