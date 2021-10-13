#include<stdio.h>

int main() 
{
   int i,n,num,ar[100],count=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
    printf("even indexes:");
	for(i=0;i<n;i++)
	{
		if(ar[i]%2==0)
		{
			printf(",%d",i);
		}			
	}
	 printf("\nodd indexes:");
	for(i=0;i<n;i++)
	{
		if(ar[i]%2!=0)
		{
			printf(",%d",i);
		}			
	}
	return 0;
}

