#include <stdio.h>
void world()
{
    printf("world Start\n");
    printf("world end\n");

}
void hello()
{
    printf("hello Start\n");
    world();
    printf("hello end\n");

}

int main(){

    printf("Main Start\n");
    hello();
    printf("Main end\n");
    return 0;
}