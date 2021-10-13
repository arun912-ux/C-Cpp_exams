#include<bits/stdc++.h>

using namespace std;

int main(){


    int n, s;
    cin >> s;
    cin >> n;
    /*
    1. The outer for loop is iterating through all the numbers from 2 to n.
    2. The inner for loop is checking if the number is prime or not.
    3. If the number is prime, it is printed.
    4. The flag is set to true at the beginning of the program.
    5. The flag is set to false if the number is not prime.
    6. If the number is prime, the flag is set to true.
    7. If the number is not prime, the flag is set to false.
    8. If the flag is true, the number is printed.
    */
   
    bool flag = true;
    for (int i=s; i<n; i++){
       
        for (int j=2; j<i; j++){

            if (flag)

            if (i%j == 0){
                flag = false;
            }


        }
        if (flag)
            cout << i << "\t";
        flag = true;

    }

    return 0;

}