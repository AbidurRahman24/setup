#include <stdio.h>

int main()
{

    int test;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int n;
        scanf("%d", &n);
        int ar[n];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &ar[i]);
        }
        int pos;
        scanf("%d", &pos);
        int flag = 0;
        for (int j = 1; j <= n; j++)
        {
            if (ar[j] == pos)
            {
                flag = 1;
                printf("Case %d: %d\n", i, j);
                break;
            }
        }
        if (flag ==0)
        {
            printf("Case %d: Not Found\n", i);
        }
    }
    return 0;
}