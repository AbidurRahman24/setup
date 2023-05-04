#include <stdio.h>

int main(){

    char a[] = "hello";
    int count = 0;
    for (int i = 0; i < a[i]!='\0'; i++)
    {
       count++;
    }
    
    // int sz= sizeof(a) / sizeof(char);
    // int sz= strlen(a);
    printf("%d", count);
    return 0;
}