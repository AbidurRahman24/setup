#include <stdio.h>
// #2
// return type with no parametter
int sum ()
{
    int a, b;
    scanf("%d %d", &a ,&b);
    int add = a + b;
    return add;
}
int main(){

    int result = sum();
    printf("%d", result);
    return 0;
}