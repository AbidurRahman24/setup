#include <stdio.h>
int my_abs(int a)
{
    if(a<0)
    {
        int abs = a* (-1);
        printf("%d", abs);
    }
    else{
        printf("%d",a);
    }
}
int main(){

    int n;
    scanf("%d", &n);
    my_abs(n);
    return 0;
}