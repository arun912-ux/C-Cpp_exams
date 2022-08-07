#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,ln;
    char s[10],s1[j];
    gets(s);
    puts(s);
   // ln=strlen(s);
   for(i=0;s[i]!='\0';i++)
   {
      ln=ln+1;
   }
   printf("%d\n",ln);
    s1[0]='\0';
    for(i=ln-1;i>=0;i--)
    {
        s1[j]=s[i];
        j++;
    }
    puts(s1);
}

