
#include <stdio.h>
int main()
{
    long long int n, x;
    scanf("%lld %lld", &n, &x);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    long long int sum = 0;
    for ( int i = 0; i < n - 1; i++)
    {
        for ( int j =i+ 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                long long int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for ( int i = 0; i < x; i++)
    {
        if(a[i] <0)
        {
            break;
        }
        sum = sum + a[i];
    }
    printf("%lld", sum);
    return 0;
}