#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int tiger = 0, pathan = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            tiger++;
        }
        else if (a == b)
        {
            continue;
        }
        else
        {
            pathan++;
        }
    }
    if (tiger > pathan)
    {
        printf("Tiger");
    }
    else if (tiger < pathan)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }

    return 0;
}