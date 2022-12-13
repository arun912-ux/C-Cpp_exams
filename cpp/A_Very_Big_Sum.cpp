/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
   
    long ar[n];
    
    for(int i=0;i<n;i++){
        cin>>ar[i];
        
    }
     long long sum=ar[0];
     for(int i=1;i<n;i++){
        sum=sum+ar[i];
        
    }
    cout<<sum;
    return 0;
}
