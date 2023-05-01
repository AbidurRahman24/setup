#include <stdio.h>
// #1
// return type with parametter
int sum (int a, int b)
{
    int add = a + b;
    return add;
}
int main(){

    int result = sum(20,30);
    printf("%d", result);
    return 0;
}