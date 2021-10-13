#include<bits/stdc++.h>
using namespace std;

int MileageCar(int speed){

    int s = speed;

    if(s > 0 && s <=10){
        return 30;
    }
    if(s > 10 && s <=20){
        return 40;
    }
    if(s > 20 && s <=30){
        return 35;
    }
    if(s > 30){
        return 32;
    }
    
    return 0;

}

int main(){

    int n;
    cin >> n;

    cout << MileageCar(n);


    return 0;
}