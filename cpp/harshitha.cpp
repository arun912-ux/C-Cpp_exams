#include<stdio.h>

int CountBalls(int l, int b, int h, int r){

    int carea = l*b*h;
    int civo = (4)*r*r*r;
    return (carea/civo);

}

int main(){

    int r, l, b, h;

    scanf("%d %d %d %d", &l, &b, &h, &r);

    printf("%d", CountBalls(l,b,h,r));

    return 0;
}