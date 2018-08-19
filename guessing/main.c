#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int number = rand() % 10;
  int guess;

  do {
    printf("Try to guess the random number! (0-9): ");
    scanf("%d", &guess);
  } while(guess != number);

  printf("You got it!\n");

  return 0;
}
