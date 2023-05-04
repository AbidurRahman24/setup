#include <stdio.h>

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort(int* a, int* b, int* c) {
    if (*a > *b) {
        swap(a, b);
    }
    if (*a > *c) {
        swap(a, c);
    }
    if (*b > *c) {
        swap(b, c);
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    sort(&a, &b, &c);
    int * ptr1 =&a;
    int * ptr2 =&b;
    int * ptr3 =&c;
    printf("%d %d %d", *ptr1, *ptr2, *ptr3);
    // printf("%d\n%d\n%d\n\n%d\n%d\n%d", a, b, c, *ptr1, *ptr2, *ptr3);
    return 0;
}
