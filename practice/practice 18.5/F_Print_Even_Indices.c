#include <stdio.h>
void even_index(int *a, int n,int i)
{
    if(i < 0) return;
    if(i %2 ==0)
    {
        printf("%d ", a[i]);
    }
    even_index(a,n,i-1);
}

int main(){

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    even_index(a,n,n-1);
    
    return 0;
}