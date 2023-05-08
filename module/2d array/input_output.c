#include <stdio.h>

int main(){

    int a[5][3];

    for (int i = 0; i < 5; i++) // row
    {
        for (int j = 0; j < 3; j++) //col
        {
           scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) // row
    {
        for (int j = 0; j < 3; j++) //col
        {
           printf("a[%d] ", a[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}