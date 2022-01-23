#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<2)
        return false;
    for(int i=2; i<n; i++){
       if(n%i==0)
            return false;
    }
    return true;
}

int main(){

    int n, count=0;
    cin >> n;

    for(int i=0; i<=n; i++){
        string s = to_string(i);
        int z = s.length();
        int rem=0;
        int sum=0;

        int k=i;
        while(k>0){
            rem=k%10;
            k/=10;
            rem = pow(rem,z);
            sum += rem;
        }
        string st = to_string(sum);
        if(isPrime(sum) && st.length()==z){
            cout << i << " : " << sum << endl;
            count++;
        }
    }

    cout << count;


    return 0;
}

