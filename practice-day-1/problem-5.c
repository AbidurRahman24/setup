#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000 )
    {
        printf("Gucci Bag\n");
        if (tk >= 10000)
        {
           printf("Gucci Belt");

        }else{
            printf("Levis Bag");
        }
        
    }
    else{
        printf("Something");
    }
    
    return 0;
}