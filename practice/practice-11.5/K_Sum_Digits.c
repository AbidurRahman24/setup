#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        char c;
        scanf(" %c", &c);
        int digit = c - 48;
        sum += digit;
    }
      printf("%d\n", sum);
    
    
    
    
    return 0;
}