#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        int counter = 0;
        long long int num;
        scanf("%lld", &num);
        while (num % 2 == 0)
        {
            counter++;
            num /= 2;
        }
        if (counter > result)
        {
            result = counter;
        }
    }

    printf("%d", result);
    return 0;
}