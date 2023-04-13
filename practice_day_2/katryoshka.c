#include <stdio.h>

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a == 2 || b ==1 || c ==1){
        printf("1");
    }else if(a ==1 || b ==1 || c ==1){
        printf("1");
    }else{
        printf("0" );
    }
    return 0;
}