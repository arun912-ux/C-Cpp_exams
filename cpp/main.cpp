#include<stdio.h>

int main()
{
    int ar[100],i,n,count=0, ecnt=0, ocnt=0;
    scanf("%d",&n);	
    
    for(i=0;i<n;i++) 	
    {
        scanf("%d",&ar[i]);
    }

    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            ecnt++;
        }else{
            ocnt++;
        }
        
    }
    
    printf("no. of even no.s = %d\n",ecnt);
    printf("no. of odd no.s = %d",ocnt);

    return 0;
}

