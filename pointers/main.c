#include <stdio.h>

int main() {
  int age = 30;
  int *pAge = &age;

  printf("The pointer for age is %p\n", pAge);
  printf("The value for age is %d\n", *pAge);

  return 0;
}
