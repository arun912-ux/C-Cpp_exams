// #include<bits/stdc++.h>
// // #include<iostream>
// using namespace std;

// int PerfectSums(int input1, int input2[], int input3){

//     int cnt = 0;

//     int n = input1;

//     for(int i=0; i<n; i++){
//        for(int j=i; j<n; j++){
//           if(input2[i] + input2[j] == input3){
//             cout << input2[i] << " " << input2[j] << "\n";
//             cnt++;
//           }
//        }
//     }

//     return cnt;

// }


// int main(){

//     int n;
//     cin >> n;
//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     int k;
//     cin >> k;

//     cout << PerfectSums(n, arr, k);

    

//     return 0;
// }











// #include<bits/stdc++.h>
// // #include<iostream>
// using namespace std;

// int f(int n){
//     return n--;
// }

// int main(){

//     string s = "Arbitrarily";
//     int n = s.length();
//     for(int i=0; i<n-1; i++){
//       for(int j=i+1; j<n; j++){

//         if(s[i] > s[j]){
//             char t = s[i];
//             s[i] = s[j];
//             s[j] = t;
//         }

         
//       }  
//     }

//     cout << s;

//     return 0;
// }













// #include<bits/stdc++.h>
// // #include<iostream>
// using namespace std;

// void f(int m){
//     *m = *m*5;

// }

// int main(){

//     int n = 10;

//     do{
//         cout << n;
//         n--;

//     }while(n>1);

//     return 0;
// }







// #include<bits/stdc++.h>
// // #include<iostream>
// using namespace std;

// int main(){

//     string s = "hellohello";

//     char ch[10];
//     int n=10;
//     for(int i=0; i<n; i++){
//        ch[i]=s[i];
//     }

//     for(int i=0; i<n-1; i++){
//        for(int j=i+1; j<n; j++){
//           if(ch[i]!=ch[j]){
//             cout << ch[i];
//           }
//        }
//     }



//     return 0;
// }






#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;

int getSum(int n) {

    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int FindMeOut(int input1){

    int n = input1;

    for(int i=n+1; i<n*100; i++){

       int x;
        int t=i;
        int sum = 0;
        while (t != 0) {
            sum = sum + t % 10;
            t = t / 10;
        }
        x= sum;

        
       if(i%n==0 && x==n){
            return i;
       }
    }

    return n;
}



int main(){

    int n;
    cin >> n;

    cout << FindMeOut(n);



    return 0;
}

















































