#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n){

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;

}

int main(){

    long int n, h;
    cin >> n >> h;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // printArr(arr, n);

    long int x, opCnt=0;
    vector<long int> v;
    while(cin >>x && x!=0){
        opCnt++;
        v.push_back(x);
    }
    long int ops[opCnt];

    for(long int i=0; i<opCnt; i++){
        ops[i]= v.at(i);
    }

    // cout << opCnt << endl;
    bool pick=false, drop=true;
    for(long int i=0, mov=0; i<opCnt; i++){

        // 1 : Move left
        // 2 : Move right
        // 3 : Pick up box
        // 4 : Drop box
        // 0 : Quit

        switch(ops[i]){

            case 0: return 0;break;

            case 1: if(mov!=0){
                        mov--;
                    }
                    // cout << "Left   idx: " << mov << endl; 
                    break;

            case 2: if(mov!=n-1){
                        mov++;
                    }
                    // cout << "Right   idx: " << mov << endl; 
                    break;

            case 3: if(arr[mov]!=0 && drop && !pick){
                        arr[mov]--;
                        pick=true; drop=false;
                    }
                    // cout << "Pick   idx: " << mov << endl; 
                    break;

            case 4: if(arr[mov]<h && pick && !drop){
                        arr[mov]++;
                        pick = false; drop = true;
                    }
                    // cout << "Drop   idx: " << mov << endl; 
                    break;


        }


        // printArr(arr, n);



    }

    printArr(arr, n);

    return 0;
}