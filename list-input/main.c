#include <stdio.h>

int main() {
  char first[20];
  char second[20];
  char third[20];

  printf("Enter three words on one line: ");
  scanf("%s%s%s", first, second, third);

  printf("Your words:\n%s\n%s\n%s\n", first, second, third);

  return 0;
}
