#include <stdio.h>

void evenfun(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if(i %2 ==0)
        {
            
        printf("%d ", i);
        }
    }
    
}

int main(){

    int n;
    scanf("%d", &n);
    evenfun(n);
    return 0;
}