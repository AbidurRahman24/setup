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
    int min = ar[0];
    int max = ar[0];
    int min_pos = 0;
    int max_pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
            max_pos = i;
        }
        if (ar[i] < min)
        {
            min = ar[i];
            min_pos = i;
        }
    }
    int tmp = ar[max_pos];
    ar[max_pos] = ar[min_pos];
    ar[min_pos] = tmp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}