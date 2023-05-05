#include <stdio.h>
#include <string.h>

void is_palindrome(char *a)
{
    int len = strlen(a);
    int i = 0, j = len - 1;
    int flag = 1;
    for (int i = 0; i < j; i++)
    {
        if (a[i] != a[j])
        {
            flag = 0;
        }
        j--;
    }

    if (flag == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
}
int main()
{

    char a[101];
    scanf("%s", &a);

    is_palindrome(a);

    return 0;
}