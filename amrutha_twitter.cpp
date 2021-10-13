#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;

    while(cin >> n && n!=0){

        int num = n;
        int dec_value = 0;
    
        // Initializing base value to 1, i.e 2^0
        int base = 1;
    
        int temp = num;
        while (temp) {
            int last_digit = temp % 10;
            temp = temp / 10;
    
            dec_value += last_digit * base;
    
            base = base * 2;
        }

        cout << (char)dec_value;
    }

    return 0;
}

