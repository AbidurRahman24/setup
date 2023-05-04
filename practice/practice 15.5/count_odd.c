#include <stdio.h>

int count_odd(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int size;
    scanf("%d", &size);
    
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int odd_count = count_odd(arr, size);
    printf("The number of odd elements in the array is %d\n", odd_count);
    
    return 0;
}
