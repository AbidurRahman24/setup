
#include <stdio.h>

int count_before_zero(int *a, int n)
{
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = 0;
    for(int i =0; i<n; i++)
    {
      if(a[i] == 0)
      {
          break;
      }
      count++;
    }
    printf("%d", count);
    return 0;
}

int main(){

    int n;
    scanf("%d", &n);
    int a[n];
    count_before_zero(a,n);
    return 0;
}