#include <stdio.h>
#include<string.h>

int main(){

    char s[11],t[11];
    scanf("%s %s",&s,&t);
    int lenS=strlen(s);
    int lenT = strlen(t);
    printf("%d %d\n",lenS,lenT);
    printf("%s%s\n",s,t);
    int tmp = s[0];
    s[0] = t[0];
    t[0] = tmp;
    printf("%s %s\n",s,t);
    return 0;
}