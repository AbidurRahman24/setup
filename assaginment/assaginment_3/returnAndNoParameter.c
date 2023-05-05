#include <stdio.h>

int minus()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int minus = a-b;
    return minus;
}

int main(){

    int res = minus();
    printf("%d", res);
    return 0;
}