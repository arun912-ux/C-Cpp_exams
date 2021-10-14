#include<bits/stdc++.h>
using namespace std;

int main(){

    /*
    1. First, it takes a string from the user.
    2. Then, it counts the number of # and *.
    3. Finally, it prints the difference between the number of # and *.
    */
    char s[20];
    cin >> s;


    int n = strlen(s);
    int hcnt=0, scnt=0;

    /*
    Time Complexity: O(n)
    */
    for (int i=0; i<n; i++){
        if (s[i] == '#'){
            hcnt++;
        }
        if (s[i] == '*'){
            scnt++;
        }
    }


    cout << (scnt-hcnt)<< endl;

    return 0;
}

