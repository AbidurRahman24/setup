#include <stdio.h>

int main(){

    int n, lastDigit;
    scanf("%d", &n);
    lastDigit = n % 10;
    if(n % lastDigit == 0){
    printf("Yes\n");
    }else{
    while(n >=10)
    {
       int digit = n / 10;
        if(n % digit ==0){
            printf("Yes\n");
            break;
        }
        else{
            printf("No\n");
            break;
        }
    }
    
    }
    return 0;
}