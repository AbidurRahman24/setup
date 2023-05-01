#include <stdio.h>
// here are three types of scopes in C:

// 1. Global scope: Variables and functions declared outside of any function have global scope. They can be accessed from anywhere in the program, including inside functions.

// 2. Function scope: Variables declared inside a function have function scope. They can only be accessed from within that function.

// 3. Block scope: Variables declared inside a block (enclosed in curly braces) have block scope. They can only be accessed from within that block or any nested blocks.

// global
int m = 100;
int fun(){

    int a;
    printf("memory a - %p\n", &a);
    printf("memory global - %p\n", &m);
    return 0;
}
int main(){

    int b;
    printf("memory b - %p\n", &b);
    printf("memory global - %p\n", &m);
    fun();
    if (1) {
      int block_var = 30;
      printf("block_var: %d\n", block_var); // block_var is accessible here
   }
    return 0;
}