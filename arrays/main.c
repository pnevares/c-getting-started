#include <stdio.h>

int main() {
  int fibo[] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
  printf("%d\n", fibo[9]);
  fibo[9] = 101;
  printf("%d\n", fibo[9]);

  int lucky[6];
  lucky[0] = 4;
  lucky[1] = 8;
  lucky[2] = 15;
  lucky[3] = 16;
  lucky[4] = 23;
  lucky[5] = 42;

  printf("%d %d %d %d %d %d", lucky[0], lucky[1], lucky[2], lucky[3], lucky[4], lucky[5]);

  return 0;
}
