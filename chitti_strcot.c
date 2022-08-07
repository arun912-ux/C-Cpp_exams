/*#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,ln=0;
    char s1[5],s2[10];
    gets(s1);
    gets(s2);
   // puts(s1);
    //puts(s2);
    printf("string1=%s\n",s1);
    printf("string2=%s\n",s2);
    for(i=0;s1[i]!='\0';i++)
    {
        ln=ln+1;
    }
    printf("%d\n",ln);
    for(i=ln;s2[j]!='\0';i++)
    {
        s1[i]=s2[j];
        j++;
      //  printf("%c",s1[i]);
    }
    s1[i]='\0';
    // s1[i]='0';
   s1[i+1]='1';
    // s1[i+3]='1';

    puts(s1);
    //printf("%s",s1);

}*/
#include<stdio.h>
int main()
{
    int i,n,max,ar[10];
    scanf("%d",&n);
    printf("enter array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    max=ar[0];
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
        if(max<ar[i])
        max=ar[i];
        //printf("\n");
      //  printf("%d ",max);
    }
    printf("\nmaximum num=%d\n",max);

}