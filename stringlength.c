#include<stdio.h>
#include<string.h>
char str_len(char a[]);
int main()
{
    int t;
    char a[60]="jegan is good boy";
    t=str_len(a);
    printf("%d",t);
}

char str_len(char a[])
{
   int n;
   n=strlen(a);
   return n;
}