#include <stdio.h>

int main() {
  int number = 5;
  printf("Number is: %d\n", number);

  number = 50;
  printf("Number is now: %d\n", number);

  const int NUMBER = 555;
  printf("Const number is: %d\n", NUMBER);

  return 0;
}
