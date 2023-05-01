#include <stdio.h>
// #3
// no return type with parametter
void sum(int a, int b)
{

    int add = a + b;
    printf("%d", add);
}
int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    return 0;
}