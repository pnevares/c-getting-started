#include <stdio.h>

int main() {
  char characterName[] = "Dave";
  int characterAge = 21;

  printf("Name: %s\n", characterName);
  printf("Age: %d\n", characterAge);

  characterAge = 99;

  printf("Name: %s\n", characterName);
  printf("Age: %d\n", characterAge);

  return 0;
}
