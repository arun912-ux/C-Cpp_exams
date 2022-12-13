#include <bits/stdc++.h>


using namespace std;

int main()
{
    int Ap=0,Or=0;
    int n,m,i,s,t,a,b;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int arr[n],orr[m];
    for(i=0;i<m;i++){
        cin>>arr[i];
        arr[i]=a+arr[i];
    }
    for(i=0;i<n;i++){
        cin>>orr[i];
        orr[i]=b+orr[i];
    }
    for(i=0;i<m;i++){
        if(arr[i]>=s && arr[i]<=t)
        {
          Ap++;  
        }
    }
     for(i=0;i<n;i++){
      
      if(orr[i]>=s && orr[i]<=t) 
      {
         Or++; 
      }
     }
    
    cout<<Ap<<endl;
    cout<<Or;
    return 0;
}
