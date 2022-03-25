#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

int fun(char **p){

    char *t;
    t = (p += sizeof(int))[-1];
    cout << t;

}

int main(){

    char *argv[] = {"ab", "cd", "ef", "gh", "ij", "kl"};
    fun(argv);

    return 0;
}





