#include <stdio.h>
#include <string.h>

int main(){

    char s[1001];
    scanf("%s", s);
    int size = strlen(s), vow=0;
    for (int i = 0; i < size; i++)
    {
        if (s[i] == 'a'  || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
          vow++;
        }
        
    }
    printf("%d", vow);
    
    return 0;
}