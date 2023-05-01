#include <stdio.h>
// #4
// no return type with no parametter
void sum (void)
{
    int a, b;
    scanf("%d %d", &a,&b);
    int add = a +b;
    printf("%d", add);
    
}
int main(){

    sum();
    return 0;
}