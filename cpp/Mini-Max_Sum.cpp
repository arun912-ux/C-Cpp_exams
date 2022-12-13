#include <bits/stdc++.h>


using namespace std;
void swap(int* x,int* y)
{
    int t = *x;
    *y = *x;
    *x = t; 
}

int main()
{
   
   
   int arr[5];
   int i,j;
for(i=0;i<5;i++)
{
    cin>>arr[i];
}

   for(i=0;i<5;i++)
   {
    for(j=i+1;j<5;j++)
    {
        if(arr[i]>arr[j]) {
            swap(&arr[i], &arr[j]);
            // int t = arr[i];
            // arr[i] = arr[j];
            // arr[j] = t;
        }
    }
    }
    int sum1=0;
    for(int i=0;i<4;i++){
        sum1=sum1+arr[i];
    }
    int sum2=0;
    for(int i=4;i>=1;i--){
        sum2=sum2+arr[i];
    }
    cout<<sum1<<" "<<sum2;
    

    return 0;
}
