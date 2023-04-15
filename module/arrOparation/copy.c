#include <stdio.h>

int main(){
    // n input
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i =0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    // m input
    int m;
    scanf("%d", &m);
    int b[m];
    for(int i =0; i<m; i++)
    {
        scanf("%d", &b[i]);
    }
    // ans : sub add two array index and value
    int ans[n+m];
    for(int i =0; i<n; i++)
    {
        ans[i] = a[i];
    }
    // 2nd array add
    int i = n;
    for(int j = 0; j<m; j++)
    {
        ans[i] = b[j]; 
        i++;
    }
    for(int i=0; i<n+m; i++)
    {
        printf("%d ", ans[i]);
    }
    return 0;
}