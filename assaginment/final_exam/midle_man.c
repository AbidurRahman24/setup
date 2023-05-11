#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i] <a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    // print the sorted array
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", a[i]);
    // }
    // printf("\n");
    int middle1, middle2;
    if(n % 2 == 0)
    {
        middle1 = n/2;
        middle2 = n/2 + 1;
        printf("%d %d", a[middle1-1], a[middle2-1]);
    }
    else
    {
        middle1 = (n+1)/2;
        printf("%d", a[middle1-1]);
    }
    return 0;
}