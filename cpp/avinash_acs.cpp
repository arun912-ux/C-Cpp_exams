#include<bits/stdc++.h>
using namespace std;
int main(){

    // int input1=2, input2[]={9, 9};
    int input1=5, input2[]={1, 2, 9, 9, 9};

    int cry=0;
    int idx=input1;

    input2[input1-1] += 1;
    if (input2[input1-1] == 10){
        cry = 1;
        input2[input1-1] = 0;
        idx=input1-1;
    }

    if (cry==1){

        for(int i=input1-2; i>=0; i--){

            input2[i] += cry;
            cry=0;
            if(input2[i] == 10){
                input2[i]=0;
                cry=1;
                idx=i;
            }else{
                continue;
            }

        }

    }

    cout << idx;
    // return idx;
    return 0;

}
