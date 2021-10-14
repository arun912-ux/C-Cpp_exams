#include<bits/stdc++.h>


int CountBalls(int l, int b, int h, int r){

    int carea = l*b*h;
    int civo = (4)*r*r*r;
    return (carea/civo);

}

int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int r, l, b, h;

    std::cin >> l >> b >> h >> r;
    std::cout << CountBalls(l, b, h, r);

    // scanf("%d %d %d %d", &l, &b, &h, &r);
    // printf("%d", CountBalls(l,b,h,r));

    return 0;
}
