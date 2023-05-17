#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{

    float r, c;
    scanf("%f %f", &r, &c);
    int row = ceil(r / c);
    int x = r;
    long long int a[x];
    for (int i = 0; i < r; i++)
    {
        scanf("%lld", &a[i]);
    }
    // finding minimum
    int l = 0, y = row;
    long long int a2[y];
    for (int i = 0; i < row; i++)
    {
        long long int min = INT_MAX;
        for (int j = 0; j < c; j++)
        {
            if (min > a[l])
            {
                min = a[l];
            }
            l++;
        }
        a2[i] = min;
        printf("\n");
    }
    // print the min
    for (int i = 0; i < y; i++)
    {
        printf("%lld ", a2[i]);
    }
    return 0;
}