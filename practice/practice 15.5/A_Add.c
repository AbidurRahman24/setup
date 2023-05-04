#include <stdio.h>

void sum(int n, int m)
{
    int add = n + m;
    printf("%d", add);
}

int main(){

    int n,m;
    scanf("%d %d", &n, &m);
    sum(n,m);
    return 0;
}