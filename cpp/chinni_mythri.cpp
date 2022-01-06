#include<bits/stdc++.h>
using namespace std;

int main(){

    int h,m;
    scanf("%d:%d", &h,&m);

    float angle = (30*h)-((11*m)/2.0);

    angle  = angle>180.0? 360-angle: angle;
    angle  = angle<0? 360+angle: angle;
    
    printf("%0.1f", angle);


    return 0;
}

