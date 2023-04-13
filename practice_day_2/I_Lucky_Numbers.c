#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int p = n %10;
    int q = n / 10;
    if( p%q ==0 || q%p ==0 ){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}