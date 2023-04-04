#include <stdio.h>

int main()
{
   int a , b;
   scanf("%d %d", &a, &b);
   int add = a + b;
   int minus = a - b;
   int multi = a * b;
   int dvd = a / b;
   printf("%d %d %d %d ", add, minus, multi, dvd);
    
    return 0;
}