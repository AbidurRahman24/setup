#include <stdio.h>
#include <string.h>

int main(){

    char s[1001];
    scanf("%s", s);
    int size = strlen(s);
    int cnt[26] = {0};
    for (int i = 0; i < size; i++)
    {
        int value = s[i] - 'a';
        cnt[value]++;
    }

    for (int i = 0; i < 26; i++)
    {
        // int value = s[i] - 'a';
        printf("%c - %d\n",i+'a',cnt[i]);
    }
    
    
    return 0;
}