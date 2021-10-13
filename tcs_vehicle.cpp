#include<bits/stdc++.h>
using namespace std;

int main(){

    /*
    1. Read the input from the user.
    2. Calculate the value of FW and TW.
    3. Print the result.
    */
   
    int v,w;
    cin >> v >> w;

    int f, t;

    f = (w-2*v)/2;
    t = v- f;

    cout << "TW=" << t << " " << "FW=" << f << endl;


    return 0;

}
