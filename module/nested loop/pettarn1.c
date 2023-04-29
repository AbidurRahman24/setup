#include <stdio.h>

int main(){

    int n, k=0;
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = n-1; j >= k; j--)
        {
            printf("*");
        }
        k++;
        printf("\n");
    }
    
    return 0;
}