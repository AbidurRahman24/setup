#include <stdio.h>
#include <string.h>

int main(){

    char s[1001];
    scanf("%s", s);
    int size = strlen(s), small=0,capital=0;
    for (int i = 0; i < size; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
          capital++;
        }
        else{
            small++;
        }
        
    }
    printf("%d %d", capital,small);
    
    return 0;
}