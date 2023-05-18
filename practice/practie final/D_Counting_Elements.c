#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    int cnt = 0;
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] + 1 == ar[j])
            {
                flag = 1;
                cnt++;
                break;
            }
        }
    }
    if (flag == 0)
    {
        printf("0");
    }
    else
    {
        printf("%d", cnt);
    }
    return 0;
}