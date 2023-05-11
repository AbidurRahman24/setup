#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    
    while (t > 0)
    {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);

        int missing_number = a - (b + c + d);
        printf("%d\n", missing_number);
        
        t--;
    }

    return 0;
}
