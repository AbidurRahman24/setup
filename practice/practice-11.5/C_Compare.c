#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int v=strcmp(a,b);
    if(v<0)
    {
        printf("%s\n", a);
    }
    else if(v>0)
    {
        printf("%s\n",b);
    }
    else 
    {
        printf("%s\n", a);
    }
    return 0;
}