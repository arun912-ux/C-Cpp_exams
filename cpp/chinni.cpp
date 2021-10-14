#include<bits/stdc++.h>
using namespace std;


int main(){

    string n;
    cin >> n;
    int cnt=0;
    for(int i=0; i<n.length(); i++){
        for(int j=i; j<=n.length(); ++j){
            string str =  n.substr(i, j);
            stringstream s1(str);
            int x;
            s1 >> x;

            if(x%2==0 ){
                cnt++;
            }

            cout << x << " " << i << " " << j << endl;
        }
    }

 
    cout << cnt << endl;

    return 0;
}


