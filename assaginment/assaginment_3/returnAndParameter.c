#include <stdio.h>
int sum(int a, int b)
{
    int add= a+b;
    return add;
}

int main(){

    int a,b;
    scanf("%d %d", &a,&b);
    int res = sum(a,b);
    printf("%d", res);
    return 0;
}