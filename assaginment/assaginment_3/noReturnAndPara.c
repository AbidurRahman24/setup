#include <stdio.h>

void printMultiples(int num, int count) {
  for (int i = 1; i <= count; i++) {
    printf("%d ", num * i);
  }
  printf("\n");
}

int main() {
    int num,count;
    scanf("%d %d", &num,&count);
    printMultiples(num,count);
  return 0;
}
