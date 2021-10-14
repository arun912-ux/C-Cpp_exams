#include<bits/stdc++.h>
using namespace std;

int main(){

    int input1;
    cin >> input1;

    int input2[input1];

    for (int i = 0; i < input1; i++)
    {
        cin >> input2[i];
    }

    int input3;
    cin >> input3;
    int input4[input3];

    for (int i = 0; i < input3; i++)
    {
        cin >> input4[i];
    }

    int cnt=0;

    for(int i=0; i<input3; i++){

        for(int j=0; j<input1; j++){

            if(input4[i] >= input2[j]){
                cnt++;
            }

        }


    }

    return cnt;
    
    
    cout << cnt;

    return 0;
}