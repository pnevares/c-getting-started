#include <stdio.h>

int add(int, int);

int main() {
  int a = 5;
  int b = 10;
  printf("%d + %d = %d", a, b, add(5, 10));

  return 0;
}

int add(a, b) {
  return a + b;
}
