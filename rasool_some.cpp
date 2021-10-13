#include<bits/stdc++.h>
using namespace std;

void drawPrintPattern(int num){

    int i,j,print=1;

    for(int i=1; i<=num; i++){
        for(int j=1; j<=2*i; j++){
            printf("%d ", print);
        }
        printf("\n");
    }

}



int main(){

    int n;
    cin >> n;

    drawPrintPattern(n);

    return 0;
}