
#include<stdio.h>

int SumNumbersDivisible(int m, int n){

    int ret=0;

    for(int i=m; i<=n; i++){
        if(i%3==0 && i%5==0){
            ret+=i;
        }
    }
    
    return ret;

}


int main(){

    int m, n;
    scanf("%d%d", &m, &n);

    int p = SumNumbersDivisible(m,n);
    printf("%d", p);

    return 0;
}