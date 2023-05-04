#include <stdio.h>

int minAndMax(int a[], int n)
{

    int min = a[0], max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("%d %d", min, max);
}

int main()
{

    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    minAndMax(ar, n);
    return 0;
}
