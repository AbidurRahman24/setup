#include <stdio.h>
int main(){

    float P,X;
    scanf("%f %f", &P, &X);
    float price = (100*X)/(100-P);
    printf("%0.2f", price);
    return 0;
}