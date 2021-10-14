#include<bits/stdc++.h>
using namespace std;

int TimeToFill(int l, int b, int h, int r){

    return (l*b*h)/r;

}

int main(){

    cout << TimeToFill(20, 50, 70, 350);


    return 0;
}