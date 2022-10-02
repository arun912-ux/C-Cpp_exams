
#include<bits/stdc++.h>
using namespace std;

string hidePhoneNumber(string num){

    string result="1234567890";
    int f = 0;

    int n = num.length();
    int oc = 0;
    for(int i=0; i<n; i++){
       int x = (num[i]-'0');
       if(x%2==1){

        result[f++] =  num[i];
        
        oc++;
       }
    }

    int ec = n-oc;
    int ar[ec], j=0;

    for(int i=0; i<n; i++){
       int x = num[i]-'0';
       if(x%2==0){
            ar[j++] = x;
       }
    }


    for(int i=ec-1; i>=0; i--){

       result[f++] = ar[i]+'0';
    
    }

    return result;

}


int main(){

    int n;
    cin >> n;
    string str[n];
    for(int i=0; i<n; i++){
        cin >> str[i];
        cout <<hidePhoneNumber(str[i]) << "\n";
    }

    return 0;
}



// string decrypt(string str){

//     string res="";
//     int n = str.length();
//     for(int i=0; i<n; i++){
//        char ch = str[i];
//        if(isupper(ch) || isdigit(ch)){
//             res += ch;
//        }
//     }


//     return res;
// }

    // string str;
    // cin >> str;
    // cout << decrypt(str);