#include <stdio.h>

int main()
{

    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        s = s - 1; // Decrement s by 1 for the next row
        k++;       // Increment k by 1 for the next row
        printf("\n");
    }

    return 0;
}