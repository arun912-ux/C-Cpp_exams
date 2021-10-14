#include<bits/stdc++.h>
using namespace std;

int CheckValueInRange(int x, int y, int z){

    if(x < y)
        return 1;
    if(x >=y && x <=z)
        return 0;
    if(x >z)
        return -1;

    return 0;

}


int main(){

    

    cout << CheckValueInRange(-1, 0, 5);


    return 0;
}

