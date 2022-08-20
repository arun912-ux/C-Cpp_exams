#include<stdio.h>  
#include<string.h> 

main(){

  char a[100];  
  int i,j,n,temp,count=0,c=0;  
  scanf("%s",a);  
  n=strlen(a);  
  
  for(i=0;i<n;i++)  
  {  
    if(a[0]==a[i])  
    count++;  
  }  
  if(c==n)  
  {  
    printf("-1");  
  }  
  else  
  {  
    
    for(i=0;i<n;i++)  
  {  
    for(j=i+1;j<n;j++)  
    {  
      if(a[j]<=a[i])  
      {  
        temp=a[j];  
        a[j]=a[i];  
        a[i]=temp;          
      }  
    }  
  }  
      for(i=1;i<n;i++)  
      {  
        if(a[0]!=a[i])  
        count++;  
    } printf("%d",count);  
      
    }  
}