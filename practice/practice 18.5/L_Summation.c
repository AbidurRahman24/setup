#include <stdio.h>
long long int sum_array(int * a, int n, int i)
{
    if (i == n) return 0;
    long long int add = sum_array(a, n, i+1);
    return add + a[i];
}

int main(){

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    long long int sum = sum_array(a, n,0);
    printf("%lld\n", sum);

    return 0;
}