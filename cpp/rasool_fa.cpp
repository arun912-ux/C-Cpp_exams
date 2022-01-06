#include<bits/stdc++.h>
using namespace std;

int main(){

    int ar[]={50,20,10,5,2,1};

    int siz = 6;
    float coincnt=0;

    for(int j=1; j<100; j++){
       
        int n = j;
        int jcnt=0;
        
        for (int i = 0; i < siz; i++)
        {
            jcnt+= n/ar[i];
            n=n%ar[i];
        
        }

        coincnt+=jcnt;
    }
    
    
    printf("%0.1f", coincnt/99);

    return 0;
}
