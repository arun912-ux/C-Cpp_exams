// #include<bits/stdc++.h>
// // #include<iostream>
// using namespace std;

// int b = 0;
// int f1(int a){
//     if(a==0){
//         b++;
//     }
//     if(a<0)
//         return 0;
//     else
//         return (a*a*a) + (f1(a-1) * f1(a-1)* f1(a-1));
// }


// int main(){

//     int n;
//     // cin >> n;

//     f1(7);
//     cout << b;


//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;


// int f1(int a){
//     if(a==0)
//         return 1;
//     else if(a==1)
//         return 0;
//     else if(a < 6)
//         return f1(a-1) + a;
//     else 
//         return a*f1(a-1);
// }


int f1(int a){
    if(a<0)
        return 0;
    else
        return (a*a) + (f1(a-1)*f1(a-1));
}

int main(){

    // int z,x=5,y=-10,a=4,b=2;

    // z = x++ - --y * b/a;
    // cout << z;

    // int *p=new int;
    // *p = 5;
    // int k = *p;
    // cout << k <<endl;
    // cout << f1(8);

    // vector<int> v;
    // int n=1000;
    // for(int i=0; i<n; i++){
    //     if(i%2==0)
    //         v.push_back(i);
    //     if(i%2==0 && i%3==0){
    //         v.push_back(2*i);
    //         v.push_back(3*i);
    //     }
    //     else if(i%3==0){
    //         v.pop_back();
    //     }
       

    // }
    
    // cout << v.size();


    // int i=0, j=0, f=0;
    // for(int i=1; i<10000; i+=i){
    //     for(int j=2;j<=i; j*=j){
    //         f=j;
    //     }
       
    // }

    // cout << f;
    // long i = 20001000;
    // cout << i % 13 << endl;
    // cout << i / 13 << endl;
    // cout << 1538538*13 - i;

    cout << f1(4);

    return 0;
}