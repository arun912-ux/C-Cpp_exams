// Question 1 : C++

#include<bits/stdc++.h>
using namespace std;

int main(){

    int input1, input2;
    cin >> input1 >> input2;
    int remainder=0, result=0;

    while(input1!=0){

        remainder = input1%input2;
        input1 = input1/input2;
        result = result*10+remainder;

    }
    string st = to_string(result);
    reverse(st.begin(), st.end());
    cout << st << endl;

    return 0;
}

