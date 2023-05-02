#include <stdio.h>

int small_to_capital(char a) {
    return a; 
}
int main(){

    char a;
    scanf("%c", &a);
    if(a >= 'a' && a <= 'z')
    {
        int ans = a-32;
        printf("%c", ans);
    }
    else{
        int ans = a+32;
        printf("%c", ans);
    }
    small_to_capital(a);
    return 0;
}