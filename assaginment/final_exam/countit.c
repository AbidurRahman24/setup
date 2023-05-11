#include <stdio.h>
#include <string.h>

int main()
{

    char s[1001];
    fgets(s, 1001, stdin);
    int size = strlen(s), capital = 0, small = 0, spaces = 0;
    for (int i = 0; i < size; i++)
    {   
        // capital count
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            capital++;
        }
        // small count
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            small++;
        }
        // spaces count
        if (s[i] == ' ')
        {
            spaces++;
        }
    }
    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", spaces);
    return 0;
}