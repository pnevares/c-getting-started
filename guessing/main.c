#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int takeGuess(int);

int main() {
  const int RANGE = 20;
  int guess = takeGuess(RANGE);
  int oldDifference = RANGE + 1;

  srand(time(NULL));
  int number = rand() % RANGE;

  while (guess != number) {
    int newDifference = abs(number - guess);
    if (newDifference > oldDifference) {
      printf("Getting colder...\n");
    } else {
      printf("Getting warmer...\n");
    }
    oldDifference = newDifference;

    guess = takeGuess(RANGE);
  }

  printf("You guessed correctly!\n");

  return 0;
}

int takeGuess(int range) {
  int guess;
  printf("Try to guess the random number! (0-%d): ", range - 1);
  scanf("%d", &guess);
  return guess;
}